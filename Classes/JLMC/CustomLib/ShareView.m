//
//  ShareView.m
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/11/15.
//
//

#import "ShareView.h"

@interface ShareView ()

@property (weak, nonatomic) IBOutlet UIView *contentView;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *contentViewConsBottom;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *contentViewConsHeight;

@property (weak, nonatomic) IBOutlet UIButton *wechatBtn;
@property (weak, nonatomic) IBOutlet UIButton *timelineBtn;
@property (weak, nonatomic) IBOutlet UIButton *weiboBtn;
@property (weak, nonatomic) IBOutlet UIButton *qqBtn;

@end

@implementation ShareView

- (void)awakeFromNib {
    [super awakeFromNib];
    
    UITapGestureRecognizer *tap = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(hide)];
    [self addGestureRecognizer:tap];
    
    self.alpha = 0.f;
    self.contentViewConsBottom.constant = 0 - self.contentViewConsHeight.constant;
}

- (IBAction)doShareAction:(id)sender {
    if ([sender isEqual:self.wechatBtn]) {
        NSLog(@"微信");
    }
    
    if ([sender isEqual:self.timelineBtn]) {
        NSLog(@"朋友圈");
    }
    
    if ([sender isEqual:self.weiboBtn]) {
        NSLog(@"微博");
    }
    
    if ([sender isEqual:self.qqBtn]) {
        NSLog(@"QQ");
    }
}

+ (ShareView *)singleShareView {
    ShareView *tmpView = [[NSBundle mainBundle] loadNibNamed:@"ShareView" owner:nil options:nil].firstObject;
    tmpView.frame = [UIScreen mainScreen].bounds;
    
    return tmpView;
}

- (void)showInView:(UIView *)parentView {
    if (![parentView.subviews containsObject:self]) {
        [parentView addSubview:self];
    }
    
    self.alpha = 0.f;
    
    [UIView animateWithDuration:0.1 animations:^{
        self.alpha = 1.f;
    } completion:^(BOOL finished) {
        self.contentViewConsBottom.constant = 0.f;
        
        [UIView animateWithDuration:0.2 animations:^{
            [self layoutIfNeeded];
        }];
    }];
    
}

- (void)hide {
    self.contentViewConsBottom.constant = 0 - self.contentViewConsHeight.constant;
    
    [UIView animateWithDuration:0.2 animations:^{
        [self layoutIfNeeded];
    } completion:^(BOOL finished) {
        [UIView animateWithDuration:0.1 animations:^{
            self.alpha = 0.f;
        } completion:^(BOOL finished) {
            [self removeFromSuperview];
        }];
    }];
}

@end
