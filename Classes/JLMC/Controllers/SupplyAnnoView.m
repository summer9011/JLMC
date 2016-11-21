//
//  SupplyAnnoView.m
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/11/16.
//
//

#import "SupplyAnnoView.h"

@interface SupplyAnnoView ()

@property (nonatomic, weak) UIImageView *supplyImageView;

@property (nonatomic, strong) id <SDWebImageOperation> operation;

@end

@implementation SupplyAnnoView

- (id)initWithAnnotation:(id<MAAnnotation>)annotation reuseIdentifier:(NSString *)reuseIdentifier {
    self = [super initWithAnnotation:annotation reuseIdentifier:reuseIdentifier];
    if (self) {
        UIImageView *supplyImageView = [[UIImageView alloc] init];
        supplyImageView.contentMode = UIViewContentModeScaleAspectFill;
        [self addSubview:supplyImageView];
        
        self.supplyImageView = supplyImageView;
        
        [self setDefaultImage];
    }
    
    return self;
}

- (void)layoutSubviews {
    [super layoutSubviews];
    
    self.supplyImageView.frame = CGRectMake(0, 0, CGRectGetWidth(self.frame), CGRectGetHeight(self.frame));
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
            weakSelf.supplyImageView.image = image;
            
            weakSelf.operation = nil;
        }
    }];
    
}

- (void)setDefaultImage {
    self.image = [UIImage imageNamed:@"SAnno"];
    self.centerOffset = CGPointMake(0, -24);
}

@end
