//
//  Spirit.m
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/11/2.
//
//

#import "Spirit.h"

@implementation Spirit

+ (void)getNearbySupplyListWithLongitude:(NSString *)longitude latitude:(NSString *)latitude completeBlock:(SpiritCompleteBlock)complete {
    NSDictionary *params = @{
                             @"lng": longitude,
                             @"lat": latitude
                             };
    
    [[SessionNetwork defaultNetwork] getURL:@"/sply/getNearbySupplyList" params:params completePercent:nil success:^(id response) {
        if (complete) {
            complete(YES, response[@"list"], nil);
        }
        
    } failure:^(NSUInteger errorCode, NSString *errorMsg) {
        if (complete) {
            complete(NO, nil, errorMsg);
        }
    }];
}

+ (void)getNearbyPersonalSupplyListWithLongitude:(NSString *)longitude latitude:(NSString *)latitude completeBlock:(SpiritCompleteBlock)complete {
    NSDictionary *params = @{
                             @"lng": longitude,
                             @"lat": latitude
                             };
    
    [[SessionNetwork defaultNetwork] getURL:@"/sply/getNearbyPersonalSupplyList" params:params completePercent:nil success:^(id response) {
        if (complete) {
            complete(YES, response[@"list"], nil);
        }
        
    } failure:^(NSUInteger errorCode, NSString *errorMsg) {
        if (complete) {
            complete(NO, nil, errorMsg);
        }
    }];
}

+ (void)getSupplyDetailWithUserId:(NSUInteger)userId splyId:(NSString *)splyId splyWeight:(NSString *)splyWeight completeBlock:(SpiritCompleteBlock)complete {
    NSDictionary *params = @{
                             @"userId": @(userId),
                             @"splyId": splyId,
                             @"splyWeight": splyWeight
                             };
    
    [[SessionNetwork defaultNetwork] getURL:@"/sply/getSupplyDetail" params:params completePercent:nil success:^(id response) {
        if (complete) {
            complete(YES, response, nil);
        }
        
    } failure:^(NSUInteger errorCode, NSString *errorMsg) {
        if (complete) {
            complete(NO, nil, errorMsg);
        }
    }];
}

+ (void)getPersonalSupplyDetailWithUserId:(NSUInteger)userId splyId:(NSString *)splyId splyWeight:(NSString *)splyWeight completeBlock:(SpiritCompleteBlock)complete {
    NSDictionary *params = @{
                             @"userId": @(userId),
                             @"splyId": splyId,
                             @"splyWeight": splyWeight
                             };
    
    [[SessionNetwork defaultNetwork] getURL:@"/sply/getPersonalSupplyDetail" params:params completePercent:nil success:^(id response) {
        if (complete) {
            complete(YES, response, nil);
        }
        
    } failure:^(NSUInteger errorCode, NSString *errorMsg) {
        if (complete) {
            complete(NO, nil, errorMsg);
        }
    }];
}

+ (void)receiveSupplyGiftWithUserId:(NSUInteger)userId splyId:(NSString *)splyId type:(NSString *)type completeBlock:(SpiritCompleteBlock)complete {
    NSDictionary *params = @{
                             @"userId": @(userId),
                             @"splyId": splyId,
                             @"type": type
                             };
    
    [[SessionNetwork defaultNetwork] postURL:@"/sply/receiveSupplyGift" params:params completePercent:nil success:^(id response) {
        if (complete) {
            complete(YES, nil, nil);
        }
        
    } failure:^(NSUInteger errorCode, NSString *errorMsg) {
        if (complete) {
            complete(NO, nil, errorMsg);
        }
    }];
}

+ (void)getNearbyElfListWithLongitude:(NSString *)longitude latitude:(NSString *)latitude completeBlock:(SpiritCompleteBlock)complete {
    NSDictionary *params = @{
                             @"lng": longitude,
                             @"lat": latitude
                             };
    
    [[SessionNetwork defaultNetwork] getURL:@"/elf/getNearbyElfList" params:params completePercent:nil success:^(id response) {
        if (complete) {
            complete(YES, response[@"list"], nil);
        }
        
    } failure:^(NSUInteger errorCode, NSString *errorMsg) {
        if (complete) {
            complete(NO, nil, errorMsg);
        }
    }];
}

+ (void)getElfDetailWithElfId:(NSUInteger)elfId completeBlock:(SpiritCompleteBlock)complete {
    NSDictionary *params = @{
                             @"elfId": @(elfId)
                             };
    
    [[SessionNetwork defaultNetwork] getURL:@"/elf/getElfDetail" params:params completePercent:nil success:^(id response) {
        if (complete) {
            complete(YES, response, nil);
        }
        
    } failure:^(NSUInteger errorCode, NSString *errorMsg) {
        if (complete) {
            complete(NO, nil, errorMsg);
        }
    }];
}

+ (void)getOwnElfGoodsListWithUserId:(NSUInteger)userId page:(NSUInteger)page perPage:(NSUInteger)perPage type:(NSString *)type completeBlock:(SpiritCompleteBlock)complete {
    NSDictionary *params = @{
                             @"userId": @(userId),
                             @"pageIndex": @(page),
                             @"countPerPage": @(perPage),
                             @"type": type
                             };
    
    [[SessionNetwork defaultNetwork] getURL:@"/elf/getOwnElfGoodsList" params:params completePercent:nil success:^(id response) {
        if (complete) {
            complete(YES, response[@"list"], nil);
        }
        
    } failure:^(NSUInteger errorCode, NSString *errorMsg) {
        if (complete) {
            complete(NO, nil, errorMsg);
        }
    }];
}

+ (void)feedElfWithUserId:(NSUInteger)userId goodsId:(NSUInteger)goodsId getId:(NSUInteger)getId completeBlock:(SpiritCompleteBlock)complete {
    NSDictionary *params = @{
                             @"userId": @(userId),
                             @"goodsId": @(goodsId),
                             @"getId": @(getId)
                             };
    
    [[SessionNetwork defaultNetwork] postURL:@"/elf/feedElf" params:params completePercent:nil success:^(id response) {
        if (complete) {
            complete(YES, response, nil);
        }
        
    } failure:^(NSUInteger errorCode, NSString *errorMsg) {
        if (complete) {
            complete(NO, nil, errorMsg);
        }
    }];
}

+ (void)catchElfWithUserId:(NSUInteger)userId elfId:(NSUInteger)elfId level:(NSString *)level catchId:(NSUInteger)catchId aim:(NSUInteger)aim completeBlock:(SpiritCompleteBlock)complete {
    NSDictionary *params = @{
                             @"userId": @(userId),
                             @"elfId": @(elfId),
                             @"level": level,
                             @"catchId": @(catchId),
                             @"aim": @(aim)
                             };
    
    [[SessionNetwork defaultNetwork] postURL:@"/elf/catchElf" params:params completePercent:nil success:^(id response) {
        if (complete) {
            complete(YES, response, nil);
        }
        
    } failure:^(NSUInteger errorCode, NSString *errorMsg) {
        if (complete) {
            complete(NO, nil, errorMsg);
        }
    }];
}

+ (void)getOwnElfListWithUserId:(NSUInteger)userId page:(NSUInteger)page perPage:(NSUInteger)perPage completeBlock:(SpiritCompleteBlock)complete {
    NSDictionary *params = @{
                             @"userId": @(userId),
                             @"pageIndex": @(page),
                             @"countPerPage": @(perPage)
                             };
    
    [[SessionNetwork defaultNetwork] getURL:@"/elf/getOwnElfList" params:params completePercent:nil success:^(id response) {
        if (complete) {
            complete(YES, response[@"list"], nil);
        }
        
    } failure:^(NSUInteger errorCode, NSString *errorMsg) {
        if (complete) {
            complete(NO, nil, errorMsg);
        }
    }];
}

+ (void)getOwnElfDetailWithGetId:(NSUInteger)getId completeBlock:(SpiritCompleteBlock)complete {
    NSDictionary *params = @{
                             @"getId": @(getId)
                             };
    
    [[SessionNetwork defaultNetwork] getURL:@"/elf/getOwnElfDetail" params:params completePercent:nil success:^(id response) {
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
