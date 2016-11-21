//
//  SetNickNameVC.m
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/10/22.
//
//

#import "SetNickNameVC.h"
#import "UnityAppController.h"

@interface SetNickNameVC ()

@property (weak, nonatomic) IBOutlet UITextField *nicknameTextField;

@end

@implementation SetNickNameVC

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    
    self.title = @"昵称";
    
    UIBarButtonItem *saveBtnItem = [[UIBarButtonItem alloc] initWithTitle:@"保存" style:UIBarButtonItemStylePlain target:self action:@selector(saveNickname:)];
    [self.navigationItem setRightBarButtonItem:saveBtnItem animated:YES];
    
    self.nicknameTextField.text = GetAppController().loginUser.nickname;
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    
    [self.navigationController setNavigationBarHidden:NO animated:YES];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)saveNickname:(UIBarButtonItem *)barButtonItem {
    [self.view endEditing:YES];
    
    if (self.nicknameTextField.text == nil || [self.nicknameTextField.text isEqualToString:@""] || [self.nicknameTextField.text isEqualToString:GetAppController().loginUser.nickname]) {
        [self hud_showErrorWithMsg:@"请重新输入昵称"];
        
        return;
    }
    
    [self hud_showLoadingWithMsg:@"正在更新..."];
    
    __weak SetNickNameVC *weakSelf = self;
    
    [User userInfoUpdateWithUserId:GetAppController().loginUser.userId type:UserInfoNickname value:self.nicknameTextField.text completeBlock:^(BOOL success, id response, NSString *errStr) {
        if (success) {
            [weakSelf hud_hideQuick];
            
            [weakSelf doBackAction];
            
        } else {
            [weakSelf hud_hideLoadingWithErrorMsg:errStr];
        }
    }];
}

#pragma mark - UITextFieldDelegate

- (BOOL)textFieldShouldReturn:(UITextField *)textField {
    [self.view endEditing:YES];
    
    return YES;
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
