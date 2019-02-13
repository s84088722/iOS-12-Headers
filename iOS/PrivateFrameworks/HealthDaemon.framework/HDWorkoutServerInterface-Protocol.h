//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HKWorkout, HKWorkoutConfiguration, NSArray, NSUUID;
@protocol HKFitnessMachineConnectionClientInterface, HKFitnessMachineConnectionInitiatorClientInterface;

@protocol HDWorkoutServerInterface <NSObject>
- (void)remote_forbidConnectionForFitnessMachineSessionUUID:(NSUUID *)arg1 withConnectionUUID:(NSUUID *)arg2;
- (void)remote_permitConnectionForFitnessMachineSessionUUID:(NSUUID *)arg1 activityType:(unsigned long long)arg2 withConnectionUUID:(NSUUID *)arg3;
- (void)remote_registerConnectionInitiatorClient:(id <HKFitnessMachineConnectionInitiatorClientInterface>)arg1 withConnectionUUID:(NSUUID *)arg2;
- (void)remote_simulateDisconnect;
- (void)remote_simulateAccept;
- (void)remote_simulateTapWithFitnessMachineType:(unsigned long long)arg1;
- (void)remote_markClientReadyWithConnectionUUID:(NSUUID *)arg1;
- (void)remote_endFitnessMachineConnectionForFitnessMachineSessionUUID:(NSUUID *)arg1 withConnectionUUID:(NSUUID *)arg2;
- (void)remote_endFitnessMachineConnectionWithUUID:(NSUUID *)arg1;
- (void)remote_registerClient:(id <HKFitnessMachineConnectionClientInterface>)arg1 withConnectionUUID:(NSUUID *)arg2;
- (void)remote_recoverActiveWorkoutSessionWithCompletion:(void (^)(HKWorkoutSessionTaskConfiguration *, HKWorkoutBuilderConfiguration *, NSUUID *, NSError *))arg1;
- (void)remote_finishAllWorkoutsWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_startWatchAppWithWorkoutConfiguration:(HKWorkoutConfiguration *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_generatePauseOrResumeRequestWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_replaceWorkout:(HKWorkout *)arg1 withWorkout:(HKWorkout *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_addSamples:(NSArray *)arg1 toWorkout:(HKWorkout *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_getCurrentWorkoutSnapshotWithCompletion:(void (^)(_HKCurrentWorkoutSnapshot *, NSError *))arg1;
- (void)remote_getFirstPartyWorkoutSnapshotWithCompletion:(void (^)(_HKFirstPartyWorkoutSnapshot *, NSError *))arg1;
- (void)remote_activeWorkoutApplicationIdentifier:(void (^)(NSString *, NSError *))arg1;
@end

