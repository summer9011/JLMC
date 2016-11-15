//
//  FileManager.h
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/10/31.
//
//

#import <Foundation/Foundation.h>

@interface FileManager : NSObject

+ (NSString *)getAppDataCacheHomeDirectory;

+ (NSString *)getCacheHomeDirectory;

+ (NSString *)getIconsCachePath;

@end
