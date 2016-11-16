//
//  SupplyAnno.h
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/11/16.
//
//

#import <MAMapKit/MAMapKit.h>

@interface SupplyAnno : MAPointAnnotation

@property (nonatomic, assign) BOOL isPrivate;

@property (nonatomic, copy) NSDictionary *supplyDic;

@end
