//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/REElementRelevanceProviderGenerator-Protocol.h>
#import <RelevanceEngine/RELoggable-Protocol.h>

@class NSHashTable, NSLock, NSMapTable, NSMutableArray, NSMutableSet, NSString, REDependencyGraph, REFeatureSet, RERelevanceEngine, REUpNextDisjointSet, REUpNextScheduler;
@protocol OS_dispatch_queue, RERelevanceProviderEnvironmentDelegate;

@interface RERelevanceProviderEnvironment : NSObject <RELoggable, REElementRelevanceProviderGenerator>
{
    NSMutableArray *_relevanceManagers;
    NSMapTable *_relevanceClassManagerMap;
    NSMapTable *_relevanceHistogramMap;
    REUpNextDisjointSet *_relevanceProviderSet;
    REDependencyGraph *_dependencyGraph;
    NSMapTable *_relevanceValues;
    NSHashTable *_customProviders;
    NSLock *_relevanceValuesLock;
    REFeatureSet *_supportedFeatures;
    RERelevanceEngine *_engine;
    REUpNextScheduler *_scheduler;
    NSHashTable *_providersToUpdate;
    NSMutableSet *_providerManagersToUpdate;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _running;
    _Bool _allowsLocationUse;
    id <RERelevanceProviderEnvironmentDelegate> _delegate;
}

@property(nonatomic) _Bool allowsLocationUse; // @synthesize allowsLocationUse=_allowsLocationUse;
@property(nonatomic) __weak id <RERelevanceProviderEnvironmentDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)collectLoggableState:(CDUnknownBlockType)arg1;
- (id)createRelevaneProviderWithType:(id)arg1 withOptions:(id)arg2;
- (id)encodeRelevaneProvider:(id)arg1;
- (id)_relevaneProviderWithType:(id)arg1 withOptions:(id)arg2;
- (id)featuresForRelevanceProvider:(id)arg1;
- (id)_scaleRelevanceProviderValues:(id)arg1 values:(id)arg2;
- (id)relevancesForRelevanceProvider:(id)arg1;
- (id)relevancesForRelevanceProvider:(id)arg1 usingContext:(id)arg2;
- (_Bool)isRelevanceProviderHistoric:(id)arg1;
- (void)relateRelevanceProvider:(id)arg1 toRelevanceProvider:(id)arg2;
- (_Bool)isRelevanceProviderLoaded:(id)arg1;
- (_Bool)containsRelevanceProvider:(id)arg1;
- (void)removeRelevanceProvider:(id)arg1;
- (void)addRelevanceProvider:(id)arg1;
@property(readonly, nonatomic) unsigned long long relevanceProviderCount;
- (void)_onQueue_async:(CDUnknownBlockType)arg1;
- (id)_histogramForFeature:(id)arg1;
- (id)_histogramForProvider:(id)arg1;
- (id)_providerManagerForProvider:(id)arg1;
- (void)_addRelevanceValue:(id)arg1 forProvider:(id)arg2;
- (void)_removeRelevanceValueForProvider:(id)arg1;
- (void)_queue_performUpdate:(CDUnknownBlockType)arg1;
- (void)resume;
- (void)pause;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
- (void)dealloc;
- (id)initWithEngine:(id)arg1;
- (void)accessHistogramForFeature:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)scheduleUpdateForRelevanceProviderManager:(id)arg1;
- (void)scheduleUpdateForRelevanceProvider:(id)arg1;
- (void)immediateUpdateForRelevanceProviderManager:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isSupportedRelevanceProvider:(id)arg1;
- (id)currentRelevanceProvidersState;
- (id)engine;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

