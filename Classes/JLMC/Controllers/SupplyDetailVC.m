//
//  SupplyDetailVC.m
//  Unity-iPhone
//
//  Created by 赵立波 on 16/11/16.
//
//

#import "SupplyDetailVC.h"
#import "SDCycleScrollView.h"

#import "UnityAppController.h"

@interface SupplyDetailVC () <SDCycleScrollViewDelegate>

@property (weak, nonatomic) IBOutlet UIView *headerView;

@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;
@property (weak, nonatomic) IBOutlet UIView *scrollContentView;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *scrollContentViewConsHeight;

@property (weak, nonatomic) IBOutlet UIButton *supplyBtn;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *supplyBtnConsTop;

@property (nonatomic, strong) NSDictionary *supplyInfo;

@end

@implementation SupplyDetailVC

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    
    self.title = @"补给站";
    
    [self setupUI];
    [self loadData];
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    
    [self.navigationController setNavigationBarHidden:NO animated:YES];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)setupUI {
    self.view.frame = [UIScreen mainScreen].bounds;
    self.supplyBtn.layer.cornerRadius = 24.f;
}

- (void)setupData {
    NSArray *bannerArr = self.supplyInfo[@"banner"];
    NSMutableArray *bannerImageArr = [NSMutableArray array];
    
    if (![bannerArr isEqual:[NSNull null]]) {
        for (NSDictionary *banner in bannerArr) {
            [bannerImageArr addObject:banner[@"image"]];
        }
    }
    
    SDCycleScrollView *cycleView = [SDCycleScrollView cycleScrollViewWithFrame:CGRectMake(0, 0, CGRectGetWidth(self.view.frame), 200) delegate:self placeholderImage:nil];
    cycleView.imageURLStringsGroup = bannerImageArr;
    
    [self.headerView addSubview:cycleView];
    
    NSArray *goodArr = self.supplyInfo[@"list"];
    
    
    
    self.supplyBtnConsTop.constant = 300;
    
}

- (void)loadData {
    [self hud_showLoadingWithMsg:@"正在加载..."];
    
    __weak SupplyDetailVC *weakSelf = self;
    
    if (self.isPrivate) {
        [Spirit getPersonalSupplyDetailWithUserId:GetAppController().loginUser.userId splyId:self.splyId splyWeight:self.splyWeight completeBlock:^(BOOL success, id response, NSString *errStr) {
            if (success) {
                [weakSelf hud_hideQuick];
                
                weakSelf.supplyInfo = response;
                [weakSelf setupData];
                
            } else {
                [weakSelf hud_hideLoadingWithErrorMsg:errStr];
            }
            
        }];
    } else {
        [Spirit getSupplyDetailWithUserId:GetAppController().loginUser.userId splyId:self.splyId splyWeight:self.splyWeight completeBlock:^(BOOL success, id response, NSString *errStr) {
            if (success) {
                [weakSelf hud_hideQuick];
                
                weakSelf.supplyInfo = response;
                [weakSelf setupData];
                
            } else {
                [weakSelf hud_hideLoadingWithErrorMsg:errStr];
            }
            
        }];
    }
}

- (IBAction)doSupplyAction:(id)sender {
    [self hud_showLoadingWithMsg:@"正在领取..."];
    
    __weak SupplyDetailVC *weakSelf = self;
    
    if (self.isPrivate) {
#warning hasCoupon需要动态获取
        BOOL hasCoupon = YES;
        
        [Spirit receivePersonalSupplyGiftWithUserId:GetAppController().loginUser.userId splyId:self.splyId splyWeight:self.splyWeight hasCoupon:hasCoupon completeBlock:^(BOOL success, id response, NSString *errStr) {
            if (success) {
                [weakSelf hud_hideQuick];
                
                weakSelf.supplyBtn.enabled = NO;
                
            } else {
                [weakSelf hud_hideLoadingWithErrorMsg:errStr];
            }
            
        }];
        
    } else {
        [Spirit receiveSupplyGiftWithUserId:GetAppController().loginUser.userId splyId:self.splyId splyWeight:self.splyWeight completeBlock:^(BOOL success, id response, NSString *errStr) {
            if (success) {
                [weakSelf hud_hideQuick];
                
                weakSelf.supplyBtn.enabled = NO;
                
            } else {
                [weakSelf hud_hideLoadingWithErrorMsg:errStr];
            }
            
        }];
        
    }
}

#pragma mark - SDCycleScrollViewDelegate

- (void)cycleScrollView:(SDCycleScrollView *)cycleScrollView didSelectItemAtIndex:(NSInteger)index {
    NSLog(@"cycleScrollView:didSelectItemAtIndex: %ld", index);
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
