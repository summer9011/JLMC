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

@property (nonatomic, strong) id <SDWebImageOperation> frameImgOperation;
@property (nonatomic, strong) id <SDWebImageOperation> operation;

@end

@implementation UserAnnoView

- (id)initWithAnnotation:(id<MAAnnotation>)annotation reuseIdentifier:(NSString *)reuseIdentifier {
    self = [super initWithAnnotation:annotation reuseIdentifier:reuseIdentifier];
    if (self) {
        [self setDefaultImage];
    }
    
    return self;
}

- (void)setImageStr:(NSString *)imageStr {
    _imageStr = imageStr;
    
    if (imageStr == nil) {
        [self setDefaultImage];
        
    } else {
        if (self.frameImgOperation) {
            [self.frameImgOperation cancel];
            self.frameImgOperation = nil;
            
            if (self.operation) {
                [self.operation cancel];
                self.operation = nil;
            }
        }
        
        //68.5, 88
        __weak UserAnnoView *weakSelf = self;
        
        self.frameImgOperation = [[SDWebImageManager sharedManager] loadImageWithURL:[NSURL URLWithString:GetAppController().loginUser.frameImg] options:SDWebImageRetryFailed progress:nil completed:^(UIImage * _Nullable frameImage, NSData * _Nullable frameData, NSError * _Nullable frameError, SDImageCacheType frameCacheType, BOOL frameFinished, NSURL * _Nullable frameImageURL) {
            
            weakSelf.operation = [[SDWebImageManager sharedManager] loadImageWithURL:[NSURL URLWithString:imageStr] options:SDWebImageRetryFailed progress:nil completed:^(UIImage * _Nullable image, NSData * _Nullable data, NSError * _Nullable error, SDImageCacheType cacheType, BOOL finished, NSURL * _Nullable imageURL) {
                
                weakSelf.image = [weakSelf addAvatar:image toFrame:frameImage];
                weakSelf.centerOffset = CGPointMake(0, 0 - weakSelf.image.size.height/2.f);
                
                weakSelf.operation = nil;
            }];
        }];
        
        
    }
}

- (void)setDefaultImage {
    self.image = [UIImage imageNamed:@"UserAnno"];
    self.centerOffset = CGPointMake(0, -44);
}

- (UIImage *)addAvatar:(UIImage *)avatar toFrame:(UIImage *)frameImg {
    CGSize imgSize = CGSizeMake(68.5, 88);
    
    UIGraphicsBeginImageContext(imgSize);
    
    [frameImg drawInRect:CGRectMake(0, 0, imgSize.width, imgSize.height)];
    [avatar drawInRect:CGRectMake(7, 7, imgSize.width - 13, imgSize.width - 13)];
    
    UIImage *resultImg = UIGraphicsGetImageFromCurrentImageContext();
    
    UIGraphicsEndImageContext();
    
    return resultImg;
}

@end
