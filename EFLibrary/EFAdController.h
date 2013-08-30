//
//  EFAdController.h
//  EngageFront iOS
//
//  Created by James Vopni on 2013-04-24.
//  Copyright (c) 2013 Addictive Mobility. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EFInclude.h"
#import "EFAdView.h"
#import "EFToolbarView.h"

@protocol EFAdControllerDelegate;

@interface EFAdController : NSObject <EFToolbarViewDelegate, UIActionSheetDelegate>
@property (nonatomic, retain) EFAdView                   *adView;
@property (nonatomic, retain) EFToolbarView              *toolbar;
@property (nonatomic, retain) UIViewController           *EFViewController;
@property (nonatomic, retain) id<EFAdControllerDelegate> delegate;
@property (nonatomic, retain) UIWindow                   *window;

- (EFAdController *)initWithEFAdView:(EFAdView *)EFAdView andViewController:(UIViewController *)viewController andType:(id)EFController;
- (void)showToolbarWithHeight:(CGFloat)height andWidth:(CGFloat)width;
- (void)removeToolbar;
@end

@protocol EFAdControllerDelegate <NSObject>
@optional
- (void)startAd;
- (void)stopAd;
- (void)stopRoadBlock;
- (void)stopTimeOut;
- (void)waitTimeOut;
- (void)resumeTimeOut;
- (void)startTimeOut;
- (void)efExpandToWidth:(CGFloat)width andHeight:(CGFloat)height;
- (void)efExpandToWidth:(CGFloat)width andHeight:(CGFloat)height withURL:(NSString *)url;
- (void)efUnexpand;
- (void)efClose;
- (void)efOpenWithURL:(NSString *)url;
- (void)updateAdID;
- (void)useCustomClose;
- (void)dontUseCustomClose;
@end