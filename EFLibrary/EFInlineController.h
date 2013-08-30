//
//  EFInlineController.h
//  EngageFront iOS
//
//  Created by James Vopni on 2013-04-24.
//  Copyright (c) 2013 Addictive Mobility. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "EFInclude.h"
#import "EFAdController.h"
#import "EFAdView.h"

@interface EFInlineController : NSObject <EFAdControllerDelegate, CLLocationManagerDelegate>

@property (nonatomic, retain) UIViewController  *EFViewController;
@property (nonatomic, retain) EFAdController    *EFController;
@property (nonatomic, retain) EFAdView          *adView;
@property (nonatomic, assign) id                EFDelegate;
@property (nonatomic, retain) EFToolbarView     *toolbar;


- (EFInlineController *)initWithViewController:(UIViewController *)viewController andAdView:(EFAdView *)adView andDelegate:(id)EFDelegate;
- (void)startAd;
- (void)stopAd;
- (bool)adRunning;
- (NSString *)updateAdID:(NSString *)ID;
- (NSString *)getAdID;

@end