//
//  User.m
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/10/27.
//
//

#import "User.h"
#import "UnityAppController.h"

static NSString *UserStoreKey       =   @"UserStoreKey";

static NSString *CoderKeyLoginname  =   @"CoderKeyLoginname";
static NSString *CoderKeyUserId     =   @"CoderKeyUserId";
static NSString *CoderKeyAvatar     =   @"CoderKeyAvatar";
static NSString *CoderKeyPinAvatar  =   @"CoderKeyPinAvatar";
static NSString *CoderKeyMagicAvatar=   @"CoderKeyMagicAvatar";
static NSString *CoderKeySex        =   @"CoderKeySex";
static NSString *CoderKeyAge        =   @"CoderKeyAge";
static NSString *CoderKeyNickname   =   @"CoderKeyNickname";
static NSString *CoderKeyStatus     =   @"CoderKeyStatus";
static NSString *CoderKeyToken      =   @"CoderKeyToken";
static NSString *CoderKeyCoins      =   @"CoderKeyCoins";
static NSString *CoderKeyLockCoins  =   @"CoderKeyLockCoins";
static NSString *CoderKeyAuthStatus =   @"CoderKeyAuthStatus";

@implementation User

@synthesize loginname = _loginname;
@synthesize userId = _userId;
@synthesize avatar = _avatar;
@synthesize pinAvatar = _pinAvatar;
@synthesize magicAvatar = _magicAvatar;
@synthesize sex = _sex;
@synthesize age = _age;
@synthesize nickname = _nickname;
@synthesize status = _status;
@synthesize token = _token;
@synthesize coins = _coins;
@synthesize lockCoins = _lockCoins;
@synthesize authStatus = _authStatus;

- (void)dealloc {
    self.loginname = nil;
    self.userId = 0;
    self.avatar = nil;
    self.pinAvatar = nil;
    self.magicAvatar = nil;
    self.sex = nil;
    self.age = 0;
    self.nickname = nil;
    self.status = nil;
    self.token = nil;
    self.coins = 0;
    self.lockCoins = 0;
    self.authStatus = nil;
}

+ (void)loadUserFromFile {
    NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
    NSString *documentsDirectory = [paths objectAtIndex:0];
    NSString *filePath = [documentsDirectory stringByAppendingPathComponent:UserStoreKey];
    
    if ([[NSFileManager defaultManager] fileExistsAtPath:filePath]) {
        NSData *userData = [[NSMutableData alloc] initWithContentsOfFile:filePath];
        NSKeyedUnarchiver *unarchiver = [[NSKeyedUnarchiver alloc] initForReadingWithData:userData];
        
        UnityAppController *appController = (UnityAppController *)[UIApplication sharedApplication].delegate;
        appController.loginUser = [unarchiver decodeObjectForKey:UserStoreKey];
        
        [unarchiver finishDecoding];
    }
}

+ (BOOL)saveUserToFile {
    UnityAppController *appController = (UnityAppController *)[UIApplication sharedApplication].delegate;
    
    NSMutableData *userData = [[NSMutableData alloc] init];
    NSKeyedArchiver *archiver = [[NSKeyedArchiver alloc] initForWritingWithMutableData:userData];
    [archiver encodeObject:appController.loginUser forKey:UserStoreKey];
    
    [archiver finishEncoding];
    
    NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
    NSString *documentsDirectory = [paths objectAtIndex:0];
    NSString *filePath = [documentsDirectory stringByAppendingPathComponent:UserStoreKey];
    
    NSFileManager *fileManager = [NSFileManager defaultManager];
    BOOL success = [fileManager createFileAtPath:filePath contents:userData attributes:nil];
    
    return success;
}

+ (BOOL)deleteUserFile {
    NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
    NSString *documentsDirectory = [paths objectAtIndex:0];
    NSString *filePath = [documentsDirectory stringByAppendingPathComponent:UserStoreKey];
    
    return [[NSFileManager defaultManager] removeItemAtPath:filePath error:nil];
}

+ (BOOL)isUserLogin {
    UnityAppController *appController = (UnityAppController *)[UIApplication sharedApplication].delegate;
    
    if (appController.loginUser == nil || appController.loginUser.userId == 0) {
        return NO;
    } else {
        return YES;
    }
}

+ (void)registerWithPhone:(NSString *)phone password:(NSString *)pwd verifyCode:(NSString *)verifyCode nickname:(NSString *)nickname sex:(NSString *)sex completeBlock:(UserCompleteBlock)complete {
    NSDictionary *params = @{
                             @"loginname": phone,
                             @"password": pwd,
                             @"smscode": verifyCode,
                             @"sex": sex,
                             @"nickname": nickname,
                             @"registerFrom": @"ios"
                             };
    
    [[SessionNetwork defaultNetwork] postURL:@"/user/register" params:params completePercent:nil success:^(id response) {
        NSLog(@"注册成功");
        
        NSString *userId = response[@"id"];
        //注册成功后获取用户信息
        [User getUserInfoWithUserId:[userId integerValue] completeBlock:^(BOOL success, id response, NSString *errStr) {
            if (success) {
                [User loginSuccessAction];
            }
            
            if (complete) {
                complete(success, response, errStr);
            }
        }];
        
    } failure:^(NSUInteger errorCode, NSString *errorMsg) {
        if (complete) {
            complete(NO, nil, errorMsg);
        }
    }];
}

+ (void)apiGiftWithUserId:(NSUInteger)userId apiName:(NSString *)apiName completeBlock:(UserCompleteBlock)complete {
    NSDictionary *params = @{
                             @"userId": @(userId),
                             @"apiName": apiName
                             };
    
    [[SessionNetwork defaultNetwork] postURL:@"/user/apiGift" params:params completePercent:nil success:^(id response) {
        if (complete) {
            complete(YES, response[@"list"], nil);
        }
        
    } failure:^(NSUInteger errorCode, NSString *errorMsg) {
        if (complete) {
            complete(NO, nil, errorMsg);
        }
    }];
}

+ (void)loginWithPhone:(NSString *)phone password:(NSString *)pwd completeBlock:(UserCompleteBlock)complete {
    NSDictionary *params = @{
                             @"loginname": phone,
                             @"password": pwd
                             };
    
    [[SessionNetwork defaultNetwork] postURL:@"/user/login" params:params completePercent:nil success:^(id response) {
        NSLog(@"登录成功");
        
        NSString *userId = response[@"id"];
        //登录成功后获取用户信息
        [User getUserInfoWithUserId:[userId integerValue] completeBlock:^(BOOL success, id response, NSString *errStr) {
            if (success) {
                [User loginSuccessAction];
            }
            
            if (complete) {
                complete(success, response, errStr);
            }
            
        }];
        
    } failure:^(NSUInteger errorCode, NSString *errorMsg) {
        if (complete) {
            complete(NO, nil, errorMsg);
        }
    }];
}

+ (void)getUserInfoWithUserId:(NSUInteger)userId completeBlock:(UserCompleteBlock)complete {
    UnityAppController *appController = (UnityAppController *)[UIApplication sharedApplication].delegate;
    
    NSDictionary *params = @{
                             @"userId": @(userId)
                             };
    
    [[SessionNetwork defaultNetwork] getURL:@"/user/getUserInfo" params:params completePercent:nil success:^(id response) {
        User *loginUser = [[User alloc] init];
        
        loginUser.loginname = [NSString stringWithFormat:@"%@", response[@"loginname"]];
        loginUser.userId = [response[@"userId"] integerValue];
        loginUser.avatar = [NSString stringWithFormat:@"%@", response[@"avatar"]];
        loginUser.pinAvatar = [NSString stringWithFormat:@"%@", response[@"pinAvatar"]];
        loginUser.magicAvatar = [NSString stringWithFormat:@"%@", response[@"magicAvatar"]];
        loginUser.sex = [NSString stringWithFormat:@"%@", response[@"sex"]];
        loginUser.age = [response[@"age"] integerValue];
        loginUser.nickname = [NSString stringWithFormat:@"%@", response[@"nickname"]];
        loginUser.status = [NSString stringWithFormat:@"%@", response[@"status"]];
        loginUser.token = [NSString stringWithFormat:@"%@", response[@"token"]];
        loginUser.coins = [response[@"coins"] integerValue];
        loginUser.lockCoins = [response[@"lockCoins"] integerValue];
        loginUser.authStatus = [NSString stringWithFormat:@"%@", response[@"authStatus"]];
        loginUser.walkSteps = [response[@"walkSteps"] integerValue];
        loginUser.totalElfCount = [response[@"totalElfCount"] integerValue];
        
        appController.loginUser = loginUser;
        
        [User saveUserToFile];
        [[StepManager sharedManager] refreshStep:loginUser.walkSteps];
        
        if (complete) {
            complete(YES, nil, nil);
        }
        
    } failure:^(NSUInteger errorCode, NSString *errorMsg) {
        if (complete) {
            complete(NO, nil, errorMsg);
        }
    }];
}

+ (void)passwordUpdateWithUserId:(NSUInteger)userId oldPwd:(NSString *)oldPwd newPwd:(NSString *)newPwd completeBlock:(UserCompleteBlock)complete {
    NSDictionary *params = @{
                             @"userId": @(userId),
                             @"password": oldPwd,
                             @"newPassword": newPwd
                             };
    
    [[SessionNetwork defaultNetwork] postURL:@"/user/passwordUpdate" params:params completePercent:nil success:^(id response) {
        if (complete) {
            complete(YES, nil, nil);
        }
        
    } failure:^(NSUInteger errorCode, NSString *errorMsg) {
        if (complete) {
            complete(NO, nil, errorMsg);
        }
    }];
}

+ (void)userInfoUpdateWithUserId:(NSUInteger)userId type:(NSString *)type value:(NSString *)value completeBlock:(UserCompleteBlock)complete {
    UnityAppController *appController = (UnityAppController *)[UIApplication sharedApplication].delegate;
    
    NSDictionary *params = @{
                             @"userId": @(userId),
                             @"type": type,
                             @"value": value
                             };
    
    [[SessionNetwork defaultNetwork] postURL:@"/user/userInfoUpdate" params:params completePercent:nil success:^(id response) {
        if ([type isEqualToString:UserInfoNickname]) {
            appController.loginUser.nickname = value;
        } else if ([type isEqualToString:UserInfoAge]) {
            appController.loginUser.age = value;
        } else if ([type isEqualToString:UserInfoSex]) {
            appController.loginUser.sex = value;
        } else if ([type isEqualToString:UserInfoAvatar]) {
            appController.loginUser.avatar = value;
        }
        
        [User saveUserToFile];
        
        if (complete) {
            complete(YES, nil, nil);
        }
        
    } failure:^(NSUInteger errorCode, NSString *errorMsg) {
        if (complete) {
            complete(NO, nil, errorMsg);
        }
    }];
}

+ (void)submitExtraUserInfoWithUserId:(NSUInteger)userId walkSteps:(NSUInteger)walkSteps city:(NSString *)city longitude:(NSString *)longitude latitude:(NSString *)latitude completeBlock:(UserCompleteBlock)complete {
    NSDictionary *params = @{
                             @"userId": @(userId),
                             @"walkSteps": @(walkSteps),
                             @"city": city,
                             @"lng": longitude,
                             @"lat": latitude
                             };
    
    [[SessionNetwork defaultNetwork] postURL:@"/user/submitExtraUserInfo" params:params completePercent:nil success:^(id response) {
        if (complete) {
            complete(YES, nil, nil);
        }
        
    } failure:^(NSUInteger errorCode, NSString *errorMsg) {
        if (complete) {
            complete(NO, nil, errorMsg);
        }
    }];
    
}

+ (void)forgotPwdWithPhone:(NSString *)phone newPwd:(NSString *)newPwd verifyCode:(NSString *)verifyCode completeBlock:(UserCompleteBlock)complete {
    NSDictionary *params = @{
                             @"loginname": phone,
                             @"password": newPwd,
                             @"smscode": verifyCode
                             };
    
    [[SessionNetwork defaultNetwork] postURL:@"/user/passwordForget" params:params completePercent:nil success:^(id response) {
        if (complete) {
            complete(YES, nil, nil);
        }
        
    } failure:^(NSUInteger errorCode, NSString *errorMsg) {
        if (complete) {
            complete(NO, nil, errorMsg);
        }
    }];
}

+ (void)realNameAuthWithUserId:(NSUInteger)userId realname:(NSString *)realname idNo:(NSString *)idNo idCardFace:(NSString *)idCardFace idCardBack:(NSString *)idCardBack idCardHand:(NSString *)idCardHand completeBlock:(UserCompleteBlock)complete {
    NSDictionary *params = @{
                             @"userId": @(userId),
                             @"realname": realname,
                             @"idNo": idNo,
                             @"idCardFace": idCardFace,
                             @"idCardBack": idCardBack,
                             @"idCardHand": idCardHand
                             };
    
    [[SessionNetwork defaultNetwork] postURL:@"/user/realNameAuth" params:params completePercent:nil success:^(id response) {
        if (complete) {
            complete(YES, nil, nil);
        }
        
    } failure:^(NSUInteger errorCode, NSString *errorMsg) {
        if (complete) {
            complete(NO, nil, errorMsg);
        }
    }];
}

+ (void)getRealNameAuthInfoWithUserId:(NSUInteger)userId completeBlock:(UserCompleteBlock)complete {
    NSDictionary *params = @{
                             @"userId": @(userId)
                             };
    
    [[SessionNetwork defaultNetwork] getURL:@"/user/getRealNameAuthInfo" params:params completePercent:nil success:^(id response) {
        if (complete) {
            complete(YES, response, nil);
        }
        
    } failure:^(NSUInteger errorCode, NSString *errorMsg) {
        if (complete) {
            complete(NO, nil, errorMsg);
        }
    }];
}

+ (void)getNearbyUserListWithUserId:(NSUInteger)userId longitude:(NSString *)longitude latitude:(NSString *)latitude completeBlock:(UserCompleteBlock)complete {
    NSDictionary *params = @{
                             @"userId": @(userId),
                             @"lng": longitude,
                             @"lat": latitude
                             };
    
    [[SessionNetwork defaultNetwork] getURL:@"/user/getNearbyUserList" params:params completePercent:nil success:^(id response) {
        if (complete) {
            complete(YES, response, nil);
//            complete(YES, response[@"list"], nil);
        }
        
    } failure:^(NSUInteger errorCode, NSString *errorMsg) {
        if (complete) {
            complete(NO, nil, errorMsg);
        }
    }];
}

+ (void)getCartoonImageListWithCompleteBlock:(UserCompleteBlock)complete {
    [[SessionNetwork defaultNetwork] getURL:@"/user/getCartoonImageList" params:nil completePercent:nil success:^(id response) {
        if (complete) {
            complete(YES, response[@"list"], nil);
        }
        
    } failure:^(NSUInteger errorCode, NSString *errorMsg) {
        if (complete) {
            complete(NO, nil, errorMsg);
        }
    }];
}

+ (void)getCouponListWithUserId:(NSUInteger)userId page:(NSUInteger)page perPage:(NSUInteger)perPage completeBlock:(UserCompleteBlock)complete {
    NSDictionary *params = @{
                             @"userId": @(userId),
                             @"pageIndex": @(page),
                             @"countPerPage": @(perPage)
                             };
    
    [[SessionNetwork defaultNetwork] getURL:@"/user/getCouponList" params:params completePercent:nil success:^(id response) {
        if (complete) {
            complete(YES, response, nil);
        }
        
    } failure:^(NSUInteger errorCode, NSString *errorMsg) {
        if (complete) {
            complete(NO, nil, errorMsg);
        }
    }];
}

+ (void)getCouponInfoWithUseId:(NSUInteger)userId couponId:(NSUInteger)couponId completeBlock:(UserCompleteBlock)complete {
    NSDictionary *params = @{
                             @"userId": @(userId),
                             @"couponId": @(couponId)
                             };
    
    [[SessionNetwork defaultNetwork] getURL:@"/user/getCouponInfo" params:params completePercent:nil success:^(id response) {
        if (complete) {
            complete(YES, response, nil);
        }
        
    } failure:^(NSUInteger errorCode, NSString *errorMsg) {
        if (complete) {
            complete(NO, nil, errorMsg);
        }
    }];
}

+ (void)useCouponWithUseId:(NSUInteger)userId couponId:(NSUInteger)couponId completeBlock:(UserCompleteBlock)complete {
    NSDictionary *params = @{
                             @"userId": @(userId),
                             @"couponId": @(couponId)
                             };
    
    [[SessionNetwork defaultNetwork] postURL:@"/user/useCoupon" params:params completePercent:nil success:^(id response) {
        if (complete) {
            complete(YES, nil, nil);
        }
        
    } failure:^(NSUInteger errorCode, NSString *errorMsg) {
        if (complete) {
            complete(NO, nil, errorMsg);
        }
    }];
}

+ (void)getStepsGiftListWithUserId:(NSUInteger)userId walkSteps:(NSUInteger)walkSteps completeBlock:(UserCompleteBlock)complete {
    NSDictionary *params = @{
                             @"userId": @(userId),
                             @"walkSteps": @(walkSteps)
                             };
    
    [[SessionNetwork defaultNetwork] getURL:@"/user/getStepsGiftList" params:params completePercent:nil success:^(id response) {
        if (complete) {
            complete(YES, response[@"list"], nil);
        }
        
    } failure:^(NSUInteger errorCode, NSString *errorMsg) {
        if (complete) {
            complete(NO, nil, errorMsg);
        }
    }];
}

+ (void)receiveStepsGiftWithUserId:(NSUInteger)userId level:(NSUInteger)level completeBlock:(UserCompleteBlock)complete {
    NSDictionary *params = @{
                             @"userId": @(userId),
                             @"level": @(level)
                             };
    
    [[SessionNetwork defaultNetwork] postURL:@"/user/receiveStepsGift" params:params completePercent:nil success:^(id response) {
        if (complete) {
            complete(YES, nil, nil);
        }
        
    } failure:^(NSUInteger errorCode, NSString *errorMsg) {
        if (complete) {
            complete(NO, nil, errorMsg);
        }
    }];
}

+ (void)getVerifyCodeWithPhone:(NSString *)phone smstype:(SmsCodeType)type completeBlock:(UserCompleteBlock)complete {
    NSDictionary *params = @{
                             @"cellphone": phone,
                             @"smstype": @(type)
                             };
    
    [[SessionNetwork defaultNetwork] getURL:@"/misc/getSmsCode" params:params completePercent:nil success:^(id response) {
        if (complete) {
            complete(YES, response[@"smscode"], nil);
        }
        
    } failure:^(NSUInteger errorCode, NSString *errorMsg) {
        if (complete) {
            complete(NO, nil, errorMsg);
        }
    }];
}

+ (void)getVoiceCodeWithPhone:(NSString *)phone smstype:(SmsCodeType)type completeBlock:(UserCompleteBlock)complete {
    NSDictionary *params = @{
                             @"cellphone": phone,
                             @"voicetype": @(type)
                             };
    
    [[SessionNetwork defaultNetwork] getURL:@"/misc/getSmsCode" params:params completePercent:nil success:^(id response) {
        if (complete) {
            complete(YES, nil, nil);
        }
        
    } failure:^(NSUInteger errorCode, NSString *errorMsg) {
        if (complete) {
            complete(NO, nil, errorMsg);
        }
    }];
}

+ (void)loginRCIM {
    UnityAppController *appController = (UnityAppController *)[UIApplication sharedApplication].delegate;
    
    [[RCIM sharedRCIM] connectWithToken:appController.loginUser.token success:^(NSString *userId) {
        NSLog(@"登录成功 userId %@", userId);
        
    } error:^(RCConnectErrorCode status) {
        NSLog(@"status %ld", (long)status);
        
    } tokenIncorrect:^{
        //token过期或者不正确。
        //如果设置了token有效期并且token过期，请重新请求您的服务器获取新的token
        //如果没有设置token有效期却提示token错误，请检查您客户端和服务器的appkey是否匹配，还有检查您获取token的流程。
        NSLog(@"token错误");
        
    }];
}

+ (void)logout {
    UnityAppController *appController = (UnityAppController *)[UIApplication sharedApplication].delegate;
    
    [[RCIM sharedRCIM] logout];
    
    appController.loginUser = nil;
    [User deleteUserFile];
    
    [[NSNotificationCenter defaultCenter] postNotificationName:Notification_Logout object:nil userInfo:nil];
}

+ (void)loginSuccessAction {
    [User loginRCIM];
    
    [[NSNotificationCenter defaultCenter] postNotificationName:Notification_Login object:nil userInfo:nil];
}

#pragma mark - NSCoding

- (void)encodeWithCoder:(NSCoder *)aCoder {
    [aCoder encodeObject:self.loginname forKey:CoderKeyLoginname];
    [aCoder encodeInteger:self.userId forKey:CoderKeyUserId];
    [aCoder encodeObject:self.avatar forKey:CoderKeyAvatar];
    [aCoder encodeObject:self.pinAvatar forKey:CoderKeyPinAvatar];
    [aCoder encodeObject:self.magicAvatar forKey:CoderKeyMagicAvatar];
    [aCoder encodeObject:self.sex forKey:CoderKeySex];
    [aCoder encodeInteger:self.age forKey:CoderKeyAge];
    [aCoder encodeObject:self.nickname forKey:CoderKeyNickname];
    [aCoder encodeObject:self.status forKey:CoderKeyStatus];
    [aCoder encodeObject:self.token forKey:CoderKeyToken];
    [aCoder encodeInteger:self.coins forKey:CoderKeyCoins];
    [aCoder encodeInteger:self.lockCoins forKey:CoderKeyLockCoins];
    [aCoder encodeObject:self.authStatus forKey:CoderKeyAuthStatus];
    
}

- (nullable instancetype)initWithCoder:(NSCoder *)aDecoder {
    if (self = [super init]) {
        if (aDecoder == nil) {
            return self;
        }
        
        self.loginname = [aDecoder decodeObjectForKey:CoderKeyLoginname];
        self.userId = [aDecoder decodeIntegerForKey:CoderKeyUserId];
        self.avatar = [aDecoder decodeObjectForKey:CoderKeyAvatar];
        self.pinAvatar = [aDecoder decodeObjectForKey:CoderKeyPinAvatar];
        self.magicAvatar = [aDecoder decodeObjectForKey:CoderKeyMagicAvatar];
        self.sex = [aDecoder decodeObjectForKey:CoderKeySex];
        self.age = [aDecoder decodeIntegerForKey:CoderKeyAge];
        self.nickname = [aDecoder decodeObjectForKey:CoderKeyNickname];
        self.status = [aDecoder decodeObjectForKey:CoderKeyStatus];
        self.token = [aDecoder decodeObjectForKey:CoderKeyToken];
        self.coins = [aDecoder decodeIntegerForKey:CoderKeyCoins];
        self.lockCoins = [aDecoder decodeIntegerForKey:CoderKeyLockCoins];
        self.authStatus = [aDecoder decodeObjectForKey:CoderKeyAuthStatus];
        
    }
    
    return self;
}

@end
