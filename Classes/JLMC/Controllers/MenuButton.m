//
//  MenuButton.m
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/10/25.
//
//

#import "MenuButton.h"

@interface MenuButton ()

@property (nonatomic, weak) UILabel *redPoint;

@end

@implementation MenuButton

+ (instancetype)buttonWithType:(UIButtonType)buttonType {
    MenuButton *menuBtn = [super buttonWithType:buttonType];
    
    if (menuBtn) {
        menuBtn.adjustsImageWhenHighlighted = NO;
        menuBtn.adjustsImageWhenDisabled = NO;
        
        menuBtn.imageView.contentMode = UIViewContentModeScaleAspectFit;
        
        [menuBtn addRedPoint];
    }
    
    return menuBtn;
}

- (void)addRedPoint {
    UILabel *point = [[UILabel alloc] initWithFrame:CGRectMake(0, 0, 20, 20)];
    point.center = CGPointMake(60, 10);
    point.textColor = [UIColor whiteColor];
    point.font = [UIFont systemFontOfSize:14];
    point.textAlignment = NSTextAlignmentCenter;
    point.backgroundColor = RGB(247, 76, 49);
    point.layer.masksToBounds = YES;
    point.layer.cornerRadius = 10;
    
    [self addSubview:point];
    
    self.redPoint = point;
    self.redPoint.hidden = YES;
}

- (void)setType:(MenuItemType)type {
    _type = type;
    
    if (type == MenuItemSetting) {
        [self setImage:[UIImage imageNamed:@"SettingIcon"] forState:UIControlStateNormal];
        self.frame = CGRectMake(0, 0, 26, 24);
        
    } else if (type == MenuItemClose) {
        [self setImage:[UIImage imageNamed:@"CloseIcon"] forState:UIControlStateNormal];
        self.frame = CGRectMake(0, 0, 45, 45);
        
    } else {
        self.frame = CGRectMake(0, 0, 76, 100);
        
        NSDictionary *defaultInfo = [MenuButton defaultInfoForType:type];
        
        [self setTitle:defaultInfo[@"title"] forState:UIControlStateNormal];
        [self setImage:[UIImage imageNamed:defaultInfo[@"image"]] forState:UIControlStateNormal];
        
        [self setTitleColor:RGB(51, 51, 51) forState:UIControlStateNormal];
        self.titleLabel.font = [UIFont systemFontOfSize:14];
        
        [self resetContentInsets];
    }
    
}

- (void)setPosition:(CGPoint)position {
    _position = position;
    
    self.frame = CGRectMake(position.x, position.y, self.frame.size.width, self.frame.size.height);
}

- (void)setNumber:(NSUInteger)number {
    _number = number;
    
    if (self.type != MenuItemSetting && self.type != MenuItemClose && self.type != MenuItemNone) {
        NSString *numberStr = [NSString stringWithFormat:@"%lu", (unsigned long)number];
        
        CGRect oldRect = self.redPoint.frame;
        CGSize labelSize = [numberStr boundingRectWithSize:CGSizeMake(MAXFLOAT, 20) options:NSStringDrawingUsesLineFragmentOrigin attributes:@{NSFontAttributeName: self.redPoint.font} context:nil].size;
        if (labelSize.width < oldRect.size.height - 8) {
            labelSize.width = oldRect.size.height;
        } else {
            labelSize.width += 8;
        }
        
        self.redPoint.frame = CGRectMake(oldRect.origin.x, oldRect.origin.y, labelSize.width, oldRect.size.height);
        
        if (number > 99) {
            self.redPoint.hidden = NO;
            self.redPoint.text = @"99+";
        } else if (number == 0) {
            self.redPoint.hidden = YES;
        } else {
            self.redPoint.hidden = NO;
            self.redPoint.text = numberStr;
        }
        
    }
}

- (void)resetBtnWithName:(NSString *)name iconStr:(NSString *)icon {
    NSDictionary *defaultInfo = [MenuButton defaultInfoForType:self.type];
    
    if (name == nil) {
        [self setTitle:defaultInfo[@"title"] forState:UIControlStateNormal];
        [self setImage:[UIImage imageNamed:defaultInfo[@"image"]] forState:UIControlStateNormal];

    } else {
        __weak MenuButton *weakSelf = self;
        
        [self sd_setImageWithURL:[NSURL URLWithString:icon] forState:UIControlStateNormal placeholderImage:[UIImage imageNamed:defaultInfo[@"image"]] completed:^(UIImage * _Nullable image, NSError * _Nullable error, SDImageCacheType cacheType, NSURL * _Nullable imageURL) {
            [weakSelf setTitle:name forState:UIControlStateNormal];
            [weakSelf resetContentInsets];
        }];
    }
    
}

- (void)resetContentInsets {
    CGFloat imageCenterX = CGRectGetMidX(self.imageView.frame);
    CGFloat imageCenterY = CGRectGetMidY(self.imageView.frame);
    
    CGFloat titleCenterX = CGRectGetMidX(self.titleLabel.frame);
    CGFloat titleCenterY = CGRectGetMidY(self.titleLabel.frame);
    
    self.imageEdgeInsets = UIEdgeInsetsMake(0 - imageCenterY/2.f, 0, 0, 0);
    self.titleEdgeInsets = UIEdgeInsetsMake(0, 0 - titleCenterX/2.f - imageCenterX, 0 - CGRectGetHeight(self.frame) + titleCenterY/2.f, 0);
}

- (void)layoutSubviews {
    [super layoutSubviews];
    
    if (self.type != MenuItemClose && self.type != MenuItemSetting && self.type != MenuItemNone) {
        self.imageView.frame = CGRectMake(0, 0, 76, 76);
        
        self.titleLabel.textAlignment = NSTextAlignmentCenter;
        self.titleLabel.frame = CGRectMake(0, 79, 76, 17);
    }
    
}

+ (NSDictionary *)defaultInfoForType:(MenuItemType)type {
    NSString *imgName = @"";
    NSString *titleName = @"";
    
    if (type == MenuItemOuyu) {
        imgName = @"OyMenuIcon";
        titleName = @"偶遇";
        
    } else if (type == MenuItemMessage) {
        imgName = @"NewsMenuIcon";
        titleName = @"消息";
        
    } else if (type == MenuItemMarket) {
        imgName = @"JhscMenuIcon";
        titleName = @"交换市场";
        
    } else if (type == MenuItemSpirit) {
        imgName = @"FairyMenuIcon";
        titleName = @"我的精灵";
        
    } else if (type == MenuItemMyBag) {
        imgName = @"MybagMenuIcon";
        titleName = @"我的背包";
        
    } else if (type == MenuItemGameShop) {
        imgName = @"GameMenuIcon";
        titleName = @"游戏商城";
        
    } else if (type == MenuItemMyFriend) {
        imgName = @"FriendsMenuIcon";
        titleName = @"我的好友";
        
    } else if (type == MenuItemGameCircle) {
        imgName = @"PlayMenuIcon";
        titleName = @"游戏圈";
        
    } else if (type == MenuItemRank) {
        imgName = @"RankinglistMenuIcon";
        titleName = @"排行榜";
        
    }
    
    return @{
             @"title": titleName,
             @"image": imgName
             };
}

@end
