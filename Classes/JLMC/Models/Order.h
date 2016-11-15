//
//  Order.h
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/11/2.
//
//

#import <Foundation/Foundation.h>

typedef void(^OrderCompleteBlock)(BOOL success, id response, NSString *errStr);

@interface Order : NSObject

/**
 支付商品订单
 
 @param userId 用户Id
 @param goodsId 商品Id
 @param count 数量Id
 @param complete 请求完成回调
 */
+ (void)payOrderWithUserId:(NSUInteger)userId goodsId:(NSUInteger)goodsId count:(NSUInteger)count completeBlock:(OrderCompleteBlock)complete;

/**
 获取商品订单列表
 
 @param userId 用户Id
 @param page 页数, 0为第一页
 @param perPage 每页数量
 @param complete 请求完成回调
 */
+ (void)getOrderListWithUserId:(NSUInteger)userId page:(NSUInteger)page perPage:(NSUInteger)perPage completeBlock:(OrderCompleteBlock)complete;

/**
 获取订单详情
 
 @param userId 订单Id
 @param complete 请求完成回调
 */
+ (void)getOrderDetailWithOrderId:(NSUInteger)orderId completeBlock:(OrderCompleteBlock)complete;

@end
