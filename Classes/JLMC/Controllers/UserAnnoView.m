//
//  UserAnnoView.m
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/11/16.
//
//

#import "UserAnnoView.h"
#import "UnityAppController.h"

@interface UserAnnoView ()

@property (nonatomic, weak) UIImageView *avatarImageView;

@property (nonatomic, strong) id <SDWebImageOperation> operation;

@end

@implementation UserAnnoView

- (id)initWithAnnotation:(id<MAAnnotation>)annotation reuseIdentifier:(NSString *)reuseIdentifier {
    self = [super initWithAnnotation:annotation reuseIdentifier:reuseIdentifier];
    if (self) {
        UIImageView *avatarImageView = [[UIImageView alloc] init];
        avatarImageView.contentMode = UIViewContentModeScaleAspectFill;
        [self addSubview:avatarImageView];
        
        self.avatarImageView = avatarImageView;
        
        [self setDefaultImage];
    }
    
    return self;
}

- (void)layoutSubviews {
    [super layoutSubviews];
    
    self.avatarImageView.frame = CGRectMake(0, 0, CGRectGetWidth(self.frame), CGRectGetHeight(self.frame));
}

- (void)setImageStr:(NSString *)imageStr {
    _imageStr = imageStr;
    
    if (imageStr == nil) {
        [self setDefaultImage];
        
    } else {
        if (self.operation) {
            [self.operation cancel];
            self.operation = nil;
        }
        
        //68.5, 88
        __weak UserAnnoView *weakSelf = self;
        
        weakSelf.operation = [[SDWebImageManager sharedManager] loadImageWithURL:[NSURL URLWithString:imageStr] options:SDWebImageRetryFailed progress:nil completed:^(UIImage * _Nullable image, NSData * _Nullable data, NSError * _Nullable error, SDImageCacheType cacheType, BOOL finished, NSURL * _Nullable imageURL) {
            
            weakSelf.avatarImageView.image = image;
            
            weakSelf.operation = nil;
        }];
        
        
    }
}

- (void)setDefaultImage {
    self.image = [UIImage imageNamed:@"UserAnnoBack"];
    self.centerOffset = CGPointMake(0, -44);
}

@end
