//
//  ShareView.h
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/11/15.
//
//

#import <UIKit/UIKit.h>

@protocol ShareViewDelegate <NSObject>

@end

@interface ShareView : UIView

@property (nonatomic, weak) id<ShareViewDelegate> dele;

+ (ShareView *)sharedView;

- (void)showInView:(UIView *)parentView;

- (void)hide;

@end
