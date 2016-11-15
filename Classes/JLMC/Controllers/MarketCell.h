//
//  MarketCell.h
//  Unity-iPhone
//
//  Created by 赵立波 on 16/11/15.
//
//

#import <UIKit/UIKit.h>

@interface MarketCell : UICollectionViewCell

@property (weak, nonatomic) IBOutlet UIImageView *goodImageView;
@property (weak, nonatomic) IBOutlet UILabel *goodInfoLabel;
@property (weak, nonatomic) IBOutlet UILabel *goodPriceLabel;

@end
