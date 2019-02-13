//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PSDActivityDelegate-Protocol.h"

@class NSEnumerator, NSMapTable, NSMutableArray, NSMutableDictionary, NSString, PSDActivity, PSYOptions, PSYSyncSession;
@protocol OS_dispatch_queue;

@interface PSDScheduler : NSObject <PSDActivityDelegate>
{
    PSYSyncSession *_syncSession;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_alertQueue;
    id _simulatorAlertToken;
    NSMapTable *_schedulerObservers;
    NSMutableArray *_activityQueue;
    PSDActivity *_currentActivity;
    PSYOptions *_options;
    NSEnumerator *_testInputsEnumerator;
    NSMutableDictionary *_timeoutTimers;
}

+ (_Bool)_isSyncShameDisabled;
+ (_Bool)_isInternalInstall;
+ (id)sharedScheduler;
@property(retain, nonatomic) NSMutableDictionary *timeoutTimers; // @synthesize timeoutTimers=_timeoutTimers;
@property(copy, nonatomic) PSYSyncSession *syncSession; // @synthesize syncSession=_syncSession;
@property(retain, nonatomic) NSEnumerator *testInputsEnumerator; // @synthesize testInputsEnumerator=_testInputsEnumerator;
@property(retain, nonatomic) PSYOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) PSDActivity *currentActivity; // @synthesize currentActivity=_currentActivity;
@property(retain, nonatomic) NSMutableArray *activityQueue; // @synthesize activityQueue=_activityQueue;
@property(retain, nonatomic) NSMapTable *schedulerObservers; // @synthesize schedulerObservers=_schedulerObservers;
- (void).cxx_destruct;
- (void)_queue_tellObserversDidClearSyncSession:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_queue_tellObserversDidUpdateSyncSessionWithUpdate:(id)arg1;
- (void)_queue_tellObserversWillStartSyncSession;
- (void)_queue_enumerateSchedulerObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)clearCurrentResumeContext;
- (void)_evaluateTestingParametersIfNeeded;
- (_Bool)shouldLaunchAsDryRun;
- (void)activity:(id)arg1 didUpdateProgress:(float)arg2;
- (void)activityDidCompleteSending:(id)arg1;
- (void)_currentProgressUpdated:(float)arg1 forActivity:(id)arg2;
- (void)_queue_updateWithSyncSession:(id)arg1;
- (void)_queue_updateSyncSessionActivity:(id)arg1;
- (void)cancelSyncSession;
- (void)_queue_cleanup;
- (void)_scheduledActivitiesDidComplete;
- (id)_syncOptionsForActivity:(id)arg1;
- (unsigned long long)_maximumInterruptionCountForActivity:(id)arg1;
- (_Bool)_canAttemptRetryForActivity:(id)arg1;
- (double)_timeoutForActivity:(id)arg1;
- (_Bool)_shouldHandleCallbackForActivity:(id)arg1;
- (void)_activityTimeoutHandler:(id)arg1;
- (void)_scheduleTimeoutForActivity:(id)arg1;
- (void)_popADropoutAlert:(unsigned long long)arg1;
- (void)_popATimeoutAlert:(unsigned long long)arg1;
- (void)_takeStackshotSequenceWithLabel:(id)arg1;
- (void)_activityDidTimeout:(id)arg1;
- (void)_activityWasInterrupted:(id)arg1;
- (void)_cancelAllActivityTimers;
- (void)_clearActivityTimer:(id)arg1;
- (void)_finishActivity:(id)arg1 success:(_Bool)arg2 error:(id)arg3;
- (void)_abortCurrentActivity;
- (void)_startActivity:(id)arg1;
- (void)_dequeueNextActivity;
- (id)activitiesForSessionActivites:(id)arg1;
- (id)_localizedString:(id)arg1;
- (_Bool)scheduleSyncSession:(id)arg1;
- (void)removeSchedulerObserver:(id)arg1;
- (void)addSchedulerObserver:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

