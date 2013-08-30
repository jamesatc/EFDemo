//
//  EFInclude.h
//  EngageFront iOS
//
//  Created by James Vopni on 2013-04-24.
//  Copyright (c) 2013 Addictive Mobility. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define EF_TIMEOUT_SIZE                     CGSizeMake(1, 1)
#define EF_TIMEOUT_LOCATION                 CGPointMake(0, 0)

#define EF_ROADBLOCK_SIZE                   CGSizeMake(1, 1)
#define EF_ROADBLOCK_LOCATION               CGPointMake(0, 0)

enum {
    EFNoAnimation               =   UIViewAnimationTransitionNone,
    EFFlipFromLeftAnimation     =   UIViewAnimationTransitionFlipFromLeft,
    EFFlipFromRightAnimation    =   UIViewAnimationTransitionFlipFromRight,
    EFFlipFromTopAnimation      =   UIViewAnimationOptionTransitionFlipFromTop,
    EFFlipFromBottomAnimation   =   UIViewAnimationOptionTransitionFlipFromBottom,
    EFCurlUpAnimation           =   UIViewAnimationTransitionCurlUp,
    EFCurlDownAnimation         =   UIViewAnimationTransitionCurlDown,
    EFFromTopAnimation          =   8,
    EFFromBottomAnimation       =   9,
    EFFromLeftAnimation         =   10,
    EFFromRightAnimation        =   11,
    EFFromTopLeftAnimation      =   12,
    EFFromTopRightAnimation     =   13,
    EFFromBottomLeftAnimation   =   14,
    EFFromBottomRightAnimation  =   15
};
typedef UIViewAnimationTransition EFAnimationType;

// EFNetwork types
typedef enum
{
	EFWifi              = 5,
	EFLTE               = 4,
	EF4G                = 3,
	EF3G                = 2,
	EF2G                = 1,
	EFNoNetwork         = 0
} EFNetworkLevel;

// EFLog types
typedef enum
{
	EFLogLevelVerbose	= 5,
	EFLogLevelDebug		= 4,
	EFLogLevelWarn		= 3,
	EFLogLevelError		= 2,
	EFLogLevelFatal		= 1,
	EFLogLevelNoLog		= 0
} EFLogLevel;

EFLogLevel EFLogGetLevel(void);
void EFLogSetLevel(EFLogLevel level);
void _EFLogVerbose(NSString *format, ...);
void _EFLogDebug(NSString *format, ...);
void _EFLogWarn(NSString *format, ...);
void _EFLogError(NSString *format, ...);
void _EFLogFatal(NSString *format, ...);

#define EFLogVerbose(...) _EFLogVerbose(__VA_ARGS__)
#define EFLogDebug(...)   _EFLogDebug(__VA_ARGS__)
#define EFLogWarn(...)    _EFLogWarn(__VA_ARGS__)
#define EFLogError(...)   _EFLogError(__VA_ARGS__)
#define EFLogFatal(...)   _EFLogFatal(__VA_ARGS__)

//#define EFLogVerbose(...) {}
//#define EFLogDebug(...)   {}
//#define EFLogWarn(...)    {}
//#define EFLogError(...)   {}
//#define EFLogFatal(...)   {}
