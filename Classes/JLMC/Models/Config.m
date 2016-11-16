//
//  Config.m
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/10/31.
//
//

#import "Config.h"

#import <ifaddrs.h>
#import <arpa/inet.h>

@implementation Config

+ (BOOL)cachedSyncIcons:(NSArray *)iconArr {
    NSString *iconCachePath = [FileManager getIconsCachePath];
    return [iconArr writeToFile:iconCachePath atomically:YES];
}

+ (NSArray *)getNewestLocalCacheIcons {
    NSString *iconCachePath = [FileManager getIconsCachePath];
    NSArray *iconArr = [NSArray arrayWithContentsOfFile:iconCachePath];
    
    if (iconArr == nil || iconArr.count == 0) {
        return nil;
    }
    
    return iconArr;
}

+ (void)getSysParamWithCompleteBlock:(ConfigCompleteBlock)complete {
    [[SessionNetwork defaultNetwork] getURL:@"/misc/getSysParam" params:nil completePercent:nil success:^(id response) {
        NSDictionary *dic = response;
        
        if (dic == nil || [dic isEqual:[NSNull null]] || dic.count == 0) {
            complete(NO, nil);
        } else {
            [[NSUserDefaults standardUserDefaults] setObject:dic forKey:UserDefaults_Config];
            [[NSUserDefaults standardUserDefaults] synchronize];
            
            complete(YES, nil);
        }
    } failure:^(NSUInteger errorCode, NSString *errorMsg) {
        if (complete) {
            complete(NO, errorMsg);
        }
    }];
}

+ (void)getMainPageIconListWithCompleteBlock:(ConfigCompleteBlock)complete {
    [[SessionNetwork defaultNetwork] getURL:@"/misc/getMainPageIconList" params:nil completePercent:nil success:^(id response) {
        NSArray *list = response[@"list"];
        
        if (list == nil || [list isEqual:[NSNull null]] || list.count == 0) {
            complete(NO, nil);
        } else {
            BOOL cacheResult = [Config cachedSyncIcons:list];
            NSLog(@"保存AppConfig结果 %d", cacheResult);
            
            complete(YES, nil);
        }
        
    } failure:^(NSUInteger errorCode, NSString *errorMsg) {
        if (complete) {
            complete(NO, errorMsg);
        }
        
    }];
}

@end
