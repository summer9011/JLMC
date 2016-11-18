//
//  WebViewVC.m
//  Unity-iPhone
//
//  Created by 赵立波 on 2016/11/18.
//
//

#import "WebViewVC.h"
#import <WebKit/WebKit.h>

@interface WebViewVC ()

@property (nonatomic, weak) WKWebView *webView;

@end

@implementation WebViewVC

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.

    self.title = self.webTitle;
    
    [self setupUI];
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    
    [self.navigationController setNavigationBarHidden:NO animated:YES];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)setupUI {
    self.view.frame = [UIScreen mainScreen].bounds;
    
    WKWebView *webView = [[WKWebView alloc] initWithFrame:CGRectMake(0, 64, CGRectGetWidth(self.view.frame), CGRectGetHeight(self.view.frame) - 64)];
    [self.view addSubview:webView];
    
    self.webView = webView;
    
    if (self.isURL) {
        NSURLRequest *request = [[NSURLRequest alloc] initWithURL:[NSURL URLWithString:self.webURL]];
        [self.webView loadRequest:request];
        
    } else {
        [self.webView loadHTMLString:self.webContent baseURL:nil];
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
