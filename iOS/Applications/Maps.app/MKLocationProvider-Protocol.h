//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CLLocation, NSBundle, NSObject, NSString;
@protocol MKLocationProviderDelegate, OS_dispatch_queue;

@protocol MKLocationProvider <NSObject>
@property(readonly, nonatomic) double timeScale;
@property(readonly, nonatomic) _Bool isTracePlayer;
@property(readonly, nonatomic) _Bool shouldShiftIfNecessary;
@property(readonly, nonatomic) _Bool usesCLMapCorrection;
@property(nonatomic) long long activityType;
@property(readonly, nonatomic) int authorizationStatus;
@property(readonly, nonatomic) double expectedGpsUpdateInterval;
@property(copy, nonatomic) CDUnknownBlockType authorizationRequestBlock;
@property(nonatomic) int headingOrientation;
@property(nonatomic) _Bool matchInfoEnabled;
@property(nonatomic) double distanceFilter;
@property(nonatomic, getter=isLocationServicesPreferencesDialogEnabled) _Bool locationServicesPreferencesDialogEnabled;
@property(nonatomic) double desiredAccuracy;
@property(copy, nonatomic) NSString *effectiveBundleIdentifier;
@property(retain, nonatomic) NSBundle *effectiveBundle;
@property(nonatomic) __weak id <MKLocationProviderDelegate> delegate;
- (void)dismissHeadingCalibrationDisplay;
- (void)authorizationStatusOnQueue:(NSObject<OS_dispatch_queue> *)arg1 result:(void (^)(int))arg2;
- (void)requestWhenInUseAuthorizationWithPrompt;
- (void)requestWhenInUseAuthorization;
- (void)stopUpdatingVehicleHeading;
- (void)startUpdatingVehicleHeading;
- (void)stopUpdatingVehicleSpeed;
- (void)startUpdatingVehicleSpeed;
- (void)stopUpdatingHeading;
- (void)startUpdatingHeading;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;

@optional
@property(readonly, nonatomic) CLLocation *lastLocation;
@end

