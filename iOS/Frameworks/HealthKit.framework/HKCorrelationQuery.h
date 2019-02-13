//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKQuery.h>

#import <HealthKit/HKCorrelationQueryClientInterface-Protocol.h>

@class HKCorrelationType, NSDictionary, NSMutableArray, NSString;

@interface HKCorrelationQuery : HKQuery <HKCorrelationQueryClientInterface>
{
    NSDictionary *_samplePredicates;
    NSMutableArray *_correlationsPendingDelivery;
    CDUnknownBlockType _completionHandler;
    NSDictionary *_filterDictionary;
}

+ (void)configureClientInterface:(id)arg1;
+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (_Bool)shouldApplyAdditionalPredicateForObjectType:(id)arg1;
@property(readonly, nonatomic) NSDictionary *filterDictionary; // @synthesize filterDictionary=_filterDictionary;
@property(readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, copy) NSDictionary *samplePredicates; // @synthesize samplePredicates=_samplePredicates;
- (void).cxx_destruct;
- (id)_predicateFilterClasses;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_deliverError:(id)arg1;
- (void)queue_validate;
- (void)queue_populateConfiguration:(id)arg1;
- (void)client_deliverCorrelations:(id)arg1 clearPendingSamples:(_Bool)arg2 isFinalBatch:(_Bool)arg3 queryUUID:(id)arg4;
@property(readonly, copy) HKCorrelationType *correlationType;
- (id)initWithType:(id)arg1 predicate:(id)arg2 samplePredicates:(id)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
