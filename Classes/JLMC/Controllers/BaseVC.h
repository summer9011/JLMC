//
//  BaseVC.h
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/10/22.
//
//

#import <UIKit/UIKit.h>

@interface BaseVC : UIViewController

/**
 创建没有自定义头部的控制器

 @param nibNameOrNil
 @param nibBundleOrNil
 @return
 */
- (instancetype)initForNoCustomNaviWithNibName:(nullable NSString *)nibNameOrNil bundle:(nullable NSBundle *)nibBundleOrNil;

/**
 返回（通过Present或者Pop），其他返回方式需要重写该方法
 */
- (void)doBackAction;

@end
