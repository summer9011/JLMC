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
 获取平台的配置信息
 
 @param complete 请求完成回调
 */
+ (void)getSysParamWithCompleteBlock:(ConfigCompleteBlock)complete;

/**
 获取App的主页图标列表
 
 @param complete 请求完成回调
 */
+ (void)getMainPageIconListWithCompleteBlock:(ConfigCompleteBlock)complete;

@end
