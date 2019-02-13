//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASDPersonalizationServiceProtocol-Protocol.h"

@class NSString;

@interface PersonalizationService : NSObject <ASDPersonalizationServiceProtocol>
{
}

+ (id)defaultService;
- (id)_currentClient;
- (void)tasteProfileFeatureEnabledWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setClusterMappings:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)setClusterMapping:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)sendMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)resetMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)resetActorIDWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)reloadClusterMappingsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)reportAppEvent:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)recordLaunchesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)recordMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getAppEventsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getClusterMappingsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getGroupingToken:(CDUnknownBlockType)arg1;
- (void)flushMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

