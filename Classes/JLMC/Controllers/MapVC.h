//
//  MapVC.h
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/11/6.
//
//

#import "BaseVC.h"

@interface MapVC : BaseVC

@property (nonatomic, strong) CLLocation *userLocation;

@property (nonatomic, assign) NSInteger selectedElfId;

@end
