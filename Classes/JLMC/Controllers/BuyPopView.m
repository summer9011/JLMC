//
//  BuyPopView.m
//  Unity-iPhone
//
//  Created by 赵立波 on 16/11/15.
//
//

#import "BuyPopView.h"

@interface BuyPopView ()

@property (weak, nonatomic) IBOutlet UIView *contentView;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *contentViewConsBottom;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *contentViewConsHeight;

@property (weak, nonatomic) IBOutlet UIImageView *closeImageView;
@property (weak, nonatomic) IBOutlet UIButton *closeBtn;

@property (weak, nonatomic) IBOutlet UIButton *pBtn;
@property (weak, nonatomic) IBOutlet UILabel *numberLabel;
@property (weak, nonatomic) IBOutlet UIButton *mBtn;

@property (weak, nonatomic) IBOutlet GradientColorButton *doneBtn;

@property (nonatomic, assign) NSUInteger number;

@end

@implementation BuyPopView

- (void)awakeFromNib {
    [super awakeFromNib];
    
    self.number = 1;
    
    self.alpha = 0.f;
    self.contentViewConsBottom.constant = 0 - self.contentViewConsHeight.constant;
}

- (IBAction)doCloseAction:(id)sender {
    [self hide];
}

- (IBAction)doChangeNumber:(id)sender {
    if ([sender isEqual:self.mBtn]) {
        self.number --;
        
        if (self.number <= 1) {
            self.number = 1;
        }
    }
    
    if ([sender isEqual:self.pBtn]) {
        self.number ++;
    }
    
    self.numberLabel.text = [NSString stringWithFormat:@"%ld", self.number];
    
}

- (IBAction)doDoneAction:(id)sender {
    if (self.dele && [self.dele respondsToSelector:@selector(didBuyGood:)]) {
        [self.dele didBuyGood:self.number];
    }
    
    [self hide];
}

- (void)showIn:(UIView *)parentView {
    if (![parentView.subviews containsObject:self]) {
        [parentView addSubview:self];
    }
    
    self.alpha = 0.f;
    
    [UIView animateWithDuration:0.1 animations:^{
        self.alpha = 1.f;
    } completion:^(BOOL finished) {
        self.contentViewConsBottom.constant = 0;
        
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
