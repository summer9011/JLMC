//
//  ElfAnnoView.m
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/11/16.
//
//

#import "ElfAnnoView.h"

@interface ElfAnnoView ()

@property (nonatomic, weak) UIImageView *elfImageView;

@property (nonatomic, strong) id <SDWebImageOperation> operation;

@end

@implementation ElfAnnoView

- (id)initWithAnnotation:(id<MAAnnotation>)annotation reuseIdentifier:(NSString *)reuseIdentifier {
    self = [super initWithAnnotation:annotation reuseIdentifier:reuseIdentifier];
    if (self) {
        UIImageView *elfImageView = [[UIImageView alloc] init];
        elfImageView.contentMode = UIViewContentModeScaleAspectFill;
        [self addSubview:elfImageView];
        
        self.elfImageView = elfImageView;
        
        [self setDefaultImage];
        
    }
    
    return self;
}

- (void)layoutSubviews {
    [super layoutSubviews];
    
    self.elfImageView.frame = CGRectMake(0, 0, CGRectGetWidth(self.frame), CGRectGetHeight(self.frame));
}

- (void)setImageStr:(NSString *)imageStr {
    _imageStr = imageStr;
    
    if (self.operation) {
        [self.operation cancel];
        self.operation = nil;
    }
    
    __weak ElfAnnoView *weakSelf = self;
    
    self.operation = [[SDWebImageManager sharedManager] loadImageWithURL:[NSURL URLWithString:imageStr] options:SDWebImageRetryFailed progress:nil completed:^(UIImage * _Nullable image, NSData * _Nullable data, NSError * _Nullable error, SDImageCacheType cacheType, BOOL finished, NSURL * _Nullable imageURL) {
        if (finished) {
            weakSelf.elfImageView.image = image;
            
            weakSelf.operation = nil;
        }
    }];
    
}

- (void)setDefaultImage {
    self.image = [UIImage imageNamed:@"SAnno"];
    self.centerOffset = CGPointMake(0, -24);
}

@end
