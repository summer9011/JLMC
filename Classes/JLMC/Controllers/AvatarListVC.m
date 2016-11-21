//
//  AvatarListVC.m
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/11/21.
//
//

#import "AvatarListVC.h"

#import "ChooseCartoonVC.h"

@interface AvatarListVC () <UIImagePickerControllerDelegate>

@property (weak, nonatomic) IBOutlet UITableView *tableView;

@property (nonatomic, strong) UIImagePickerController *imagePickerController;

@end

@implementation AvatarListVC

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    
    self.title = @"设置头像";
    
    self.tableView.tableFooterView = [[UIView alloc] init];
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
    return 4;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    if (indexPath.row == 1) {
        UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"LineCell"];
        if (cell == nil) {
            cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:@"LineCell"];
            cell.selectionStyle = UITableViewCellSelectionStyleNone;
            
            cell.backgroundColor = RGB(242, 242, 244);
            cell.contentView.backgroundColor = RGB(242, 242, 244);
            
            CGRect screenRect = [UIScreen mainScreen].bounds;
            
            UIView *downLineView = [[UIView alloc] initWithFrame:CGRectMake(0, 9.5, CGRectGetWidth(screenRect), .5)];
            downLineView.backgroundColor = RGB(204, 204, 204);
            [cell.contentView addSubview:downLineView];
            
        }
        
        return cell;
        
    } else {
        UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"OtherCell"];
        if (cell == nil) {
            cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleValue1 reuseIdentifier:@"OtherCell"];
            cell.selectionStyle = UITableViewCellSelectionStyleNone;
            cell.accessoryType = UITableViewCellAccessoryDisclosureIndicator;
            
            CGRect screenRect = [UIScreen mainScreen].bounds;
            
            UIView *downLineView = [[UIView alloc] initWithFrame:CGRectMake(0, 49.5, CGRectGetWidth(screenRect), .5)];
            downLineView.tag = 10;
            downLineView.backgroundColor = RGB(204, 204, 204);
            [cell.contentView addSubview:downLineView];
            
        }
        
        UIView *downLineView = [cell.contentView viewWithTag:10];
        
        if (indexPath.row == 0) {
            cell.textLabel.text = @"选择卡通形象";
            downLineView.hidden = NO;
            
        } else if (indexPath.row == 2) {
            cell.textLabel.text = @"从手机相册选择";
            downLineView.hidden = YES;
            
        } else if (indexPath.row == 3) {
            cell.textLabel.text = @"拍照";
            downLineView.hidden = NO;
            
        }
        
        return cell;
        
    }
    
    return nil;
}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath {
    if (indexPath.row == 1) {
        return 10;
        
    } else {
        return 50;
    }
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    if (indexPath.row == 0) {
        ChooseCartoonVC *chooseCartoonVC = [[ChooseCartoonVC alloc] initWithNibName:@"ChooseCartoonVC" bundle:nil];
        chooseCartoonVC.fromRegister = NO;
        
        [self.navigationController pushViewController:chooseCartoonVC animated:YES];
        
    } else if (indexPath.row == 2) {
        
        
    } else if (indexPath.row == 3) {
        
        
    }
}

#pragma mark - UIImagePickerControllerDelegate

- (void)imagePickerController:(UIImagePickerController *)picker didFinishPickingMediaWithInfo:(NSDictionary<NSString *,id> *)info {
    
}

- (void)imagePickerControllerDidCancel:(UIImagePickerController *)picker {
    
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
