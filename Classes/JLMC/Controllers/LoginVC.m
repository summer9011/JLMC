//
//  LoginVC.m
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/10/19.
//
//

#import "LoginVC.h"

#import "RegisterVC.h"
#import "ForgetPwdVC.h"

#import "UnityAppController.h"
#import "MapVC.h"

#import "NSString+Validate.h"

@interface LoginVC ()

@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;
@property (weak, nonatomic) IBOutlet UIView *scrollContentView;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *scrollContentViewConsHeight;

@property (weak, nonatomic) IBOutlet UIImageView *avatarView;
@property (weak, nonatomic) IBOutlet UIView *phoneView;
@property (weak, nonatomic) IBOutlet UITextField *phoneTextField;
@property (weak, nonatomic) IBOutlet UIView *passwordView;
@property (weak, nonatomic) IBOutlet UITextField *passwordTextField;

@property (weak, nonatomic) IBOutlet GradientColorButton *loginBtn;
@property (weak, nonatomic) IBOutlet UIButton *registerBtn;
@property (weak, nonatomic) IBOutlet UIButton *forgotBtn;

@property (nonatomic, weak) UITextField *tmpField;
@property (nonatomic, assign) CGFloat naviBarH;

@end

@implementation LoginVC

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    
    self.title = @"登录";
    
    [self setupUI];
}

- (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];
    
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(keyboardWillChangeFrame:) name:UIKeyboardWillChangeFrameNotification object:nil];
}

- (void)viewWillDisappear:(BOOL)animated {
    [super viewWillDisappear:animated];
    
    [[NSNotificationCenter defaultCenter] removeObserver:self name:UIKeyboardWillChangeFrameNotification object:nil];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)setupUI {
    CGRect screenRect = [UIScreen mainScreen].bounds;
    
    CGRect rectStatus = [[UIApplication sharedApplication] statusBarFrame];
    CGRect rectNav = self.navigationController.navigationBar.frame;
    
    self.naviBarH = rectStatus.size.height + rectNav.size.height;
    
    self.scrollContentViewConsHeight.constant = CGRectGetHeight(screenRect) - self.naviBarH;
    
    self.avatarView.layer.masksToBounds = YES;
    self.avatarView.layer.cornerRadius = 60.f;
    
    self.avatarView.layer.borderWidth = 4.f;
    self.avatarView.layer.borderColor = [UIColor colorWithWhite:0 alpha:0.15].CGColor;
    
    self.loginBtn.layer.cornerRadius = 24.f;
    
    self.registerBtn.layer.masksToBounds = YES;
    self.registerBtn.layer.cornerRadius = 24.f;
    self.registerBtn.layer.borderWidth = 1.f;
    self.registerBtn.layer.borderColor = RGB(207, 210, 231).CGColor;
    
    NSMutableAttributedString *forgotAttrStr = [[NSMutableAttributedString alloc] initWithString:@"忘记密码" attributes:@{NSUnderlineStyleAttributeName: [NSNumber numberWithInteger:NSUnderlineStyleSingle], NSUnderlineColorAttributeName: RGB(85, 85, 85)}];
    [self.forgotBtn setAttributedTitle:forgotAttrStr forState:UIControlStateNormal];
    
}

- (void)doBackAction {
    UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"提示" message:@"App需要登陆后才能使用" delegate:nil cancelButtonTitle:@"好的" otherButtonTitles:nil, nil];
    [alert show];
}

- (IBAction)tapOnView:(id)sender {
    [self.view endEditing:YES];
}

- (IBAction)doLoginAction:(id)sender {
    if ([NSString isEmpty:self.phoneTextField.text]) {
        [self hud_showErrorWithMsg:@"手机号不能为空"];
        
        return;
    } else if (![self.phoneTextField.text isMobileNumber]) {
        [self hud_showErrorWithMsg:@"手机号格式错误"];
        
        return;
    }
    
    if ([NSString isEmpty:self.passwordTextField.text]) {
        [self hud_showErrorWithMsg:@"密码不能为空"];
        
        return;
    } else if (![self.passwordTextField.text isPasswordFormat]) {
        [self hud_showErrorWithMsg:@"密码格式错误"];
        
        return;
    }
    
    [self.view endEditing:YES];
    [self hud_showErrorWithMsg:@"正在登录..."];
    
    __weak LoginVC *weakSelf = self;
    
    [User loginWithPhone:self.phoneTextField.text
                password:self.passwordTextField.text
           completeBlock:^(BOOL success, id response, NSString *errStr) {
               if (success) {
                   [weakSelf hud_hideQuick];
                   
                   MapVC *mapVC = [[MapVC alloc] initWithNibName:@"MapVC" bundle:nil];
                   
                   GetAppController().window.rootViewController = mapVC;
                   [GetAppController().window makeKeyAndVisible];
                   
               } else {
                   [weakSelf hud_hideLoadingWithErrorMsg:errStr];
               }
               
           }];
    
}

- (IBAction)changePwdSeeAction:(id)sender {
    UIButton *button = sender;
    
    self.passwordTextField.secureTextEntry = button.selected;
    button.selected = !button.selected;
}

- (IBAction)doRegisterAction:(id)sender {
    RegisterVC *registerVC = [[RegisterVC alloc] initWithNibName:@"RegisterVC" bundle:nil];
    [self.navigationController pushViewController:registerVC animated:YES];
}


- (IBAction)doForgotAction:(id)sender {
    ForgetPwdVC *forgotVC = [[ForgetPwdVC alloc] initWithNibName:@"ForgetPwdVC" bundle:nil];
    [self.navigationController pushViewController:forgotVC animated:YES];
}

#pragma mark - UITextFieldDelegate

- (BOOL)textFieldShouldBeginEditing:(UITextField *)textField {
    self.tmpField = textField;
    
    return YES;
}

- (BOOL)textFieldShouldReturn:(UITextField *)textField {
    [self.view endEditing:YES];
    
    return YES;
}

#pragma mark - Notification

- (void)keyboardWillChangeFrame:(NSNotification *)notification {
    NSValue *keyboardEndFrameValue = notification.userInfo[UIKeyboardFrameEndUserInfoKey];
    
    CGRect keyboardEndFrame = [keyboardEndFrameValue CGRectValue];
    
    CGFloat screenH = CGRectGetHeight([UIScreen mainScreen].bounds);
    CGFloat keyboardMinH = CGRectGetMinY(keyboardEndFrame);
    
    CGFloat offsetY = 0 - self.naviBarH;
    
    if (keyboardMinH != screenH) {
        CGFloat tmpY = 0;
        
        if ([self.tmpField isEqual:self.phoneTextField]) {
            tmpY = CGRectGetMaxY(self.phoneView.frame);
        } else if ([self.tmpField isEqual:self.passwordTextField]) {
            tmpY = CGRectGetMaxY(self.passwordView.frame);
        }
        
        CGFloat leaveY = tmpY + keyboardMinH - screenH - self.naviBarH;
        if (leaveY > 0) {
            offsetY = leaveY;
        }
        
    }
    
    [self.scrollView setContentOffset:CGPointMake(0, offsetY) animated:YES];
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
