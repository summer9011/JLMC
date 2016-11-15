//
//  MenuButton.h
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/10/25.
//
//

#import <UIKit/UIKit.h>

/**
 菜单列表
 
 - MenuItemSetting:    设置
 - MenuItemOuyu:       偶遇
 - MenuItemMessage:    消息
 - MenuItemMarket:     交换市场
 - MenuItemSpirit:     我的精灵
 - MenuItemMyBag:      我的背包
 - MenuItemGameShop:   游戏商城
 - MenuItemMyFriend:   我的好友
 - MenuItemGameCircle: 游戏圈
 - MenuItemRank:       排行榜
 - MenuItemClose:      关闭
 - MenuItemNone:       未设置
 */
typedef NS_ENUM(NSUInteger, MenuItemType) {
    MenuItemSetting,
    MenuItemOuyu,
    MenuItemMessage,
    MenuItemMarket,
    MenuItemSpirit,
    MenuItemMyBag,
    MenuItemGameShop,
    MenuItemMyFriend,
    MenuItemGameCircle,
    MenuItemRank,
    MenuItemClose,
    MenuItemNone
};

@interface MenuButton : UIButton

/**
 菜单按钮类型
 */
@property (nonatomic, assign) MenuItemType          type;

/**
 left, top信息
 */
@property (nonatomic, assign) CGPoint               position;

/**
 消息数量，0为不显示，大于99显示为99+
 */
@property (nonatomic, assign) NSUInteger            number;

- (void)resetBtnWithName:(NSString *)name iconStr:(NSString *)icon;

@end
