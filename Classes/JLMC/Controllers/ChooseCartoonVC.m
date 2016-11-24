//
//  ChooseCartoonVC.m
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/11/14.
//
//

#import "ChooseCartoonVC.h"
#import "CartoonAvatarCell.h"

#import "MapVC.h"
#import "UnityAppController.h"
#import "MJRefresh.h"

@interface ChooseCartoonVC ()

@property (weak, nonatomic) IBOutlet UICollectionView *collectionView;
@property (weak, nonatomic) IBOutlet UICollectionViewFlowLayout *flowLayout;

@property (nonatomic, strong) NSMutableArray *dataArr;

@property (nonatomic, assign) NSInteger selectedIndex;

@end

static NSString *CellIdentifier = @"CartoonAvatarCell";

@implementation ChooseCartoonVC

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    
    self.title = @"卡通形象选择";
    
    UIBarButtonItem *saveBtnItem = [[UIBarButtonItem alloc] initWithTitle:@"确定" style:UIBarButtonItemStylePlain target:self action:@selector(saveChooseCartoon:)];
    [self.navigationItem setRightBarButtonItem:saveBtnItem animated:YES];
    
    self.dataArr = [NSMutableArray array];
    self.selectedIndex = -1;
    
    [self setupUI];
    [self loadData];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)setupUI {
    CGRect screenRect = [UIScreen mainScreen].bounds;
    
    [self.collectionView registerNib:[UINib nibWithNibName:CellIdentifier bundle:nil] forCellWithReuseIdentifier:CellIdentifier];
    
    self.flowLayout.minimumLineSpacing = 0;
    self.flowLayout.minimumInteritemSpacing = 0;
    
    self.flowLayout.itemSize = CGSizeMake(screenRect.size.width/3.f, screenRect.size.width/3.f);
}

- (void)doBackAction {
    if (self.fromRegister) {
        MapVC *mapVC = [[MapVC alloc] initWithNibName:@"MapVC" bundle:nil];
        
        GetAppController().window.rootViewController = mapVC;
        [GetAppController().window makeKeyAndVisible];
        
    } else {
        [self.navigationController popViewControllerAnimated:YES];
    }
}

- (void)saveChooseCartoon:(UIBarButtonItem *)buttonItem {
    if (self.selectedIndex == -1) {
        [self hud_showErrorWithMsg:@"请选择头像"];
        
        return;
    }
    
    [self hud_showLoadingWithMsg:@"正在更新..."];
    
    NSDictionary *dic = self.dataArr[self.selectedIndex];
    
    __weak ChooseCartoonVC *weakSelf = self;
    
    [User userInfoUpdateWithUserId:GetAppController().loginUser.userId type:UserInfoAvatar value:dic[@"object"] completeBlock:^(BOOL success, id response, NSString *errStr) {
        if (success) {
            [weakSelf hud_hideQuick];
            
            if (!weakSelf.fromRegister) {
                [[NSNotificationCenter defaultCenter] postNotificationName:Notification_UserAnno object:nil];
                [[NSNotificationCenter defaultCenter] postNotificationName:Notification_NearbyUserAnno object:nil];
            }
            
            [weakSelf doBackAction];
            
        } else {
            [weakSelf hud_hideLoadingWithErrorMsg:errStr];
        }
        
    }];
}

- (void)loadData {
    [self hud_showLoadingWithMsg:@"正在加载..."];
    
    __weak ChooseCartoonVC *weakSelf = self;
    
    [User getCartoonImageListWithCompleteBlock:^(BOOL success, id response, NSString *errStr) {
        if (success) {
            [weakSelf hud_hideQuick];
            
            [weakSelf.dataArr addObjectsFromArray:response];
            [weakSelf.collectionView reloadData];
        } else {
            [weakSelf hud_hideLoadingWithErrorMsg:errStr];
        }
    }];
}

#pragma mark - UICollectionViewDelegate, UICollectionViewDataSource

- (NSInteger)collectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section {
    return self.dataArr.count;
}

- (__kindof CartoonAvatarCell *)collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath {
    CartoonAvatarCell *cell = [collectionView dequeueReusableCellWithReuseIdentifier:CellIdentifier forIndexPath:indexPath];
    
    NSDictionary *dic = self.dataArr[indexPath.row];
    
    [cell.avatarImageView sd_setImageWithURL:[NSURL URLWithString:dic[@"url"]]];
    cell.selected = (self.selectedIndex == indexPath.row);
    
    return cell;
}

- (void)collectionView:(UICollectionView *)collectionView didSelectItemAtIndexPath:(NSIndexPath *)indexPath {
    self.selectedIndex = indexPath.row;
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
