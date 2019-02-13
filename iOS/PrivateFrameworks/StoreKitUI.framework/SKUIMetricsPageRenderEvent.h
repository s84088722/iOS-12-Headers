//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreServices/SSMetricsBaseEvent.h>

#import <StoreKitUI/SKUIInspectableObject-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSString;

@interface SKUIMetricsPageRenderEvent : SSMetricsBaseEvent <SKUIInspectableObject>
{
    NSMutableArray *_domChanges;
    NSMutableArray *_requests;
    NSDictionary *_metricsBase;
}

+ (id)_sampleWindowStartTime;
+ (void)_setSampleWindowStartTime:(id)arg1;
+ (double)_randomDouble;
+ (_Bool)shouldCollectPageRenderDataForDocument:(id)arg1;
+ (_Bool)shouldCollectPageRenderData;
@property(copy, nonatomic) NSDictionary *metricsBase; // @synthesize metricsBase=_metricsBase;
@property(readonly, copy, nonatomic) NSArray *requests; // @synthesize requests=_requests;
@property(readonly, copy, nonatomic) NSArray *domChanges; // @synthesize domChanges=_domChanges;
- (void).cxx_destruct;
- (void)populateObjectInspector:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)appendPropertiesToBody:(id)arg1;
@property(readonly, nonatomic, getter=isReadyForSubmission) _Bool readyForSubmission;
- (void)appendSamplingPropertiesFromClientContext:(id)arg1;
- (void)appendMetricsBaseProperties:(id)arg1;
@property(nonatomic, setter=setXPSamplingPercentageUsers:) double xpSamplingPercentageUsers;
@property(nonatomic, setter=setXPSamplingForced:) _Bool xpSamplingForced;
@property(nonatomic, setter=setXPSessionDuration:) double xpSessionDuration;
@property(nonatomic) double pageUserReadyTime;
@property(nonatomic) double resourceRequestEndTime;
@property(nonatomic) double resourceRequestOnScreenEndTime;
@property(nonatomic) double resourceRequestStartTime;
- (void)addRequest:(id)arg1;
- (void)addDOMChange:(id)arg1;
@property(nonatomic) double platformJsonParseEndTime;
@property(nonatomic) double platformJsonParseStartTime;
@property(nonatomic) _Bool platformResponseWasCached;
@property(nonatomic) double platformResponseEndTime;
@property(nonatomic) double platformResponseStartTime;
@property(nonatomic) double platformRequestStartTime;
@property(nonatomic) double pageDisappearTime;
@property(nonatomic) double pageAppearTime;
@property(nonatomic) double pageRequestedTime;
@property(retain, nonatomic) NSString *launchCorrelationKey;
@property(retain, nonatomic) NSString *clientCorrelationKey;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

