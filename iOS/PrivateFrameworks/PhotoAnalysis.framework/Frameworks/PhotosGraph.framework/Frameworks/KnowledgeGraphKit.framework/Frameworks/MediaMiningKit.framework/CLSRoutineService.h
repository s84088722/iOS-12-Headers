//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLSLocationOfInterestCache, NSDateInterval, NSMutableSet;

@interface CLSRoutineService : NSObject
{
    CLSLocationOfInterestCache *_visitsCache;
    _Bool _routineIsAvailable;
    NSDateInterval *_fetchDateInterval;
    NSMutableSet *_pendingPinningVisitIdentifiers;
    struct CLSRoutineServiceStatisticsStruct _statistics;
}

@property(readonly) struct CLSRoutineServiceStatisticsStruct statistics; // @synthesize statistics=_statistics;
@property(nonatomic) _Bool routineIsAvailable; // @synthesize routineIsAvailable=_routineIsAvailable;
@property(retain, nonatomic) NSMutableSet *pendingPinningVisitIdentifiers; // @synthesize pendingPinningVisitIdentifiers=_pendingPinningVisitIdentifiers;
@property(retain, nonatomic) NSDateInterval *fetchDateInterval; // @synthesize fetchDateInterval=_fetchDateInterval;
- (void).cxx_destruct;
- (id)_placemarksFromLocationsOfInterest:(id)arg1;
- (void)_pinPendingVisits;
- (id)_fetchLocationOfInterestTransitionsWithinDateInterval:(id)arg1 routineManager:(id)arg2;
- (id)_fetchHomeAndWorkLocationsOfInterestWithRoutineManager:(id)arg1;
- (id)_fetchLocationsOfInterestWithinDateInterval:(id)arg1 routineManager:(id)arg2;
- (void)_buildLocationsOfInterestCache;
- (long long)predominantTransportationModeForDateInterval:(id)arg1 confidence:(double *)arg2;
- (double)_disambiguationDistanceForDevicePlacementType:(unsigned long long)arg1;
- (unsigned long long)_devicePlacementTypeForLocationsOfInterestVisits:(id)arg1;
- (_Bool)isRemoteLocation:(id)arg1 inDateInterval:(id)arg2;
- (id)locationOfInterestVisitsAtLocation:(id)arg1 inDateInterval:(id)arg2;
- (id)locationOfInterestAtLocation:(id)arg1;
- (id)locationOfInterestCloseToLocation:(id)arg1 inDateInterval:(id)arg2;
- (id)placemarksOfInterestOfType:(long long)arg1;
- (id)locationsOfInterestOfType:(long long)arg1;
@property(readonly, nonatomic) CLSLocationOfInterestCache *visitsCache; // @synthesize visitsCache=_visitsCache;
- (_Bool)hasLocationsOfInterestInformation;
- (void)postProcessLocationsOfInterest;
- (void)invalidateLocationsOfInterest;
- (id)initWithFetchDateInterval:(id)arg1;

@end

