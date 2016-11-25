//
//  MyBackpackVC.m
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/10/22.
//
//

#import "MyBackpackVC.h"
#import "UnityAppController.h"

@interface MyBackpackVC ()

@end

@implementation MyBackpackVC

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    
    [self.navigationController setNavigationBarHidden:NO animated:YES];
}

- (void)viewWillDisappear:(BOOL)animated {
    [super viewWillDisappear:animated];
    
    if (self.navigationController.viewControllers.count > 0) {
        UIViewController *tmp = self.navigationController.viewControllers.lastObject;
        
        if ([tmp isEqual:GetAppController().rootViewController]) {
            [tmp.navigationController setNavigationBarHidden:YES animated:YES];
        }
    }
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
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
