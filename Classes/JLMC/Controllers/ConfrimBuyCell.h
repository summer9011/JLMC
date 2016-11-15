//
//  ConfrimBuyCell.h
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/11/15.
//
//

#import <UIKit/UIKit.h>

@interface ConfrimBuyCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIImageView *goodImageView;
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *useLabel;
@property (weak, nonatomic) IBOutlet UILabel *priceLabel;
@property (weak, nonatomic) IBOutlet UILabel *numberLabel;

- (void)addPrice:(NSUInteger)price;

@end
