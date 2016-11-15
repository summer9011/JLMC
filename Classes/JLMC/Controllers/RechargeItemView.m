//
//  RechargeItemView.m
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/11/15.
//
//

#import "RechargeItemView.h"

@interface RechargeItemView ()

@property (weak, nonatomic) IBOutlet UILabel *goldLabel;
@property (weak, nonatomic) IBOutlet UILabel *priceLabel;

@end

@implementation RechargeItemView

- (void)awakeFromNib {
    [super awakeFromNib];
    
    self.layer.masksToBounds = YES;
    self.layer.cornerRadius = 4.f;
    self.layer.borderWidth = .5;
    
    self.selected = NO;
    
}

- (void)setPrice:(NSUInteger)price {
    _price = price;
    
    _goldPrice = price * 10;
    
    self.goldLabel.text = [NSString stringWithFormat:@"%ld金币", price * 10];
    self.priceLabel.text = [NSString stringWithFormat:@"折合宝贝: %ld元", price];
}

- (void)setSelected:(BOOL)selected {
    _selected = selected;
    
    if (selected) {
        self.layer.borderColor = RGB(247, 76, 49).CGColor;
        self.backgroundColor = RGB(255, 239, 236);
        self.goldLabel.textColor = RGB(247, 76, 49);
        self.priceLabel.textColor = RGB(247, 76, 49);
        
    } else {
        self.layer.borderColor = RGB(213, 213, 213).CGColor;
        self.backgroundColor = [UIColor whiteColor];
        self.goldLabel.textColor = RGB(51, 51, 51);
        self.priceLabel.textColor = RGB(153, 153, 153);
        
    }
    
}

@end
