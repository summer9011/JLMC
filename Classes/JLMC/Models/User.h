//
//  User.h
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/10/27.
//
//

#import <Foundation/Foundation.h>

/**
 发送验证码的类型
 
 - SmsCodeRegister:     设置
 - SmsCodePay:          偶遇
 - SmsCodeForgotPwd:    消息
 - SmsCodeModifyPayPwd: 交换市场
 */
typedef NS_ENUM(NSUInteger, SmsCodeType) {
    SmsCodeRegister = 0,
    SmsCodePay = 1,
    SmsCodeForgotPwd = 2,
    SmsCodeModifyPayPwd = 3
};

typedef void(^UserCompleteBlock)(BOOL success, id response, NSString *errStr);

static NSString *UserSexMale            =       @"male";            //男
static NSString *UserSexFemale          =       @"female";          //女

static NSString *UserStatusActive       =       @"active";          //可用
static NSString *UserStatusInactive     =       @"inactive";        //不可用

static NSString *UserInfoNickname       =       @"nickname";
static NSString *UserInfoAge            =       @"age";
static NSString *UserInfoSex            =       @"sex";
static NSString *UserInfoAvatar         =       @"avatar";

@interface User : NSObject <NSCoding>

/**
 用户Id
 */
@property (nonatomic, assign) NSUInteger userId;

/**
 用户名
 */
@property (nonatomic, strong) NSString *loginname;

/**
 头像URL
 */
@property (nonatomic, strong) NSString *avatar;

/**
 性别
 */
@property (nonatomic, strong) NSString *sex;

/**
 年纪
 */
@property (nonatomic, assign) NSUInteger age;

/**
 昵称
 */
@property (nonatomic, strong) NSString *nickname;

/**
 状态（是否封号）
 */
@property (nonatomic, strong) NSString *status;

/**
 token
 */
@property (nonatomic, strong) NSString *token;

/**
 金币
 */
@property (nonatomic, assign) NSUInteger coins;


/**
 从本地归档中恢复已登录用户
 */
+ (void)loadUserFromFile;

/**
 保存用户至本地归档

 @return 是否保存成功
 */
+ (BOOL)saveUserToFile;

/**
 用户是否已登录

 @return boolean
 */
+ (BOOL)isUserLogin;

/**
 用户登录

 @param phone 手机号码
 @param pwd 密码
 @param complete 请求完成回调
 */
+ (void)loginWithPhone:(NSString *)phone password:(NSString *)pwd completeBlock:(UserCompleteBlock)complete;

/**
 用户注册

 @param phone 手机号码
 @param pwd 密码
 @param verifyCode 验证码
 @param nickname 昵称
 @param sex 性别
 @param complete 请求完成回调
 */
+ (void)registerWithPhone:(NSString *)phone password:(NSString *)pwd verifyCode:(NSString *)verifyCode nickname:(NSString *)nickname sex:(NSString *)sex completeBlock:(UserCompleteBlock)complete;

/**
 退出登录
 */
+ (void)logout;

/**
 找回密码

 @param phone 手机号码
 @param newPwd 新密码
 @param verifyCode 验证码
 @param complete 请求完成回调
 */
+ (void)forgotPwdWithPhone:(NSString *)phone newPwd:(NSString *)newPwd verifyCode:(NSString *)verifyCode completeBlock:(UserCompleteBlock)complete;

/**
 获取用户信息
 
 @param userId 用户Id
 @param complete 请求完成回调
 */
+ (void)getUserInfoWithUserId:(NSUInteger)userId completeBlock:(UserCompleteBlock)complete;

/**
 修改登录密码
 
 @param userId 用户Id
 @param oldPwd 旧密码
 @param newPwd 新密码
 @param complete 请求完成回调
 */
+ (void)passwordUpdateWithUserId:(NSUInteger)userId oldPwd:(NSString *)oldPwd newPwd:(NSString *)newPwd completeBlock:(UserCompleteBlock)complete;

/**
 修改用户信息
 
 @param userId 用户Id
 @param type 信息修改类型
 @param value 类型对应的值
 @param complete 请求完成回调
 */
+ (void)userInfoUpdateWithUserId:(NSUInteger)userId type:(NSString *)type value:(NSString *)value completeBlock:(UserCompleteBlock)complete;

/**
 提交实名认证
 
 @param userId 用户Id
 @param realname 真实姓名
 @param idNo 身份证号
 @param idCardFace 身份证正面照片
 @param idCardBack 身份证反面照片
 @param idCardHand 身份证手持照片
 @param complete 请求完成回调
 */
+ (void)realNameAuthWithUserId:(NSUInteger)userId realname:(NSString *)realname idNo:(NSString *)idNo idCardFace:(NSString *)idCardFace idCardBack:(NSString *)idCardBack idCardHand:(NSString *)idCardHand completeBlock:(UserCompleteBlock)complete;

/**
 获取实名认证信息
 
 @param userId 用户Id
 @param complete 请求完成回调
 */
+ (void)getRealNameAuthInfoWithUserId:(NSUInteger)userId completeBlock:(UserCompleteBlock)complete;

/**
 获取系统中备选的人物卡通头像
 
 @param complete 请求完成回调
 */
+ (void)getCartoonImageListWithCompleteBlock:(UserCompleteBlock)complete;

/**
 获取验证码
 
 @param phone 手机号码
 @param type 获取验证码类型（注册0、支付1、忘记密码2、修改支付密码3）
 @param complete 请求完成回调
 */
+ (void)getVerifyCodeWithPhone:(NSString *)phone smstype:(SmsCodeType)type completeBlock:(UserCompleteBlock)complete;

/**
 登录融云
 */
+ (void)loginRCIM;

@end