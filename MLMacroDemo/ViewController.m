//
//  ViewController.m
//  MLMacroDemo
//
//  Created by 妙龙赖 on 2017/3/28.
//  Copyright © 2017年 妙龙赖. All rights reserved.
//

#import "ViewController.h"
#import "metamacros.h"
#import "MLCSSMacro.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    UIView *view = [[UIView alloc] init];
    [self.view addSubview:view];
   // ml_css(对象, 设置)
    
    ml_css(view,
           frame = CGRectMake(100, 100, 200, 200),
           backgroundColor = [UIColor redColor],
           layer.borderColor = [UIColor blueColor].CGColor,
           layer.borderWidth = 30,
           layer.cornerRadius = 75,
           clipsToBounds = YES)
    
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
