//
//  UIViewController+Hud.h
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/10/31.
//
//

#import <UIKit/UIKit.h>
#import <MBProgressHUD/MBProgressHUD.h>

@interface UIViewController (Hud)

/**
 正在加载中
 
 @param msg 提示文字
 */
- (void)hud_showLoadingWithMsg:(NSString *)msg;

/**
 延时隐藏（显示正确图标）
 
 @param msg 提示文字
 */
- (void)hud_hideLoadingWithSuccessMsg:(NSString *)msg;

/**
 延时隐藏（显示错误图标）
 
 @param msg 提示文字
 */
- (void)hud_hideLoadingWithErrorMsg:(NSString *)msg;

/**
 隐藏（立即隐藏）
 
 @param msg 提示文字
 */
- (void)hud_hideQuick;

/**
 显示后延时隐藏（显示正确图标）
 
 @param msg 提示文字
 */
- (void)hud_showSuccessWithMsg:(NSString *)msg;

/**
 显示后延时隐藏（显示错误图标）
 
 @param msg 提示文字
 */
- (void)hud_showErrorWithMsg:(NSString *)msg;

@end
