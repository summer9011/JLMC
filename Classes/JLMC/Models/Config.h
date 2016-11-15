//
//  Config.h
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/10/31.
//
//

#import <Foundation/Foundation.h>

typedef void(^ConfigCompleteBlock)(BOOL success, NSString *errStr);

@interface Config : NSObject

/**
 获取App的最新缓存
 */
+ (NSArray *)getNewestLocalCacheIcons;

/**
 获取App的Config
 
 @param complete 请求完成回调
 */
+ (void)getAppConfigWithCompleteBlock:(ConfigCompleteBlock)complete;

/**
 获取App的当前链接到AIP
 */
+ (NSString *)getIP;

@end
