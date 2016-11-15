//
//  GoodDetailVC.m
//  Unity-iPhone
//
//  Created by 赵立波 on 16/11/15.
//
//

#import "GoodDetailVC.h"
#import "ConfirmBuyVC.h"

#import "BuyPopView.h"

@interface GoodDetailVC () <BuyPopViewDelegate>

@property (weak, nonatomic) IBOutlet UIImageView *backgroundImageView;
@property (weak, nonatomic) IBOutlet UIImageView *backArrowImageView;
@property (weak, nonatomic) IBOutlet UIButton *backBtn;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;

@property (weak, nonatomic) IBOutlet UIView *contentView;
@property (weak, nonatomic) IBOutlet UIImageView *goodImageView;
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *useLabel;
@property (weak, nonatomic) IBOutlet UILabel *priceLabel;

@property (weak, nonatomic) IBOutlet GradientColorButton *buyBtn;

@property (nonatomic, strong) BuyPopView *popView;

@property (nonatomic, strong) NSDictionary *goodInfo;

@end

@implementation GoodDetailVC

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    
    [self setupUI];
    [self loadData];
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    
    [self.navigationController setNavigationBarHidden:YES animated:YES];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)setupUI {
    self.view.frame = [UIScreen mainScreen].bounds;
    
    self.backgroundImageView.image = [self.backgroundImageView.image resizableImageWithCapInsets:UIEdgeInsetsMake(80, 20, 0, 20) resizingMode:UIImageResizingModeStretch];
    [self.backBtn addTarget:self action:@selector(doBackAction) forControlEvents:UIControlEventTouchUpInside];
    
    self.buyBtn.layer.cornerRadius = 24.f;
}

- (void)setupData {
    [self.goodImageView sd_setImageWithURL:[NSURL URLWithString:self.goodInfo[@"image"]]];
    self.nameLabel.text = [NSString stringWithFormat:@"商品名称: %@", self.goodInfo[@"name"]];
    self.useLabel.text = [NSString stringWithFormat:@"商品用途: %@", self.goodInfo[@"features"]];
    self.nameLabel.text = [NSString stringWithFormat:@"商品价格: %@金币", self.goodInfo[@"price"]];
}

- (void)loadData {
    [self hud_showLoadingWithMsg:@"正在加载..."];
    
    __weak GoodDetailVC *weakSelf = self;
    
    [Market getGoodsDetailWithGoodsId:self.goodsID completeBlock:^(BOOL success, id response, NSString *errStr) {
        if (success) {
            [weakSelf hud_hideQuick];
            
            weakSelf.goodInfo = response;
            [weakSelf setupData];
            
        } else {
            [weakSelf hud_hideLoadingWithErrorMsg:errStr];
        }
    }];
}

- (IBAction)doBuyAction:(id)sender {
    if (self.popView == nil) {
        self.popView = [[NSBundle mainBundle] loadNibNamed:@"BuyPopView" owner:nil options:nil].firstObject;
        self.popView.dele = self;
    }
    
    [self.popView showIn:self.view];
}

#pragma mark - BuyPopViewDelegate

- (void)didBuyGood:(NSUInteger)goodCount {
    ConfirmBuyVC *confirmBuyVC = [[ConfirmBuyVC alloc] initWithNibName:@"ConfirmBuyVC" bundle:nil];
    confirmBuyVC.goodInfo = self.goodInfo;
    confirmBuyVC.number = goodCount;
    
    [self.navigationController pushViewController:confirmBuyVC animated:YES];
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
