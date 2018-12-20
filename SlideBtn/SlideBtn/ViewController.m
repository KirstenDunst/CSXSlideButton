//
//  ViewController.m
//  SlideBtn
//
//  Created by 曹世鑫 on 2018/12/20.
//  Copyright © 2018 曹世鑫. All rights reserved.
//

#import "ViewController.h"
#import "FBSlideButton.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    self.view.backgroundColor = [UIColor whiteColor];
    
    UIButton *button = [UIButton buttonWithType:UIButtonTypeSystem];
    button.frame = CGRectMake(0, 80, 180, 80);
    [button setTitle:@"显示or隐藏" forState:UIControlStateNormal];
    [button setTintColor:[UIColor redColor]];
    [button addTarget:self action:@selector(buttonChoose:) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:button];
    
    [FBSlideButton show];
    FBSlideButton *btn = [FBSlideButton shareSlideBtn];
    //    [SlideButton showWithType:MNAssistiveTypeNearLeft];
//    [FBSlideButton show];
    btn.btnClick = ^(UIButton *sender) {
        
        NSLog(@" btn.btnClick ~");
    };
    
}

- (void)buttonChoose:(UIButton *)sender {
    static BOOL isShow = NO;
    isShow ?[FBSlideButton show]:[FBSlideButton hidden];
    isShow = !isShow;
}



@end
