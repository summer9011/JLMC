//
//  NSString+Validate.m
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/10/31.
//
//

#import "NSString+Validate.h"

@implementation NSString (Validate)

- (BOOL)isMobileNumber {
    //电信号段:133/153/180/181/189/177
    //联通号段:130/131/132/155/156/185/186/145/176
    //移动号段:134/135/136/137/138/139/150/151/152/157/158/159/182/183/184/187/188/147/178
    //虚拟运营商:170
    
    NSString *MOBILE = @"^1(3[0-9]|4[57]|5[0-35-9]|8[0-9]|7[06-8])\\d{8}$";
    NSPredicate *regextestmobile = [NSPredicate predicateWithFormat:@"SELF MATCHES %@", MOBILE];
    
    return [regextestmobile evaluateWithObject:self];
}

- (BOOL)isPasswordFormat {
    if (self.length < 6) {
        return NO;
    }
    
    return YES;
}

+ (BOOL)isEmpty:(id)obj {
    if (obj == nil || [obj isEqual:[NSNull null]] || ([obj isKindOfClass:[NSString class]] && [obj isEqualToString:@""])) {
        return YES;
    }
    
    return NO;
}

@end
