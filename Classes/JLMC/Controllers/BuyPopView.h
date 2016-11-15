//
//  BuyPopView.h
//  Unity-iPhone
//
//  Created by 赵立波 on 16/11/15.
//
//

#import <UIKit/UIKit.h>

@protocol BuyPopViewDelegate <NSObject>

- (void)didBuyGood:(NSUInteger)goodCount;

@end

@interface BuyPopView : UIView

@property (nonatomic, weak) id<BuyPopViewDelegate> dele;

- (void)showIn:(UIView *)parentView;

- (void)hide;

@end
