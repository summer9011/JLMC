//
//  StepManager.m
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/11/20.
//
//

#import "StepManager.h"
#import "VHSSteps.h"
#import <CoreMotion/CoreMotion.h>
#import <QuartzCore/CADisplayLink.h>

#import "MapVC.h"

#import "UnityAppController.h"

// 计步器开始计步时间（秒）
#define ACCELERO_START_TIME 2

// 计步器开始计步步数（步）
#define ACCELERO_START_STEP 8

// 数据库存储步数采集间隔（步）
#define DB_STEP_INTERVAL 100

@interface StepManager () <AMapSearchDelegate>

@property (nonatomic, weak) id<StepManagerDelegate> delegate;

@property (nonatomic, assign) NSUInteger totalStep;

@property (nonatomic, assign) CGFloat percent;

@property (nonatomic, strong) CMMotionManager *motionManager;
@property (nonatomic, strong) NSMutableArray *allArr;
@property (nonatomic, strong) NSDate *lastDate;
@property (nonatomic, assign) NSInteger record_no;
@property (nonatomic, assign) NSInteger startStep;

@property (nonatomic, strong) NSMutableArray *stepsArr;
@property (nonatomic, strong) NSMutableArray *stepsSaveArr;

@property (nonatomic, strong) CMStepCounter *stepCounter;

@property (nonatomic, strong) AMapSearchAPI *mapSearch;
@property (nonatomic, strong) AMapReGeocode *reGeocode;

@property (nonatomic, strong) CADisplayLink *syncLink;
@property (nonatomic, assign) NSUInteger syncCounter;
@property (nonatomic, assign) NSUInteger uploadTime;

@end

@implementation StepManager

+ (StepManager *)sharedManager {
    static StepManager *manager = nil;
    
    static dispatch_once_t predicate;
    dispatch_once(&predicate, ^{
        manager = [[self alloc] init];
        [manager loadLocalStep];
    });
    
    return manager;
}

- (void)startWithDelegate:(id<StepManagerDelegate>)delegate {
    self.delegate = delegate;
    [self getStep];
    
    NSDictionary *configDic = [[NSUserDefaults standardUserDefaults] dictionaryForKey:UserDefaults_Config];
    
    self.uploadTime = [configDic[UserDefaults_Config_stepsInterval] integerValue] * 60;
    self.syncCounter = 0;
    
    self.syncLink = [CADisplayLink displayLinkWithTarget:self selector:@selector(syncStepsCount:)];
    self.syncLink.frameInterval = 60;
    [self.syncLink addToRunLoop:[NSRunLoop currentRunLoop] forMode:NSRunLoopCommonModes];
    
    if (![CMStepCounter isStepCountingAvailable] || [CMMotionActivityManager isActivityAvailable]) {
        if (!self.motionManager) {
            [self getAccelerometerMovement];
        }
        
    } else {
        if (!self.stepCounter) {
            [self getStepCounterMovement];
        }
        
    }
}

- (void)stop {
    [self.motionManager stopAccelerometerUpdates];
    self.motionManager = nil;
    self.allArr = nil;
    self.lastDate = nil;
    self.record_no = 0;
    self.startStep = 0;
    
    self.stepsArr = nil;
    self.stepsSaveArr = nil;
    
    [self.stepCounter stopStepCountingUpdates];
    self.stepCounter = nil;
}

- (void)loadLocalStep {
    self.totalStep = 0;
    self.percent = 0;
    
    NSDictionary *todayStepDic = [[NSUserDefaults standardUserDefaults] dictionaryForKey:UserDefaults_TodayStepPercent];
    
    if (todayStepDic) {
        NSDate *date = todayStepDic[UserDefaults_TodayStepPercent_Time];
        NSDate *todayDate = [NSDate date];
        
        NSString *stepDateStr = [date.description substringWithRange:NSMakeRange(0, 10)];
        NSString *todayDateStr = [todayDate.description substringWithRange:NSMakeRange(0, 10)];
        
        if ([todayDateStr isEqualToString:stepDateStr]) {
            self.totalStep = [todayStepDic[UserDefaults_TodayStepPercent_Step] integerValue];
            self.percent = [todayStepDic[UserDefaults_TodayStepPercent_Percent] floatValue];
        }
        
    }
}

- (void)getStep {
    if (self.delegate && [self.delegate respondsToSelector:@selector(didUpdateStep:)]) {
        [self.delegate didUpdateStep:self.percent];
    }
}

- (void)saveStep {
    NSDictionary *stepDic = @{
                              UserDefaults_TodayStepPercent_Time: [NSDate date],
                              UserDefaults_TodayStepPercent_Step: @(self.totalStep),
                              UserDefaults_TodayStepPercent_Percent: @(self.percent)
                              };
    
    [[NSUserDefaults standardUserDefaults] setObject:stepDic forKey:UserDefaults_TodayStepPercent];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)refreshStep:(NSUInteger)step {
    self.totalStep = 0;
    [self updateStep:step];
}

- (void)updateStep:(NSUInteger)step {
    NSDictionary *configDic = [[NSUserDefaults standardUserDefaults] dictionaryForKey:UserDefaults_Config];
    NSUInteger todayTopSteps = [configDic[UserDefaults_Config_dailyTopSteps] integerValue];
                                           
    self.totalStep += step;
    self.percent = self.totalStep/(CGFloat)todayTopSteps;
    
    NSLog(@"今日步数 totalStep %ld, percent %f", self.totalStep, self.percent);
    
    [self getStep];
}

- (void)syncStepsCount:(CADisplayLink *)link {
    self.syncCounter ++;
    
    if (self.syncCounter >= self.uploadTime) {
        self.syncCounter = 0;
        
        if ([GetAppController().rootViewController isKindOfClass:[MapVC class]]) {
            MapVC *mapVC = (MapVC *)GetAppController().rootViewController;
            if (mapVC.userLocation) {
                if (self.reGeocode == nil) {
                    if (self.mapSearch == nil) {
                        self.mapSearch = [[AMapSearchAPI alloc] init];
                        self.mapSearch.delegate = self;
                    }
                    
                    AMapReGeocodeSearchRequest *regeo = [[AMapReGeocodeSearchRequest alloc] init];
                    regeo.requireExtension = YES;
                    regeo.location = [AMapGeoPoint locationWithLatitude:mapVC.userLocation.coordinate.latitude longitude:mapVC.userLocation.coordinate.longitude];
                    
                    [self.mapSearch AMapReGoecodeSearch:regeo];
                } else {
                    [User submitExtraUserInfoWithUserId:GetAppController().loginUser.userId
                                              walkSteps:self.totalStep
                                                   city:self.reGeocode.addressComponent.city
                                              longitude:[NSString stringWithFormat:@"%f", mapVC.userLocation.coordinate.longitude]
                                               latitude:[NSString stringWithFormat:@"%f", mapVC.userLocation.coordinate.latitude]
                                          completeBlock:nil];
                }
                
            }
        }
    }
}

#pragma mark - AMapSearchDelegate

- (void)onReGeocodeSearchDone:(AMapReGeocodeSearchRequest *)request response:(AMapReGeocodeSearchResponse *)response {
    [User submitExtraUserInfoWithUserId:GetAppController().loginUser.userId
                              walkSteps:self.totalStep
                                   city:response.regeocode.addressComponent.city
                              longitude:[NSString stringWithFormat:@"%f", request.location.longitude]
                               latitude:[NSString stringWithFormat:@"%f", request.location.latitude]
                          completeBlock:nil];
}

#pragma mark - 步数统计方案

- (void)getAccelerometerMovement {
    self.motionManager = [[CMMotionManager alloc] init];
    
    if (self.motionManager.accelerometerAvailable) {
        self.motionManager.accelerometerUpdateInterval = 1.0/40;
        
        //如果不支持陀螺仪,需要用加速传感器来采集数据
        if (!self.motionManager.isAccelerometerActive) {//  isAccelerometerAvailable方法用来查看加速度器的状态：是否Active（启动）。
            
            // 加速度传感器采集的原始数组
            if (self.allArr == nil) {
                self.allArr = [[NSMutableArray alloc] init];
            } else {
                [self.allArr removeAllObjects];
            }
            
            /*
             1.push方式
             这种方式，是实时获取到Accelerometer的数据，并且用相应的队列来显示。即主动获取加速计的数据。
             */
            NSOperationQueue *queue = [[NSOperationQueue alloc] init];
            
            [self.motionManager startAccelerometerUpdatesToQueue:queue withHandler:^(CMAccelerometerData *accelerometerData, NSError *error){
                
                if (!self.motionManager.isAccelerometerActive) {
                    [self stop];
                    
                    if (self.delegate && [self.delegate respondsToSelector:@selector(didFailedLoadStep:)]) {
                        [self.delegate didFailedLoadStep:@"加速度传感器不可用"];
                    }
                    
                    return;
                }
                
                //三个方向加速度值
                double x = accelerometerData.acceleration.x;
                double y = accelerometerData.acceleration.y;
                double z = accelerometerData.acceleration.z;
                //g是一个double值 ,根据它的大小来判断是否计为1步.
                double g = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2)) - 1;
                
                //将信息保存在步数模型中
                VHSSteps *stepsAll = [[VHSSteps alloc] init];
                
                stepsAll.date = [NSDate date];
                
                //日期
                NSDateFormatter *df = [[NSDateFormatter alloc] init] ;
                df.dateFormat  = @"yyyy-MM-dd HH:mm:ss";
                NSString *strYmd = [df stringFromDate:stepsAll.date];
                df = nil;
                stepsAll.record_time =strYmd;
                
                stepsAll.g = g;
                // 加速度传感器采集的原始数组
                [self.allArr addObject:stepsAll];
                
                // 每采集10条，大约1.2秒的数据时，进行分析
                if (self.allArr.count == 10) {
                    
                    // 步数缓存数组
                    NSMutableArray *arrBuffer = [[NSMutableArray alloc] init];
                    
                    arrBuffer = [self.allArr copy];
                    [self.allArr removeAllObjects];
                    
                    // 踩点数组
                    NSMutableArray *arrCaiDian = [[NSMutableArray alloc] init];
                    
                    //遍历步数缓存数组
                    for (int i = 1; i < arrBuffer.count - 2; i++) {
                        //如果数组个数大于3,继续,否则跳出循环,用连续的三个点,要判断其振幅是否一样,如果一样,然并卵
                        if (![arrBuffer objectAtIndex:i-1] || ![arrBuffer objectAtIndex:i] || ![arrBuffer objectAtIndex:i+1])
                        {
                            continue;
                        }
                        VHSSteps *bufferPrevious = (VHSSteps *)[arrBuffer objectAtIndex:i-1];
                        VHSSteps *bufferCurrent = (VHSSteps *)[arrBuffer objectAtIndex:i];
                        VHSSteps *bufferNext = (VHSSteps *)[arrBuffer objectAtIndex:i+1];
                        //控制震动幅度,,,,,,根据震动幅度让其加入踩点数组,
                        if (bufferCurrent.g < -0.12 && bufferCurrent.g < bufferPrevious.g && bufferCurrent.g < bufferNext.g) {
                            [arrCaiDian addObject:bufferCurrent];
                        }
                    }
                    
                    //如果没有步数数组,初始化
                    if (nil == self.stepsArr) {
                        self.stepsArr = [[NSMutableArray alloc] init];
                        self.stepsSaveArr = [[NSMutableArray alloc] init];
                    }
                    
                    // 踩点过滤
                    for (int j = 0; j < arrCaiDian.count; j++) {
                        VHSSteps *caidianCurrent = (VHSSteps *)[arrCaiDian objectAtIndex:j];
                        
                        //如果之前的步数为0,则重新开始记录
                        if (self.stepsArr.count == 0) {
                            //上次记录的时间
                            self.lastDate = caidianCurrent.date;
                            
                            // 重新开始时，纪录No初始化
                            self.record_no = 1;
                            
                            caidianCurrent.record_no = self.record_no;
                            caidianCurrent.step = 0;
                            
                            [self.stepsArr addObject:caidianCurrent];
                            [self.stepsSaveArr addObject:caidianCurrent];
                            
                        } else {
                            int intervalCaidian = [caidianCurrent.date timeIntervalSinceDate:self.lastDate] * 1000;
                            
                            // 步行最大每秒2.5步，跑步最大每秒3.5步，超过此范围，数据有可能丢失
                            int min = 259;
                            if (intervalCaidian >= min) {
                                
                                if (self.motionManager.isAccelerometerActive) {
                                    
                                    //存一下时间
                                    self.lastDate = caidianCurrent.date;
                                    
                                    if (intervalCaidian >= ACCELERO_START_TIME * 1000) {// 计步器开始计步时间（秒)
                                        self.startStep = 0;
                                    }
                                    
                                    if (self.startStep < ACCELERO_START_STEP) {//计步器开始计步步数 (步)
                                        
                                        self.startStep ++;
                                        break;
                                    }
                                    else if (self.startStep == ACCELERO_START_STEP) {
                                        self.startStep ++;
                                        // 计步器开始步数
                                        // 运动步数（总计）
                                        [self updateStep:self.startStep];
                                    }
                                    else {
                                        [self updateStep:1];
                                    }
                                    
                                    int intervalMillSecond = [caidianCurrent.date timeIntervalSinceDate:[[self.stepsArr lastObject] date]] * 1000;
                                    if (intervalMillSecond >= 1000) {
                                        self.record_no ++;
                                        
                                        caidianCurrent.record_no = self.record_no;
                                        
                                        caidianCurrent.step = self.totalStep;
                                        [self.stepsArr addObject:caidianCurrent];
                                    }
                                    
                                }
                            }
                            
                        }
                    }
                }
            }];
            
        } else {
            [self stop];
            
            if (self.delegate && [self.delegate respondsToSelector:@selector(didFailedLoadStep:)]) {
                [self.delegate didFailedLoadStep:@"加速度传感器不可用"];
            }
        }
        
    } else {
        [self stop];
        
        if (self.delegate && [self.delegate respondsToSelector:@selector(didFailedLoadStep:)]) {
            [self.delegate didFailedLoadStep:@"加速度传感器不可用"];
        }
        
    }
}

- (void)getStepCounterMovement {
    __weak StepManager *weakSelf = self;
    
    if ([CMStepCounter isStepCountingAvailable]) {
        self.stepCounter = [[CMStepCounter alloc] init];
        
        [self.stepCounter startStepCountingUpdatesToQueue:[[NSOperationQueue alloc] init] updateOn:1 withHandler:^(NSInteger numberOfSteps, NSDate * _Nonnull timestamp, NSError * _Nullable error) {
            
            dispatch_async(dispatch_get_main_queue(), ^{
                if (error) {
                    [weakSelf stop];
                    
                    if (weakSelf.delegate && [weakSelf.delegate respondsToSelector:@selector(didFailedLoadStep:)]) {
                        [weakSelf.delegate didFailedLoadStep:[error localizedDescription]];
                    }
                    
                } else {
                    [weakSelf updateStep:numberOfSteps];
                }
            });
            
        }];
        
    } else {
        [self stop];
    }
    
}

@end
