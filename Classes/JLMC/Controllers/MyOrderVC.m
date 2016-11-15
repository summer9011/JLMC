
//
//  MyOrderVC.m
//  Unity-iPhone
//
//  Created by 赵立波 on 16/11/15.
//
//

#import "MyOrderVC.h"
#import "MyOrderCell.h"
#import "MJRefresh.h"

#import "UnityAppController.h"

@interface MyOrderVC ()

@property (weak, nonatomic) IBOutlet UITableView *tableView;

@property (nonatomic, strong) NSMutableArray *dataArr;

@property (nonatomic, assign) NSUInteger page;
@property (nonatomic, assign) NSUInteger perPage;

@end

static NSString *CellIdentifier = @"MyOrderCell";

@implementation MyOrderVC

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    
    self.title = @"我的订单";
    
    self.dataArr = [NSMutableArray array];
    self.page = 0;
    self.perPage = 20;
    
    [self setupUI];
    [self.tableView.mj_header beginRefreshing];
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
    [self.tableView registerNib:[UINib nibWithNibName:CellIdentifier bundle:nil] forCellReuseIdentifier:CellIdentifier];
    
    UIView *footerView = [[UIView alloc] init];
    footerView.backgroundColor = RGB(242, 242, 244);
    
    self.tableView.tableFooterView = footerView;
    
    self.tableView.mj_header = [MJRefreshNormalHeader headerWithRefreshingTarget:self refreshingAction:@selector(loadNewData)];
    self.tableView.mj_footer = [MJRefreshBackNormalFooter footerWithRefreshingTarget:self refreshingAction:@selector(loadData)];
}

- (void)loadNewData {
    self.page = 0;
    [self loadData];
}

- (void)loadData {
    __weak MyOrderVC *weakSelf = self;
    
    [Order getOrderListWithUserId:GetAppController().loginUser.userId page:self.page perPage:self.perPage completeBlock:^(BOOL success, id response, NSString *errStr) {
        if (success) {
            if (weakSelf.page == 0) {
                [weakSelf.dataArr removeAllObjects];
            }
            
            [weakSelf.dataArr addObjectsFromArray:response[@"list"]];
            
            weakSelf.page ++;
            
            if (weakSelf.page == 1) {
                [weakSelf.tableView.mj_header endRefreshing];
                [weakSelf.tableView.mj_footer endRefreshing];
            } else {
                if (weakSelf.dataArr.count < weakSelf.perPage * weakSelf.page) {
                    [weakSelf.tableView.mj_footer endRefreshingWithNoMoreData];
                } else {
                    [weakSelf.tableView.mj_footer endRefreshing];
                }
            }
            
            [weakSelf.tableView reloadData];
            
        } else {
            [weakSelf hud_showErrorWithMsg:errStr];
            
            [weakSelf.tableView.mj_header endRefreshing];
            [weakSelf.tableView.mj_footer endRefreshing];
        }
    }];
}

#pragma mark - UITableViewDataSource, UITableViewDelegate

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return self.dataArr.count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    MyOrderCell *cell = [tableView dequeueReusableCellWithIdentifier:CellIdentifier forIndexPath:indexPath];
    
    NSDictionary *dic = self.dataArr[indexPath.row];
    
    [cell.goodImageView sd_setImageWithURL:[NSURL URLWithString:dic[@"goodsImage"]]];
    cell.infoLabel.text = [NSString stringWithFormat:@"%@ %@金币 x%@", dic[@"goodsName"], dic[@"goodsPrice"], dic[@"count"]];
    cell.timeLabel.text = [NSString stringWithFormat:@"%@", dic[@"payTime"]];
    
    return cell;
}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath {
    return 90;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    NSDictionary *dic = self.dataArr[indexPath.row];
    
    NSLog(@"%@", dic);
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
