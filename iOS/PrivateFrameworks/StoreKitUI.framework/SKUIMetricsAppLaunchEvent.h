//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreServices/SSMetricsBaseEvent.h>

#import <StoreKitUI/SKUIInspectableObject-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface SKUIMetricsAppLaunchEvent : SSMetricsBaseEvent <SKUIInspectableObject>
{
    NSMutableDictionary *_templateMetrics;
}

+ (double)processStartTime;
+ (void)load;
+ (id)consumePendingLaunchEvent;
+ (void)withPendingLaunchEvent:(CDUnknownBlockType)arg1;
+ (void)createPendingLaunchEvent;
+ (void)resetPendingLaunchEventForTesting;
@property(readonly, copy, nonatomic) NSDictionary *templateMetrics; // @synthesize templateMetrics=_templateMetrics;
- (void).cxx_destruct;
- (void)populateObjectInspector:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)appendPropertiesToBody:(id)arg1;
@property(nonatomic) _Bool usedBootstrapFallback;
@property(nonatomic) _Bool requiredBlockingBagLoad;
@property(nonatomic) double launchEndTime;
@property(nonatomic) double launchFailureTime;
@property(nonatomic) double initialTabResponseEndTime;
@property(nonatomic) double initialTabResponseStartTime;
@property(nonatomic) double initialTabRequestStartTime;
@property(nonatomic) double jsResourcesEndTime;
@property(nonatomic) double jsResourcesStartTime;
@property(nonatomic) double bootstrapEndTime;
@property(nonatomic) double bootstrapStartTime;
- (void)addTemplateLoadTimingMetric:(id)arg1 forURL:(id)arg2;
@property(nonatomic) double clientConfigurationLoadTime;
@property(nonatomic) double mainTime;
@property(retain, nonatomic) NSString *launchCorrelationKey;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

