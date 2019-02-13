//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDataCollector-Protocol.h>

@class HDDataCollectorMultiplexer, HDDataCollectorState, HDProfile, NSMutableDictionary, NSSet, NSString;
@protocol HDCoreMotionDataSource, OS_dispatch_queue;

@interface HDCoreMotionDataCollector : NSObject <HDDataCollector>
{
    NSSet *_quantityTypes;
    HDDataCollectorMultiplexer *_multiplexer;
    NSMutableDictionary *_lastCMDatumByType;
    id <HDCoreMotionDataSource> _dataSource;
    HDDataCollectorState *_state;
    long long _errorCount;
    NSObject<OS_dispatch_queue> *_queue;
    HDProfile *_profile;
}

@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (id)_migrateDataCollectionContextForType:(id)arg1 error:(id *)arg2;
- (Class)sensorDatumClassForAggregator:(id)arg1;
- (id)identifierForDataAggregator:(id)arg1;
- (id)sourceForDataAggregator:(id)arg1;
- (id)deviceForDataAggregator:(id)arg1;
- (void)dataAggregator:(id)arg1 wantsCollectionWithConfiguration:(id)arg2;
- (void)beginCollectionForDataAggregator:(id)arg1 lastPersistedSensorDatum:(id)arg2;
- (id)persistentIdentifier;
- (double)queue_differenceFromDatum:(id)arg1 toDatum:(id)arg2 type:(id)arg3;
- (id)queue_newDataSource;
- (id)collectedTypes;
- (Class)coreMotionDatumClass;
- (void)_accessToFitnessDataDidChange:(id)arg1;
- (void)_queue_beginUpdates;
- (void)_queue_populateLastDatumDictionary;
- (id)_queue_lastPersistedSensorDatumForType:(id)arg1;
- (void)_queue_updateCollectionType:(unsigned long long)arg1;
- (void)didReceiveCoreMotionData:(id)arg1 startingDatum:(id)arg2 error:(id)arg3;
- (id)_queue_diagnosticDescription;
- (void)_queue_forwardCoreMotionData:(id)arg1;
- (void)_queue_forwardCoreMotionData:(id)arg1 forType:(id)arg2;
- (id)coreMotionDatumFromSensorDatum:(id)arg1;
- (_Bool)queue_canBeginStreaming;
- (void)queue_recomputeCurrentState;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

