//
//  Market.h
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/11/2.
//
//

#import <Foundation/Foundation.h>

typedef void(^MarketCompleteBlock)(BOOL success, id response, NSString *errStr);

static NSString *MarketGoodCatch = @"catch";
static NSString *MarketGoodFeed = @"feed";
static NSString *MarketGoodAttract = @"attract";
static NSString *MarketGoodAll = @"all";

@interface Market : NSObject

/**
 获取商品列表
 
 @param page 页数, 0为第一页
 @param perPage 每页数量
 @param type 商品的类型
 @param complete 请求完成回调
 */
+ (void)getGoodsListWithPage:(NSUInteger)page perPage:(NSUInteger)perPage type:(NSString *)type completeBlock:(MarketCompleteBlock)complete;

/**
 获取商品详情
 
 @param goodsId 商品Id
 @param complete 请求完成回调
 */
+ (void)getGoodsDetailWithGoodsId:(NSUInteger)goodsId completeBlock:(MarketCompleteBlock)complete;

@end
