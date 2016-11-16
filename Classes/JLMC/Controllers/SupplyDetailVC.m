//
//  SupplyDetailVC.m
//  Unity-iPhone
//
//  Created by 赵立波 on 16/11/16.
//
//

#import "SupplyDetailVC.h"
#import "SDCycleScrollView.h"

@interface SupplyDetailVC () <SDCycleScrollViewDelegate>

@property (weak, nonatomic) IBOutlet UIView *headerView;

@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;
@property (weak, nonatomic) IBOutlet UIView *scrollContentView;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *scrollContentViewConsHeight;

@property (weak, nonatomic) IBOutlet UIButton *supplyBtn;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *supplyBtnConsTop;

@end

@implementation SupplyDetailVC

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    
    self.title = @"补给站";
    
    [self setupUI];
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
    
    SDCycleScrollView *cycleView = [SDCycleScrollView cycleScrollViewWithFrame:CGRectMake(0, 0, CGRectGetWidth(self.view.frame), 200) delegate:self placeholderImage:nil];
    cycleView.imageURLStringsGroup = @[];
    
    [self.headerView addSubview:cycleView];
    
    self.supplyBtnConsTop.constant = 300;
    self.supplyBtn.layer.cornerRadius = 24.f;
}

- (IBAction)doSupplyAction:(id)sender {
    self.supplyBtn.enabled = NO;
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
