//
//  SupplyAnnoView.m
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/11/16.
//
//

#import "SupplyAnnoView.h"

@interface SupplyAnnoView ()

@property (nonatomic, strong) id <SDWebImageOperation> operation;

@end

@implementation SupplyAnnoView

- (id)initWithAnnotation:(id<MAAnnotation>)annotation reuseIdentifier:(NSString *)reuseIdentifier {
    self = [super initWithAnnotation:annotation reuseIdentifier:reuseIdentifier];
    if (self) {
        self.centerOffset = CGPointMake(0, -24);
    }
    
    return self;
}

- (void)setImageStr:(NSString *)imageStr {
    _imageStr = imageStr;
    
    if (self.operation) {
        [self.operation cancel];
        self.operation = nil;
    }
    
    __weak SupplyAnnoView *weakSelf = self;
    
    self.operation = [[SDWebImageManager sharedManager] loadImageWithURL:[NSURL URLWithString:imageStr] options:SDWebImageRetryFailed progress:nil completed:^(UIImage * _Nullable image, NSData * _Nullable data, NSError * _Nullable error, SDImageCacheType cacheType, BOOL finished, NSURL * _Nullable imageURL) {
        if (finished) {
            weakSelf.image = image;
            weakSelf.centerOffset = CGPointMake(0, 0 - weakSelf.image.size.height/2.f);
            
            weakSelf.operation = nil;
        }
    }];
    
}

@end
