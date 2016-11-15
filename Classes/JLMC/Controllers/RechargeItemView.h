//
//  RechargeItemView.h
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/11/15.
//
//

#import <UIKit/UIKit.h>

@interface RechargeItemView : UIView

@property (nonatomic, assign) NSUInteger price;
@property (nonatomic, assign, readonly) NSUInteger goldPrice;

@property (nonatomic, assign) BOOL selected;

@end
