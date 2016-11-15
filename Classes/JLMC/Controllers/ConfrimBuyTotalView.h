//
//  ConfrimBuyTotalView.h
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/11/15.
//
//

#import <UIKit/UIKit.h>

@interface ConfrimBuyTotalView : UIView

@property (weak, nonatomic) IBOutlet UILabel *totalLabel;

- (void)addTotal:(NSUInteger)price number:(NSUInteger)number;

@end
