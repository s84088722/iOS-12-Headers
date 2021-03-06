//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LightLevelProvider.h"

#import "MKLocationManagerObserver-Protocol.h"

@class CLLocation, GEOAlmanac, NSString, NSTimer;

__attribute__((visibility("hidden")))
@interface AstronomicalLightLevelProvider : LightLevelProvider <MKLocationManagerObserver>
{
    GEOAlmanac *_almanac;
    _Bool _enabled;
    CLLocation *_currentLocation;
    CLLocation *_lastCheckLocation;
    NSTimer *_nextLightLevelUpdateTimer;
}

@property(retain, nonatomic) NSTimer *nextLightLevelUpdateTimer; // @synthesize nextLightLevelUpdateTimer=_nextLightLevelUpdateTimer;
@property(retain, nonatomic) CLLocation *lastCheckLocation; // @synthesize lastCheckLocation=_lastCheckLocation;
@property(retain, nonatomic) CLLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (id)_nextLightLevelUpdateDate;
- (_Bool)_shouldScheduleTimerForNextLightLevelUpdate;
- (void)_updateLightLevelIfNeeded;
- (void)_updateLightLevelForNextSunsetOrSunrise;
- (void)_setCurrentLocationIfNeeded:(id)arg1 forReason:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

