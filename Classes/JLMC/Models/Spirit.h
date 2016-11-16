//
//  Spirit.h
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/11/2.
//
//

#import <Foundation/Foundation.h>

typedef void(^SpiritCompleteBlock)(BOOL success, id response, NSString *errStr);

static NSString *SupplyTypePersonal     =       @"personal";
static NSString *SupplyTypePublic       =       @"public";

@interface Spirit : NSObject

/**
 获取周边补给站列表
 
 @param longitude 经度
 @param latitude 纬度
 @param complete 请求完成回调
 */
+ (void)getNearbySupplyListWithLongitude:(NSString *)longitude latitude:(NSString *)latitude completeBlock:(SpiritCompleteBlock)complete;

/**
 获取周边认领的补给站列表
 
 @param longitude 经度
 @param latitude 纬度
 @param complete 请求完成回调
 */
+ (void)getNearbyPersonalSupplyListWithLongitude:(NSString *)longitude latitude:(NSString *)latitude completeBlock:(SpiritCompleteBlock)complete;

/**
 获取补给站详情
 
 @param userId 用户Id
 @param splyId 补给站Id
 @param splyWeight 补给站热度，取poiweight值
 @param complete 请求完成回调
 */
+ (void)getSupplyDetailWithUserId:(NSUInteger)userId splyId:(NSString *)splyId splyWeight:(NSString *)splyWeight completeBlock:(SpiritCompleteBlock)complete;

/**
 获取认领补给站详情
 
 @param userId 用户Id
 @param splyId 补给站Id
 @param splyWeight 补给站热度，取poiweight值
 @param complete 请求完成回调
 */
+ (void)getPersonalSupplyDetailWithUserId:(NSUInteger)userId splyId:(NSString *)splyId splyWeight:(NSString *)splyWeight completeBlock:(SpiritCompleteBlock)complete;

/**
 领取补给站物品
 
 @param userId 用户Id
 @param splyId 补给站Id
 @param splyWeight 补给站热度，取poiweight值
 @param complete 请求完成回调
 */
+ (void)receiveSupplyGiftWithUserId:(NSUInteger)userId splyId:(NSString *)splyId splyWeight:(NSString *)splyWeight completeBlock:(SpiritCompleteBlock)complete;

/**
 领取认领补给站物品
 
 @param userId 用户Id
 @param splyId 补给站Id
 @param splyWeight 补给站热度，取poiweight值
 @param hasCoupon 补给站是否卡券可领取（根据补给站物品详情接口判断），1：有，0：否
 @param complete 请求完成回调
 */
+ (void)receivePersonalSupplyGiftWithUserId:(NSUInteger)userId splyId:(NSString *)splyId splyWeight:(NSString *)splyWeight hasCoupon:(BOOL)hasCoupon completeBlock:(SpiritCompleteBlock)complete;

/**
 获取周边精灵列表
 
 @param longitude 经度
 @param latitude 纬度
 @param complete 请求完成回调
 */
+ (void)getNearbyElfListWithLongitude:(NSString *)longitude latitude:(NSString *)latitude completeBlock:(SpiritCompleteBlock)complete;

/**
 获取附近精灵详情
 
 @param poiElfId 周边产生的精灵编号，捕捉和获取精灵详情时提交的id
 @param complete 请求完成回调
 */
+ (void)getNearbyElfDetailWithPoiElfId:(NSUInteger)poiElfId completeBlock:(SpiritCompleteBlock)complete;

/**
 获取拥有的不同类型精灵商品列表
 
 @param userId 用户Id
 @param page 页数, 0为第一页
 @param perPage 每页数量
 @param type 商品类别
 @param complete 请求完成回调
 */
+ (void)getOwnElfGoodsListWithUserId:(NSUInteger)userId page:(NSUInteger)page perPage:(NSUInteger)perPage type:(NSString *)type completeBlock:(SpiritCompleteBlock)complete;

/**
 养成精灵
 
 @param userId 用户Id
 @param goodsId 商品Id
 @param getId 精灵Id
 @param complete 请求完成回调
 */
+ (void)feedElfWithUserId:(NSUInteger)userId goodsId:(NSUInteger)goodsId getId:(NSUInteger)getId completeBlock:(SpiritCompleteBlock)complete;

/**
 捕捉精灵
 
 @param userId 用户Id
 @param elfId 精灵Id
 @param catchId 捕捉器商品Id
 @param aim 瞄准率，取值范围1-10
 @param complete 请求完成回调
 */
+ (void)catchElfWithUserId:(NSUInteger)userId elfId:(NSUInteger)elfId catchId:(NSUInteger)catchId aim:(NSUInteger)aim completeBlock:(SpiritCompleteBlock)complete;

/**
 获取我的精灵列表
 
 @param userId 用户Id
 @param page 页数, 0为第一页
 @param perPage 每页数量
 @param complete 请求完成回调
 */
+ (void)getOwnElfListWithUserId:(NSUInteger)userId page:(NSUInteger)page perPage:(NSUInteger)perPage completeBlock:(SpiritCompleteBlock)complete;

/**
 获取精灵详情
 
 @param getId 精灵Id
 @param complete 请求完成回调
 */
+ (void)getOwnElfDetailWithGetId:(NSUInteger)getId completeBlock:(SpiritCompleteBlock)complete;

@end
