//
//  MenuView.m
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/10/25.
//
//

#import "MenuView.h"

@interface MenuView ()

@property (nonatomic, weak) MenuButton *ouyuBtn;
@property (nonatomic, weak) MenuButton *messageBtn;

@end

@implementation MenuView

+ (MenuView *)sharedMenuView {
    static MenuView *sharedMenuView = nil;
    
    static dispatch_once_t predicate;
    dispatch_once(&predicate, ^{
        sharedMenuView = [[self alloc] initWithFrame:[UIScreen mainScreen].bounds];
        [sharedMenuView setupUI];
    });
    
    return sharedMenuView;
}

#pragma mark - PublicMethod

- (void)showIn:(UIView *)parentView {
    if (![parentView.subviews containsObject:self]) {
        [parentView addSubview:self];
    }
}

- (void)reloadIcons:(NSArray *)iconArr {
    for (UIView *subView in self.subviews) {
        if ([subView isKindOfClass:[MenuButton class]]) {
            MenuButton *btn = (MenuButton *)subView;
            
            NSDictionary *tmpDic;
            
            if (btn.type == MenuItemOuyu) {
                if (iconArr[0]) {
                    tmpDic = iconArr[0];
                }
                
            } else if (btn.type == MenuItemMessage) {
                if (iconArr[1]) {
                    tmpDic = iconArr[1];
                }
                
            } else if (btn.type == MenuItemMarket) {
                if (iconArr[2]) {
                    tmpDic = iconArr[2];
                }
                
            } else if (btn.type == MenuItemSpirit) {
                if (iconArr[3]) {
                    tmpDic = iconArr[3];
                }
                
            } else if (btn.type == MenuItemMyBag) {
                if (iconArr[4]) {
                    tmpDic = iconArr[4];
                }
                
            } else if (btn.type == MenuItemGameShop) {
                if (iconArr[5]) {
                    tmpDic = iconArr[5];
                }
                
            } else if (btn.type == MenuItemMyFriend) {
                if (iconArr[6]) {
                    tmpDic = iconArr[6];
                }
                
            } else if (btn.type == MenuItemGameCircle) {
                if (iconArr[7]) {
                    tmpDic = iconArr[7];
                }
                
            } else if (btn.type == MenuItemRank) {
                if (iconArr[8]) {
                    tmpDic = iconArr[8];
                }
                
            }
            
            if (tmpDic) {
                [btn resetBtnWithName:tmpDic[@"name"] iconStr:tmpDic[@"icon"]];
            }
            
        }
    }
    
}

#pragma mark - PrivateMethod

- (void)hidden {
    [self removeFromSuperview];
}

- (void)setupUI {
    self.backgroundColor = [UIColor colorWithWhite:1.f alpha:0.7];
    
    //模糊层背景
    UIBlurEffect *blurEffect = [UIBlurEffect effectWithStyle:UIBlurEffectStyleLight];
    UIVisualEffectView *effectView = [[UIVisualEffectView alloc] initWithEffect:blurEffect];
    effectView.frame = self.bounds;
    [self addSubview:effectView];
    
    //我的背包
    MenuButton *mybagBtn = [MenuButton buttonWithType:UIButtonTypeCustom];
    mybagBtn.type = MenuItemMyBag;
    mybagBtn.position = CGPointMake((CGRectGetWidth(self.frame) - CGRectGetWidth(mybagBtn.frame))/2.f, (CGRectGetHeight(self.frame) - CGRectGetHeight(mybagBtn.frame))/2.f);
    [mybagBtn addTarget:self action:@selector(selectedItem:) forControlEvents:UIControlEventTouchUpInside];
    [self addSubview:mybagBtn];
    
    CGFloat offsetCenter = 32;
    
    //我的精灵
    MenuButton *myspiritBtn = [MenuButton buttonWithType:UIButtonTypeCustom];
    myspiritBtn.type = MenuItemSpirit;
    myspiritBtn.position = CGPointMake(mybagBtn.position.x - CGRectGetWidth(myspiritBtn.frame) - offsetCenter, mybagBtn.position.y);
    [myspiritBtn addTarget:self action:@selector(selectedItem:) forControlEvents:UIControlEventTouchUpInside];
    [self addSubview:myspiritBtn];
    
    //消息
    MenuButton *messageBtn = [MenuButton buttonWithType:UIButtonTypeCustom];
    messageBtn.type = MenuItemMessage;
    messageBtn.position = CGPointMake(mybagBtn.position.x, myspiritBtn.position.y - CGRectGetHeight(messageBtn.frame) - offsetCenter);
    [messageBtn addTarget:self action:@selector(selectedItem:) forControlEvents:UIControlEventTouchUpInside];
    [self addSubview:messageBtn];
    
    //游戏商城
    MenuButton *gameshopBtn = [MenuButton buttonWithType:UIButtonTypeCustom];
    gameshopBtn.type = MenuItemGameShop;
    gameshopBtn.position = CGPointMake(mybagBtn.position.x + CGRectGetWidth(gameshopBtn.frame) + offsetCenter, mybagBtn.position.y);
    [gameshopBtn addTarget:self action:@selector(selectedItem:) forControlEvents:UIControlEventTouchUpInside];
    [self addSubview:gameshopBtn];
    
    //游戏圈
    MenuButton *gamecircleBtn = [MenuButton buttonWithType:UIButtonTypeCustom];
    gamecircleBtn.type = MenuItemGameCircle;
    gamecircleBtn.position = CGPointMake(mybagBtn.position.x, mybagBtn.position.y + CGRectGetHeight(gamecircleBtn.frame) + offsetCenter);
    [gamecircleBtn addTarget:self action:@selector(selectedItem:) forControlEvents:UIControlEventTouchUpInside];
    [self addSubview:gamecircleBtn];
    
    //偶遇
    MenuButton *ouyuBtn = [MenuButton buttonWithType:UIButtonTypeCustom];
    ouyuBtn.type = MenuItemOuyu;
    ouyuBtn.position = CGPointMake(myspiritBtn.position.x, messageBtn.position.y);
    [ouyuBtn addTarget:self action:@selector(selectedItem:) forControlEvents:UIControlEventTouchUpInside];
    [self addSubview:ouyuBtn];
    
    //交换市场
    MenuButton *marketBtn = [MenuButton buttonWithType:UIButtonTypeCustom];
    marketBtn.type = MenuItemMarket;
    marketBtn.position = CGPointMake(gameshopBtn.position.x, messageBtn.position.y);
    [marketBtn addTarget:self action:@selector(selectedItem:) forControlEvents:UIControlEventTouchUpInside];
    [self addSubview:marketBtn];
    
    //我的好友
    MenuButton *friendBtn = [MenuButton buttonWithType:UIButtonTypeCustom];
    friendBtn.type = MenuItemMyFriend;
    friendBtn.position = CGPointMake(myspiritBtn.position.x, gamecircleBtn.position.y);
    [friendBtn addTarget:self action:@selector(selectedItem:) forControlEvents:UIControlEventTouchUpInside];
    [self addSubview:friendBtn];
    
    //排行榜
    MenuButton *rankBtn = [MenuButton buttonWithType:UIButtonTypeCustom];
    rankBtn.type = MenuItemRank;
    rankBtn.position = CGPointMake(gameshopBtn.position.x, gamecircleBtn.position.y);
    [rankBtn addTarget:self action:@selector(selectedItem:) forControlEvents:UIControlEventTouchUpInside];
    [self addSubview:rankBtn];
    
    //设置Button
    MenuButton *settingBtn = [MenuButton buttonWithType:UIButtonTypeCustom];
    settingBtn.type = MenuItemSetting;
    settingBtn.position = CGPointMake(gameshopBtn.position.x + CGRectGetWidth(gameshopBtn.frame) - CGRectGetWidth(settingBtn.frame), 40);
    [settingBtn addTarget:self action:@selector(selectedItem:) forControlEvents:UIControlEventTouchUpInside];
    [self addSubview:settingBtn];
    
    //关闭Button
    MenuButton *closeBtn = [MenuButton buttonWithType:UIButtonTypeCustom];
    closeBtn.type = MenuItemClose;
    closeBtn.position = CGPointMake((CGRectGetWidth(self.frame) - CGRectGetWidth(closeBtn.frame))/2.f, CGRectGetHeight(self.frame) - CGRectGetHeight(closeBtn.frame) - 20);
    [closeBtn addTarget:self action:@selector(selectedItem:) forControlEvents:UIControlEventTouchUpInside];
    [self addSubview:closeBtn];
    
    self.ouyuBtn = ouyuBtn;
    self.messageBtn = messageBtn;
}

- (void)setOuyuCount:(NSUInteger)ouyuCount {
    _ouyuCount = ouyuCount;
    
    self.ouyuBtn.number = ouyuCount;
}

- (void)setMessageCount:(NSUInteger)messageCount {
    _messageCount = messageCount;
    
    self.messageBtn.number = messageCount;
}

- (void)selectedItem:(MenuButton *)button {
    [self hidden];
    
    if (self.menuDele && [self.menuDele respondsToSelector:@selector(didSelectedMenuItem:)]) {
        [self.menuDele didSelectedMenuItem:button.type];
    }
}

@end
