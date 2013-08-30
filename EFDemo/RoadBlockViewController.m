//
//  RoadBlockViewController.m
//  EFDemo
//
//  Created by James Vopni on 2013-08-28.
//  Copyright (c) 2013 James Vopni. All rights reserved.
//

#import "RoadBlockViewController.h"

@interface RoadBlockViewController ()

@end

@implementation RoadBlockViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        self.tabBarItem.image = [UIImage imageNamed:@"roadBlock@2x"];
        self.tabBarItem.imageInsets = UIEdgeInsetsMake(0, 0, 0, 0);
    }
    return self;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor whiteColor];
    
    _adViewRoad = [[EFAdView alloc] initWithAdUnitSize:CGSizeMake(320, 568) andLocation:CGPointMake(0, 0)];
    _adViewRoad.EFDelegate = (id)self;
    _EFRoad = [[EFRoadBlockController alloc] initWithViewController:self andAdView:_adViewRoad andDelegate:self];
    
    _text = [[UITextField alloc] initWithFrame:CGRectMake(0, 55, 320, 31)];
    _text.placeholder = @"Type ad id here!";
    _text.keyboardType = UIKeyboardTypeDecimalPad;
    _text.textAlignment = NSTextAlignmentCenter;
    
    _label = [[UILabel alloc] initWithFrame:CGRectMake(0, 91, 320, 31)];
    _label.text = @"";
    _label.textAlignment = NSTextAlignmentCenter;
    
    _button = [UIButton buttonWithType:UIButtonTypeRoundedRect];
    _button.frame = CGRectMake(110, 127, 100, 31);
    [_button setTitle:@"Load Ad" forState:UIControlStateNormal];
    [_button addTarget:self action:@selector(loadAdWithAdID) forControlEvents:UIControlEventTouchUpInside];
    
    _button2 = [UIButton buttonWithType:UIButtonTypeRoundedRect];
    _button2.frame = CGRectMake(110, 177, 100, 31);
    [_button2 setTitle:@"Show Ad" forState:UIControlStateNormal];
    [_button2 addTarget:self action:@selector(showAd) forControlEvents:UIControlEventTouchUpInside];
    
    [self.view addSubview:_label];
    [self.view addSubview:_button];
    [self.view addSubview:_button2];
    [self.view addSubview:_text];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}

- (void)loadAdWithAdID {
    NSString *adID = [_EFRoad updateAdID:_text.text];
    
    if ([_EFRoad loadRoadBlock]) {
        _label.text = [NSString stringWithFormat:@"Ad %@ loaded successfully", adID];
    } else {
        _label.text = [NSString stringWithFormat:@"Ad %@ failed to load", adID];
    }
}

- (void)showAd {
    [_EFRoad showRoadBlock];
    
    _label.text = @"try another ad!";
}

- (void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event {
    [self.view endEditing:YES]; // dismiss the keyboard
    
    [super touchesBegan:touches withEvent:event];
}

@end
