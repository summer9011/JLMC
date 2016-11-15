//
//  SheetListView.h
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/10/22.
//
//

#import <UIKit/UIKit.h>

@protocol SheetListDelegate <NSObject>

@optional

- (void)didSelectRow:(NSUInteger)index;

@end

@interface SheetListView : UIView

@property (nonatomic, weak) id<SheetListDelegate> sheetDele;

- (instancetype)initWithDelegate:(id<SheetListDelegate>)delgate buttonTitles:(NSString *)buttonTitle, ...NS_REQUIRES_NIL_TERMINATION;

- (void)showIn:(UIView *)parentView;

@end
