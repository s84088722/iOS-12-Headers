//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/CLLocationManagerDelegate-Protocol.h>
#import <Navigation/CLLocationManagerVehicleDelegate-Protocol.h>
#import <Navigation/MNLocationProvider-Protocol.h>

@class CLLocationManager, NSBundle, NSLock, NSString;
@protocol MNLocationProviderDelegate;

__attribute__((visibility("hidden")))
@interface MNCoreLocationProvider : NSObject <CLLocationManagerDelegate, CLLocationManagerVehicleDelegate, MNLocationProvider>
{
    _Bool _waitingForAuthorization;
    _Bool _hasQueriedAuthorization;
    NSLock *_authorizationLock;
    _Bool _alternate;
    CLLocationManager *_clLocationManager;
    id <MNLocationProviderDelegate> _delegate;
    _Bool _locationServicesPreferencesDialogEnabled;
    int _authorizationStatus;
    NSBundle *_effectiveBundle;
    NSString *_effectiveBundleIdentifier;
    CDUnknownBlockType _authorizationRequestBlock;
    _Bool _updatingLocations;
}

@property _Bool updatingLocations; // @synthesize updatingLocations=_updatingLocations;
@property(nonatomic) __weak id <MNLocationProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(nonatomic) long long activityType;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(id)arg2;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)requestWhenInUseAuthorizationWithPrompt;
- (void)requestWhenInUseAuthorization;
@property(copy, nonatomic) CDUnknownBlockType authorizationRequestBlock;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
@property(readonly, nonatomic) double timeScale;
@property(readonly, nonatomic) _Bool isTracePlayer;
@property(readonly, nonatomic) _Bool isSimulation;
@property(readonly, nonatomic) int authorizationStatus;
@property(readonly, nonatomic) double expectedGpsUpdateInterval;
@property(nonatomic) int headingOrientation;
@property(nonatomic) _Bool matchInfoEnabled;
@property(nonatomic) double distanceFilter;
@property(nonatomic, getter=isLocationServicesPreferencesDialogEnabled) _Bool locationServicesPreferencesDialogEnabled;
@property(nonatomic) double desiredAccuracy;
@property(copy, nonatomic) NSString *effectiveBundleIdentifier;
@property(retain, nonatomic) NSBundle *effectiveBundle;
- (void)_resetForNewEffectiveBundle;
- (void)resetForActiveTileGroupChanged;
- (void)stopUpdatingVehicleHeading;
- (void)startUpdatingVehicleHeading;
- (void)stopUpdatingVehicleSpeed;
- (void)startUpdatingVehicleSpeed;
- (void)stopUpdatingHeading;
- (void)startUpdatingHeading;
- (void)requestLocation;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
- (void)_updateAuthorizationStatus;
@property(readonly, nonatomic) _Bool usesCLMapCorrection;
@property(readonly, nonatomic) CLLocationManager *_clLocationManager;
- (void)_createCLLocationManager;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

