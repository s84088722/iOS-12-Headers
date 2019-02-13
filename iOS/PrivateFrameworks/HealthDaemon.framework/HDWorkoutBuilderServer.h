//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDStandardTaskServer.h>

#import <HealthDaemon/HDTaskServerObserver-Protocol.h>
#import <HealthDaemon/HDWorkoutDataAccumulator-Protocol.h>
#import <HealthDaemon/HDWorkoutDataDestination-Protocol.h>
#import <HealthDaemon/HKDataFlowLinkProcessor-Protocol.h>
#import <HealthDaemon/HKStateMachineDelegate-Protocol.h>
#import <HealthDaemon/HKWorkoutBuilderServerInterface-Protocol.h>

@class HDWorkoutBuilderEntity, HKDataFlowLink, HKObserverSet, HKStateMachine, HKWorkoutBuilderConfiguration, NSArray, NSDate, NSDateInterval, NSError, NSMutableDictionary, NSMutableSet, NSObject, NSSet, NSString, NSUUID;
@protocol HDWorkoutDataAccumulator, OS_dispatch_queue;

@interface HDWorkoutBuilderServer : HDStandardTaskServer <HDWorkoutDataAccumulator, HKDataFlowLinkProcessor, HKStateMachineDelegate, HKWorkoutBuilderServerInterface, HDWorkoutDataDestination, HDTaskServerObserver>
{
    struct os_unfair_lock_s _lock;
    HDWorkoutBuilderEntity *_persistentEntity;
    NSError *_error;
    HKObserverSet *_dataAccumulatorObservers;
    HKObserverSet *_sampleObservers;
    NSSet *_quantityTypesIncludedWhilePaused;
    NSMutableDictionary *_statisticsCalculatorsByType;
    NSMutableDictionary *_sourceOrderProvidersByType;
    NSMutableDictionary *_statisticsDataSourcesByType;
    NSMutableSet *_quantityTypesRequiringCalculatorInvalidation;
    HKDataFlowLink *_workoutDataFlowLink;
    NSSet *_expectedDataSourceUUIDs;
    HKStateMachine *_stateMachine;
    long long _targetConstructionState;
    NSObject<OS_dispatch_queue> *_upstreamQueue;
    HKWorkoutBuilderConfiguration *_configuration;
    NSMutableDictionary *_metadata;
    NSArray *_workoutEvents;
    NSDate *_workoutStartDate;
    NSDate *_workoutEndDate;
    NSDateInterval *_dataInterval;
}

+ (_Bool)validateConfiguration:(id)arg1 error:(out id *)arg2;
+ (Class)configurationClass;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (id)dataDestinationStateMachineForTaskUUID:(id)arg1 configuration:(id)arg2;
+ (_Bool)finishAllDetachedWorkoutBuildersExcludingSessions:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (_Bool)finishAllWorkoutBuildersForClient:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (void)finishDetachedBuilderForEntity:(id)arg1 sessionEndDate:(id)arg2 profile:(id)arg3;
+ (id)recoveredWorkoutBuilderConfigurationForClient:(id)arg1 sessionIdentifier:(id)arg2 builderIdentifierOut:(id *)arg3 profile:(id)arg4 error:(id *)arg5;
@property(copy, nonatomic) NSDateInterval *dataInterval; // @synthesize dataInterval=_dataInterval;
@property(copy, nonatomic) NSDate *workoutEndDate; // @synthesize workoutEndDate=_workoutEndDate;
@property(copy, nonatomic) NSDate *workoutStartDate; // @synthesize workoutStartDate=_workoutStartDate;
@property(retain, nonatomic) NSArray *workoutEvents; // @synthesize workoutEvents=_workoutEvents;
@property(retain, nonatomic) NSMutableDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) HKWorkoutBuilderConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)_lock_addQuantityTypesIncludedWhilePausedFromSource:(id)arg1 transaction:(id)arg2;
- (void)_setupDataSource:(id)arg1 identifier:(id)arg2;
- (void)didInvalidateTaskServer:(id)arg1;
- (void)didCreateTaskServer:(id)arg1;
- (_Bool)_canAddDataWithError:(id *)arg1;
- (_Bool)_validateAuthorizationToSaveWorkoutWithError:(id *)arg1;
- (void)_discardWorkout;
- (void)_lock_failWithError:(id)arg1;
- (id)_finishWorkoutWithError:(id *)arg1;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)exportedInterface;
- (_Bool)enumerateSamplesOfType:(id)arg1 error:(id *)arg2 handler:(CDUnknownBlockType)arg3;
- (void)removeSampleObserver:(id)arg1;
- (void)addSampleObserver:(id)arg1;
- (id)currentStatisticsByQuantityType;
- (void)_updateStatisticsPauseResumeMask;
- (id)_lock_maskedIntervalsForStatisticsOfType:(id)arg1;
- (void)_didUpdateStatistics:(id)arg1;
- (id)_lock_statisticsDataSourceForQuantityType:(id)arg1;
- (id)_lock_sourceOrderProviderForQuantityType:(id)arg1;
- (id)_lock_statisticsCalculatorForQuantityType:(id)arg1 mergeStrategy:(unsigned long long)arg2 computationMethod:(long long)arg3;
- (id)_lock_statisticsCalculatorForQuantityType:(id)arg1;
- (id)_lock_updateStatisticsWithSamples:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (void)_attemptRequeryForInvalidatedStatisticsCalculators;
- (id)_lock_associateSamples:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (void)_saveSamples:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_didUpdateEvents:(id)arg1;
- (_Bool)_insertWorkoutEvents:(id)arg1 error:(id *)arg2;
- (void)_didChangeElapsedTimeBasis;
- (void)_updateCachedStateForAddedWorkoutEvents:(id)arg1;
- (void)_didUpdateMetadata:(id)arg1;
- (_Bool)_addMetadata:(id)arg1 error:(id *)arg2;
- (id)currentMetadata;
- (void)remote_setStatisticsComputationMethod:(long long)arg1 forType:(id)arg2;
- (void)remote_setStatisticsMergeStrategy:(unsigned long long)arg1 forType:(id)arg2;
- (void)remote_updateDevice:(id)arg1;
- (void)remote_recoverWithCompletion:(CDUnknownBlockType)arg1;
- (void)_lock_pushCurrentConstructionState;
- (void)remote_addMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_addWorkoutEvents:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_addSamples:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_removeDataSourcesWithIdentifiers:(id)arg1;
- (void)remote_addDataSourcesWithIdentifiers:(id)arg1;
- (void)remote_setTargetConstructionState:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_notifySourcesOfTransitionFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (void)stateMachine:(id)arg1 didTransition:(id)arg2 fromState:(id)arg3 toState:(id)arg4 date:(id)arg5 error:(id)arg6;
- (void)stateMachine:(id)arg1 didEnterState:(id)arg2 date:(id)arg3 error:(id)arg4;
- (id)startDate;
- (id)currentEvents;
- (void)removeDataAccumulationObserver:(id)arg1;
- (void)addDataAccumulationObserver:(id)arg1;
@property(readonly, nonatomic) id <HDWorkoutDataAccumulator> workoutDataAccumulator;
- (void)addMetadata:(id)arg1 dataSource:(id)arg2;
- (void)addWorkoutEvents:(id)arg1 dataSource:(id)arg2;
- (void)addSamples:(id)arg1 dataSource:(id)arg2;
@property(readonly) unsigned long long workoutDataDestinationState;
@property(readonly, copy) NSUUID *workoutDataProcessorUUID;
@property(readonly) HKDataFlowLink *workoutDataFlowLink;
- (void)_recoverAssociatedSeriesBuilders;
- (long long)_recoveredStateForStartDate:(id)arg1 endDate:(id)arg2;
- (_Bool)_lock_recoverPersistedDataWithTransaction:(id)arg1 error:(id *)arg2;
- (void)_loadOrCreatePersistentEntity;
- (_Bool)_lock_loadOrCreatePersistentEntityInTransaction:(id)arg1 error:(id *)arg2;
- (_Bool)_lock_createPersistentEntityForConfiguration:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)_lock_configurationForPersistenceWithTransaction:(id)arg1 error:(id *)arg2;
- (_Bool)_lock_persistDataSourceRecoveryDataInTransaction:(id)arg1 error:(id *)arg2;
- (void)_persistRecoveryData;
@property(readonly, copy) NSString *description;
- (void)connectionConfigured;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 profile:(id)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

