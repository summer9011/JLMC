//
//  MenuView.h
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/10/25.
//
//

#import <UIKit/UIKit.h>

#import "MenuButton.h"

@protocol MenuViewDelegate <NSObject>

- (void)didSelectedMenuItem:(MenuItemType)type;

@end

@interface MenuView : UIView

@property (nonatomic, weak) id<MenuViewDelegate>        menuDele;

/**
 偶遇数量，0为不显示，大于99显示为99+
 */
@property (nonatomic, assign) NSUInteger                ouyuCount;

/**
 消息数量，0为不显示，大于99显示为99+
 */
@property (nonatomic, assign) NSUInteger                messageCount;

+ (MenuView *)sharedMenuView;

- (void)showIn:(UIView *)parentView;

- (void)reloadIcons:(NSArray *)iconArr;

@end
