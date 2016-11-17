//
//  GradientColorButton.m
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/10/31.
//
//

#import "GradientColorButton.h"

@interface GradientColorButton ()

@property (nonatomic, weak) CAGradientLayer *gradientLayer;

@property (nonatomic, weak) CALayer *whiteLayer;

@end

@implementation GradientColorButton

+ (instancetype)buttonWithType:(UIButtonType)buttonType {
    GradientColorButton *button = [super buttonWithType:buttonType];
    
    if (button) {
        [button addLayer];
    }
    
    return button;
}

- (void)awakeFromNib {
    [super awakeFromNib];
    
    [self addLayer];
}

- (void)addLayer {
    CGRect screenRect = [UIScreen mainScreen].bounds;
    
    self.layer.masksToBounds = YES;
    self.layer.borderWidth = 1.f;
    self.layer.borderColor = RGB(63, 112, 238).CGColor;
    
    CAGradientLayer *layer = [[CAGradientLayer alloc] init];
    layer.frame = CGRectMake(0, 0, CGRectGetWidth(screenRect), CGRectGetHeight(screenRect));
    layer.startPoint = CGPointMake(0, 1);
    layer.endPoint = CGPointMake(1, 1);
    layer.colors = @[
                     (__bridge id)RGB(63, 112, 238).CGColor,
                     (__bridge id)RGB(144, 134, 238).CGColor,
                     ];
    [self.layer addSublayer:layer];
    
    self.gradientLayer = layer;
    
    CALayer *whiteLayer = [[CALayer alloc] init];
    whiteLayer.frame = CGRectMake(0, 0, CGRectGetWidth(screenRect), CGRectGetHeight(screenRect));
    whiteLayer.backgroundColor = [UIColor colorWithWhite:1 alpha:0.3].CGColor;
    [self.layer addSublayer:whiteLayer];
    
    self.whiteLayer = whiteLayer;
    
    self.whiteLayer.hidden = YES;
}

- (void)setEnabled:(BOOL)enabled {
    [super setEnabled:enabled];
    
    self.whiteLayer.hidden = enabled;
}

@end
