//
//  BannerViewController.h
//  EFDemo
//
//  Created by James Vopni on 2013-08-22.
//  Copyright (c) 2013 James Vopni. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EngageFront_iOS.h"

@interface BannerViewController : UIViewController <UITextFieldDelegate>

@property (nonatomic, retain) EFBannerController        *EFBanner;
@property (nonatomic, retain) EFAdView                  *adView;
@property (nonatomic, retain) UITextField               *text;
@property (nonatomic, retain) UIButton                  *button;
@property (nonatomic, retain) UILabel                   *label;

@end
