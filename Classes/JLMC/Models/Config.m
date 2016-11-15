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

+ (void)getAppConfigWithCompleteBlock:(ConfigCompleteBlock)complete {
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

+ (NSString *)getIP {
    NSString *address = nil;
    
    struct ifaddrs *interfaces = NULL;
    struct ifaddrs *temp_addr = NULL;
    int success = 0;
    // retrieve the current interfaces - returns 0 on success
    success = getifaddrs(&interfaces);
    if (success == 0)
    {
        // Loop through linked list of interfaces
        temp_addr = interfaces;
        while(temp_addr != NULL)
        {
            if(temp_addr->ifa_addr->sa_family == AF_INET)
            {
                // Check if interface is en0 which is the wifi connection on the iPhone
                if([[NSString stringWithUTF8String:temp_addr->ifa_name] isEqualToString:@"en0"])
                {
                    // Get NSString from C String
                    address = [NSString stringWithUTF8String:inet_ntoa(((struct sockaddr_in *)temp_addr->ifa_addr)->sin_addr)];
                }
            }
            temp_addr = temp_addr->ifa_next;
        }
    }
    // Free memory
    freeifaddrs(interfaces);
    
    if (address == nil) {
        address = @"127.0.0.1";
    }
    
    return address;
}

@end
