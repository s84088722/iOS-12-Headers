//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MNNavigationServiceObserver-Protocol.h"

@class MKMapView, MNLocation, NSString, NSTimer;
@protocol CarNavigationDisplayRateThrottleDelegate;

__attribute__((visibility("hidden")))
@interface CarNavigationDisplayRateThrottle : NSObject <MNNavigationServiceObserver>
{
    long long _temporaryDisplayRate;
    long long _lastCalculatedDisplayRate;
    NSString *_lastCalculatedDisplayRateReason;
    MNLocation *_latestMovingLocation;
    NSTimer *_temporaryDisplayRateTimer;
    NSTimer *_idleTimer;
    long long _initialBatchedDisplayRate;
    long long _finalBatchedDisplayRate;
    unsigned long long _batchingUpdates;
    _Bool _enabled;
    _Bool _idle;
    id <CarNavigationDisplayRateThrottleDelegate> _delegate;
    MKMapView *_mapView;
    CDStruct_d3cf2d55 _settings;
}

+ (void)_clearAllSettings;
+ (id)_defaultSettings;
+ (_Bool)isAvailable;
+ (void)initialize;
@property(nonatomic) __weak MKMapView *mapView; // @synthesize mapView=_mapView;
@property(readonly, nonatomic) CDStruct_d3cf2d55 settings; // @synthesize settings=_settings;
@property(nonatomic, getter=isIdle) _Bool idle; // @synthesize idle=_idle;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <CarNavigationDisplayRateThrottleDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_descriptionComponentsForSettings:(CDStruct_d3cf2d55)arg1;
@property(readonly, copy) NSString *description;
- (void)_readFromDefaults;
- (void)clearAllSettings;
- (void)_checkForRecentMovement;
- (_Bool)_isLocationStationary:(id)arg1;
- (void)_cancelWaitForNoMovement;
- (void)_waitForNoMovement;
- (void)navigationService:(id)arg1 didUpdateMatchedLocation:(id)arg2;
- (void)_notifyAfterChanges:(CDUnknownBlockType)arg1;
- (void)_notifyDelegateOfDisplayRate:(long long)arg1;
- (void)_rememberNewDisplayRate:(long long)arg1 reason:(id)arg2;
- (void)setTemporaryDisplayRate:(long long)arg1 forDuration:(double)arg2;
- (double)_scaleFactorWithValue:(double)arg1 maximumValue:(double)arg2 minimumValue:(double)arg3;
- (long long)calculateThrottledDisplayRate;
- (void)setSettings:(CDStruct_d3cf2d55)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
