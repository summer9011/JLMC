//
//  SettingVC.m
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/10/20.
//
//

#import "SettingVC.h"

#import "MeVC.h"
#import "AboutVC.h"

@interface SettingVC ()

@property (weak, nonatomic) IBOutlet UITableView *settingTable;

@end

@implementation SettingVC

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    
    self.title = @"设置";
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    
    [self.navigationController setNavigationBarHidden:NO animated:YES];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)voiceChange:(id)sender {
    UISwitch *voiceSwitch = sender;
    
    NSUserDefaults *stardardUserDefaults = [NSUserDefaults standardUserDefaults];
    [stardardUserDefaults setBool:![voiceSwitch isOn] forKey:UserDefaults_Voice];
    [stardardUserDefaults synchronize];
    
}

- (void)shackChange:(id)sender {
    UISwitch *shackSwitch = sender;
    
    NSUserDefaults *stardardUserDefaults = [NSUserDefaults standardUserDefaults];
    [stardardUserDefaults setBool:![shackSwitch isOn] forKey:UserDefaults_Shack];
    [stardardUserDefaults synchronize];
}

#pragma mark - UITableViewDataSource, UITableViewDelegate

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return 9;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    if (indexPath.row == 0 ||indexPath.row == 2 ||indexPath.row == 5 || indexPath.row == 7) {
        UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"BackCell"];
        if (cell == nil) {
            cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:@"BackCell"];
            cell.selectionStyle = UITableViewCellSelectionStyleNone;
            cell.backgroundColor = RGB(242, 242, 244);
        }
        
        return cell;
        
    } else if (indexPath.row == 1) {
        UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"MyInfoCell"];
        if (cell == nil) {
            cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:@"MyInfoCell"];
            cell.selectionStyle = UITableViewCellSelectionStyleNone;
            cell.accessoryType = UITableViewCellAccessoryDisclosureIndicator;
            
            cell.textLabel.text = @"个人资料";
            
            CGRect screenRect = [UIScreen mainScreen].bounds;
            
            UIView *upLineView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, CGRectGetWidth(screenRect), .5)];
            upLineView.backgroundColor = RGB(204, 204, 204);
            [cell.contentView addSubview:upLineView];
            
            UIView *downLineView = [[UIView alloc] initWithFrame:CGRectMake(0, 49.5, CGRectGetWidth(screenRect), .5)];
            downLineView.backgroundColor = RGB(204, 204, 204);
            [cell.contentView addSubview:downLineView];
        }
        
        return cell;
        
    } else if (indexPath.row == 3) {
        UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"VoiceCell"];
        if (cell == nil) {
            cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:@"VoiceCell"];
            cell.selectionStyle = UITableViewCellSelectionStyleNone;
            cell.accessoryType = UITableViewCellAccessoryDisclosureIndicator;
            
            cell.textLabel.text = @"是否打开声音";
            
            CGRect screenRect = [UIScreen mainScreen].bounds;
            
            UIView *upLineView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, CGRectGetWidth(screenRect), .5)];
            upLineView.backgroundColor = RGB(204, 204, 204);
            [cell.contentView addSubview:upLineView];
            
            UIView *downLineView = [[UIView alloc] initWithFrame:CGRectMake(10, 49.5, CGRectGetWidth(screenRect) - 10, .5)];
            downLineView.backgroundColor = RGB(204, 204, 204);
            [cell.contentView addSubview:downLineView];
            
            UISwitch *switchView = [[UISwitch alloc] initWithFrame:CGRectZero];
            cell.accessoryView = switchView;
            
            NSUserDefaults *stardardUserDefaults = [NSUserDefaults standardUserDefaults];
            BOOL voiceClose = [stardardUserDefaults boolForKey:UserDefaults_Voice];
            switchView.on = !voiceClose;
            
            [switchView addTarget:self action:@selector(voiceChange:) forControlEvents:UIControlEventValueChanged];
            
        }
        
        return cell;
        
    } else if (indexPath.row == 4) {
        UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"ShackCell"];
        if (cell == nil) {
            cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:@"ShackCell"];
            cell.selectionStyle = UITableViewCellSelectionStyleNone;
            
            cell.textLabel.text = @"附近出现精灵时振动";
            
            CGRect screenRect = [UIScreen mainScreen].bounds;
            
            UIView *downLineView = [[UIView alloc] initWithFrame:CGRectMake(0, 49.5, CGRectGetWidth(screenRect), .5)];
            downLineView.backgroundColor = RGB(204, 204, 204);
            [cell.contentView addSubview:downLineView];
            
            UISwitch *switchView = [[UISwitch alloc] initWithFrame:CGRectZero];
            cell.accessoryView = switchView;
            
            NSUserDefaults *stardardUserDefaults = [NSUserDefaults standardUserDefaults];
            BOOL shackClose = [stardardUserDefaults boolForKey:UserDefaults_Shack];
            switchView.on = !shackClose;
            
            [switchView addTarget:self action:@selector(shackChange:) forControlEvents:UIControlEventValueChanged];
            
        }
        
        return cell;
        
    } else if (indexPath.row == 6) {
        UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"AboutCell"];
        if (cell == nil) {
            cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:@"AboutCell"];
            cell.selectionStyle = UITableViewCellSelectionStyleNone;
            cell.accessoryType = UITableViewCellAccessoryDisclosureIndicator;
            
            cell.textLabel.text = @"关于玩转精灵";
            
            CGRect screenRect = [UIScreen mainScreen].bounds;
            
            UIView *upLineView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, CGRectGetWidth(screenRect), .5)];
            upLineView.backgroundColor = RGB(204, 204, 204);
            [cell.contentView addSubview:upLineView];
            
            UIView *downLineView = [[UIView alloc] initWithFrame:CGRectMake(0, 49.5, CGRectGetWidth(screenRect), .5)];
            downLineView.backgroundColor = RGB(204, 204, 204);
            [cell.contentView addSubview:downLineView];
        }
        
        return cell;
        
    } else if (indexPath.row == 8) {
        UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"LogoutCell"];
        if (cell == nil) {
            cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:@"LogoutCell"];
            cell.selectionStyle = UITableViewCellSelectionStyleNone;
            
            cell.textLabel.text = @"退出登录";
            cell.textLabel.textAlignment = NSTextAlignmentCenter;
            
            CGRect screenRect = [UIScreen mainScreen].bounds;
            
            UIView *upLineView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, CGRectGetWidth(screenRect), .5)];
            upLineView.backgroundColor = RGB(204, 204, 204);
            [cell.contentView addSubview:upLineView];
            
            UIView *downLineView = [[UIView alloc] initWithFrame:CGRectMake(0, 49.5, CGRectGetWidth(screenRect), .5)];
            downLineView.backgroundColor = RGB(204, 204, 204);
            [cell.contentView addSubview:downLineView];
        }
        
        return cell;
    }
    
    return nil;
}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath {
    if (indexPath.row == 0 ||indexPath.row == 2 ||indexPath.row == 5) {
        return 12;
        
    } else if (indexPath.row == 7) {
        return 35;
        
    } else {
        return 50;
        
    }
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    if (indexPath.row == 1) {
        MeVC *meVC = [[MeVC alloc] initWithNibName:@"MeVC" bundle:nil];
        [self.navigationController pushViewController:meVC animated:YES];
        
    } else if (indexPath.row == 6) {
        AboutVC *aboutVC = [[AboutVC alloc] initWithNibName:@"AboutVC" bundle:nil];
        [self.navigationController pushViewController:aboutVC animated:YES];
        
    } else if (indexPath.row == 8) {
        [User logout];
        
        [self doBackAction];
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
