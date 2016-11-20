//
//  NearbyVC.m
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/11/6.
//
//

#import "NearbyVC.h"

#import "UnityAppController.h"

#import <AMapFoundationKit/AMapFoundationKit.h>
#import <MAMapKit/MAMapKit.h>

#import "UserAnno.h"

#import "UserAnnoView.h"

@interface NearbyVC () <MAMapViewDelegate>

@property (nonatomic, weak) MAMapView       *mapView;
@property (nonatomic, strong) MAAnnotationView *userLocationAnnotationView;

@end

@implementation NearbyVC

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(reloadNearbyUser) name:Notification_NearbyUser object:nil];
    
    self.title = @"附近玩家";
    
    [self addMapView];
    [self reloadNearbyUser];
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    
    [self.navigationController setNavigationBarHidden:NO animated:YES];
    
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
    
    [[NSNotificationCenter defaultCenter] removeObserver:self name:Notification_NearbyUser object:nil];
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

- (void)reloadNearbyUser {
    NSMutableArray *userAnnoArr = [NSMutableArray array];
    
    for (NSDictionary *user in GetAppController().nearbyUserArr) {
        UserAnno *anno = [[UserAnno alloc] init];
        anno.coordinate = CLLocationCoordinate2DMake([user[@"lat"] doubleValue], [user[@"lng"] doubleValue]);
        anno.title = [NSString stringWithFormat:@"%@", user[@"userId"]];
        anno.userDic = user;
        
        [userAnnoArr addObject:anno];
    }
    
    NSMutableArray *removeArr = [NSMutableArray array];
    for (id <MAAnnotation> anno in self.mapView.annotations) {
        if ([anno isKindOfClass:[UserAnno class]]) {
            [removeArr addObject:anno];
        }
    }
    
    [self.mapView removeAnnotations:removeArr];
    [self.mapView addAnnotations:userAnnoArr];
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
    if ([annotation isKindOfClass:[MAUserLocation class]]) {
        static NSString *UserIdentifier = @"UserIdentifier";
        
        UserAnnoView *annoView = (UserAnnoView *)[mapView dequeueReusableAnnotationViewWithIdentifier:UserIdentifier];
        if (annoView == nil) {
            annoView = [[UserAnnoView alloc] initWithAnnotation:annotation reuseIdentifier:UserIdentifier];
        }
        
        annoView.imageStr = GetAppController().loginUser.avatar;
        
        self.userLocationAnnotationView = annoView;
        
        return annoView;
    } else if ([annotation isKindOfClass:[UserAnno class]]) {
        static NSString *NearbyUserIdentifier = @"NearbyUserIdentifier";
        
        UserAnnoView *annoView = (UserAnnoView *)[mapView dequeueReusableAnnotationViewWithIdentifier:NearbyUserIdentifier];
        if (annoView == nil) {
            annoView = [[UserAnnoView alloc] initWithAnnotation:annotation reuseIdentifier:NearbyUserIdentifier];
        }
        
        UserAnno *userAnno = (UserAnno *)annotation;
        annoView.imageStr = userAnno.userDic[@"avatar"];
        
        return annoView;
        
    }
    
    return nil;
}

- (void)mapView:(MAMapView *)mapView didUpdateUserLocation:(MAUserLocation *)userLocation updatingLocation:(BOOL)updatingLocation {
    if (updatingLocation && self.userLocationAnnotationView != nil) {
        [self.mapView setCenterCoordinate:userLocation.location.coordinate animated:YES];
    }
}

- (void)mapView:(MAMapView *)mapView didSelectAnnotationView:(MAAnnotationView *)view {
    [mapView deselectAnnotation:view.annotation animated:YES];
    
    NSLog(@"选中 annotation %@", view.annotation);
    
    if ([view.annotation isKindOfClass:[UserAnno class]]) {
        UserAnno *userAnno = (UserAnno *)view.annotation;
        
        NSLog(@"进入User %@", userAnno.userDic);
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
