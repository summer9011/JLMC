//
//  SheetListView.m
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/10/22.
//
//

#import "SheetListView.h"

@interface SheetListView ()

@property (nonatomic, strong) NSMutableArray *buttonTitles;

@property (nonatomic, strong) UIView *sheetView;

@end

@implementation SheetListView

- (instancetype)initWithDelegate:(id<SheetListDelegate>)delgate buttonTitles:(NSString *)buttonTitle, ...NS_REQUIRES_NIL_TERMINATION {
    self = [super init];
    
    if (self) {
        self.sheetDele = delgate;
        
        if (buttonTitle != nil) {
            self.buttonTitles = [NSMutableArray array];
            [self.buttonTitles addObject:buttonTitle];
            
            va_list argList;
            
            va_start(argList, buttonTitle);
            
            NSString *arg;
            while ((arg = va_arg(argList, NSString *))) {
                [self.buttonTitles addObject:arg];
            }
            
            va_end(argList);
        }
        
        [self setupUI];
    }
    
    return self;
}

- (void)showIn:(UIView *)parentView {
    if (![parentView.subviews containsObject:self]) {
        [parentView addSubview:self];
    }
    
    [UIView animateWithDuration:0.1 animations:^{
        self.backgroundColor = [UIColor colorWithWhite:0 alpha:.3];
    } completion:^(BOOL finished) {
        [UIView animateWithDuration:0.2 animations:^{
            self.sheetView.frame = CGRectMake(self.sheetView.frame.origin.x, CGRectGetHeight([UIScreen mainScreen].bounds) - CGRectGetHeight(self.sheetView.frame), CGRectGetWidth(self.sheetView.frame), CGRectGetHeight(self.sheetView.frame));
        }];
    }];
}

#pragma mark - PrivateMethod

- (void)hidden {
    [UIView animateWithDuration:0.2 animations:^{
        self.backgroundColor = [UIColor colorWithWhite:0 alpha:.3];
        
        self.sheetView.frame = CGRectMake(self.sheetView.frame.origin.x, CGRectGetHeight([UIScreen mainScreen].bounds), CGRectGetWidth(self.sheetView.frame), CGRectGetHeight(self.sheetView.frame));
    } completion:^(BOOL finished) {
        [self removeFromSuperview];
    }];
}

- (void)setupUI {
    CGRect screenRect = [UIScreen mainScreen].bounds;
    
    self.frame = screenRect;
    
    //background tap
    UITapGestureRecognizer *tap = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(hidden)];
    [self addGestureRecognizer:tap];
    
    //sheetView
    CGFloat buttonHeight = 75;
    CGFloat sheetViewHeight = buttonHeight + 15 + self.buttonTitles.count * buttonHeight;
    
    self.sheetView = [[UIView alloc] initWithFrame:CGRectMake(0, screenRect.size.height, screenRect.size.width, sheetViewHeight)];
    self.sheetView.backgroundColor = [UIColor colorWithRed:229/255.f green:229/255.f blue:229/255.f alpha:1.f];
    [self addSubview:self.sheetView];
    
    CGFloat offsetH = 0;
    NSUInteger tag = 11;
    
    for (NSString *title in self.buttonTitles) {
        UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
        button.backgroundColor = [UIColor whiteColor];
        
        button.frame = CGRectMake(0, offsetH, CGRectGetWidth(self.sheetView.frame), buttonHeight);
        button.tag = tag;
        [button setTitle:title forState:UIControlStateNormal];
        [button setTitleColor:[UIColor colorWithRed:136/255.f green:171/255.f blue:218/255.f alpha:1.f] forState:UIControlStateNormal];
        button.titleLabel.font = [UIFont systemFontOfSize:17];
        [button addTarget:self action:@selector(selectSheetButton:) forControlEvents:UIControlEventTouchUpInside];
        
        [self.sheetView addSubview:button];
        
        UIView *lineView = [[UIView alloc] initWithFrame:CGRectMake(0, offsetH - .5, CGRectGetWidth(self.sheetView.frame), .5)];
        lineView.backgroundColor = [UIColor colorWithRed:204/255.f green:204/255.f blue:204/255.f alpha:1.f];
        [self.sheetView addSubview:lineView];
        
        offsetH += buttonHeight;
        tag ++;
    }
    
    //cancelButton
    offsetH += 15;
    
    UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
    button.backgroundColor = [UIColor whiteColor];
    
    button.frame = CGRectMake(0, offsetH, CGRectGetWidth(self.sheetView.frame), buttonHeight);
    button.tag = 10;
    [button setTitle:@"取消" forState:UIControlStateNormal];
    [button setTitleColor:[UIColor colorWithRed:49/255.f green:49/255.f blue:49/255.f alpha:1.f] forState:UIControlStateNormal];
    button.titleLabel.font = [UIFont systemFontOfSize:17];
    [button addTarget:self action:@selector(selectSheetButton:) forControlEvents:UIControlEventTouchUpInside];
    
    [self.sheetView addSubview:button];
    
}

- (void)selectSheetButton:(UIButton *)button {
    if (self.sheetDele && [self.sheetDele respondsToSelector:@selector(didSelectRow:)]) {
        [self.sheetDele didSelectRow:button.tag - 10];
    }
    
    [self hidden];
}

@end
