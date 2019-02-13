//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOTraceRouteSimulator.h>

#import <Navigation/MNLocationProvider-Protocol.h>
#import <Navigation/MNTimeProvider-Protocol.h>

@class MNTraceEventRecorder, NSArray, NSBundle, NSMutableArray, NSString;
@protocol MNLocationProviderDelegate;

@interface MNTraceRouteSimulator : GEOTraceRouteSimulator <MNLocationProvider, MNTimeProvider>
{
    double _time;
    NSMutableArray *_priorityQueue;
    MNTraceEventRecorder *_recorder;
    id <MNLocationProviderDelegate> _delegate;
    CDUnknownBlockType _authorizationRequestBlock;
    NSArray *_traceEvents;
}

@property(readonly, nonatomic) NSArray *traceEvents; // @synthesize traceEvents=_traceEvents;
@property(copy, nonatomic) CDUnknownBlockType authorizationRequestBlock; // @synthesize authorizationRequestBlock=_authorizationRequestBlock;
@property(nonatomic) __weak id <MNLocationProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)navigationSession:(id)arg1 didEnableGuidancePrompts:(_Bool)arg2;
- (void)navigationSession:(id)arg1 didAnnounceArrival:(id)arg2;
- (void)navigationSessionHideSecondaryStep:(id)arg1;
- (void)navigationSession:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;
- (void)navigationSession:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(_Bool)arg8;
- (void)navigationSession:(id)arg1 didAnnounce:(id)arg2 stage:(unsigned long long)arg3;
- (void)navigationSession:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;
- (void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4;
- (void)navigationSessionWillReroute:(id)arg1;
- (void)navigationSession:(id)arg1 didUpdateMatchedLocation:(id)arg2;
- (void)navigationSessionDidStart:(id)arg1;
@property(readonly, nonatomic) double timeScale;
@property(readonly, nonatomic) _Bool isTracePlayer;
@property(readonly, nonatomic) _Bool isSimulation;
@property(readonly, nonatomic) _Bool usesCLMapCorrection;
@property(nonatomic) long long activityType;
@property(readonly, nonatomic) int authorizationStatus;
@property(readonly, nonatomic) double expectedGpsUpdateInterval;
- (void)requestWhenInUseAuthorizationWithPrompt;
- (void)requestWhenInUseAuthorization;
@property(nonatomic) int headingOrientation;
@property(nonatomic) _Bool matchInfoEnabled;
@property(nonatomic) double distanceFilter;
@property(nonatomic, getter=isLocationServicesPreferencesDialogEnabled) _Bool locationServicesPreferencesDialogEnabled;
@property(nonatomic) double desiredAccuracy;
@property(copy, nonatomic) NSString *effectiveBundleIdentifier;
@property(retain, nonatomic) NSBundle *effectiveBundle;
- (void)resetForActiveTileGroupChanged;
- (void)stopUpdatingVehicleHeading;
- (void)startUpdatingVehicleHeading;
- (void)stopUpdatingVehicleSpeed;
- (void)startUpdatingVehicleSpeed;
- (void)stopUpdatingHeading;
- (void)startUpdatingHeading;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
@property(readonly, nonatomic) double currentTime;
- (void)insertVoiceEventAtTime:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)generateGuidance;
- (void)_generateEvents;
- (void)_tearDown;
- (void)_setup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

