//
//  Order.m
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/11/2.
//
//

#import "Order.h"

@implementation Order

+ (void)payOrderWithUserId:(NSUInteger)userId goodsId:(NSUInteger)goodsId count:(NSUInteger)count completeBlock:(OrderCompleteBlock)complete {
    NSDictionary *params = @{
                             @"userId": @(userId),
                             @"goodsId": @(goodsId),
                             @"count": @(count),
                             @"client": @"ios"
                             };
    
    [[SessionNetwork defaultNetwork] getURL:@"/sto/payOrder" params:params completePercent:nil success:^(id response) {
        if (complete) {
            complete(YES, response[@"orderId"], nil);
        }
        
    } failure:^(NSUInteger errorCode, NSString *errorMsg) {
        if (complete) {
            complete(NO, nil, errorMsg);
        }
    }];
}

+ (void)getOrderListWithUserId:(NSUInteger)userId page:(NSUInteger)page perPage:(NSUInteger)perPage completeBlock:(OrderCompleteBlock)complete {
    NSDictionary *params = @{
                             @"userId": @(userId),
                             @"pageIndex": @(page),
                             @"countPerPage": @(perPage)
                             };
    
    [[SessionNetwork defaultNetwork] getURL:@"/sto/getOrderList" params:params completePercent:nil success:^(id response) {
        if (complete) {
            complete(YES, response, nil);
        }
        
    } failure:^(NSUInteger errorCode, NSString *errorMsg) {
        if (complete) {
            complete(NO, nil, errorMsg);
        }
    }];
}

+ (void)getOrderDetailWithOrderId:(NSUInteger)orderId completeBlock:(OrderCompleteBlock)complete {
    NSDictionary *params = @{
                             @"orderId": @(orderId)
                             };
    
    [[SessionNetwork defaultNetwork] getURL:@"/sto/getOrderDetail" params:params completePercent:nil success:^(id response) {
        if (complete) {
            complete(YES, response, nil);
        }
        
    } failure:^(NSUInteger errorCode, NSString *errorMsg) {
        if (complete) {
            complete(NO, nil, errorMsg);
        }
    }];
}

@end
