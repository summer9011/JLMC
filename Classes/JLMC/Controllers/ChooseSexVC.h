//
//  ChooseSexVC.h
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/11/2.
//
//

#import "BaseVC.h"

@protocol ChooseSexDelegate <NSObject>

@required

- (void)didChoosedSex:(NSString *)sex;

@end

@interface ChooseSexVC : BaseVC

@property (nonatomic, weak) id<ChooseSexDelegate> chooseSexDele;
@property (nonatomic, copy) NSString *defaultSex;

@end
