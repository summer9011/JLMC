//
//  ChooseSexVC.m
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/11/2.
//
//

#import "ChooseSexVC.h"

@interface ChooseSexVC ()

@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;
@property (weak, nonatomic) IBOutlet UIView *scrollContentView;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *scrollContentViewConsHeight;

@property (weak, nonatomic) IBOutlet UIButton *maleBtn;
@property (weak, nonatomic) IBOutlet UIImageView *maleImg;
@property (weak, nonatomic) IBOutlet UIButton *femaleBtn;
@property (weak, nonatomic) IBOutlet UIImageView *femaleImg;

@end

@implementation ChooseSexVC

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    
    self.title = @"性别";
    
    UIBarButtonItem *saveBtnItem = [[UIBarButtonItem alloc] initWithTitle:@"保存" style:UIBarButtonItemStylePlain target:self action:@selector(saveChooseSex:)];
    [self.navigationItem setRightBarButtonItem:saveBtnItem animated:YES];
    
    [self setupUI];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)setupUI {
    self.defaultSex = _defaultSex;
}

- (IBAction)doChooseSexAction:(id)sender {
    if ([sender isEqual:self.maleBtn]) {
        self.defaultSex = UserSexMale;
    }
    
    if ([sender isEqual:self.femaleBtn]) {
        self.defaultSex = UserSexFemale;
    }
}

- (void)saveChooseSex:(UIBarButtonItem *)barButtonItem {
    [self.chooseSexDele didChoosedSex:self.defaultSex];
    
    [self doBackAction];
}

#pragma mark - Setting

- (void)setDefaultSex:(NSString *)defaultSex {
    _defaultSex = defaultSex;
    
    if ([defaultSex isEqualToString:UserSexMale]) {
        self.maleImg.hidden = NO;
        self.femaleImg.hidden = YES;
        
    } else if ([defaultSex isEqualToString:UserSexFemale]) {
        self.maleImg.hidden = YES;
        self.femaleImg.hidden = NO;
        
    } else {
        self.maleImg.hidden = YES;
        self.femaleImg.hidden = YES;
    }
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
