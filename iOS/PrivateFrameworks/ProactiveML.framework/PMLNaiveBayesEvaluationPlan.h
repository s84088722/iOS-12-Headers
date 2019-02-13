//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLPlanProtocol-Protocol.h>

@class NSString, PMLModelWeights, PMLSessionDescriptor, PMLTrainingStore;
@protocol PMLEvaluationTrackerProtocol;

@interface PMLNaiveBayesEvaluationPlan : NSObject <PMLPlanProtocol>
{
    PMLTrainingStore *_store;
    id <PMLEvaluationTrackerProtocol> _tracker;
    PMLSessionDescriptor *_sessionDescriptor;
    unsigned long long _maxSessionsLimit;
    PMLModelWeights *_currentModelWeights;
    PMLModelWeights *_probabilities;
    PMLModelWeights *_positiveConditionalProbabilities;
    PMLModelWeights *_negativeConditionalProbabilities;
    double _skew;
    _Bool _isMultiLabel;
    unsigned long long _positiveLabel;
    double _threshold;
    unsigned long long _evaluationLevel;
    _Bool _isSynchronous;
    struct NSString *_planId;
}

@property(readonly, nonatomic) unsigned long long maxSessionsLimit; // @synthesize maxSessionsLimit=_maxSessionsLimit;
@property(readonly, nonatomic) PMLSessionDescriptor *sessionDescriptor; // @synthesize sessionDescriptor=_sessionDescriptor;
@property(readonly, nonatomic) id <PMLEvaluationTrackerProtocol> tracker; // @synthesize tracker=_tracker;
@property(readonly, nonatomic) PMLTrainingStore *store; // @synthesize store=_store;
@property(readonly, nonatomic) _Bool isSynchronous; // @synthesize isSynchronous=_isSynchronous;
@property(readonly, nonatomic) NSString *planId; // @synthesize planId=_planId;
- (void).cxx_destruct;
- (void)runUntilDoneForTesting;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;
- (id)runWhile:(CDUnknownBlockType)arg1 didFinish:(_Bool *)arg2;
@property(readonly, copy) NSString *description;
- (id)normalizeRegressor:(id)arg1;
- (void)loadSessionsSince:(double)arg1 block:(CDUnknownBlockType)arg2;
- (id)run;
- (id)initWithStore:(id)arg1 tracker:(id)arg2 planId:(struct NSString *)arg3 isSynchronous:(_Bool)arg4 sessionDescriptor:(id)arg5 maxSessionsLimit:(unsigned long long)arg6 probabilities:(id)arg7 positiveConditionalProbabilities:(id)arg8 negativeConditionalProbabilities:(id)arg9 skew:(double)arg10 threshold:(double)arg11 isMultiLabel:(_Bool)arg12 positiveLabel:(unsigned long long)arg13 evaluationLevel:(unsigned long long)arg14;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

