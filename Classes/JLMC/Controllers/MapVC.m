//
//  MapVC.m
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/11/6.
//
//

#import "MapVC.h"

#import <AMapFoundationKit/AMapFoundationKit.h>
#import <MAMapKit/MAMapKit.h>

#import "UnityAppController.h"

#import "SettingVC.h"
#import "NearbyVC.h"
#import "ConversationListVC.h"

#import "BaseTabbarVC.h"
#import "ExchangeMarketVC.h"
#import "ExchangeMyStartedVC.h"
#import "ExchangeMyJoinedVC.h"

#import "MyBackpackVC.h"
#import "GameShopVC.h"
#import "MyFriendVC.h"
#import "RankListVC.h"

#import "MenuView.h"

#import "SupplyDetailVC.h"

@interface MapVC () <MenuViewDelegate, MAMapViewDelegate>

@property (nonatomic, weak) UIButton        *menuBtn;

@property (nonatomic, weak) UIButton        *nearbyBtn;
@property (nonatomic, weak) UIView          *redPoint;

@property (nonatomic, weak) UILabel         *movementLabel;
@property (nonatomic, weak) UIView          *movementView;
@property (nonatomic, weak) CAGradientLayer *progressLayer;

@property (nonatomic, weak) UIImageView     *timeCountView;
@property (nonatomic, weak) CAShapeLayer    *circleLayer;
@property (nonatomic, weak) UILabel         *timeCountLabel;

@property (nonatomic, strong) CADisplayLink *displayLink;
@property (nonatomic, assign) NSUInteger reLoadCount;

@property (nonatomic, weak) MAMapView       *mapView;
@property (nonatomic, strong) MAAnnotationView *userLocationAnnotationView;

@end

@implementation MapVC

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    
    [GetAppController() addObserver:self forKeyPath:@"haveNearbyPlayer" options:NSKeyValueObservingOptionNew | NSKeyValueObservingOptionOld context:nil];
    [GetAppController() addObserver:self forKeyPath:@"movementProgress" options:NSKeyValueObservingOptionNew | NSKeyValueObservingOptionOld context:nil];
    
    [self addMapView];
    [self addMovement];
    [self addTimeCount];
    [self addMenu];
    [self addNearby];
    
    [self reloadIcons];
    
//    [self loadIcons];
    
    //默认为隐藏
    self.redPoint.hidden = YES;
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    
    if (self.mapView) {
        self.mapView.delegate = self;
    }
}

- (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];
    
    self.mapView.showsUserLocation = YES;
    self.mapView.userTrackingMode = MAUserTrackingModeFollow;
    
    [self.mapView setZoomLevel:16.1 animated:YES];
}

- (void)viewWillDisappear:(BOOL)animated {
    [super viewWillDisappear:animated];
    
    if (self.mapView) {
        self.mapView.delegate = nil;
    }
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)dealloc {
    self.mapView = nil;
    
    [GetAppController() removeObserver:self forKeyPath:@"haveNearbyPlayer"];
    [GetAppController() removeObserver:self forKeyPath:@"movementProgress"];
}

- (void)addMapView {
    self.view.frame = [UIScreen mainScreen].bounds;
    
    MAMapView *mapView = [[MAMapView alloc] initWithFrame:self.view.bounds];
    mapView.delegate = self;
    mapView.showsCompass = NO;
    mapView.showsScale = NO;
    mapView.rotateCameraEnabled = NO;
    mapView.allowsBackgroundLocationUpdates = YES;
    mapView.customizeUserLocationAccuracyCircleRepresentation = YES;
    
    [self.view addSubview:mapView];
    
    self.mapView = mapView;
}

- (void)addMovement {
    GetAppController().movementProgress = 0.f;
    
    CGRect screenRect = [UIScreen mainScreen].bounds;
    
    UILabel *movementLabel = [[UILabel alloc] initWithFrame:CGRectMake(10, 30, 62, 20)];
    movementLabel.font = [UIFont systemFontOfSize:15];
    movementLabel.textColor = RGB(30, 30, 30);
    movementLabel.text = @"运动进度";
    
    [self.view addSubview:movementLabel];
    
    self.movementLabel = movementLabel;
    
    //进度
    CGFloat movementViewOriginX = movementLabel.frame.origin.x + CGRectGetWidth(movementLabel.frame) + 5;
    
    UIView *movementView = [[UIView alloc] initWithFrame:CGRectMake(movementViewOriginX, movementLabel.frame.origin.y + 5, CGRectGetWidth(screenRect) - movementViewOriginX - movementLabel.frame.origin.x, 10)];
    movementView.backgroundColor = [UIColor colorWithWhite:0.f alpha:0.2];
    movementView.layer.masksToBounds = YES;
    movementView.layer.cornerRadius = 5;
    
    [self.view addSubview:movementView];
    
    self.movementView = movementView;
    
    //渐变进度条
    CAGradientLayer *progressLayer = [[CAGradientLayer alloc] init];
    progressLayer.frame = CGRectMake(0, 0, 0, CGRectGetHeight(movementView.frame));
    progressLayer.startPoint = CGPointMake(0, 1);
    progressLayer.endPoint = CGPointMake(1, 1);
    progressLayer.colors = @[
                             (__bridge id)RGB(63, 112, 238).CGColor,
                             (__bridge id)RGB(144, 134, 238).CGColor,
                             ];
    [movementView.layer addSublayer:progressLayer];
    
    self.progressLayer = progressLayer;
}

- (void)addTimeCount {
    CGFloat perSize = 70;
    
    UIImageView *timeCountView = [[UIImageView alloc] initWithFrame:CGRectMake(CGRectGetMaxX(self.movementView.frame) - perSize, CGRectGetMaxY(self.movementLabel.frame) + 10, perSize, perSize)];
    timeCountView.image = [UIImage imageNamed:@"SYTime"];
    
    [self.view addSubview:timeCountView];
    
    self.timeCountView = timeCountView;
    
    CAShapeLayer *circleLayer = [CAShapeLayer layer];
    circleLayer.frame = CGRectMake(8, 8, CGRectGetWidth(timeCountView.frame) - 16, CGRectGetHeight(timeCountView.frame) - 16);
    
    UIBezierPath *path = [UIBezierPath bezierPathWithArcCenter:CGPointMake(CGRectGetWidth(circleLayer.frame)/2.f, CGRectGetHeight(circleLayer.frame)/2.f) radius:CGRectGetWidth(circleLayer.frame)/2.f startAngle:3 * M_PI_2 endAngle:-1 * M_PI_2 clockwise:NO];
    circleLayer.path = path.CGPath;
    circleLayer.lineWidth = 4.0f;
    
    circleLayer.fillColor = [UIColor clearColor].CGColor;
    circleLayer.strokeColor = RGB(252, 113, 72).CGColor;
    
    circleLayer.strokeStart = 0.f;
    circleLayer.strokeEnd = 1.f;
    
    [timeCountView.layer addSublayer:circleLayer];
    
    self.circleLayer = circleLayer;
    
    UIView *timeView = [[UIView alloc] initWithFrame:CGRectMake(CGRectGetMinX(timeCountView.frame) + 5, CGRectGetMaxY(timeCountView.frame) - 4, CGRectGetWidth(timeCountView.frame) - 10, 26)];
    timeView.backgroundColor = [UIColor clearColor];
    
    [self.view addSubview:timeView];
    
    UIImageView *tmpImageView = [[UIImageView alloc] initWithFrame:timeView.bounds];
    tmpImageView.image = [UIImage imageNamed:@"SYTimeB"];
    
    [timeView addSubview:tmpImageView];
    
    UILabel *timeCountLabel = [[UILabel alloc] initWithFrame:timeView.bounds];
    timeCountLabel.textAlignment = NSTextAlignmentCenter;
    timeCountLabel.textColor = RGB(51, 51, 51);
    timeCountLabel.font = [UIFont systemFontOfSize:14];
    
    [timeView addSubview:timeCountLabel];
    
    self.timeCountLabel = timeCountLabel;
    
    self.timeCountLabel.text = @"00:00";
}

- (void)addMenu {
    CGRect screenRect = [UIScreen mainScreen].bounds;
    CGFloat perSize = 100;
    
    UIButton *menuBtn = [UIButton buttonWithType:UIButtonTypeCustom];
    menuBtn.frame = CGRectMake((CGRectGetWidth(screenRect) - perSize)/2.f, CGRectGetHeight(screenRect) - perSize, perSize, perSize);
    menuBtn.adjustsImageWhenHighlighted = NO;
    menuBtn.adjustsImageWhenDisabled = NO;
    menuBtn.imageView.contentMode = UIViewContentModeScaleAspectFit;
    [menuBtn setImage:[UIImage imageNamed:@"SyMenuIcon"] forState:UIControlStateNormal];
    [menuBtn addTarget:self action:@selector(showMenuList) forControlEvents:UIControlEventTouchUpInside];
    
    [self.view addSubview:menuBtn];
    
    self.menuBtn = menuBtn;
}

- (void)addNearby {
    GetAppController().haveNearbyPlayer = NO;
    
    CGRect screenRect = [UIScreen mainScreen].bounds;
    CGFloat perSize = 70;
    
    UIButton *nearbyBtn = [UIButton buttonWithType:UIButtonTypeCustom];
    nearbyBtn.frame = CGRectMake(CGRectGetWidth(screenRect) - perSize - 10, CGRectGetHeight(screenRect) - perSize - 5, perSize, perSize);
    nearbyBtn.adjustsImageWhenHighlighted = NO;
    nearbyBtn.adjustsImageWhenDisabled = NO;
    nearbyBtn.imageView.contentMode = UIViewContentModeScaleAspectFit;
    [nearbyBtn setImage:[UIImage imageNamed:@"StNearbyIcon"] forState:UIControlStateNormal];
    [nearbyBtn addTarget:self action:@selector(showNearby) forControlEvents:UIControlEventTouchUpInside];
    
    [self.view addSubview:nearbyBtn];
    
    self.nearbyBtn = nearbyBtn;
    
    //增加红色圆点
    UIView *redPoint = [[UIView alloc] initWithFrame:CGRectMake(CGRectGetWidth(nearbyBtn.frame) - 27, 12, 12, 12)];
    redPoint.backgroundColor = RGB(247, 76, 49);
    redPoint.layer.masksToBounds = YES;
    redPoint.layer.cornerRadius = 6;
    [nearbyBtn addSubview:redPoint];
    
    self.redPoint = redPoint;
}

- (void)loadIcons {
    __weak MapVC *weakSelf = self;
    
    [Config getMainPageIconListWithCompleteBlock:^(BOOL success, NSString *errStr) {
        if (success) {
            [weakSelf reloadIcons];
        }
    }];
}

- (void)reloadIcons {
    NSArray *iconArr = [Config getNewestLocalCacheIcons];
    
    if (iconArr != nil) {
        [self.menuBtn sd_setImageWithURL:[NSURL URLWithString:iconArr[0][@"icon"]] forState:UIControlStateNormal];
        [self.nearbyBtn sd_setImageWithURL:[NSURL URLWithString:iconArr[1][@"icon"]] forState:UIControlStateNormal];
        
        [[MenuView sharedMenuView] reloadIcons:[iconArr subarrayWithRange:NSMakeRange(2, iconArr.count - 2)]];
    }
}

- (void)showMenuList {
    [[MenuView sharedMenuView] showIn:self.view];
    [MenuView sharedMenuView].menuDele = self;
}

- (void)showNearby {
    NearbyVC *nearbyVC = [[NearbyVC alloc] initWithNibName:@"NearbyVC" bundle:nil];
    BaseNaviVC *naviVC = [[BaseNaviVC alloc] initWithRootViewController:nearbyVC];
    
    [self presentViewController:naviVC animated:YES completion:nil];
}

- (void)loadData {
    
}

#pragma mark - MenuViewDelegate

- (void)didSelectedMenuItem:(MenuItemType)type {
    switch (type) {
        case MenuItemSetting: {
            SettingVC *settingVC = [[SettingVC alloc] initWithNibName:@"SettingVC" bundle:nil];
            BaseNaviVC *naviVC = [[BaseNaviVC alloc] initWithRootViewController:settingVC];
            
            [self presentViewController:naviVC animated:YES completion:nil];
            
        }
            break;
        case MenuItemOuyu: {
            NSLog(@"偶遇");
        }
            break;
        case MenuItemMessage: {
            ConversationListVC *conversationListVC = [[ConversationListVC alloc] initWithNibName:@"ConversationListVC" bundle:nil];
            BaseNaviVC *naviVC = [[BaseNaviVC alloc] initWithRootViewController:conversationListVC];
            
            [self presentViewController:naviVC animated:YES completion:nil];
            
        }
            break;
        case MenuItemMarket: {
            ExchangeMarketVC *marketVC = [[ExchangeMarketVC alloc] initWithNibName:@"ExchangeMarketVC" bundle:nil];
            marketVC.tabBarItem.title =@"市场";
            BaseNaviVC *marketNaviVC = [[BaseNaviVC alloc] initWithRootViewController:marketVC];
            
            ExchangeMyStartedVC *myStartedVC = [[ExchangeMyStartedVC alloc] initWithNibName:@"ExchangeMyStartedVC" bundle:nil];
            myStartedVC.tabBarItem.title = @"我发起的";
            BaseNaviVC *myStartedNaviVC = [[BaseNaviVC alloc] initWithRootViewController:myStartedVC];
            
            ExchangeMyJoinedVC *myJoinedVC = [[ExchangeMyJoinedVC alloc] initWithNibName:@"ExchangeMyJoinedVC" bundle:nil];
            myJoinedVC.tabBarItem.title = @"我参与的";
            BaseNaviVC *myJoinedNaviVC = [[BaseNaviVC alloc] initWithRootViewController:myJoinedVC];
            
            NSArray *viewControllers = @[marketNaviVC, myStartedNaviVC, myJoinedNaviVC];
            
            BaseTabbarVC *tabbarVC = [[BaseTabbarVC alloc] init];
            [tabbarVC setViewControllers:viewControllers animated:YES];
            
            [self presentViewController:tabbarVC animated:YES completion:nil];
            
        }
            break;
        case MenuItemSpirit: {
            UnityPause(NO);
            
            UnitySendMessage(UnityObj, UnityMethod, UnityMySpirit);
            
            BaseNaviVC *naviVC = [[BaseNaviVC alloc] initWithRootViewController:GetAppController().tmpUnityVC];
            [self presentViewController:naviVC animated:YES completion:nil];
        }
            break;
        case MenuItemMyBag: {
            MyBackpackVC *myBackpackVC = [[MyBackpackVC alloc] initWithNibName:@"MyBackpackVC" bundle:nil];
            BaseNaviVC *naviVC = [[BaseNaviVC alloc] initWithRootViewController:myBackpackVC];
            
            [self presentViewController:naviVC animated:YES completion:nil];
            
        }
            break;
        case MenuItemGameShop: {
            GameShopVC *gameShopVC = [[GameShopVC alloc] initWithNibName:@"GameShopVC" bundle:nil];
            BaseNaviVC *naviVC = [[BaseNaviVC alloc] initWithRootViewController:gameShopVC];
            
            [self presentViewController:naviVC animated:YES completion:nil];
            
        }
            break;
        case MenuItemMyFriend: {
            MyFriendVC *myFriendVC = [[MyFriendVC alloc] initWithNibName:@"MyFriendVC" bundle:nil];
            BaseNaviVC *naviVC = [[BaseNaviVC alloc] initWithRootViewController:myFriendVC];
            
            [self presentViewController:naviVC animated:YES completion:nil];
            
        }
            break;
        case MenuItemGameCircle: {
            NSLog(@"游戏圈");
        }
            break;
        case MenuItemRank: {
            RankListVC *rankVC = [[RankListVC alloc] initWithNibName:@"RankListVC" bundle:nil];
            BaseNaviVC *naviVC = [[BaseNaviVC alloc] initWithRootViewController:rankVC];
            
            [self presentViewController:naviVC animated:YES completion:nil];
            
        }
            break;
        case MenuItemClose:
        default:
            break;
    }
}

#pragma mark - MAMapViewDelegate

- (MAOverlayRenderer *)mapView:(MAMapView *)mapView rendererForOverlay:(id <MAOverlay>)overlay {
    /* 自定义定位精度对应的MACircleView. */
    if (overlay == mapView.userLocationAccuracyCircle) {
        MACircleRenderer *accuracyCircleRenderer = [[MACircleRenderer alloc] initWithCircle:overlay];
        
        accuracyCircleRenderer.lineWidth    = 2;
        accuracyCircleRenderer.strokeColor  = [UIColor clearColor];
        accuracyCircleRenderer.fillColor    = [UIColor clearColor];
        
        return accuracyCircleRenderer;
    }
    
    return nil;
}

- (MAAnnotationView *)mapView:(MAMapView *)mapView viewForAnnotation:(id<MAAnnotation>)annotation {
    /* 自定义userLocation对应的annotationView. */
    if ([annotation isKindOfClass:[MAUserLocation class]]) {
        static NSString *userLocationStyleReuseIndetifier = @"userLocationStyleReuseIndetifier";
        MAAnnotationView *annotationView = [mapView dequeueReusableAnnotationViewWithIdentifier:userLocationStyleReuseIndetifier];
        if (annotationView == nil) {
            annotationView = [[MAAnnotationView alloc] initWithAnnotation:annotation reuseIdentifier:userLocationStyleReuseIndetifier];
        }
        
        annotationView.image = [UIImage imageNamed:@"UserAnno"];
        annotationView.centerOffset = CGPointMake(0, -44);
        
        self.userLocationAnnotationView = annotationView;
        
        return annotationView;
    }
    
    return nil;
}

- (void)mapView:(MAMapView *)mapView didUpdateUserLocation:(MAUserLocation *)userLocation updatingLocation:(BOOL)updatingLocation {
    NSLog(@"userLocation %@", userLocation);
    
    if (updatingLocation && self.userLocationAnnotationView != nil) {
        [self.mapView setCenterCoordinate:userLocation.location.coordinate animated:YES];
    }
}

- (void)mapView:(MAMapView *)mapView didSelectAnnotationView:(MAAnnotationView *)view {
    NSLog(@"选中 AnnoView %@", view);
}

#pragma mark - KVO

- (void)observeValueForKeyPath:(NSString *)keyPath ofObject:(id)object change:(NSDictionary<NSKeyValueChangeKey,id> *)change context:(void *)context {
    
    if ([keyPath isEqualToString:@"haveNearbyPlayer"]) {
        self.redPoint.hidden = !GetAppController().haveNearbyPlayer;
        
    } else if ([keyPath isEqualToString:@"movementProgress"]) {
        CGFloat layerWidth = CGRectGetWidth(self.movementView.frame) * GetAppController().movementProgress;
        self.progressLayer.bounds = CGRectMake(self.progressLayer.bounds.origin.x, self.progressLayer.bounds.origin.y, layerWidth, self.progressLayer.bounds.size.height);
        
    }
    
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
