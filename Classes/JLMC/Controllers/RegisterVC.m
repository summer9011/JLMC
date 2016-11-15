//
//  RegisterVC.m
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/10/22.
//
//

#import "RegisterVC.h"

#import "ChooseSexVC.h"
#import "UserAgreementViewController.h"

#import "ChooseCartoonVC.h"

#import "UnityAppController.h"
#import "MapVC.h"

#import <TTTAttributedLabel/TTTAttributedLabel.h>
#import "NSString+Validate.h"

@interface RegisterVC () <ChooseSexDelegate, TTTAttributedLabelDelegate, UIGestureRecognizerDelegate>

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

@property (weak, nonatomic) IBOutlet UIView *nicknameView;
@property (weak, nonatomic) IBOutlet UITextField *nicknameTextField;

@property (weak, nonatomic) IBOutlet UILabel *sexLabel;

@property (weak, nonatomic) IBOutlet GradientColorButton *registerBtn;

@property (weak, nonatomic) IBOutlet TTTAttributedLabel *userAgreementLabel;

@property (nonatomic, weak) UITextField *tmpField;
@property (nonatomic, assign) CGFloat naviBarH;

@property (nonatomic, strong) CADisplayLink *displayLink;
@property (nonatomic, assign) NSUInteger reSendCount;

@property (nonatomic, strong) NSString *tmpVerifyCode;
@property (nonatomic, strong) NSString *tmpSex;

@end

@implementation RegisterVC

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    
    self.title = @"注册";
    self.tmpSex = nil;
    
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
    
    self.registerBtn.layer.masksToBounds = YES;
    self.registerBtn.layer.cornerRadius = 24.f;
    
    self.userAgreementLabel.userInteractionEnabled = YES;
    self.userAgreementLabel.enabledTextCheckingTypes = NSTextCheckingTypeLink;
    self.userAgreementLabel.delegate = self;
    
    NSTextCheckingResult *textCheckingResult = [NSTextCheckingResult linkCheckingResultWithRange:NSMakeRange(7, 4) URL:[NSURL URLWithString:@"useragreement"]];
    
    TTTAttributedLabelLink *attributedLabelLink = [[TTTAttributedLabelLink alloc] initWithAttributes:nil activeAttributes:nil inactiveAttributes:nil textCheckingResult:textCheckingResult];
    [self.userAgreementLabel addLink:attributedLabelLink];
    
    NSMutableAttributedString *userAgreementStr = [[NSMutableAttributedString alloc] initWithString:@"注册即视为同意用户协议"];
    [userAgreementStr addAttributes:@{NSForegroundColorAttributeName: RGB(138, 138, 138)} range:NSMakeRange(0, 7)];
    [userAgreementStr addAttributes:@{NSUnderlineStyleAttributeName: [NSNumber numberWithInteger:NSUnderlineStyleSingle], NSForegroundColorAttributeName: RGB(51, 51, 51)} range:NSMakeRange(7, 4)];
    [userAgreementStr addAttribute:NSFontAttributeName value:[UIFont systemFontOfSize:14] range:NSMakeRange(0, 11)];
    
    self.userAgreementLabel.attributedText = userAgreementStr;
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
    
    __weak RegisterVC *weakSelf = self;
    
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

- (IBAction)doChooseSexAction:(id)sender {
    ChooseSexVC *chooseSexVC = [[ChooseSexVC alloc] initWithNibName:@"ChooseSexVC" bundle:nil];
    chooseSexVC.chooseSexDele = self;
    chooseSexVC.defaultSex = self.tmpSex;
    [self.navigationController pushViewController:chooseSexVC animated:YES];
}

- (IBAction)doRegisterAction:(id)sender {
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
    
    if ([NSString isEmpty:self.nicknameTextField.text]) {
        [self hud_showErrorWithMsg:@"昵称不能为空"];
        
        return;
    }
    
    if ([NSString isEmpty:self.tmpSex]) {
        [self hud_showErrorWithMsg:@"请选择性别"];
        
        return;
    }
    
    [self.view endEditing:YES];
    [self hud_showErrorWithMsg:@"正在注册..."];
    
    __weak RegisterVC *weakSelf = self;
    
    [User registerWithPhone:self.phoneTextField.text
                   password:self.passwordTextField.text
                 verifyCode:self.tmpVerifyCode
                   nickname:self.nicknameTextField.text
                        sex:self.tmpSex completeBlock:^(BOOL success, id userId, NSString *errStr) {
                            if (success) {
                                [weakSelf hud_hideQuick];
                                
                                ChooseCartoonVC *chooseCartoonVC = [[ChooseCartoonVC alloc] initWithNibName:@"ChooseCartoonVC" bundle:nil];
                                chooseCartoonVC.fromRegister = YES;
                                
                                [weakSelf.navigationController pushViewController:chooseCartoonVC animated:YES];
                                
                            } else {
                                [weakSelf hud_hideLoadingWithErrorMsg:errStr];
                            }
                            
                        }];
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

#pragma mark - ChooseSexDelegate

- (void)didChoosedSex:(NSString *)sex {
    self.tmpSex = sex;
}

#pragma mark - UIGestureRecognizerDelegate

- (BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer *)gestureRecognizer {
    BOOL containPoint = CGRectContainsPoint(self.userAgreementLabel.frame, [gestureRecognizer locationInView:self.scrollContentView]);
    return !containPoint;
}

#pragma mark - TTTAttributedLabelDelegate

- (void)attributedLabel:(TTTAttributedLabel *)label didSelectLinkWithURL:(NSURL *)url {
    UserAgreementViewController *userAgreementVC = [[UserAgreementViewController alloc] initWithNibName:@"UserAgreementViewController" bundle:nil];
    [self.navigationController pushViewController:userAgreementVC animated:YES];
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
        } else if ([self.tmpField isEqual:self.nicknameTextField]) {
            tmpY = CGRectGetMaxY(self.nicknameView.frame);
        }
        
        CGFloat leaveY = tmpY + keyboardMinH - screenH - self.naviBarH;
        if (leaveY > 0) {
            offsetY = leaveY;
        }
        
    }
    
    [self.scrollView setContentOffset:CGPointMake(0, offsetY) animated:YES];
}

#pragma mark - Setting

- (void)setTmpSex:(NSString *)tmpSex {
    _tmpSex = tmpSex;
    
    if ([tmpSex isEqualToString:UserSexMale]) {
        self.sexLabel.text = @"男";
        
    } else if ([tmpSex isEqualToString:UserSexFemale]) {
        self.sexLabel.text = @"女";
        
    } else {
        self.sexLabel.text = @"性别选择";
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
