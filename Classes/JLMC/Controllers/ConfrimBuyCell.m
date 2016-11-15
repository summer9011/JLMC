//
//  ConfrimBuyCell.m
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/11/15.
//
//

#import "ConfrimBuyCell.h"

@implementation ConfrimBuyCell

- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

- (void)addPrice:(NSUInteger)price {
    NSString *str = [NSString stringWithFormat:@"%ld金币", price];
    
    NSRange range = [str rangeOfString:[NSString stringWithFormat:@"%ld", price]];
    
    NSMutableAttributedString *attrStr = [[NSMutableAttributedString alloc] initWithString:str];
    [attrStr addAttributes:@{NSForegroundColorAttributeName: RGB(51, 51, 51)} range:NSMakeRange(0, str.length)];
    [attrStr addAttributes:@{NSFontAttributeName: [UIFont systemFontOfSize:18], NSForegroundColorAttributeName: RGB(247, 76, 49)} range:range];
    
    self.priceLabel.attributedText = attrStr;
    
}

@end
