//
//  RoadBlockViewController.h
//  EFDemo
//
//  Created by James Vopni on 2013-08-28.
//  Copyright (c) 2013 James Vopni. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EngageFront_iOS.h"

@interface RoadBlockViewController : UIViewController <UITextFieldDelegate>

@property (nonatomic, retain) EFRoadBlockController     *EFRoad;
@property (nonatomic, retain) EFAdView                  *adViewRoad;
@property (nonatomic, retain) UITextField               *text;
@property (nonatomic, retain) UIButton                  *button;
@property (nonatomic, retain) UIButton                  *button2;
@property (nonatomic, retain) UILabel                   *label;

@end
