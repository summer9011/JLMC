//
//  ForgetPwdVC.m
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/10/22.
//
//

#import "ForgetPwdVC.h"

#import "NSString+Validate.h"

@interface ForgetPwdVC ()

@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;

@property (weak, nonatomic) IBOutlet UIView *scrollContentView;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *scrollContentViewConsHeight;

@property (weak, nonatomic) IBOutlet UIView *phoneView;
@property (weak, nonatomic) IBOutlet UITextField *phoneTextField;

@property (weak, nonatomic) IBOutlet UIView *verifyCodeView;
@property (weak, nonatomic) IBOutlet UITextField *verifyCodeTextField;
@property (weak, nonatomic) IBOutlet UIButton *verifyCodeSendBtn;

@property (weak, nonatomic) IBOutlet UIView *passwordView;
@property (weak, nonatomic) IBOutlet UITextField *passwordTextField;

@property (weak, nonatomic) IBOutlet GradientColorButton *forgotBtn;

@property (nonatomic, weak) UITextField *tmpField;
@property (nonatomic, assign) CGFloat naviBarH;

@property (nonatomic, strong) CADisplayLink *displayLink;
@property (nonatomic, assign) NSUInteger reSendCount;

@property (nonatomic, strong) NSString *tmpVerifyCode;

@end

@implementation ForgetPwdVC

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    
    self.title = @"找回密码";
    
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
    
    self.verifyCodeSendBtn.layer.masksToBounds = YES;
    self.verifyCodeSendBtn.layer.cornerRadius = 4.f;
    
    self.forgotBtn.layer.masksToBounds = YES;
    self.forgotBtn.layer.cornerRadius = 24.f;
}

- (void)changeVerifyCodeSendBtnEnable:(BOOL)enable {
    if (enable) {
        [self.verifyCodeSendBtn setTitle:@"获取验证码" forState:UIControlStateNormal];
        self.verifyCodeSendBtn.backgroundColor = UIColorFromRGB(0xfed50c);
    } else {
        [self.verifyCodeSendBtn setTitle:@"重新发送60" forState:UIControlStateDisabled];
        self.verifyCodeSendBtn.backgroundColor = UIColorFromRGB(0xf2f2f4);
        
        self.reSendCount = 60;
    }
    
    self.verifyCodeSendBtn.enabled = enable;
}

- (void)reSendVerifyCodeCount:(CADisplayLink *)displayLink {
    self.reSendCount --;
    
    if (self.reSendCount == 0) {
        self.displayLink.paused = YES;
        [self.displayLink invalidate];
        self.displayLink = nil;
        
        [self changeVerifyCodeSendBtnEnable:YES];
        
        return;
    }
    
    [self.verifyCodeSendBtn setTitle:[NSString stringWithFormat:@"重新发送%ld", (unsigned long)self.reSendCount] forState:UIControlStateDisabled];
}

- (IBAction)tapOnView:(id)sender {
    [self.view endEditing:YES];
}

- (IBAction)doSendVerifyCodeAction:(id)sender {
    if ([NSString isEmpty:self.phoneTextField.text]) {
        [self hud_showErrorWithMsg:@"手机号不能为空"];
        
        return;
    } else if (![self.phoneTextField.text isMobileNumber]) {
        [self hud_showErrorWithMsg:@"手机号格式错误"];
        
        return;
    }
    
    [self.view endEditing:YES];
    [self hud_showErrorWithMsg:@"正在获取..."];
    
    __weak ForgetPwdVC *weakSelf = self;
    
    [User getVerifyCodeWithPhone:self.phoneTextField.text
                         smstype:SmsCodeRegister
                   completeBlock:^(BOOL success, id smscode, NSString *errStr) {
                       if (success) {
                           weakSelf.tmpVerifyCode = smscode;
                           
                           [weakSelf changeVerifyCodeSendBtnEnable:NO];
                           
                           weakSelf.displayLink = [CADisplayLink displayLinkWithTarget:weakSelf selector:@selector(reSendVerifyCodeCount:)];
                           weakSelf.displayLink.frameInterval = 60;
                           [weakSelf.displayLink addToRunLoop:[NSRunLoop currentRunLoop] forMode:NSRunLoopCommonModes];
                           
                           [weakSelf hud_hideQuick];
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

- (IBAction)doForgotAction:(id)sender {
    if ([NSString isEmpty:self.phoneTextField.text]) {
        [self hud_showErrorWithMsg:@"手机号不能为空"];
        
        return;
    } else if (![self.phoneTextField.text isMobileNumber]) {
        [self hud_showErrorWithMsg:@"手机号格式错误"];
        
        return;
    }
    
    if ([NSString isEmpty:self.tmpVerifyCode]) {
        [self hud_showErrorWithMsg:@"请先获取验证码"];
        
        return;
    } else if ([NSString isEmpty:self.verifyCodeTextField.text]) {
        [self hud_showErrorWithMsg:@"验证码不能为空"];
        
        return;
    } else if (![self.verifyCodeTextField.text isEqualToString:self.tmpVerifyCode]) {
        [self hud_showErrorWithMsg:@"验证码错误"];
        
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
    
    __weak ForgetPwdVC *weakSelf = self;
    
    [User forgotPwdWithPhone:self.phoneTextField.text
                      newPwd:self.passwordTextField.text
                  verifyCode:self.verifyCodeTextField.text
               completeBlock:^(BOOL success, id response, NSString *errStr) {
                   if (success) {
                       [weakSelf hud_hideLoadingWithSuccessMsg:@"设置成功"];
                       [weakSelf performSelector:@selector(popToRoot) withObject:nil afterDelay:1.5];
                       
                   } else {
                       [weakSelf hud_hideLoadingWithErrorMsg:errStr];
                   }
               }];
    
}

- (void)popToRoot {
    [self.navigationController popToRootViewControllerAnimated:YES];
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
        } else if ([self.tmpField isEqual:self.verifyCodeTextField]) {
            tmpY = CGRectGetMaxY(self.verifyCodeView.frame);
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
