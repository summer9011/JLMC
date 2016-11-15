//
//  SessionNetwork.h
//  cuncunle
//
//  Created by 赵立波 on 16/2/25.
//  Copyright © 2016年 村村乐. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AFNetworking/AFNetworking.h>
#import <AliyunOSSiOS/OSSService.h>

@interface SessionNetwork : NSObject

+ (SessionNetwork *)defaultNetwork;

/**
 *  取消所有下载请求
 */
- (void)cancelAllRequest;

/**
 *  取消下载请求
 *
 *  @param sessionTask         网络请求Task
 */
- (void)cancelRequestTask:(NSURLSessionTask *)sessionTask;

/**
 *  GET请求数据
 *
 *  @param url                      URL
 *  @param percentBlock             进度回调
 *  @param successBlock             成功回调
 *  @param failureBlock             失败回调
 *
 *  @return 网络请求Task
 */
- (NSURLSessionDataTask *)getURL:(NSString *)url params:(NSDictionary *)params completePercent:(void (^)(CGFloat percent))percentBlock success:(void (^)(id response))successBlock failure:(void (^)(NSUInteger errorCode, NSString *errorMsg))failureBlock;

/**
 *  POST请求数据
 *
 *  @param url                      URL
 *  @param params                   请求参数
 *  @param percentBlock             进度回调
 *  @param successBlock             请求成功后回调
 *  @param failureBlock             请求失败后回调
 *
 *  @return NSURLSessionDataTask    网络请求Task
 */
- (NSURLSessionDataTask *)postURL:(NSString *)url params:(NSDictionary *)params completePercent:(void (^)(CGFloat percent))percentBlock success:(void (^)(id response))successBlock failure:(void (^)(NSUInteger errorCode, NSString *errorMsg))failureBlock;

/**
 *  上传图片到阿里云OSS
 *
 *  @param image                    图片
 *  @param percentBlock             进度回调
 *  @param successBlock             请求成功后回调
 *  @param failureBlock             请求失败后回调
 *
 *  @return NSURLSessionDataTask    网络请求Task
 */
- (void)aliyuOSS_putImage:(UIImage *)image completePercent:(void (^)(CGFloat percent))percentBlock success:(void (^)(id response))successBlock failure:(void (^)(NSUInteger errorCode, NSString *errorMsg))failureBlock;

@end
