//
//  MyOrderDetailVC.m
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/11/15.
//
//

#import "MyOrderDetailVC.h"

@interface MyOrderDetailVC ()

@property (nonatomic, strong) NSDictionary *orderInfo;

@end

@implementation MyOrderDetailVC

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    
    self.title = @"订单详情";
    
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
    
}

- (void)setupData {
    
}

- (void)loadData {
    [self hud_showLoadingWithMsg:@"正在加载..."];
    
    __weak MyOrderDetailVC *weakSelf = self;
    
    [Order getOrderDetailWithOrderId:self.orderID completeBlock:^(BOOL success, id response, NSString *errStr) {
        if (success) {
            [weakSelf hud_hideQuick];
            
            weakSelf.orderInfo = response;
            [weakSelf setupData];
            
        } else {
            [weakSelf hud_hideLoadingWithErrorMsg:errStr];
        }
    }];
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
