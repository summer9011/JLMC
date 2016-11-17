//
//  SupplyDetailVC.m
//  Unity-iPhone
//
//  Created by 赵立波 on 16/11/16.
//
//

#import "SupplyDetailVC.h"
#import "SDCycleScrollView.h"

#import "SupplyItemView.h"

#import "UnityAppController.h"

@interface SupplyDetailVC () <SDCycleScrollViewDelegate>

@property (weak, nonatomic) IBOutlet UIView *headerView;

@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;
@property (weak, nonatomic) IBOutlet UIView *scrollContentView;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *scrollContentViewConsHeight;

@property (weak, nonatomic) IBOutlet GradientColorButton *supplyBtn;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *supplyBtnConsTop;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *supplyBtnConsHeight;

@property (nonatomic, weak) SDCycleScrollView *cycleView;

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
    
    if (self.cycleView) {
        [self.cycleView adjustWhenControllerViewWillAppera];
    }
    
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
    
    SDCycleScrollView *cycleView = [SDCycleScrollView cycleScrollViewWithFrame:CGRectMake(0, 0, CGRectGetWidth(self.view.frame), 240) delegate:self placeholderImage:nil];
    cycleView.imageURLStringsGroup = bannerImageArr;
    cycleView.bannerImageViewContentMode = UIViewContentModeScaleAspectFill;
    cycleView.currentPageDotColor = [UIColor whiteColor];
    cycleView.pageDotColor = [UIColor lightGrayColor];
    
    [self.headerView addSubview:cycleView];
    
    self.cycleView = cycleView;
    
    
    CGFloat itemCount = 3;
    CGFloat offsetY = 40;
    CGFloat itemWidth = [UIScreen mainScreen].bounds.size.width/(CGFloat)itemCount;
    CGFloat itemHeight = itemWidth + 20;
    
    int i = 0;
    
    NSArray *goodArr = self.supplyInfo[@"list"];
    for (NSDictionary *good in goodArr) {
        NSUInteger row = i/itemCount;
        NSUInteger line = i - row * itemCount;
        
        SupplyItemView *itemView = [[NSBundle mainBundle] loadNibNamed:@"SupplyItemView" owner:nil options:nil].firstObject;
        itemView.frame = CGRectMake(itemWidth * line, offsetY + itemHeight * row, itemWidth, itemHeight);
        [itemView.itemImageView sd_setImageWithURL:[NSURL URLWithString:good[@"image"]]];
        itemView.itemLabel.text = [NSString stringWithFormat:@"%@ x%@", good[@"name"], good[@"count"]];
        
        [self.scrollContentView addSubview:itemView];
        
        i++;
    }
    
    NSString *status = self.supplyInfo[@"receiveStatus"];
    self.supplyBtn.enabled = ![status isEqualToString:SupplyReceiveStatusReceived];
    
    self.supplyBtnConsTop.constant = offsetY + itemHeight * (goodArr.count/itemCount + 1) + 20;
    self.scrollContentViewConsHeight.constant = self.supplyBtnConsTop.constant + self.supplyBtnConsHeight.constant + 40;
    self.scrollView.contentSize = CGSizeMake(CGRectGetWidth(self.view.frame), self.scrollContentViewConsHeight.constant);
    
    [self.view layoutIfNeeded];
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
