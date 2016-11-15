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

#import "SheetListView.h"

@interface MeVC () <SheetListDelegate>

@property (weak, nonatomic) IBOutlet UITableView *infoTable;

@property (nonatomic, strong) SheetListView *sheetList;

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

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - UITableViewDataSource, UITableViewDelegate

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return 7;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    if (indexPath.row == 0) {
        UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"AvatarCell"];
        if (cell == nil) {
            cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:@"AvatarCell"];
            cell.selectionStyle = UITableViewCellSelectionStyleNone;
            cell.accessoryType = UITableViewCellAccessoryDisclosureIndicator;
            
            cell.textLabel.text = @"头像";
        }
        
        return cell;
        
    } else if (indexPath.row == 3) {
        UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"3DCell"];
        if (cell == nil) {
            cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:@"3DCell"];
            cell.selectionStyle = UITableViewCellSelectionStyleNone;
            cell.accessoryType = UITableViewCellAccessoryDisclosureIndicator;
            
            cell.textLabel.text = @"3D形象";
        }
        
        return cell;
        
    } else {
        UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"OtherCell"];
        if (cell == nil) {
            cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleValue1 reuseIdentifier:@"OtherCell"];
            cell.selectionStyle = UITableViewCellSelectionStyleNone;
            cell.accessoryType = UITableViewCellAccessoryDisclosureIndicator;
            
            CGRect screenRect = [UIScreen mainScreen].bounds;
            
            UIView *downLineView = [[UIView alloc] initWithFrame:CGRectMake(0, 64.5, CGRectGetWidth(screenRect), .5)];
            downLineView.tag = 10;
            downLineView.backgroundColor = RGB(204, 204, 204);
            [cell.contentView addSubview:downLineView];
            
        }
        
        UIView *downLineView = [cell.contentView viewWithTag:10];
        downLineView.hidden = !(indexPath.row == 6);
        
        if (indexPath.row == 1) {
            cell.textLabel.text = @"账号";
            cell.detailTextLabel.text = @"";
            
        } else if (indexPath.row == 2) {
            cell.textLabel.text = @"昵称";
            cell.detailTextLabel.text = @"";
            
        } else if (indexPath.row == 4) {
            cell.textLabel.text = @"年龄";
            cell.detailTextLabel.text = @"";
            
        } else if (indexPath.row == 5) {
            cell.textLabel.text = @"性别";
            cell.detailTextLabel.text = @"";
            
        } else if (indexPath.row == 6) {
            cell.textLabel.text = @"实名认证";
            cell.detailTextLabel.text = @"";
            
        }
        
        return cell;
        
    }
    
    return nil;
}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath {
    if (indexPath.row == 0) {
        return 125;
        
    } else {
        return 65;
        
    }
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    if (indexPath.row == 0) {
        if (self.sheetList == nil) {
            self.sheetList = [[SheetListView alloc] initWithDelegate:self buttonTitles:@"拍照", @"从手机相册选择", nil];
        }
        
        [self.sheetList showIn:self.navigationController.view];
        
    } else if (indexPath.row == 1) {
        SetNickNameVC *nickNameVC = [[SetNickNameVC alloc] initWithNibName:@"SetNickNameVC" bundle:nil];
        [self.navigationController pushViewController:nickNameVC animated:YES];
        
    } else if (indexPath.row == 2) {
        NSLog(@"昵称");
        
    } else if (indexPath.row == 3) {
        NSLog(@"3D形象");
        
    } else if (indexPath.row == 4) {
        NSLog(@"年龄");
        
    } else if (indexPath.row == 5) {
        NSLog(@"性别");
        
    } else if (indexPath.row == 6) {
        RealNameAuthVC *authVC = [[RealNameAuthVC alloc] initWithNibName:@"RealNameAuthVC" bundle:nil];
        [self.navigationController pushViewController:authVC animated:YES];
        
    }
}

#pragma mark - SheetListDelegate

- (void)didSelectRow:(NSUInteger)index {
    if (index == 1) {
        NSLog(@"拍照");
    }
    
    if (index == 2) {
        NSLog(@"从手机相册选择");
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
