//
//  TypeView.m
//  Unity-iPhone
//
//  Created by 赵立波 on 16/11/15.
//
//

#import "TypeView.h"

@interface TypeView ()

@property (weak, nonatomic) IBOutlet UIButton *catchBtn;
@property (weak, nonatomic) IBOutlet UIButton *feedBtn;
@property (weak, nonatomic) IBOutlet UIButton *attachBtn;

@property (weak, nonatomic) IBOutlet UIView *line;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *lineConsWidth;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *lineConsLeading;

@property (nonatomic, assign) CGFloat btnWidth;

@end

@implementation TypeView

- (void)awakeFromNib {
    [super awakeFromNib];
    
    self.backgroundColor = [UIColor clearColor];
    self.lineConsLeading.constant = 30;
    self.btnWidth = ([UIScreen mainScreen].bounds.size.width - 30 * 4 - 28)/3.f;
}

- (void)layoutSubviews {
    [super layoutSubviews];
    
    self.lineConsWidth.constant = self.btnWidth;
}

- (IBAction)doChangeAction:(id)sender {
    if (self.dele && [self.dele respondsToSelector:@selector(didSelectedType:)]) {
        NSString *str = nil;
        
        CGFloat leading = 30;
        
        if ([sender isEqual:self.catchBtn]) {
            str = MarketGoodCatch;
            leading = 30;
        } else if ([sender isEqual:self.feedBtn]) {
            str = MarketGoodFeed;
            leading = 30*2 + self.btnWidth;
        } else if ([sender isEqual:self.attachBtn]) {
            str = MarketGoodAttract;
            leading = 30*3 + self.btnWidth*2;
        }
        
        [self.dele didSelectedType:str];
        
        self.lineConsLeading.constant = leading;
        
    }
    
}

@end
