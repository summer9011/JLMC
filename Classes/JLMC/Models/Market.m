//
//  Market.m
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/11/2.
//
//

#import "Market.h"

@implementation Market

+ (void)getGoodsListWithPage:(NSUInteger)page perPage:(NSUInteger)perPage type:(NSString *)type completeBlock:(MarketCompleteBlock)complete {
    NSDictionary *params = @{
                             @"pageIndex": @(page),
                             @"countPerPage": @(perPage),
                             @"type": type
                             };
    
    [[SessionNetwork defaultNetwork] getURL:@"/sto/getGoodsList" params:params completePercent:nil success:^(id response) {
        if (complete) {
            complete(YES, response, nil);
        }
        
    } failure:^(NSUInteger errorCode, NSString *errorMsg) {
        if (complete) {
            complete(NO, nil, errorMsg);
        }
    }];
}

+ (void)getGoodsDetailWithGoodsId:(NSUInteger)goodsId completeBlock:(MarketCompleteBlock)complete {
    NSDictionary *params = @{
                             @"goodsId": @(goodsId)
                             };
    
    [[SessionNetwork defaultNetwork] getURL:@"/sto/getGoodsDetail" params:params completePercent:nil success:^(id response) {
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
