/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:33:54 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, _PASQueueLock, _PASLock, PETScalarEventTracker;

@interface _ATXAppLaunchMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _appLaunchHistoryQueue;
	NSObject*<OS_dispatch_queue> _logQueue;
	_PASQueueLock* _history;
	_PASLock* _cdContext;
	PETScalarEventTracker* _updateLaunchHistoryTracker;

}
+(void)_logPredictionForBundleId:(id)arg1 launchReason:(id)arg2 consumerType:(unsigned long long)arg3 consumerSubType:(unsigned char)arg4 ;
+(void)mergeAppLaunches:(id)arg1 andBacklightTransitions:(id)arg2 callingAppLaunchBlock:(/*^block*/id)arg3 ;
-(id)initWithInMemoryStore;
-(id)initWithAppInfoManager:(id)arg1 appLaunchHistogramManager:(id)arg2 appLaunchSequenceManager:(id)arg3 appDailyDose:(id)arg4 duetHelper:(id)arg5 ;
-(void)updateLaunchHistoryFromDuet;
-(void)updateLaunchHistoryFromDuet:(double)arg1 callback:(/*^block*/id)arg2 ;
-(id)getLastAppsFromDuetWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)registerForAppChange;
-(void)registerForBacklightChange;
-(void)handleAppLaunchNotification:(id)arg1 reason:(id)arg2 date:(id)arg3 ;
-(void)handleBacklightChangeNotificationWithValue:(int)arg1 ;
-(void)clearIntentHistogramHistory;
-(void)addLaunchWithBundleId:(id)arg1 date:(id)arg2 timeZone:(id)arg3 reason:(id)arg4 ;
-(void)_addSURFLaunchesDuringLastLaunchWithLockWitness:(id)arg1 ;
-(void)_addSurfLaunchesWithLockWitness:(id)arg1 betweenStartDate:(id)arg2 endDate:(id)arg3 ;
-(void)_addLaunchWithLockWitness:(id)arg1 bundleId:(id)arg2 date:(id)arg3 timeZone:(id)arg4 reason:(id)arg5 isExtension:(BOOL)arg6 ;
-(void)startDeltaRecording;
-(id)stopDeltaRecording;
-(id)appInfoManager;
-(id)appLaunchHistogramManager;
-(id)appLaunchSequenceManager;
-(void)swapDuetHelper:(id)arg1 ;
-(id)dailyDose;
-(void)_syncForTests;
-(id)init;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)clearHistory;
@end

