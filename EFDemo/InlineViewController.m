//
//  InlineViewController.m
//  EFDemo
//
//  Created by James Vopni on 2013-08-28.
//  Copyright (c) 2013 James Vopni. All rights reserved.
//

#import "InlineViewController.h"

@interface InlineViewController ()

@end

@implementation InlineViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        self.tabBarItem.image = [UIImage imageNamed:@"inline@2x"];
        self.tabBarItem.imageInsets = UIEdgeInsetsMake(0, 0, 0, 0);
    }
    return self;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor whiteColor];
    
	_adView = [[EFAdView alloc] initWithAdUnitSize:CGSizeMake(320, 50) andLocation:CGPointMake(0, 0)];
    
    _adView.EFDelegate = (id)self;
    
    _EFInline = [[EFInlineController alloc] initWithViewController:self andAdView:_adView andDelegate:self];
    
    _text = [[UITextField alloc] initWithFrame:CGRectMake(85, 55, 150, 31)];
    _text.placeholder = @"Type ad id here!";
    _text.keyboardType = UIKeyboardTypeDecimalPad;
    _text.textAlignment = NSTextAlignmentCenter;
    
    _label = [[UILabel alloc] initWithFrame:CGRectMake(0, 91, 320, 31)];
    _label.text = @"";
    _label.textAlignment = NSTextAlignmentCenter;
    
    _button = [UIButton buttonWithType:UIButtonTypeRoundedRect];
    _button.frame = CGRectMake(110, 127, 100, 31);
    [_button setTitle:@"Show Ad" forState:UIControlStateNormal];
    [_button addTarget:self action:@selector(showAdWithID) forControlEvents:UIControlEventTouchUpInside];
    
    [self.view addSubview:_label];
    [self.view addSubview:_button];
    [self.view addSubview:_text];
    
    [self.view addSubview:_adView];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)showAdWithID {
    [_EFInline stopAd];
    
    NSString *adID = _text.text;
    
    if ([adID integerValue]) {
        _label.text = [NSString stringWithFormat:@"Updated to adID: %@", [_EFInline updateAdID:adID]];
    } else {
        _label.text = [NSString stringWithFormat:@"Updated to adID: %@", [_EFInline getAdID]];
    }
    
    [_EFInline startAd];
}

- (void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event {
    [self.view endEditing:YES]; // dismiss the keyboard
    
    [super touchesBegan:touches withEvent:event];
}

@end
