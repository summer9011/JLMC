//
//  FileManager.m
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/10/31.
//
//

#import "FileManager.h"

@implementation FileManager

+ (NSString *)getAppDataCacheHomeDirectory {
    NSArray *paths = NSSearchPathForDirectoriesInDomains(NSLibraryDirectory, NSUserDomainMask, YES);
    NSString *libraryDirectory = [paths objectAtIndex:0];
    
    return libraryDirectory;
}

+ (NSString *)getCacheHomeDirectory {
    NSString *cacheHomeDirectory = [[FileManager getAppDataCacheHomeDirectory] stringByAppendingPathComponent:@"PlayelvesCache"];
    
    NSFileManager *fileManager = [NSFileManager defaultManager];
    
    BOOL isDir = YES;
    if (![fileManager fileExistsAtPath:cacheHomeDirectory isDirectory:&isDir]) {
        [fileManager createDirectoryAtPath:cacheHomeDirectory withIntermediateDirectories:YES attributes:nil error:nil];
    }
    
    return cacheHomeDirectory;
}

+ (NSString *)getIconsCachePath {
    NSString *iconCachePath = [[FileManager getCacheHomeDirectory] stringByAppendingPathComponent:@"Icons.plist"];
    
    NSFileManager *fileManager = [NSFileManager defaultManager];
    
    BOOL isDir = NO;
    if (![fileManager fileExistsAtPath:iconCachePath isDirectory:&isDir]) {
        [fileManager createFileAtPath:iconCachePath contents:[NSData data] attributes:nil];
    }
    
    return iconCachePath;
}

@end
