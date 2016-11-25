//
//  GameShopVC.m
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/10/22.
//
//

#import "GameShopVC.h"
#import "MyOrderVC.h"
#import "GoodDetailVC.h"

#import "TypeView.h"

#import "MarketHeaderView.h"
#import "MarketCell.h"
#import "MJRefresh.h"

#import "UnityAppController.h"

@interface GameShopVC () <TypeViewDelegate>

@property (weak, nonatomic) IBOutlet UIImageView *backgroundImageView;
@property (weak, nonatomic) IBOutlet UIImageView *backArrowImageView;
@property (weak, nonatomic) IBOutlet UIButton *backBtn;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UIButton *myOrderBtn;

@property (weak, nonatomic) IBOutlet UICollectionView *collectionView;
@property (weak, nonatomic) IBOutlet UICollectionViewFlowLayout *flowLayout;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *collectionViewConsTop;

@property (weak, nonatomic) TypeView *typeView;

@property (nonatomic, strong) NSMutableArray *dataArr;

@property (nonatomic, assign) NSUInteger page;
@property (nonatomic, assign) NSUInteger perPage;
@property (nonatomic, copy) NSString *currentType;

@end

static NSString *HeaderIdentifier = @"MarketHeaderView";
static NSString *CellIdentifier = @"MarketCell";

@implementation GameShopVC

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    
    self.dataArr = [NSMutableArray array];
    self.page = 0;
    self.perPage = 20;
    
    [self setupUI];
    [self didSelectedType:MarketGoodCatch];
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    
    [self.navigationController setNavigationBarHidden:YES animated:YES];
}

- (void)viewWillDisappear:(BOOL)animated {
    [super viewWillDisappear:animated];
    
    if (self.navigationController.viewControllers.count > 0) {
        UIViewController *tmp = self.navigationController.viewControllers.lastObject;
        
        if ([tmp isEqual:GetAppController().rootViewController]) {
            [tmp.navigationController setNavigationBarHidden:YES animated:YES];
        }
    }
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)setupUI {
    self.view.frame = [UIScreen mainScreen].bounds;
    
    self.backgroundImageView.image = [self.backgroundImageView.image resizableImageWithCapInsets:UIEdgeInsetsMake(80, 20, 0, 20) resizingMode:UIImageResizingModeStretch];
    [self.backBtn addTarget:self action:@selector(doBackAction) forControlEvents:UIControlEventTouchUpInside];
    
    TypeView *typeView = [[NSBundle mainBundle] loadNibNamed:@"TypeView" owner:nil options:nil].firstObject;
    typeView.frame = CGRectMake(14, 79, [UIScreen mainScreen].bounds.size.width - 14*2, 40);
    [self.view addSubview:typeView];
    
    self.typeView = typeView;
    self.typeView.dele = self;
    
    [self.collectionView registerNib:[UINib nibWithNibName:CellIdentifier bundle:nil] forCellWithReuseIdentifier:CellIdentifier];
    [self.collectionView registerNib:[UINib nibWithNibName:HeaderIdentifier bundle:nil] forSupplementaryViewOfKind:UICollectionElementKindSectionHeader withReuseIdentifier:HeaderIdentifier];
    
    self.flowLayout.minimumLineSpacing = 0;
    self.flowLayout.minimumInteritemSpacing = 0;
    
    CGFloat itemWidth = ([UIScreen mainScreen].bounds.size.width - 28)/2.f;
    self.flowLayout.itemSize = CGSizeMake(itemWidth, itemWidth + 65);
    
    self.flowLayout.headerReferenceSize = CGSizeMake(itemWidth * 2, 70);
    
    self.collectionView.mj_header = [MJRefreshNormalHeader headerWithRefreshingTarget:self refreshingAction:@selector(loadNewData)];
    self.collectionView.mj_footer = [MJRefreshBackNormalFooter footerWithRefreshingTarget:self refreshingAction:@selector(loadData)];
}

- (IBAction)goMyOrderAction:(id)sender {
    MyOrderVC *myOrderVC = [[MyOrderVC alloc] initWithNibName:@"MyOrderVC" bundle:nil];
    [self.navigationController pushViewController:myOrderVC animated:YES];
}

- (void)loadNewData {
    self.page = 0;
    [self loadData];
}

- (void)loadData {
    __weak GameShopVC *weakSelf = self;
    
    [Market getGoodsListWithPage:self.page perPage:20 type:self.currentType completeBlock:^(BOOL success, id response, NSString *errStr) {
        if (success) {
            if (weakSelf.page == 0) {
                [weakSelf.dataArr removeAllObjects];
            }
            
            [weakSelf.dataArr addObjectsFromArray:response[@"list"]];
            
            weakSelf.page ++;
            
            if (weakSelf.page == 1) {
                [weakSelf.collectionView.mj_header endRefreshing];
                [weakSelf.collectionView.mj_footer endRefreshing];
            } else {
                if (weakSelf.dataArr.count < weakSelf.perPage * weakSelf.page) {
                    [weakSelf.collectionView.mj_footer endRefreshingWithNoMoreData];
                } else {
                    [weakSelf.collectionView.mj_footer endRefreshing];
                }
            }
            
            [weakSelf.collectionView reloadData];
            
        } else {
            [weakSelf hud_showErrorWithMsg:errStr];
            
            [weakSelf.collectionView.mj_header endRefreshing];
            [weakSelf.collectionView.mj_footer endRefreshing];
        }
    }];
}

#pragma mark - UICollectionViewDelegate, UICollectionViewDataSource

- (NSInteger)collectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section {
    return self.dataArr.count;
}

- (__kindof MarketCell *)collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath {
    MarketCell *cell = [collectionView dequeueReusableCellWithReuseIdentifier:CellIdentifier forIndexPath:indexPath];
    
    NSDictionary *dic = self.dataArr[indexPath.row];
    
    [cell.goodImageView sd_setImageWithURL:[NSURL URLWithString:dic[@"image"]]];
    
    if ([self.currentType isEqualToString:MarketGoodCatch]) {
        cell.goodInfoLabel.text = [NSString stringWithFormat:@"%@", dic[@"name"]];
        
    } else {
        cell.goodInfoLabel.text = [NSString stringWithFormat:@"%@ +%@", dic[@"name"], dic[@"efficiency"]];
    }
    
    cell.goodPriceLabel.text = [NSString stringWithFormat:@"%@", dic[@"price"]];
    
    return cell;
}

- (void)collectionView:(UICollectionView *)collectionView didSelectItemAtIndexPath:(NSIndexPath *)indexPath {
    NSDictionary *dic = self.dataArr[indexPath.row];
    
    GoodDetailVC *detailVC = [[GoodDetailVC alloc] initWithNibName:@"GoodDetailVC" bundle:nil];
    detailVC.goodsID = [dic[@"id"] integerValue];
    [self.navigationController pushViewController:detailVC animated:YES];
}

- (UICollectionReusableView *)collectionView:(UICollectionView *)collectionView viewForSupplementaryElementOfKind:(NSString *)kind atIndexPath:(NSIndexPath *)indexPath {
    MarketHeaderView *headerView = [collectionView dequeueReusableSupplementaryViewOfKind:UICollectionElementKindSectionHeader withReuseIdentifier:HeaderIdentifier forIndexPath:indexPath];
    
    headerView.coinLabel.text = [NSString stringWithFormat:@"%ld", GetAppController().loginUser.coins];
    
    return headerView;
}

#pragma mark - TypeViewDelegate

- (void)didSelectedType:(NSString *)type {
    self.currentType = type;
    
    [self.collectionView.mj_header beginRefreshing];
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
