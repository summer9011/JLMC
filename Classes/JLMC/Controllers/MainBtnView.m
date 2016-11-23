//
//  MainBtnView.m
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/11/23.
//
//

#import "MainBtnView.h"

@interface MainBtnView ()

@property (nonatomic, weak) UIButton *button;
@property (nonatomic, weak) UIImageView *imageView;

@end

@implementation MainBtnView

- (instancetype)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
        UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
        btn.frame = self.bounds;
        btn.adjustsImageWhenHighlighted = NO;
        btn.adjustsImageWhenDisabled = NO;
        btn.imageView.contentMode = UIViewContentModeScaleAspectFit;
        
        [self addSubview:btn];
        
        self.button = btn;
        
        UIImageView *imgView = [[UIImageView alloc] initWithFrame:self.bounds];
        imgView.contentMode = UIViewContentModeScaleAspectFill;
        imgView.clipsToBounds = YES;
        
        [self addSubview:imgView];
        
        self.imageView = imgView;
    }
    
    return self;
}

- (void)setImageStr:(NSString *)imageStr {
    _imageStr = imageStr;
    
    if ([imageStr hasPrefix:@"http"]) {
        [self.imageView sd_setImageWithURL:[NSURL URLWithString:imageStr]];
    } else {
        self.imageView.image = [UIImage imageNamed:imageStr];
    }
    
}

- (void)addObject:(id)object TouchUpInside:(SEL)selector {
    [self.button addTarget:object action:selector forControlEvents:UIControlEventTouchUpInside];
}

@end
