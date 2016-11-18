//
//  WebViewVC.h
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/11/18.
//
//

#import "BaseVC.h"

@interface WebViewVC : BaseVC

@property (nonatomic, assign) BOOL isURL;

@property (nonatomic, copy) NSString *webTitle;

@property (nonatomic, copy) NSString *webURL;
@property (nonatomic, copy) NSString *webContent;

@end
