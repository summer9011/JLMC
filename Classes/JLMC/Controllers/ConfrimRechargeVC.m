//
//  ConfrimRechargeVC.m
//  Unity-iPhone
//
//  Created by 赵立波 on 16/11/15.
//
//

#import "ConfrimRechargeVC.h"

@interface ConfrimRechargeVC ()

@property (weak, nonatomic) IBOutlet UILabel *goldLabel;
@property (weak, nonatomic) IBOutlet UILabel *priceLabel;

@property (weak, nonatomic) IBOutlet UIImageView *aliImageView;
@property (weak, nonatomic) IBOutlet UIButton *aliBtn;

@property (weak, nonatomic) IBOutlet UIImageView *wechatImageView;
@property (weak, nonatomic) IBOutlet UIButton *wechatBtn;

@property (weak, nonatomic) IBOutlet GradientColorButton *doneBtn;

@property (nonatomic, copy) NSString *payWay;

@end

@implementation ConfrimRechargeVC

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    
    self.title = @"确认付款";
    
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
    self.goldLabel.text = [NSString stringWithFormat:@"充值金币数量: %ld", self.goldPrice];
    self.priceLabel.text = [NSString stringWithFormat:@"折合人民币: %ld元", self.price];
}

- (IBAction)doSelectPayWay:(id)sender {
    if ([sender isEqual:self.aliBtn]) {
        self.aliImageView.image = [UIImage imageNamed:@"paySelected"];
        self.wechatImageView.image = [UIImage imageNamed:@"payUnselected"];
        
        self.payWay = @"ali";
        
    } else if ([sender isEqual:self.wechatBtn]) {
        self.aliImageView.image = [UIImage imageNamed:@"payUnselected"];
        self.wechatImageView.image = [UIImage imageNamed:@"paySelected"];
        
        self.payWay = @"wechat";
    }
}

- (IBAction)doDoneAction:(id)sender {
    if (self.payWay == nil) {
        [self hud_showErrorWithMsg:@"请选择支付方式"];
        
        return;
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
