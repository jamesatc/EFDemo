//
//  EFRoadBlockController.h
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


@interface EFRoadBlockController : NSObject <EFAdControllerDelegate, CLLocationManagerDelegate>

@property (nonatomic, retain) EFAdView              *adView;
@property (nonatomic, assign) id<EFAdViewDelegate>  EFAdViewDelegate;
@property (nonatomic, retain) UIViewController      *EFViewController;
@property (nonatomic, retain) EFAdController        *EFController;
@property (nonatomic, assign) id                    EFDelegate;

-(EFRoadBlockController *)initWithViewController:(UIViewController *)viewController andAdView:(EFAdView *)adView andDelegate:(id)EFDelegate;
- (BOOL)loadRoadBlock;
- (void)showRoadBlock;
- (void)stopRoadBlock;
- (NSString *)updateAdID:(NSString *)ID;

@end
