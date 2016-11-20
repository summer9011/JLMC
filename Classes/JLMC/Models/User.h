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

static NSString *UserInfoNickname       =       @"nickname";        //昵称
static NSString *UserInfoAge            =       @"age";             //年龄
static NSString *UserInfoSex            =       @"sex";             //性别
static NSString *UserInfoAvatar         =       @"avatar";          //头像

static NSString *AuthStatusNosubmit     =       @"nosubmit";        //未提交
static NSString *AuthStatusPending      =       @"pending";         //审核中
static NSString *AuthStatusSuccess      =       @"success";         //审核成功
static NSString *AuthStatusFail         =       @"fail";            //审核失败

static NSString *APINameRegister        =       @"register";        //API注册
static NSString *APINameCatchElf        =       @"catchElf";        //API获取精灵
static NSString *APINameFeedElf         =       @"feedElf";         //API升级成功
static NSString *APINamerealNameAuth    =       @"realNameAuth";    //API实名认证

@interface User : NSObject <NSCoding>

/**
 用户名
 */
@property (nonatomic, strong) NSString *loginname;

/**
 用户Id
 */
@property (nonatomic, assign) NSUInteger userId;

/**
 头像URL
 */
@property (nonatomic, strong) NSString *avatar;

/**
 用户头像边框图片
 */
@property (nonatomic, strong) NSString *frameImg;

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
 锁定的金币
 */
@property (nonatomic, assign) NSUInteger lockCoins;

/**
 认证状态
 */
@property (nonatomic, strong) NSString *authStatus;

/**
 今日行走步数
 */
@property (nonatomic, assign) NSUInteger walkSteps;

/**
 拥有的精灵总数
 */
@property (nonatomic, assign) NSUInteger totalElfCount;


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
 API接口成功调用后能获取相关的奖励物品
 
 @param userId 用户Id
 @param apiName API名称
 @param complete 请求完成回调
 */
+ (void)apiGiftWithUserId:(NSUInteger)userId apiName:(NSString *)apiName completeBlock:(UserCompleteBlock)complete;

/**
 用户登录

 @param phone 手机号码
 @param pwd 密码
 @param complete 请求完成回调
 */
+ (void)loginWithPhone:(NSString *)phone password:(NSString *)pwd completeBlock:(UserCompleteBlock)complete;

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
 间隔时间提交用户额外信息（当前地理位置信息和今日行走步数信息）
 
 @param userId 用户Id
 @param walkSteps 今日已行走步数
 @param city 当前城市
 @param longitude 当前位置经度
 @param latitude 当前位置纬度
 @param complete 请求完成回调
 */
+ (void)submitExtraUserInfoWithUserId:(NSUInteger)userId walkSteps:(NSUInteger)walkSteps city:(NSString *)city longitude:(NSString *)longitude latitude:(NSString *)latitude completeBlock:(UserCompleteBlock)complete;

/**
 找回密码

 @param phone 手机号码
 @param newPwd 新密码
 @param verifyCode 验证码
 @param complete 请求完成回调
 */
+ (void)forgotPwdWithPhone:(NSString *)phone newPwd:(NSString *)newPwd verifyCode:(NSString *)verifyCode completeBlock:(UserCompleteBlock)complete;

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
 获取附近用户列表
 
 @param userId 用户Id
 @param longitude 当前位置经度
 @param latitude 当前位置纬度
 @param complete 请求完成回调
 */
+ (void)getNearbyUserListWithUserId:(NSUInteger)userId longitude:(NSString *)longitude latitude:(NSString *)latitude completeBlock:(UserCompleteBlock)complete;

/**
 获取系统中备选的人物卡通头像
 
 @param complete 请求完成回调
 */
+ (void)getCartoonImageListWithCompleteBlock:(UserCompleteBlock)complete;

/**
 获取卡券列表
 
 @param userId 用户Id
 @param page 页数, 0为第一页
 @param perPage 每页数量
 @param complete 请求完成回调
 */
+ (void)getCouponListWithUserId:(NSUInteger)userId page:(NSUInteger)page perPage:(NSUInteger)perPage completeBlock:(UserCompleteBlock)complete;

/**
 获取卡券信息
 
 @param userId 用户Id
 @param couponId 卡券Id
 @param complete 请求完成回调
 */
+ (void)getCouponInfoWithUseId:(NSUInteger)userId couponId:(NSUInteger)couponId completeBlock:(UserCompleteBlock)complete;

/**
 打开卡券，卡券打开后只能消费，不能在跳蚤市场售卖
 
 @param userId 用户Id
 @param couponId 卡券Id
 @param complete 请求完成回调
 */
+ (void)useCouponWithUseId:(NSUInteger)userId couponId:(NSUInteger)couponId completeBlock:(UserCompleteBlock)complete;

/**
 获取运动奖励列表
 
 @param userId 用户Id
 @param walkSteps 今日已行走步数
 @param complete 请求完成回调
 */
+ (void)getStepsGiftListWithUserId:(NSUInteger)userId walkSteps:(NSUInteger)walkSteps completeBlock:(UserCompleteBlock)complete;

/**
 领取步数运动奖励
 
 @param userId 用户Id
 @param level 完成步数等级level
 @param complete 请求完成回调
 */
+ (void)receiveStepsGiftWithUserId:(NSUInteger)userId level:(NSUInteger)level completeBlock:(UserCompleteBlock)complete;

/**
 获取验证码
 
 @param phone 手机号码
 @param type 获取验证码类型（注册0、支付1、忘记密码2、修改支付密码3）
 @param complete 请求完成回调
 */
+ (void)getVerifyCodeWithPhone:(NSString *)phone smstype:(SmsCodeType)type completeBlock:(UserCompleteBlock)complete;

/**
 获取语音验证码
 
 @param phone 手机号码
 @param type 获取验证码类型（注册0、支付1、忘记密码2、修改支付密码3）
 @param complete 请求完成回调
 */
+ (void)getVoiceCodeWithPhone:(NSString *)phone smstype:(SmsCodeType)type completeBlock:(UserCompleteBlock)complete;

/**
 登录融云
 */
+ (void)loginRCIM;

/**
 退出登录
 */
+ (void)logout;

@end
