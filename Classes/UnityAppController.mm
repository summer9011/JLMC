#import "UnityAppController.h"
#import "UnityAppController+ViewHandling.h"
#import "UnityAppController+Rendering.h"
#import "iPhone_Sensors.h"

#import <CoreGraphics/CoreGraphics.h>
#import <QuartzCore/QuartzCore.h>
#import <QuartzCore/CADisplayLink.h>
#import <Availability.h>

#import <OpenGLES/EAGL.h>
#import <OpenGLES/EAGLDrawable.h>
#import <OpenGLES/ES2/gl.h>
#import <OpenGLES/ES2/glext.h>

#import "MapVC.h"
#import "LoginVC.h"
#import "MyBackpackVC.h"
#import "GameShopVC.h"

#include <mach/mach_time.h>

// MSAA_DEFAULT_SAMPLE_COUNT was moved to iPhone_GlesSupport.h
// ENABLE_INTERNAL_PROFILER and related defines were moved to iPhone_Profiler.h
// kFPS define for removed: you can use Application.targetFrameRate (30 fps by default)
// DisplayLink is the only run loop mode now - all others were removed

#include "CrashReporter.h"

#include "UI/OrientationSupport.h"
#include "UI/UnityView.h"
#include "UI/Keyboard.h"
#include "UI/SplashScreen.h"
#include "Unity/InternalProfiler.h"
#include "Unity/DisplayManager.h"
#include "Unity/EAGLContextHelper.h"
#include "Unity/GlesHelper.h"
#include "PluginBase/AppDelegateListener.h"

bool	_ios42orNewer			= false;
bool	_ios43orNewer			= false;
bool	_ios50orNewer			= false;
bool	_ios60orNewer			= false;
bool	_ios70orNewer			= false;
bool	_ios80orNewer			= false;
bool	_ios81orNewer			= false;
bool	_ios82orNewer			= false;
bool 	_ios90orNewer			= false;
bool 	_ios91orNewer			= false;

// was unity rendering already inited: we should not touch rendering while this is false
bool	_renderingInited		= false;
// was unity inited: we should not touch unity api while this is false
bool	_unityAppReady			= false;
// see if there's a need to do internal player pause/resume handling
//
// Typically the trampoline code should manage this internally, but
// there are use cases, videoplayer, plugin code, etc where the player
// is paused before the internal handling comes relevant. Avoid
// overriding externally managed player pause/resume handling by
// caching the state
bool	_wasPausedExternal		= false;
// should we skip present on next draw: used in corner cases (like rotation) to fill both draw-buffers with some content
bool	_skipPresent			= false;
// was app "resigned active": some operations do not make sense while app is in background
bool	_didResignActive		= false;

// was startUnity scheduled: used to make startup robust in case of locking device
static bool	_startUnityScheduled	= false;

bool	_supportsMSAA			= false;


@implementation UnityAppController

@synthesize unityView				= _unityView;
@synthesize unityDisplayLink		= _unityDisplayLink;

@synthesize rootView				= _rootView;
@synthesize rootViewController		= _rootController;
@synthesize mainDisplay				= _mainDisplay;
@synthesize renderDelegate			= _renderDelegate;
@synthesize quitHandler				= _quitHandler;

#if !UNITY_TVOS
@synthesize interfaceOrientation	= _curOrientation;
#endif

- (id)init
{
    if( (self = [super init]) )
    {
        // due to clang issues with generating warning for overriding deprecated methods
        // we will simply assert if deprecated methods are present
        // NB: methods table is initied at load (before this call), so it is ok to check for override
        NSAssert(![self respondsToSelector:@selector(createUnityViewImpl)],
                 @"createUnityViewImpl is deprecated and will not be called. Override createUnityView"
                 );
        NSAssert(![self respondsToSelector:@selector(createViewHierarchyImpl)],
                 @"createViewHierarchyImpl is deprecated and will not be called. Override willStartWithViewController"
                 );
        NSAssert(![self respondsToSelector:@selector(createViewHierarchy)],
                 @"createViewHierarchy is deprecated and will not be implemented. Use createUI"
                 );
    }
    return self;
}


- (void)setWindow:(id)object		{}
- (UIWindow*)window					{ return _window; }


- (void)shouldAttachRenderDelegate	{}
- (void)preStartUnity				{}


- (void)startUnity:(UIApplication*)application
{
    
    NSLog(@"startUnity:");
    
    NSAssert(_unityAppReady == NO, @"[UnityAppController startUnity:] called after Unity has been initialized");
    
    UnityInitApplicationGraphics();
    
    // we make sure that first level gets correct display list and orientation
    [[DisplayManager Instance] updateDisplayListInUnity];
    
    UnityLoadApplication();
    Profiler_InitProfiler();
    
    [self showGameUI];
    [self createDisplayLink];
    
    UnitySetPlayerFocus(1);
}

extern "C" void UnityRequestQuit()
{
    _didResignActive = true;
    if (GetAppController().quitHandler)
        GetAppController().quitHandler();
    else
        exit(0);
}

#if !UNITY_TVOS
- (NSUInteger)application:(UIApplication*)application supportedInterfaceOrientationsForWindow:(UIWindow*)window
{
    // UIInterfaceOrientationMaskAll
    // it is the safest way of doing it:
    // - GameCenter and some other services might have portrait-only variant
    //     and will throw exception if portrait is not supported here
    // - When you change allowed orientations if you end up forbidding current one
    //     exception will be thrown
    // Anyway this is intersected with values provided from UIViewController, so we are good
    return   (1 << UIInterfaceOrientationPortrait) | (1 << UIInterfaceOrientationPortraitUpsideDown)
    | (1 << UIInterfaceOrientationLandscapeRight) | (1 << UIInterfaceOrientationLandscapeLeft);
}
#endif

#if !UNITY_TVOS
- (void)application:(UIApplication*)application didReceiveLocalNotification:(UILocalNotification*)notification
{
    AppController_SendNotificationWithArg(kUnityDidReceiveLocalNotification, notification);
    UnitySendLocalNotification(notification);
}
#endif

- (void)application:(UIApplication*)application didReceiveRemoteNotification:(NSDictionary*)userInfo
{
    AppController_SendNotificationWithArg(kUnityDidReceiveRemoteNotification, userInfo);
    UnitySendRemoteNotification(userInfo);
}

- (void)application:(UIApplication*)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData*)deviceToken
{
    AppController_SendNotificationWithArg(kUnityDidRegisterForRemoteNotificationsWithDeviceToken, deviceToken);
    UnitySendDeviceToken(deviceToken);
}

#if !UNITY_TVOS
- (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo fetchCompletionHandler:(void (^)(UIBackgroundFetchResult result))handler
{
    AppController_SendNotificationWithArg(kUnityDidReceiveRemoteNotification, userInfo);
    UnitySendRemoteNotification(userInfo);
    if (handler)
    {
        handler(UIBackgroundFetchResultNoData);
    }
}
#endif

- (void)application:(UIApplication*)application didFailToRegisterForRemoteNotificationsWithError:(NSError*)error
{
    AppController_SendNotificationWithArg(kUnityDidFailToRegisterForRemoteNotificationsWithError, error);
    UnitySendRemoteNotificationError(error);
}

- (BOOL)application:(UIApplication*)application openURL:(NSURL*)url sourceApplication:(NSString*)sourceApplication annotation:(id)annotation
{
    NSMutableArray* keys	= [NSMutableArray arrayWithCapacity:3];
    NSMutableArray* values	= [NSMutableArray arrayWithCapacity:3];
    
#define ADD_ITEM(item)	do{ if(item) {[keys addObject:@#item]; [values addObject:item];} }while(0)
    
    ADD_ITEM(url);
    ADD_ITEM(sourceApplication);
    ADD_ITEM(annotation);
    
#undef ADD_ITEM
    
    NSDictionary* notifData = [NSDictionary dictionaryWithObjects:values forKeys:keys];
    AppController_SendNotificationWithArg(kUnityOnOpenURL, notifData);
    return YES;
}

-(BOOL)application:(UIApplication*)application willFinishLaunchingWithOptions:(NSDictionary*)launchOptions
{
    return YES;
}

- (BOOL)application:(UIApplication*)application didFinishLaunchingWithOptions:(NSDictionary*)launchOptions
{
    ::printf("-> applicationDidFinishLaunching()\n");
    
    // send notfications
#if !UNITY_TVOS
    if(UILocalNotification* notification = [launchOptions objectForKey:UIApplicationLaunchOptionsLocalNotificationKey])
        UnitySendLocalNotification(notification);
    
    if(NSDictionary* notification = [launchOptions objectForKey:UIApplicationLaunchOptionsRemoteNotificationKey])
        UnitySendRemoteNotification(notification);
    
    if ([UIDevice currentDevice].generatesDeviceOrientationNotifications == NO)
        [[UIDevice currentDevice] beginGeneratingDeviceOrientationNotifications];
#endif
    
    UnityInitApplicationNoGraphics([[[NSBundle mainBundle] bundlePath] UTF8String]);
    
    [self selectRenderingAPI];
    [UnityRenderingView InitializeForAPI:self.renderingAPI];
    
    _window			= [[UIWindow alloc] initWithFrame:[UIScreen mainScreen].bounds];
    _unityView		= [self createUnityView];
    
    [DisplayManager Initialize];
    _mainDisplay	= [DisplayManager Instance].mainDisplay;
    [_mainDisplay createWithWindow:_window andView:_unityView];
    
    [self createUI];
    [self preStartUnity];
    
    // if you wont use keyboard you may comment it out at save some memory
    [KeyboardDelegate Initialize];
    
    //自定义主题
    [self customTheme];
    
    //注册第三方模块
    [self registerLib];
    
    //加载配置信息
    [self loadConfig];
    
    //获取缓存的步数进度
    self.movementProgress = 0;
    [self getStep];
    
    self.nearbyElfArr = [NSMutableArray array];
    self.nearbyNormalSplyArr = [NSMutableArray array];
    self.nearbyPersonalSplyArr = [NSMutableArray array];
    self.nearbyUserArr = [NSMutableArray array];
    
    self.isStartLoad = NO;
    [self startTimeLink];
    
    return YES;
}

- (void)applicationDidEnterBackground:(UIApplication*)application
{
    ::printf("-> applicationDidEnterBackground()\n");
}

- (void)applicationWillEnterForeground:(UIApplication*)application
{
    ::printf("-> applicationWillEnterForeground()\n");
    
    [self saveStep];
    
    // applicationWillEnterForeground: might sometimes arrive *before* actually initing unity (e.g. locking on startup)
    if(_unityAppReady)
    {
        // if we were showing video before going to background - the view size may be changed while we are in background
        [GetAppController().unityView recreateGLESSurfaceIfNeeded];
    }
}

- (void)applicationDidBecomeActive:(UIApplication*)application
{
    ::printf("-> applicationDidBecomeActive()\n");
    
    [self getStep];
    
    if(_snapshotView)
    {
        [_snapshotView removeFromSuperview];
        _snapshotView = nil;
    }
    
    if(_unityAppReady)
    {
        if(UnityIsPaused() && _wasPausedExternal == false)
        {
            UnityPause(0);
            UnityWillResume();
        }
        UnitySetPlayerFocus(1);
    }
    else if(!_startUnityScheduled)
    {
        _startUnityScheduled = true;
        [self performSelector:@selector(startUnity:) withObject:application afterDelay:0];
    }
    
    _didResignActive = false;
}

- (void)applicationWillResignActive:(UIApplication*)application
{
    ::printf("-> applicationWillResignActive()\n");
    
    if(_unityAppReady)
    {
        UnitySetPlayerFocus(0);
        
        _wasPausedExternal = UnityIsPaused();
        if (_wasPausedExternal == false)
        {
            // do pause unity only if we dont need special background processing
            // otherwise batched player loop can be called to run user scripts
            int bgBehavior = UnityGetAppBackgroundBehavior();
            if(bgBehavior == appbgSuspend || bgBehavior == appbgExit)
            {
                // Force player to do one more frame, so scripts get a chance to render custom screen for minimized app in task manager.
                // NB: UnityWillPause will schedule OnApplicationPause message, which will be sent normally inside repaint (unity player loop)
                // NB: We will actually pause after the loop (when calling UnityPause).
                UnityWillPause();
                [self repaint];
                UnityPause(1);
                
                _snapshotView = [self createSnapshotView];
                if(_snapshotView)
                    [_rootView addSubview:_snapshotView];
            }
        }
    }
    
    _didResignActive = true;
}

- (void)applicationDidReceiveMemoryWarning:(UIApplication*)application
{
    ::printf("WARNING -> applicationDidReceiveMemoryWarning()\n");
}

- (void)applicationWillTerminate:(UIApplication*)application
{
    ::printf("-> applicationWillTerminate()\n");
    
    [self saveStep];
    
    Profiler_UninitProfiler();
    UnityCleanup();
    
    extern void SensorsCleanup();
    SensorsCleanup();
}

#pragma mark - 玩转精灵

- (void)customTheme {
    UIFont *font = [UIFont systemFontOfSize:18];
    
    [[UINavigationBar appearance] setBarTintColor:[UIColor whiteColor]];
    [[UINavigationBar appearance] setTitleTextAttributes:@{NSForegroundColorAttributeName: RGB(30, 30, 30), NSFontAttributeName: font}];
    
    [UITableView appearance].backgroundColor = RGB(242, 242, 244);
    [UITableViewCell appearance].textLabel.textColor = RGB(51, 51, 51);
    [UITableViewCell appearance].textLabel.font = [UIFont systemFontOfSize:16];
}

- (void)registerLib {
    [[RCIM sharedRCIM] initWithAppKey:RCIM_AppKey];
    
    NSString *bundledPath = [[NSBundle mainBundle].resourcePath stringByAppendingPathComponent:@"CustomPathImages"];
    [[SDImageCache sharedImageCache] addReadOnlyCachePath:bundledPath];
    
    [AMapServices sharedServices].apiKey = AMap_ApiKey;
}

- (void)loadConfig {
    __weak UnityAppController *weakSelf = self;
    
    [Config getSysParamWithCompleteBlock:^(BOOL success, NSString *errStr) {
        if (success) {
            [weakSelf startLocationManager];
            [weakSelf startDailyStepCount];
        }
    }];
    
    [Config getMainPageIconListWithCompleteBlock:^(BOOL success, NSString *errStr) {
        if (success) {
            [[NSNotificationCenter defaultCenter] postNotificationName:Notification_LoadIcons object:nil];
        }
    }];
}

- (void)startTimeLink {
    self.nearbyCount = 0;
    self.nearbyLink = [CADisplayLink displayLinkWithTarget:self selector:@selector(reloadTimeCount)];
    self.nearbyLink.frameInterval = 60;
    
    [self.nearbyLink addToRunLoop:[NSRunLoop currentRunLoop] forMode:NSRunLoopCommonModes];
}

- (void)reloadTimeCount {
    self.nearbyCount ++;
    
    NSDictionary *configDic = [[NSUserDefaults standardUserDefaults] dictionaryForKey:UserDefaults_Config];
    if (self.isStartLoad && self.nearbyCount >= [configDic[UserDefaults_Config_refreshInterval] integerValue] * 60) {
        if ([self.rootViewController isKindOfClass:[MapVC class]]) {
            MapVC *mapVC = (MapVC *)self.rootViewController;
            if (mapVC.userLocation) {
                [self loadData:mapVC.userLocation];
            }
        }
    }
}

- (void)startLocationManager {
    if ([CLLocationManager locationServicesEnabled]) {
        self.locationManager = [[CLLocationManager alloc] init];
        self.locationManager.delegate = self;
        
        NSDictionary *configDic = [[NSUserDefaults standardUserDefaults] dictionaryForKey:UserDefaults_Config];
        
        self.locationManager.distanceFilter = [configDic[UserDefaults_Config_refreshDistance] floatValue];
        self.locationManager.desiredAccuracy = kCLLocationAccuracyBestForNavigation;
        
        [self.locationManager startUpdatingLocation];
        
    } else {
        UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"提醒" message:@"请在设置中检查网络和定位是否开启" delegate:nil cancelButtonTitle:@"好" otherButtonTitles:nil, nil];
        [alert show];
    }
}

- (void)startDailyStepCount {
    
}

- (void)loadData:(CLLocation *)location {
    self.isStartLoad = YES;
    self.nearbyCount = 0;
    
    __weak UnityAppController *weakSelf = self;
    
    NSString *longitude = [NSString stringWithFormat:@"%f", location.coordinate.longitude];
    NSString *latitude = [NSString stringWithFormat:@"%f", location.coordinate.latitude];
    
    [Spirit getNearbyElfListWithLongitude:longitude latitude:latitude completeBlock:^(BOOL success, id response, NSString *errStr) {
        if (success) {
            [weakSelf.nearbyElfArr removeAllObjects];
            [weakSelf.nearbyElfArr addObjectsFromArray:response];
            
            [[NSNotificationCenter defaultCenter] postNotificationName:Notification_NearbyElf object:nil];
        }
        
    }];
    
    [Spirit getNearbySupplyListWithLongitude:longitude latitude:latitude completeBlock:^(BOOL success, id response, NSString *errStr) {
        if (success) {
            [weakSelf.nearbyNormalSplyArr removeAllObjects];
            [weakSelf.nearbyNormalSplyArr addObjectsFromArray:response];
            
            [[NSNotificationCenter defaultCenter] postNotificationName:Notification_NearbySupply object:nil];
        }
        
    }];
    
    [Spirit getNearbyPersonalSupplyListWithLongitude:longitude latitude:latitude completeBlock:^(BOOL success, id response, NSString *errStr) {
        if (success) {
            [weakSelf.nearbyPersonalSplyArr removeAllObjects];
            [weakSelf.nearbyPersonalSplyArr addObjectsFromArray:response];
            
            [[NSNotificationCenter defaultCenter] postNotificationName:Notification_NearbyPersonalSupply object:nil];
        }
        
    }];
}

- (void)getStep {
    NSDictionary *todayStepDic = [[NSUserDefaults standardUserDefaults] dictionaryForKey:UserDefaults_TodayStepPercent];
    if (todayStepDic) {
        NSDate *date = todayStepDic[UserDefaults_TodayStepPercent_Time];
        NSDate *todayDate = [NSDate date];
        
        NSString *stepDateStr = [date.description substringWithRange:NSMakeRange(0, 10)];
        NSString *todayDateStr = [todayDate.description substringWithRange:NSMakeRange(0, 10)];
        
        if ([todayDateStr isEqualToString:stepDateStr]) {
            self.movementProgress = [todayStepDic[UserDefaults_TodayStepPercent_Percent] floatValue];
        }
        
    }
}

- (void)saveStep {
    NSDictionary *stepDic = @{
                              UserDefaults_TodayStepPercent_Time: [NSDate date],
                              UserDefaults_TodayStepPercent_Percent: @(self.movementProgress)
                              };
    
    [[NSUserDefaults standardUserDefaults] setObject:stepDic forKey:UserDefaults_TodayStepPercent];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

#pragma mark - CLLocationManagerDelegate

- (void)locationManager:(CLLocationManager *)manager didUpdateLocations:(NSArray<CLLocation *> *)locations {
    [self loadData:locations.firstObject];
    
    CLLocation *location = locations.firstObject;
    NSLog(@"didUpdateLocations: longitude %f, latitude %f", location.coordinate.longitude, location.coordinate.latitude);
}

#pragma mark - ShareViewDelegate

@end


void AppController_SendNotification(NSString* name)
{
    [[NSNotificationCenter defaultCenter] postNotificationName:name object:GetAppController()];
}
void AppController_SendNotificationWithArg(NSString* name, id arg)
{
    [[NSNotificationCenter defaultCenter] postNotificationName:name object:GetAppController() userInfo:arg];
}
void AppController_SendUnityViewControllerNotification(NSString* name)
{
    [[NSNotificationCenter defaultCenter] postNotificationName:name object:UnityGetGLViewController()];
}

extern "C" UIWindow*			UnityGetMainWindow()		{ return GetAppController().mainDisplay.window; }
extern "C" UIViewController*	UnityGetGLViewController()	{ return GetAppController().rootViewController; }
extern "C" UIView*				UnityGetGLView()			{ return GetAppController().unityView; }
extern "C" ScreenOrientation	UnityCurrentOrientation()	{ return GetAppController().unityView.contentOrientation; }



bool LogToNSLogHandler(LogType logType, const char* log, va_list list)
{
    NSLogv([NSString stringWithUTF8String:log], list);
    return true;
}

void UnityInitTrampoline()
{
#if ENABLE_CRASH_REPORT_SUBMISSION
    SubmitCrashReportsAsync();
#endif
    InitCrashHandling();
    
    NSString* version = [[UIDevice currentDevice] systemVersion];
    
    // keep native plugin developers happy and keep old bools around
    _ios42orNewer = true;
    _ios43orNewer = true;
    _ios50orNewer = true;
    _ios60orNewer = true;
    _ios70orNewer = [version compare: @"7.0" options: NSNumericSearch] != NSOrderedAscending;
    _ios80orNewer = [version compare: @"8.0" options: NSNumericSearch] != NSOrderedAscending;
    _ios81orNewer = [version compare: @"8.1" options: NSNumericSearch] != NSOrderedAscending;
    _ios82orNewer = [version compare: @"8.2" options: NSNumericSearch] != NSOrderedAscending;
    _ios90orNewer = [version compare: @"9.0" options: NSNumericSearch] != NSOrderedAscending;
    _ios91orNewer = [version compare: @"9.1" options: NSNumericSearch] != NSOrderedAscending;
    
    // Try writing to console and if it fails switch to NSLog logging
    ::fprintf(stdout, "\n");
    if(::ftell(stdout) < 0)
        UnitySetLogEntryHandler(LogToNSLogHandler);
}

#pragma mark - Unity接口

//声音设置
extern "C" bool	IsVoiceOpen() {
    NSUserDefaults *stardardUserDefaults = [NSUserDefaults standardUserDefaults];
    bool voiceClose = [stardardUserDefaults boolForKey:UserDefaults_Voice];
    
    return !voiceClose;
}

//振动设置
extern "C" bool	IsShackOpen() {
    NSUserDefaults *stardardUserDefaults = [NSUserDefaults standardUserDefaults];
    BOOL shackClose = [stardardUserDefaults boolForKey:UserDefaults_Shack];
    
    return !shackClose;
}

//获取登陆用户Id，未登陆调用返回0
extern "C" long	LoginUserId() {
    NSLog(@"获取登陆用户Id");
    
    if (GetAppController().loginUser == nil || GetAppController().loginUser.userId == 0) {
        return 0;
    }
    
    return GetAppController().loginUser.userId;
}

//闪屏结束后调用
extern "C" void	DidLaunchOver() {
    NSLog(@"闪屏结束");
    
    GetAppController().tmpUnityVC = GetAppController().rootViewController;
    
    UnityPause(YES);
    
    UIViewController *tmpVC;
    
    //加载用户模型
    [User loadUserFromFile];
    
    //验证登录状态
    if (![User isUserLogin]) {
        LoginVC *loginVC = [[LoginVC alloc] initWithNibName:@"LoginVC" bundle:nil];
        tmpVC = [[BaseNaviVC alloc] initWithRootViewController:loginVC];
        
    } else {
        [User loginRCIM];
        
        tmpVC = [[MapVC alloc] initWithNibName:@"MapVC" bundle:nil];
    }
    
    GetAppController().window.rootViewController = tmpVC;
    [GetAppController().window makeKeyAndVisible];
}

//触发返回
extern "C" void DidBackAction(const char* viewName) {
    NSLog(@"触发返回");
    
    [GetAppController().tmpUnityVC.navigationController dismissViewControllerAnimated:YES completion:nil];
}

//进入我的背包
extern "C" void	PushToMybagController() {
    MyBackpackVC *myBackpackVC = [[MyBackpackVC alloc] initWithNibName:@"MyBackpackVC" bundle:nil];
    
    UINavigationController *naviVC = (UINavigationController *)GetAppController().window.rootViewController.presentedViewController;
    [naviVC pushViewController:myBackpackVC animated:YES];
    
    NSLog(@"进入我的背包 %@, %@, %@", GetAppController().window.rootViewController, GetAppController().window.rootViewController.presentedViewController, GetAppController().window.rootViewController.presentingViewController);
}

//进入商城
extern "C" void	PushToMarketController() {
    GameShopVC *gameShopVC = [[GameShopVC alloc] initWithNibName:@"GameShopVC" bundle:nil];
    
    UINavigationController *naviVC = (UINavigationController *)GetAppController().window.rootViewController.presentedViewController;
    [naviVC pushViewController:gameShopVC animated:YES];
    
    NSLog(@"进入商城 %@, %@, %@", GetAppController().window.rootViewController, GetAppController().window.rootViewController.presentedViewController, GetAppController().window.rootViewController.presentingViewController);
}

//显示分享模块
extern "C" void	ShowShareView() {
    ShareView *shareView = [ShareView singleShareView];
    shareView.dele = GetAppController();
    [shareView showInView:GetAppController().rootViewController.view];
}

//获取地图POI上的精灵ID
extern "C" long	getPoiElfId() {
    long elfId = 0;
    
    if ([GetAppController().rootViewController isKindOfClass:[MapVC class]]) {
        MapVC *mapVC = (MapVC *)GetAppController().rootViewController;
        elfId = mapVC.selectedElfId;
    }
    
    return elfId;
}

//获取抓捕器ID
extern "C" long	getCatchId() {
    long catchId = 1;
    
    
    return catchId;
}
