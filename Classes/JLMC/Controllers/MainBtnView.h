//
//  MainBtnView.h
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/11/23.
//
//

#import <UIKit/UIKit.h>

@interface MainBtnView : UIView

@property (nonatomic, copy) NSString *imageStr;

- (void)addObject:(id)object TouchUpInside:(SEL)selector;

@end
