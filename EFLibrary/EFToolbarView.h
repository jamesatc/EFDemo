//
//  EFToolbarView.h
//  EngageFront iOS
//
//  Created by James Vopni on 2013-04-24.
//  Copyright (c) 2013 Addictive Mobility. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EFInclude.h"

@class EFToolbarView;

@protocol EFToolbarViewDelegate
-(void)EFGoBack;
-(void)EFGoForward;
-(void)EFRefresh;
-(void)EFDone;
@end


@interface EFToolbarView : UIToolbar
@property (nonatomic, assign) id<EFToolbarViewDelegate> EFToolbarViewDelegate;
@property (nonatomic, retain) UIActivityIndicatorView   *activityView;
@property (nonatomic, retain) UIBarButtonItem           *back;
@property (nonatomic, retain) UIBarButtonItem           *forward;
@property (nonatomic, retain) UIBarButtonItem           *refresh;
@property (nonatomic, retain) UIBarButtonItem           *done;
@property (nonatomic, retain) UIBarButtonItem           *browser;
-(void)setButtons;
@end
