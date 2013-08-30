//
//  EFAdView.h
//  EngageFront iOS
//
//  Created by James Vopni on 2013-04-24.
//  Copyright (c) 2013 Addictive Mobility. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EFInclude.h"
#import <CoreLocation/CoreLocation.h>
#import "EFInternetConnection.h"

@protocol EFAdViewDelegate;

@interface EFAdView : UIWebView

@property (nonatomic)         BOOL            fadeIn;
@property (nonatomic)         int             adRotation;
@property (nonatomic)         EFAnimationType animationType;

@property (nonatomic, copy)   NSString *dismissType;
@property (nonatomic, copy)   NSString *placementType;

@property (nonatomic, copy)   NSMutableDictionary *EFAdValues;

@property (nonatomic)         CGSize  dimensions;
@property (nonatomic)         CGPoint adLocation;
@property (nonatomic)         CGSize  adSize;

@property (nonatomic, assign) id<EFAdViewDelegate> EFDelegate;
@property (nonatomic, retain) EFInternetConnection *internetConnection;

- (id)initWithAdUnitSize:(CGSize)size andLocation:(CGPoint)pos;
- (id)initWithAdUnitSize:(CGSize)size andLocation:(CGPoint)pos beacon:(BOOL)isBeacon; //Legacy
- (BOOL)loadAdWithLatLong:(NSString *)latLong andType:(int)type;
- (void)adViewFailed;
- (void)adViewSuccess;
- (void)changeAdLoacation:(CGPoint)loc;
- (void)adViewExpandedtoWidth:(CGFloat)width andHeight:(CGFloat)height;
- (void)adViewOpenedtoWidth:(CGFloat)width andHeight:(CGFloat)height;
- (void)adViewUnexpandedtoWidth:(CGFloat)width andHeight:(CGFloat)height;

- (void)EFSetGender:(NSString *)gender;
- (void)EFSetAge:(int)age;
- (void)EFSetAgeRange:(int)age;
- (void)EFSetEthnicity:(NSString *)ethnicity;
- (void)EFSetHasKids:(BOOL)hasKids;
- (void)EFSetHouseHoldIncome:(float)income;
- (void)EFSetCity:(NSString *)city;
- (void)EFSetCountry:(NSString *)country;
- (void)EFSetDMA:(NSString *)dma;
- (void)EFSetZipCode:(NSString *)zip;
- (void)EFSetPostalCode:(NSString *)pc;
- (void)EFSetLocation:(CLLocation *)loc;
- (void)EFSetYearOfBirth:(int)yob;
- (void)EFSetMatrial:(NSString *)status;
- (void)EFSetPolatics:(NSString *)politics;
- (void)EFSetEducation:(NSString *)education;
- (void)EFSetTwitterUsername:(NSString *)name;
- (void)EFSetTwitterHashtags:(NSString *)tags;
- (void)EFSetTags:(NSString *)tags;

- (NSMutableDictionary *)createBeaconValues;
- (void)contactBeacons:(NSMutableDictionary *)beaconValues;
- (void)updateAdID:(NSString*)ID;
- (NSString *)getAdID;

// Not yet impliemented
- (void)restart;

@end

@protocol EFAdViewDelegate <NSObject>

@optional
- (void)adViewFailLoadAd;
- (void)adViewSuccessLoadAd;
- (void)orientationChanged:(NSNotification *)note;
- (void)orientationWillChange:(NSNotification *)note;
- (void)orientationDidChange:(NSNotification *)note;
- (void)EFAdViewExpandedtoWidth:(CGFloat)width andHeight:(CGFloat)height;
- (void)EFAdViewOpenedtoWidth:(CGFloat)width andHeight:(CGFloat)height;
- (void)EFAdViewUnexpandedtoWidth:(CGFloat)width andHeight:(CGFloat)height;

@end

