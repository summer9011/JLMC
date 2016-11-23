//
//  Rank.m
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/11/23.
//
//

#import "Rank.h"

@implementation Rank

+ (void)getStepsRankListWithUserId:(NSUInteger)userId page:(NSUInteger)page perPage:(NSUInteger)perPage city:(NSString *)city completeBlock:(RankCompleteBlock)complete {
    NSDictionary *params = @{
                             @"userId": @(userId),
                             @"pageIndex": @(page),
                             @"countPerPage": @(perPage),
                             @"city": city
                             };
    
    [[SessionNetwork defaultNetwork] getURL:@"/rank/getStepsRankList" params:params completePercent:nil success:^(id response) {
        if (complete) {
            complete(YES, response, nil);
        }
        
    } failure:^(NSUInteger errorCode, NSString *errorMsg) {
        if (complete) {
            complete(NO, nil, errorMsg);
        }
    }];
}

+ (void)getElfRankListWithUserId:(NSUInteger)userId page:(NSUInteger)page perPage:(NSUInteger)perPage city:(NSString *)city completeBlock:(RankCompleteBlock)complete {
    NSDictionary *params = @{
                             @"userId": @(userId),
                             @"pageIndex": @(page),
                             @"countPerPage": @(perPage),
                             @"city": city
                             };
    
    [[SessionNetwork defaultNetwork] getURL:@"/rank/getElfRankList" params:params completePercent:nil success:^(id response) {
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
