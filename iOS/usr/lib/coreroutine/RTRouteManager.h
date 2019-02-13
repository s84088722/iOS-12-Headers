//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <coreroutine/RTPurgable-Protocol.h>

@class NSString, RTBBDataProvider, RTBatteryManager, RTDefaultsManager, RTGeoRouteStore, RTLearnedLocationManager, RTLocationStore, RTMapAccess, RTMetricManager, RTMotionActivityManager, RTPersistenceManager, RTPlatform, RTReachabilityManager;
@protocol OS_dispatch_queue;

@interface RTRouteManager : NSObject <RTPurgable>
{
    _Bool _learningInProgress;
    _Bool _allowPersistRoutes;
    _Bool _chargerConnected;
    NSObject<OS_dispatch_queue> *_queue;
    RTLocationStore *_locationStore;
    RTLearnedLocationManager *_learnedLocationManager;
    RTDefaultsManager *_defaultsManager;
    RTPersistenceManager *_persistenceManager;
    Class _routeFinderClass;
    RTMapAccess *_mapAccess;
    RTPlatform *_platform;
    RTBBDataProvider *_bbDataProvider;
    RTMetricManager *_metricManager;
    RTReachabilityManager *_reachabilityManager;
    RTGeoRouteStore *_geoRouteStore;
    RTMotionActivityManager *_motionActivityManager;
    RTBatteryManager *_batteryManager;
    double _minMotionAutomotiveRatio;
    double _sampleRateForLearning;
    double _maxLocationUncertainty;
    long long _reachability;
}

@property(nonatomic) _Bool chargerConnected; // @synthesize chargerConnected=_chargerConnected;
@property(nonatomic) long long reachability; // @synthesize reachability=_reachability;
@property(nonatomic) _Bool allowPersistRoutes; // @synthesize allowPersistRoutes=_allowPersistRoutes;
@property(nonatomic) double maxLocationUncertainty; // @synthesize maxLocationUncertainty=_maxLocationUncertainty;
@property(nonatomic) double sampleRateForLearning; // @synthesize sampleRateForLearning=_sampleRateForLearning;
@property(nonatomic) double minMotionAutomotiveRatio; // @synthesize minMotionAutomotiveRatio=_minMotionAutomotiveRatio;
@property(nonatomic) _Bool learningInProgress; // @synthesize learningInProgress=_learningInProgress;
@property(retain, nonatomic) RTBatteryManager *batteryManager; // @synthesize batteryManager=_batteryManager;
@property(retain, nonatomic) RTMotionActivityManager *motionActivityManager; // @synthesize motionActivityManager=_motionActivityManager;
@property(retain, nonatomic) RTGeoRouteStore *geoRouteStore; // @synthesize geoRouteStore=_geoRouteStore;
@property(retain, nonatomic) RTReachabilityManager *reachabilityManager; // @synthesize reachabilityManager=_reachabilityManager;
@property(retain, nonatomic) RTMetricManager *metricManager; // @synthesize metricManager=_metricManager;
@property(retain, nonatomic) RTBBDataProvider *bbDataProvider; // @synthesize bbDataProvider=_bbDataProvider;
@property(retain, nonatomic) RTPlatform *platform; // @synthesize platform=_platform;
@property(retain, nonatomic) RTMapAccess *mapAccess; // @synthesize mapAccess=_mapAccess;
@property(retain, nonatomic) Class routeFinderClass; // @synthesize routeFinderClass=_routeFinderClass;
@property(retain, nonatomic) RTPersistenceManager *persistenceManager; // @synthesize persistenceManager=_persistenceManager;
@property(retain, nonatomic) RTDefaultsManager *defaultsManager; // @synthesize defaultsManager=_defaultsManager;
@property(retain, nonatomic) RTLearnedLocationManager *learnedLocationManager; // @synthesize learnedLocationManager=_learnedLocationManager;
@property(retain, nonatomic) RTLocationStore *locationStore; // @synthesize locationStore=_locationStore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (_Bool)_sampledForLearning;
- (void)_updateGeoRoutes:(id)arg1 toLocationOfInterestWithIdentifier:(id)arg2 fromLocationOfInterestWithIdentifier:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_displayLivabilityAlertIfAppropriate;
- (void)removeRoutesAssociatedToVisitWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)purgeManager:(id)arg1 performPurgeOfType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)clearAllRoutesWithHandler:(CDUnknownBlockType)arg1;
- (void)_clearRoutesPredating:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)injectRoutes:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_injectRoutes:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_statsForLocations:(id)arg1 typeDistribution:(id *)arg2 majorGapLength:(double *)arg3;
- (void)_statsForRoute:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_sortRoutes:(id)arg1 toLocationOfInterestWithIdentifier:(id)arg2 fromLocationOfInterestWithIdentifier:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_sortRoutes:(id)arg1 toLocationOfInterestWithIdentifier:(id)arg2 fromLocation:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)sortRoutes:(id)arg1 toLocationOfInterestWithIdentifier:(id)arg2 fromLocation:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_persistRoute:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)onReachabilityNotification:(id)arg1;
- (void)onBatteryNotification:(id)arg1;
- (void)onLearnedLocationManagerNotification:(id)arg1;
- (void)_learnRoutesSinceLastProcessedDateWithHandler:(CDUnknownBlockType)arg1;
- (void)_learnRoutesBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)learnRoutesBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_learnRouteForTransition:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_learnRoutesForTransitions:(id)arg1 currentTransitionIndex:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_buildTransitionsBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)_locationOfInterestForVisit:(id)arg1 fromLocationsOfInterest:(id)arg2;
- (void)_fetchRoutesWithPredicate:(id)arg1 includeLocations:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_fetchAllRoutesWithHandler:(CDUnknownBlockType)arg1 includeLocations:(_Bool)arg2;
- (void)fetchAllRoutesWithHandler:(CDUnknownBlockType)arg1 includeLocations:(_Bool)arg2;
- (void)_fetchRoutesBetweenStartDate:(id)arg1 endDate:(id)arg2 includeLocations:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;
- (void)fetchRoutesBetweenStartDate:(id)arg1 endDate:(id)arg2 includeLocations:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_fetchRoutesToLocationOfInterestWithIdentifier:(id)arg1 fromLocationOfInterestWithIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)fetchRoutesToLocationOfInterestWithIdentifier:(id)arg1 fromLocationOfInterestWithIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)fetchPredictedRoutesToLocationOfInterestWithIdentifier:(id)arg1 fromLocation:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_invalidateMapAccess;
- (void)shutdown;
- (void)_setup;
- (id)initWithLocationStore:(id)arg1 learnedLocationManager:(id)arg2 defaultsManager:(id)arg3 persistenceManager:(id)arg4 routeFinderClass:(Class)arg5 platform:(id)arg6 bbDataProvider:(id)arg7 metricManager:(id)arg8 reachabilityManager:(id)arg9 geoRouteStore:(id)arg10 motionActivityManager:(id)arg11 batteryManager:(id)arg12;
- (id)init;
- (void)_submitMetricLearnedRouteInstanceWithNumberOfInputLocations:(int)arg1 numberOfFilteredLocations:(int)arg2 length:(int)arg3 recoveryTime:(int)arg4 failureReason:(int)arg5 latitude:(double)arg6 longitude:(double)arg7 majorGapLength:(int)arg8 locationTypeDistribution:(id)arg9 roadClassDistribution:(id)arg10;
- (void)_submitMetricRankRoutesInstanceWithNumberOfInputRoutes:(int)arg1 highestRankedRouteScore:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
