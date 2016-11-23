//
//  Rank.h
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/11/23.
//
//

#import <Foundation/Foundation.h>

typedef void(^RankCompleteBlock)(BOOL success, id response, NSString *errStr);

@interface Rank : NSObject

/**
 获取运动排行榜

 @param userId 用户Id
 @param page 页数, 0为第一页
 @param perPage 每页数量
 @param city 城市
 @param complete 请求完成回调
 */
+ (void)getStepsRankListWithUserId:(NSUInteger)userId page:(NSUInteger)page perPage:(NSUInteger)perPage city:(NSString *)city completeBlock:(RankCompleteBlock)complete;

/**
 获取用户精灵数量行榜
 
 @param userId 用户Id
 @param page 页数, 0为第一页
 @param perPage 每页数量
 @param city 城市
 @param complete 请求完成回调
 */
+ (void)getElfRankListWithUserId:(NSUInteger)userId page:(NSUInteger)page perPage:(NSUInteger)perPage city:(NSString *)city completeBlock:(RankCompleteBlock)complete;

@end
