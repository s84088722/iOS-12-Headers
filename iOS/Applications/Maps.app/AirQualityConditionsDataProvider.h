//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WeatherLocationDataProviderObserver-Protocol.h"

@class AirQualityConditions, NSHashTable, NSString, WFAirQualityRequest;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface AirQualityConditionsDataProvider : NSObject <WeatherLocationDataProviderObserver>
{
    NSHashTable *_observers;
    AirQualityConditions *_airQualityConditions;
    WFAirQualityRequest *_airQualityRequest;
    CDUnknownBlockType _airQualityRequestFactory;
    NSObject<OS_dispatch_source> *_updatingTimer;
}

@property(copy, nonatomic) CDUnknownBlockType airQualityRequestFactory; // @synthesize airQualityRequestFactory=_airQualityRequestFactory;
@property(readonly, nonatomic) AirQualityConditions *airQualityConditions; // @synthesize airQualityConditions=_airQualityConditions;
- (void).cxx_destruct;
- (void)_updateLocation:(id)arg1;
- (void)_updateAirQualityConditions:(id)arg1;
- (_Bool)_shouldQueryLocationForAirQualityData:(id)arg1;
- (void)_scheduleAirQualityConditionsRefresh;
- (void)_notifyObserversAirQualityConditionsDidChange;
- (id)_countriesSupportAQI;
- (void)weatherLocationDataProvider:(id)arg1 didChangeLocation:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
