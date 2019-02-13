//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKWorkoutBuilder.h>

@class HKLiveWorkoutDataSource, HKWorkoutSession, NSArray;
@protocol HKLiveWorkoutBuilderDelegate;

@interface HKLiveWorkoutBuilder : HKWorkoutBuilder
{
    HKLiveWorkoutDataSource *_dataSource;
    NSArray *_additionalDataSources;
    id <HKLiveWorkoutBuilderDelegate> _delegate;
    HKWorkoutSession *_workoutSession;
}

@property(readonly) __weak HKWorkoutSession *workoutSession; // @synthesize workoutSession=_workoutSession;
@property __weak id <HKLiveWorkoutBuilderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)connectionInterrupted;
- (void)clientRemote_didUpdateMetadata:(id)arg1;
- (void)clientRemote_didUpdateStatistics:(id)arg1;
- (void)stateMachine:(id)arg1 didEnterState:(id)arg2 date:(id)arg3 error:(id)arg4;
@property(retain) HKLiveWorkoutDataSource *dataSource;
@property(retain) NSArray *additionalDataSources;
- (void)_resourceQueue_updateElapsedTimeCache;
@property(readonly) double elapsedTime;
- (id)_privateDelegate;
@property _Bool shouldCollectWorkoutEvents;
- (id)initWithHealthStore:(id)arg1 builderConfiguration:(id)arg2 builderIdentifier:(id)arg3;
- (id)initWithHealthStore:(id)arg1 session:(id)arg2 builderConfiguration:(id)arg3 builderIdentifier:(id)arg4;

@end

