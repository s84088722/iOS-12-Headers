//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <coreroutine/RTStore.h>

@class RTDistanceCalculator;

@interface RTLearnedLocationStore : RTStore
{
    RTDistanceCalculator *_distanceCalculator;
}

+ (id)filterPlaces:(id)arg1;
@property(retain, nonatomic) RTDistanceCalculator *distanceCalculator; // @synthesize distanceCalculator=_distanceCalculator;
- (void).cxx_destruct;
- (void)_associatePlacesToVisits:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)logLocationsOfInterestWithHandler:(CDUnknownBlockType)arg1;
- (void)_logLocationsOfInterestWithHandler:(CDUnknownBlockType)arg1;
- (void)_removeAllMapItems:(CDUnknownBlockType)arg1;
- (void)removeAllMapItems:(CDUnknownBlockType)arg1;
- (void)_fetchEntityAsDictionaryWithEntityName:(id)arg1 propertiesToFetch:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)__removeUnreferencedMapItems:(CDUnknownBlockType)arg1;
- (void)__removeUnreferencedExtendedAttributes:(CDUnknownBlockType)arg1;
- (void)__removeUnreferencedAddresses:(CDUnknownBlockType)arg1;
- (void)_removeUnreferencedMapItems:(CDUnknownBlockType)arg1;
- (void)removeUnreferencedMapItems:(CDUnknownBlockType)arg1;
- (void)replaceWithLocationsOfInterest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_replaceWithLocationsOfInterest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)clearWithHandler:(CDUnknownBlockType)arg1;
- (void)_clearWithHandler:(CDUnknownBlockType)arg1;
- (void)removeRecordsExpiredBeforeDate:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_removeRecordsExpiredBeforeDate:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_removeLocationsOfInterestWithHandler:(CDUnknownBlockType)arg1;
- (void)removeTransitionsReferencingVisits:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_removeTransitionsReferencingVisits:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)removeTransitionsWithHandler:(CDUnknownBlockType)arg1;
- (void)_removeTransitionsWithHandler:(CDUnknownBlockType)arg1;
- (void)removeVisitsWithHandler:(CDUnknownBlockType)arg1;
- (void)_removeVisitsWithHandler:(CDUnknownBlockType)arg1;
- (void)removeVisits:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_removeVisits:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)removePlacesWithoutVisitsWithHandler:(CDUnknownBlockType)arg1;
- (void)_removePlacesWithoutVisitsWithHandler:(CDUnknownBlockType)arg1;
- (void)removePlacesWithHandler:(CDUnknownBlockType)arg1;
- (void)_removePlacesWithHandler:(CDUnknownBlockType)arg1;
- (void)removePlace:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_removePlace:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_fetchVisitsWithoutPlacesForCurrentDeviceWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchVisitsWithoutPlacesForCurrentDeviceWithHandler:(CDUnknownBlockType)arg1;
- (void)_fetchVisitsToPlace:(id)arg1 deviceClass:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)fetchVisitsToPlace:(id)arg1 deviceClass:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_fetchPlacesThatHaveVisitsWithDeviceClass:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchPlacesThatHaveVisitsWithDeviceClass:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_fetchDominantDeviceClassWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchDominantDeviceClassWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchMetricsWithHandler:(CDUnknownBlockType)arg1;
- (void)_fetchMetricsWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchLocationOfInterestTransitionsBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_fetchLocationOfInterestTransitionsBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)fetchLocationOfInterestWithPlace:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_fetchLocationOfInterestWithPlace:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchLocationOfInterestWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_fetchLocationOfInterestWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchLocationOfInterestVisitedLastWithHandler:(CDUnknownBlockType)arg1;
- (void)_fetchLocationOfInterestVisitedLastWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchLocationOfInterestVisitedFirstWithHandler:(CDUnknownBlockType)arg1;
- (void)_fetchLocationOfInterestVisitedFirstWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchAllLocationsOfInterestWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchRecentLocationsOfInterestWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchLocationsOfInterestVisitedSinceDate:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchLocationsOfInterestVisitedBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_fetchLocationsOfInterestVisitedBetweenStartDate:(id)arg1 endDate:(id)arg2 includePlaceholders:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;
- (void)fetchLocationsOfInterestWithPlaceType:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_fetchLocationsOfInterestWithPlaceType:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchLocationsOfInterestWithinDistance:(double)arg1 location:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_fetchLocationsOfInterestWithinDistance:(double)arg1 location:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)_learnedLocationsOfInterestFromLearnedLocationsOfInterestMO:(id)arg1 context:(id)arg2;
- (void)fetchTransitionsBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)fetchTransitionsWithHandler:(CDUnknownBlockType)arg1;
- (void)_fetchTransitionsBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)fetchTransitionsOriginatingFromVisits:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_fetchTransitionsOriginatingFromVisits:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchCountOfVisitsToPlaceWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_fetchCountOfVisitsToPlaceWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchLastVisitToPlaceWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_fetchLastVisitToPlaceWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchLastVisitWithHandler:(CDUnknownBlockType)arg1;
- (void)_fetchLastVisitWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchVisitsToPlace:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_fetchVisitsToPlace:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchVisitsWithHandler:(CDUnknownBlockType)arg1;
- (void)_fetchVisitsWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchVisitsPredating:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_fetchVisitsPredating:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchVisitWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_fetchVisitWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchPlaceWithMapItemIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_fetchPlaceWithMapItemIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchPlacesWithinDistance:(double)arg1 location:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_fetchPlacesWithinDistance:(double)arg1 location:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)fetchPlacesWithMapItem:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchPlaceWithMapItem:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_fetchPlacesWithMapItem:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchPlaceOfVisit:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_fetchPlaceOfVisit:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchPlacesWithType:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_fetchPlacesWithType:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchPlacesWithHandler:(CDUnknownBlockType)arg1;
- (void)_fetchPlacesWithHandler:(CDUnknownBlockType)arg1;
- (void)updateTransitionWithIdentifier:(id)arg1 motionActivityType:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_updateTransitionWithIdentifier:(id)arg1 motionActivityType:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)updateExpirationDateOfVisitsWithIdentifiers:(id)arg1 expirationDate:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_updateExpirationDateOfVisitsWithIdentifiers:(id)arg1 expirationDate:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 place:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_updateLocationOfInterestWithIdentifier:(id)arg1 place:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)updatePlaces:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_refreshMapItemsWithEnumerationBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)refreshMapItemsWithEnumerationBlock:(CDUnknownBlockType)arg1;
- (void)_migrateLegacyMapItemsWithEnumerationBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)migrateLegacyMapItemsWithEnumerationBlock:(CDUnknownBlockType)arg1;
- (void)storeTransitions:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)storeVisits:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)associatePlacesToVisits:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)storeVisits:(id)arg1 place:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_storeVisits:(id)arg1 place:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)storePlaces:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithDistanceCalculator:(id)arg1 persistenceManager:(id)arg2;
- (id)init;

@end

