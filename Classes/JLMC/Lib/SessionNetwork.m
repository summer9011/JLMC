//
//  SessionNetwork.m
//  cuncunle
//
//  Created by 赵立波 on 16/2/25.
//  Copyright © 2016年 村村乐. All rights reserved.
//

#import "SessionNetwork.h"

#define NetworkTimeoutInterval 30

@interface SessionNetwork ()

@property (nonatomic, strong) AFHTTPSessionManager *sessionManager;
@property (nonatomic, strong) OSSClient *client;

@end

static SessionNetwork *defaultNetwork = nil;

@implementation SessionNetwork

+ (SessionNetwork *)defaultNetwork {
    static dispatch_once_t predicate;
    
    dispatch_once(&predicate, ^{
        defaultNetwork = [[self alloc] init];
        
        //初始化AFNetworking
        defaultNetwork.sessionManager = [AFHTTPSessionManager manager];
        
        NSString *version = [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"];
        [defaultNetwork.sessionManager.requestSerializer setValue:version forHTTPHeaderField:@"version"];
        
        defaultNetwork.sessionManager.requestSerializer.timeoutInterval = NetworkTimeoutInterval;
        
        defaultNetwork.sessionManager.responseSerializer = [AFJSONResponseSerializer serializer];
        defaultNetwork.sessionManager.responseSerializer.acceptableContentTypes = [NSSet setWithObjects:@"application/json", nil];
        
        //初始化AliyunOSS
        id<OSSCredentialProvider> credential = [[OSSPlainTextAKSKPairCredentialProvider alloc] initWithPlainTextAccessKey:AliyunOSS_Key secretKey:AliyunOSS_Secret];
        
        OSSClientConfiguration *conf = [OSSClientConfiguration new];
        
        conf.maxRetryCount = 2;
        conf.timeoutIntervalForRequest = 30;
        conf.timeoutIntervalForResource = 24 * 60 * 60;
        
        defaultNetwork.client = [[OSSClient alloc] initWithEndpoint:AliyunOSS_Endpoint credentialProvider:credential clientConfiguration:conf];
    });
    
    return defaultNetwork;
}

- (void)cancelAllRequest {
    [self.sessionManager.tasks enumerateObjectsUsingBlock:^(id  _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
        NSURLSessionTask *sessionTask = obj;
        [sessionTask cancel];
    }];
}

- (void)cancelRequestTask:(NSURLSessionTask *)sessionTask {
    [sessionTask cancel];
}

- (NSURLSessionDataTask *)getURL:(NSString *)url params:(NSDictionary *)params completePercent:(void (^)(CGFloat percent))percentBlock success:(void (^)(id response))successBlock failure:(void (^)(NSUInteger errorCode, NSString *errorMsg))failureBlock {
    NSString *fullURL = [APIDomain stringByAppendingString:url];
    
    NSURLSessionDataTask *task = [self.sessionManager GET:fullURL parameters:params progress:^(NSProgress * _Nonnull downloadProgress) {
        if (percentBlock) {
            percentBlock(downloadProgress.completedUnitCount/(CGFloat)downloadProgress.totalUnitCount);
        }
        
    } success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {
        NSLog(@"GET url %@, params %@, result %@", fullURL, params, responseObject);
        
        NSDictionary *respoinseDic = (NSDictionary *)responseObject;
        
        if ([respoinseDic[@"returnValue"] integerValue] == 0) {
            if (successBlock) {
                successBlock(respoinseDic[@"data"]);
            }
        } else {
            if (failureBlock) {
                failureBlock([respoinseDic[@"returnValue"] integerValue], respoinseDic[@"errMsg"]);
            }
        }
        
    } failure:^(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error) {
        NSLog(@"GET url %@, params %@, error %@", fullURL, params, error);
        
        if (failureBlock) {
            failureBlock(-9999, [error localizedDescription]);
        }
        
    }];
    
    return task;
}

- (NSURLSessionDataTask *)postURL:(NSString *)url params:(NSDictionary *)params completePercent:(void (^)(CGFloat percent))percentBlock success:(void (^)(id response))successBlock failure:(void (^)(NSUInteger errorCode, NSString *errorMsg))failureBlock {
    NSString *fullURL = [APIDomain stringByAppendingString:url];
    
    NSURLSessionDataTask *task = [self.sessionManager POST:fullURL parameters:params progress:^(NSProgress * _Nonnull uploadProgress) {
        if (percentBlock) {
            percentBlock(uploadProgress.completedUnitCount/(CGFloat)uploadProgress.totalUnitCount);
        }
        
    } success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {
        NSLog(@"POST url %@, params %@, result %@", fullURL, params, responseObject);
        
        NSDictionary *respoinseDic = (NSDictionary *)responseObject;
        
        if ([respoinseDic[@"returnValue"] integerValue] == 0) {
            if (successBlock) {
                successBlock(respoinseDic[@"data"]);
            }
        } else {
            if (failureBlock) {
                failureBlock([respoinseDic[@"returnValue"] integerValue], respoinseDic[@"errMsg"]);
            }
        }
        
    } failure:^(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error) {
        NSLog(@"POST url %@, params %@, error %@", fullURL, params, error);
        
        if (failureBlock) {
            failureBlock(-9999, [error localizedDescription]);
        }
        
    }];
    
    return task;
}

- (void)aliyuOSS_putImage:(UIImage *)image completePercent:(void (^)(CGFloat percent))percentBlock success:(void (^)(id response))successBlock failure:(void (^)(NSUInteger errorCode, NSString *errorMsg))failureBlock {
    NSString *uuid = [[NSUUID UUID] UUIDString];
    
    OSSPutObjectRequest *put = [OSSPutObjectRequest new];
    
    put.bucketName = AliyunOSS_Bucket;
    put.objectKey = [NSString stringWithFormat:@"iOS%@.jpg", uuid];
    put.uploadingData = UIImageJPEGRepresentation(image, 0.7);
    
    put.uploadProgress = ^(int64_t bytesSent, int64_t totalBytesSent, int64_t totalBytesExpectedToSend){
        if (percentBlock) {
            percentBlock(totalBytesSent/(float)totalBytesExpectedToSend);
        }
    };
    
    OSSTask *putTask = [self.client putObject:put];
    
    [putTask continueWithBlock:^id _Nullable(OSSTask * _Nonnull task) {
        if (!task.error) {
            if (successBlock) {
                successBlock(put.objectKey);
            }
            
        } else {
            if (failureBlock) {
                failureBlock(task.error.code, [task.error localizedDescription]);
            }
        }
        
        return nil;
    }];
    
}

@end
