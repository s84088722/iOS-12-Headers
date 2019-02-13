//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDWorkoutDataDestination-Protocol.h>
#import <HealthDaemon/HKDataFlowLinkProcessor-Protocol.h>

@class HDProfile, HKDataFlowLink, HKWorkoutConfiguration, NSMutableArray, NSString, NSUUID;
@protocol HDWorkoutDataAccumulator;

@interface HDMockWorkoutDataDestination : NSObject <HKDataFlowLinkProcessor, HDWorkoutDataDestination>
{
    HKDataFlowLink *_workoutDataFlowLink;
    NSUUID *_dataProcessorUUID;
    unsigned long long _workoutDataDestinationState;
    id <HDWorkoutDataAccumulator> workoutDataAccumulator;
    CDUnknownBlockType _sampleHandler;
    CDUnknownBlockType _eventHandler;
    CDUnknownBlockType _metadataHandler;
    NSMutableArray *_dataSources;
    HDProfile *_profile;
    HKWorkoutConfiguration *_workoutConfiguration;
}

@property(retain, nonatomic) HKWorkoutConfiguration *workoutConfiguration; // @synthesize workoutConfiguration=_workoutConfiguration;
@property(retain, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
@property(retain, nonatomic) NSMutableArray *dataSources; // @synthesize dataSources=_dataSources;
@property(copy) CDUnknownBlockType metadataHandler; // @synthesize metadataHandler=_metadataHandler;
@property(copy) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
@property(copy) CDUnknownBlockType sampleHandler; // @synthesize sampleHandler=_sampleHandler;
@property(readonly, nonatomic) id <HDWorkoutDataAccumulator> workoutDataAccumulator; // @synthesize workoutDataAccumulator;
@property unsigned long long workoutDataDestinationState; // @synthesize workoutDataDestinationState=_workoutDataDestinationState;
- (void).cxx_destruct;
- (void)addMetadata:(id)arg1 dataSource:(id)arg2;
- (void)addWorkoutEvents:(id)arg1 dataSource:(id)arg2;
- (void)addSamples:(id)arg1 dataSource:(id)arg2;
@property(readonly, copy) NSUUID *workoutDataProcessorUUID;
@property(readonly) HKDataFlowLink *workoutDataFlowLink;
- (id)initWithQueue:(id)arg1 profile:(id)arg2 workoutConfiguration:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

