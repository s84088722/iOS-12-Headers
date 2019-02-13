//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityAchievements/HDDatabaseProtectedDataObserver-Protocol.h>

@class ACHDataStore, ACHEarnedInstanceStore, HDProfile, NSCalendar, NSDate, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface ACHEarnedInstanceAwardingEngine : NSObject <HDDatabaseProtectedDataObserver>
{
    HDProfile *_profile;
    ACHDataStore *_dataStore;
    ACHEarnedInstanceStore *_earnedInstanceStore;
    CDStruct_7c8d061c _historicalEvaluationPolicy;
    NSMutableDictionary *_sourceRegistry;
    NSCalendar *_calendar;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSDate *_currentDateOverride;
    NSMutableDictionary *_queuedIncrementalEvaluations;
}

- (void).cxx_destruct;
- (id)currentDate;
- (void)setCurrentDateOverride:(id)arg1;
- (void)_queue_evaluateHistoryForSource:(id)arg1 databaseContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (void)requestHistoricalEvaluationForAllSourcesWithDatabaseContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestHistoricalEvaluationForAllSourcesWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestIncrementalEvaluationForSource:(id)arg1 evaluationBlock:(CDUnknownBlockType)arg2;
- (void)deregisterSource:(id)arg1;
- (void)registerSource:(id)arg1;
- (id)dataStorePropertyProviderForSource:(id)arg1;
- (unsigned long long)sourceCount;
- (id)initWithProfile:(id)arg1 dataStore:(id)arg2 earnedInstanceStore:(id)arg3 historicalEvaluationPolicy:(CDStruct_7c8d061c)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

