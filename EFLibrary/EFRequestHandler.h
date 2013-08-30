//
//  EFRequestHandler.h
//  EngageFront iOS
//
//  Created by James Vopni on 2013-04-24.
//  Copyright (c) 2013 Addictive Mobility. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "EFInclude.h"
#import "EFAdView.h"

@interface EFRequestHandler : NSObject

- (id)initWithURL:(NSURL *)url toHeight:(CGFloat)height andWidth:(CGFloat)width andAdView:(EFAdView *)adView andType:(int)type;

@property (nonatomic, retain) NSMutableDictionary   *returnValues;
@property (nonatomic, assign) id<EFAdViewDelegate>  EFDelegate;
@property (nonatomic, retain) NSString              *HTMLString;

@end
