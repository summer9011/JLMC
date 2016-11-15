//
//  ConversationListVC.m
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/10/21.
//
//

#import "ConversationListVC.h"

@interface ConversationListVC ()

@end

@implementation ConversationListVC

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    UIBarButtonItem *backBarButtonItem = [[UIBarButtonItem alloc] initWithImage:[UIImage imageNamed:@"Arrow"] style:UIBarButtonItemStylePlain target:self action:@selector(doBackAction)];
    
    self.navigationItem.leftBarButtonItem = backBarButtonItem;
    
    [self setDisplayConversationTypes:@[@(ConversationType_PRIVATE), @(ConversationType_GROUP)]];
    self.showConnectingStatusOnNavigatorBar = YES;
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    
    [self.navigationController setNavigationBarHidden:NO animated:YES];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)doBackAction {
    [self.navigationController dismissViewControllerAnimated:YES completion:nil];
}

- (void)onSelectedTableRow:(RCConversationModelType)conversationModelType conversationModel:(RCConversationModel *)model atIndexPath:(NSIndexPath *)indexPath {
    RCConversationViewController *conversationVC = [[RCConversationViewController alloc]init];
    conversationVC.conversationType = model.conversationType;
    conversationVC.targetId = model.targetId;
    conversationVC.title = model.conversationTitle;
    [self.navigationController pushViewController:conversationVC animated:YES];
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
