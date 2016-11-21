//
//  MeVC.m
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/10/22.
//
//

#import "MeVC.h"

#import "RealNameAuthVC.h"
#import "SetNickNameVC.h"
#import "AvatarListVC.h"

#import "UnityAppController.h"

@interface MeVC ()

@property (weak, nonatomic) IBOutlet UITableView *infoTable;

@end

@implementation MeVC

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    
    self.title = @"个人资料";
    
    self.infoTable.tableFooterView = [[UIView alloc] init];
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    
    [self.navigationController setNavigationBarHidden:NO animated:YES];
}

- (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];
    
    [self.infoTable reloadData];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - UITableViewDataSource, UITableViewDelegate

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return 5;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    if (indexPath.row == 0) {
        UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"AvatarCell"];
        if (cell == nil) {
            cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:@"AvatarCell"];
            cell.selectionStyle = UITableViewCellSelectionStyleNone;
            cell.accessoryType = UITableViewCellAccessoryDisclosureIndicator;
            
            cell.textLabel.text = @"头像";
            
            CGRect screenRect = [UIScreen mainScreen].bounds;
            
            UIImageView *imageView = [[UIImageView alloc] initWithFrame:CGRectMake(CGRectGetWidth(screenRect) - 90 - 36, 10, 90, 90)];
            imageView.tag = 10;
            imageView.layer.masksToBounds = YES;
            imageView.layer.cornerRadius = 45.f;
            [cell.contentView addSubview:imageView];
            
        }
        
        UIImageView *imageView = [cell.contentView viewWithTag:10];
        [imageView sd_setImageWithURL:[NSURL URLWithString:GetAppController().loginUser.avatar]];
        
        return cell;
        
    } else {
        UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"OtherCell"];
        if (cell == nil) {
            cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleValue1 reuseIdentifier:@"OtherCell"];
            cell.selectionStyle = UITableViewCellSelectionStyleNone;
            
            CGRect screenRect = [UIScreen mainScreen].bounds;
            
            UIView *downLineView = [[UIView alloc] initWithFrame:CGRectMake(0, 49.5, CGRectGetWidth(screenRect), .5)];
            downLineView.tag = 10;
            downLineView.backgroundColor = RGB(204, 204, 204);
            [cell.contentView addSubview:downLineView];
            
        }
        
        UIView *downLineView = [cell.contentView viewWithTag:10];
        downLineView.hidden = !(indexPath.row == 4);
        
        if (indexPath.row == 1) {
            cell.accessoryType = UITableViewCellAccessoryNone;
            
            cell.textLabel.text = @"账号";
            cell.detailTextLabel.text = GetAppController().loginUser.loginname;
            
        } else if (indexPath.row == 2) {
            cell.accessoryType = UITableViewCellAccessoryDisclosureIndicator;
            
            cell.textLabel.text = @"昵称";
            cell.detailTextLabel.text = GetAppController().loginUser.nickname;
            
        } else if (indexPath.row == 3) {
            cell.accessoryType = UITableViewCellAccessoryDisclosureIndicator;
            
            cell.textLabel.text = @"性别";
            
            if ([GetAppController().loginUser.sex isEqualToString:UserSexMale]) {
                cell.detailTextLabel.text = @"男";
            } else {
                cell.detailTextLabel.text = @"女";
            }
            
        } else if (indexPath.row == 4) {
            cell.accessoryType = UITableViewCellAccessoryDisclosureIndicator;
            
            cell.textLabel.text = @"实名认证";
            
            if ([GetAppController().loginUser.authStatus isEqualToString:AuthStatusNosubmit]) {
                cell.detailTextLabel.text = @"未提交";
                
            } else if ([GetAppController().loginUser.authStatus isEqualToString:AuthStatusPending]) {
                cell.detailTextLabel.text = @"审核中";
                
            } else if ([GetAppController().loginUser.authStatus isEqualToString:AuthStatusSuccess]) {
                cell.detailTextLabel.text = @"审核成功";
                
            } else if ([GetAppController().loginUser.authStatus isEqualToString:AuthStatusFail]) {
                cell.detailTextLabel.text = @"审核失败";
                
            } else {
                cell.detailTextLabel.text = @"";
            }
            
        }
        
        return cell;
        
    }
    
    return nil;
}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath {
    if (indexPath.row == 0) {
        return 110;
        
    } else {
        return 50;
        
    }
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    if (indexPath.row == 0) {
        AvatarListVC *avatarListVC = [[AvatarListVC alloc] initWithNibName:@"AvatarListVC" bundle:nil];
        [self.navigationController pushViewController:avatarListVC animated:YES];
        
    } else if (indexPath.row == 1) {
        NSLog(@"账号");
        
    } else if (indexPath.row == 2) {
        SetNickNameVC *nickNameVC = [[SetNickNameVC alloc] initWithNibName:@"SetNickNameVC" bundle:nil];
        [self.navigationController pushViewController:nickNameVC animated:YES];
        
    } else if (indexPath.row == 3) {
        NSLog(@"性别");
        
    } else if (indexPath.row == 4) {
        RealNameAuthVC *authVC = [[RealNameAuthVC alloc] initWithNibName:@"RealNameAuthVC" bundle:nil];
        [self.navigationController pushViewController:authVC animated:YES];
        
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
