//
//  TypeView.h
//  Unity-iPhone
//
//  Created by 赵立波 on 16/11/15.
//
//

#import <UIKit/UIKit.h>

@protocol TypeViewDelegate <NSObject>

- (void)didSelectedType:(NSString *)type;

@end

@interface TypeView : UIView

@property (nonatomic, weak) id<TypeViewDelegate> dele;

@end
