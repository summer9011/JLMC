//
//  ConfirmBuyVC.m
//  Unity-iPhone
//
//  Created by 赵立波 on 16/11/15.
//
//

#import "ConfirmBuyVC.h"
#import "ConfrimBuyCell.h"
#import "ConfrimBuyTotalView.h"

#import "UnityAppController.h"

#import "RechargeVC.h"

@interface ConfirmBuyVC ()

@property (weak, nonatomic) IBOutlet UITableView *confirmTableView;
@property (weak, nonatomic) IBOutlet GradientColorButton *confrimBtn;

@end

static NSString *CellIdentifier = @"ConfrimBuyCell";

@implementation ConfirmBuyVC

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
    [self.confirmTableView registerNib:[UINib nibWithNibName:CellIdentifier bundle:nil] forCellReuseIdentifier:CellIdentifier];
    
    UIView *footerView = [[UIView alloc] init];
    footerView.backgroundColor = RGB(242, 242, 244);
    
    self.confirmTableView.tableFooterView = footerView;
}

- (IBAction)doBuyAction:(id)sender {
    [self hud_showLoadingWithMsg:@"正在加载..."];
    
    __weak ConfirmBuyVC *weakSelf = self;
    
    [Order payOrderWithUserId:GetAppController().loginUser.userId goodsId:[self.goodInfo[@"id"] integerValue] count:self.number completeBlock:^(BOOL success, id response, NSString *errStr) {
        if (success) {
            [weakSelf hud_hideQuick];
            
        } else {
            if ([errStr isEqualToString:@"金币不足"]) {
                [weakSelf hud_hideQuick];
                
                RechargeVC *rechargeVC = [[RechargeVC alloc] initWithNibName:@"RechargeVC" bundle:nil];
                BaseNaviVC *naviVC = [[BaseNaviVC alloc] initWithRootViewController:rechargeVC];
                
                [weakSelf presentViewController:naviVC animated:YES completion:nil];
                
            } else {
                [weakSelf hud_hideLoadingWithErrorMsg:errStr];
            }
            
        }
    }];
}

#pragma mark - UITableViewDataSource, UITableViewDelegate

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return 1;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    ConfrimBuyCell *cell = [tableView dequeueReusableCellWithIdentifier:CellIdentifier forIndexPath:indexPath];
    
    [cell.goodImageView sd_setImageWithURL:[NSURL URLWithString:self.goodInfo[@"image"]]];
    cell.nameLabel.text = [NSString stringWithFormat:@"%@", self.goodInfo[@"name"]];
    cell.useLabel.text = [NSString stringWithFormat:@"用于%@", self.goodInfo[@"features"]];
    [cell addPrice:[self.goodInfo[@"price"] integerValue]];
    cell.numberLabel.text = [NSString stringWithFormat:@"X%ld", self.number];
    
    return cell;
}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath {
    return 120;
}

- (CGFloat)tableView:(UITableView *)tableView heightForFooterInSection:(NSInteger)section {
    return 60;
}

- (nullable UIView *)tableView:(UITableView *)tableView viewForFooterInSection:(NSInteger)section {
    ConfrimBuyTotalView *totalView = [[NSBundle mainBundle] loadNibNamed:@"ConfrimBuyTotalView" owner:nil options:nil].firstObject;
    [totalView addTotal:[self.goodInfo[@"price"] integerValue] number:self.number];
    
    return totalView;
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
