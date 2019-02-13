//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLPlanProtocol-Protocol.h>

@class NSString, PMLSessionDescriptor, PMLTrainingStore;
@protocol PMLLinRegTrackerProtocol, PMLNoiseStrategy;

@interface PMLLinRegTrainingPlan : NSObject <PMLPlanProtocol>
{
    PMLTrainingStore *_store;
    id <PMLLinRegTrackerProtocol> _tracker;
    id <PMLNoiseStrategy> _noiseStrategy;
    double _skew;
    unsigned long long _positiveLabel;
    PMLSessionDescriptor *_sessionDescriptor;
    unsigned long long _maxSessionsLimit;
    unsigned long long _sessionsInBatch;
    _Bool _isSynchronous;
    _Bool _useOnlyAppleInternalSessions;
    struct NSString *_planId;
}

+ (id)_objectiveFeaturesWithNoiseFromCovariates:(id)arg1 objectives:(id)arg2;
+ (id)featureMatrixWithNoiseFromCovariates:(id)arg1;
@property(readonly, nonatomic) _Bool useOnlyAppleInternalSessions; // @synthesize useOnlyAppleInternalSessions=_useOnlyAppleInternalSessions;
@property(readonly, nonatomic) unsigned long long maxSessionsLimit; // @synthesize maxSessionsLimit=_maxSessionsLimit;
@property(readonly, nonatomic) PMLSessionDescriptor *sessionDescriptor; // @synthesize sessionDescriptor=_sessionDescriptor;
@property(readonly, nonatomic) id <PMLLinRegTrackerProtocol> tracker; // @synthesize tracker=_tracker;
@property(readonly, nonatomic) PMLTrainingStore *store; // @synthesize store=_store;
@property(readonly, nonatomic) _Bool isSynchronous; // @synthesize isSynchronous=_isSynchronous;
@property(readonly, nonatomic) NSString *planId; // @synthesize planId=_planId;
- (void).cxx_destruct;
- (void)runUntilDoneForTesting;
- (id)runWhile:(CDUnknownBlockType)arg1 didFinish:(_Bool *)arg2;
@property(readonly, copy) NSString *description;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;
- (id)normalizeRegressor:(id)arg1;
- (void)loadSessionsSince:(double)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)train;
- (id)initWithStore:(id)arg1 tracker:(id)arg2 noiseStrategy:(id)arg3 planId:(struct NSString *)arg4 isSynchronous:(_Bool)arg5 positiveLabel:(unsigned long long)arg6 skew:(double)arg7 sessionDescriptor:(id)arg8 maxSessionsLimit:(unsigned long long)arg9 sessionsInBatch:(unsigned long long)arg10 useOnlyAppleInternalSessions:(_Bool)arg11;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

