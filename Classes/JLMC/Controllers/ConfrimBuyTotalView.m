//
//  ConfrimBuyTotalView.m
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/11/15.
//
//

#import "ConfrimBuyTotalView.h"

@implementation ConfrimBuyTotalView

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

- (void)addTotal:(NSUInteger)price number:(NSUInteger)number {
    NSString *str = [NSString stringWithFormat:@"共%ld件商品  小计: %ld金币", number, price * number];
    
    NSRange range = [str rangeOfString:[NSString stringWithFormat:@"%ld", price * number]];
    
    NSMutableAttributedString *attrStr = [[NSMutableAttributedString alloc] initWithString:str];
    [attrStr addAttributes:@{NSForegroundColorAttributeName: RGB(51, 51, 51)} range:NSMakeRange(0, str.length)];
    [attrStr addAttributes:@{NSFontAttributeName: [UIFont systemFontOfSize:18], NSForegroundColorAttributeName: RGB(247, 76, 49)} range:range];
    
    self.totalLabel.attributedText = attrStr;
}

@end
