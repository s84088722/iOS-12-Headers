//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PLCloudPhotoLibraryManager, PLPhotoLibrary;
@protocol OS_dispatch_queue;

@interface PLCloudResourcePruneManager : NSObject
{
    PLPhotoLibrary *_photoLibrary;
    PLCloudPhotoLibraryManager *_cplManager;
    _Bool _stopped;
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (id)_nonOriginalResourceTypes;
+ (id)_originalResourceTypes;
- (long long)pruneResources:(id)arg1 inPhotoLibrary:(id)arg2;
- (id)_identifierForResource:(id)arg1;
- (id)_predicateForPrune;
- (id)_predicateForCPLResourceTypes:(id)arg1;
- (long long)diskSpaceToPrune;
- (long long)_localResourcesSize;
- (id)_colorAwareResourceTypes;
- (void)_updateLocalSRGBFileForPrunedResource:(id)arg1 inPhotoLibrary:(id)arg2;
- (void)_updateLocalStateForPrunedResource:(id)arg1 inPhotoLibrary:(id)arg2;
- (void)_runOnWorkQueueWithTransaction:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)pruneStatusForDebug:(_Bool)arg1;
- (long long)_fetchResourcesForPruningWithBudget:(long long)arg1 batchHandler:(CDUnknownBlockType)arg2;
- (void)stop;
- (void)startAutomaticPruneWithBudget:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateCacheDeletePurgeableAmount;
- (void)dealloc;
- (id)initWithCPLManager:(id)arg1;
- (id)init;

@end

