//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppStoreDaemon/NSObject-Protocol.h>

@class ASDAppClusterMapping, ASDAppEvent, NSArray;

@protocol ASDPersonalizationServiceProtocol <NSObject>
- (void)tasteProfileFeatureEnabledWithCompletionBlock:(void (^)(_Bool, NSError *))arg1;
- (void)setClusterMappings:(NSArray *)arg1 completionBlock:(void (^)(_Bool, NSError *))arg2;
- (void)setClusterMapping:(ASDAppClusterMapping *)arg1 completionBlock:(void (^)(_Bool, NSError *))arg2;
- (void)sendMetricsWithCompletionBlock:(void (^)(_Bool, NSError *))arg1;
- (void)resetMetricsWithCompletionBlock:(void (^)(_Bool, NSError *))arg1;
- (void)resetActorIDWithCompletionBlock:(void (^)(_Bool, NSError *))arg1;
- (void)reportAppEvent:(ASDAppEvent *)arg1 completionBlock:(void (^)(_Bool, NSError *))arg2;
- (void)recordMetricsWithCompletionBlock:(void (^)(_Bool, NSError *))arg1;
- (void)recordLaunchesWithCompletionBlock:(void (^)(_Bool, NSError *))arg1;
- (void)reloadClusterMappingsWithCompletionBlock:(void (^)(_Bool, NSError *))arg1;
- (void)getClusterMappingsWithCompletionBlock:(void (^)(NSArray *, NSError *))arg1;
- (void)getAppEventsWithCompletionBlock:(void (^)(NSArray *, NSError *))arg1;
- (void)getGroupingToken:(void (^)(NSString *, NSError *))arg1;
- (void)flushMetricsWithCompletionBlock:(void (^)(_Bool, NSError *))arg1;
@end

