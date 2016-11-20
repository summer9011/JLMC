//
//  StepManager.h
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/11/20.
//
//

#import <Foundation/Foundation.h>

@protocol StepManagerDelegate <NSObject>

@required

- (void)didFailedLoadStep:(NSString *)errStr;

- (void)didUpdateStep:(CGFloat)percent;

@end

@interface StepManager : NSObject

+ (StepManager *)sharedManager;

- (void)startWithDelegate:(id<StepManagerDelegate>)delegate;

- (void)stop;

- (void)getStep;

- (void)saveStep;

- (void)refreshStep:(NSUInteger)step;

@end
