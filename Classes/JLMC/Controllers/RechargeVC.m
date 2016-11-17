//
//  RechargeVC.m
//  Unity-iPhone
//
//  Created by 赵立波 on 16/11/15.
//
//

#import "RechargeVC.h"
#import "RechargeItemView.h"

#import "ConfrimRechargeVC.h"

@interface RechargeVC ()

@property (weak, nonatomic) IBOutlet GradientColorButton *rechargeBtn;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *rechargeBtnConsTop;

@property (nonatomic, weak) RechargeItemView *selectedView;

@end

@implementation RechargeVC

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    
    self.title = @"金币充值";
    
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
    
    self.rechargeBtn.layer.cornerRadius = 24.f;
    
    CGFloat offsetY = 64 + 20;
    CGFloat width = (CGRectGetWidth(self.view.frame) - 15 * 4)/3.f;
    CGFloat height = 60;
    
    RechargeItemView *itemView5 = [[NSBundle mainBundle] loadNibNamed:@"RechargeItemView" owner:nil options:nil].firstObject;
    itemView5.frame = CGRectMake(15, offsetY, width, height);
    itemView5.price = 5;
    [self.view addSubview:itemView5];
    
    RechargeItemView *itemView10 = [[NSBundle mainBundle] loadNibNamed:@"RechargeItemView" owner:nil options:nil].firstObject;
    itemView10.frame = CGRectMake(15 + (15 + width), offsetY, width, height);
    itemView10.price = 10;
    [self.view addSubview:itemView10];
    
    RechargeItemView *itemView15 = [[NSBundle mainBundle] loadNibNamed:@"RechargeItemView" owner:nil options:nil].firstObject;
    itemView15.frame = CGRectMake(15 + (15 + width) * 2, offsetY, width, height);
    itemView15.price = 15;
    [self.view addSubview:itemView15];
    
    RechargeItemView *itemView20 = [[NSBundle mainBundle] loadNibNamed:@"RechargeItemView" owner:nil options:nil].firstObject;
    itemView20.frame = CGRectMake(15, offsetY + 15 + height, width, height);
    itemView20.price = 20;
    [self.view addSubview:itemView20];
    
    UITapGestureRecognizer *tap5 = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(tapOnView:)];
    [itemView5 addGestureRecognizer:tap5];
    
    UITapGestureRecognizer *tap10 = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(tapOnView:)];
    [itemView10 addGestureRecognizer:tap10];
    
    UITapGestureRecognizer *tap15 = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(tapOnView:)];
    [itemView15 addGestureRecognizer:tap15];
    
    UITapGestureRecognizer *tap20 = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(tapOnView:)];
    [itemView20 addGestureRecognizer:tap20];
    
    self.rechargeBtnConsTop.constant = CGRectGetMaxY(itemView20.frame) + 20;
}

- (void)tapOnView:(UITapGestureRecognizer *)tap {
    for (UIView *subView in self.view.subviews) {
        if ([subView isKindOfClass:[RechargeItemView class]]) {
            RechargeItemView *tmpView = (RechargeItemView *)subView;
            tmpView.selected = [subView isEqual:tap.view];
        }
    }
    
    self.selectedView = (RechargeItemView *)tap.view;
}

- (IBAction)doRechargeAction:(id)sender {
    if (self.selectedView == nil) {
        [self hud_showErrorWithMsg:@"请先选择充值金额"];
        
        return;
    }
    
    ConfrimRechargeVC *confirmRechargeVC = [[ConfrimRechargeVC alloc] initWithNibName:@"ConfrimRechargeVC" bundle:nil];
    confirmRechargeVC.price = self.selectedView.price;
    confirmRechargeVC.goldPrice = self.selectedView.goldPrice;
    
    [self.navigationController pushViewController:confirmRechargeVC animated:YES];
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
