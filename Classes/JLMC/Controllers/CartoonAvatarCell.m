//
//  CartoonAvatarCell.m
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/11/14.
//
//

#import "CartoonAvatarCell.h"

@implementation CartoonAvatarCell

- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
    
    CGFloat size = ([UIScreen mainScreen].bounds.size.width - 90)/3.f;
    
    self.avatarImageView.layer.masksToBounds = YES;
    self.avatarImageView.layer.cornerRadius = size/2.f;
    self.avatarImageView.layer.borderColor = [UIColor whiteColor].CGColor;
    self.avatarImageView.layer.borderWidth = 2.f;
}

- (void)setSelected:(BOOL)selected {
    [super setSelected:selected];
    
    self.selectedImageView.hidden = !selected;
}

@end
