//
//  NSString+Validate.h
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/10/31.
//
//

#import <Foundation/Foundation.h>

@interface NSString (Validate)

/**
 是否为手机号
 */
- (BOOL)isMobileNumber;

/**
 是否为密码格式
 */
- (BOOL)isPasswordFormat;

/**
 是否为空
 */
+ (BOOL)isEmpty:(id)obj;

@end
