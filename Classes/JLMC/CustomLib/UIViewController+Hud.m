//
//  UIViewController+Hud.m
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/10/31.
//
//

#import "UIViewController+Hud.h"
#define HudDelayDuration 1.5

@implementation UIViewController (Hud)

- (UIView *)viewForShowHud {
    UIView *view = self.view;
    
    if (self.tabBarController != nil) {
        view = self.tabBarController.view;
    }
    
    if (self.navigationController != nil) {
        view = self.navigationController.view;
    }
    
    return view;
}

- (void)hud_showLoadingWithMsg:(NSString *)msg {
    MBProgressHUD *hud = [MBProgressHUD showHUDAddedTo:[self viewForShowHud] animated:YES];
    hud.label.text = msg;
}

- (void)hud_hideLoadingWithSuccessMsg:(NSString *)msg {
    MBProgressHUD *hud = [MBProgressHUD HUDForView:[self viewForShowHud]];
    hud.label.text = msg;
    
    [hud hideAnimated:YES afterDelay:HudDelayDuration];
}

- (void)hud_hideLoadingWithErrorMsg:(NSString *)msg {
    MBProgressHUD *hud = [MBProgressHUD HUDForView:[self viewForShowHud]];
    hud.label.text = msg;
    
    [hud hideAnimated:YES afterDelay:HudDelayDuration];
}

- (void)hud_hideQuick {
    MBProgressHUD *hud = [MBProgressHUD HUDForView:[self viewForShowHud]];
    [hud hideAnimated:YES];
}

- (void)hud_showSuccessWithMsg:(NSString *)msg {
    MBProgressHUD *hud = [MBProgressHUD showHUDAddedTo:[self viewForShowHud] animated:YES];
    hud.label.text = msg;
    
    [hud hideAnimated:YES afterDelay:HudDelayDuration];
}

- (void)hud_showErrorWithMsg:(NSString *)msg {
    MBProgressHUD *hud = [MBProgressHUD showHUDAddedTo:[self viewForShowHud] animated:YES];
    hud.label.text = msg;
    
    [hud hideAnimated:YES afterDelay:HudDelayDuration];
}

@end
