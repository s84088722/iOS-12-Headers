//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineStorage.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLActiveDownloadQueue, CPLPlatformObject, NSDate, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CPLEngineResourceDownloadQueue : CPLEngineStorage <CPLAbstractObject>
{
    NSObject<OS_dispatch_queue> *_downloadLock;
    CPLActiveDownloadQueue *_highPriorityQueue;
    CPLActiveDownloadQueue *_thumbnailHighPriorityQueue;
    CPLActiveDownloadQueue *_lowPriorityQueue;
    unsigned long long _inflightTransferTasksCount;
    unsigned long long _transferTasksBurstCount;
    unsigned long long _lastTransferTasksBurstCount;
    NSDate *_lastTransferTaskBurstDate;
    _Bool _shouldRequestABackgroundDownloadSyncPhase;
}

+ (_Bool)shouldRetryDownloadOnError:(id)arg1;
- (void).cxx_destruct;
- (void)barrier;
- (id)status;
- (id)_queuesStatus;
- (_Bool)hasActiveOrQueuedBackgroundDownloadOperations;
- (unsigned long long)countOfQueuedDownloadTasks;
- (id)enumeratorForDownloadedResources;
- (_Bool)removeAllBackgroundDownloadTasksForItemWithScopedIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)resetDequeuedBackgroundDownloadTasksWithError:(id *)arg1;
- (id)dequeueNextBackgroundDownloadTasksForResourceType:(unsigned long long)arg1 maximumSize:(unsigned long long)arg2 maximumCount:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)markBackgroundDownloadTaskForResourceAsSuceeded:(id)arg1 error:(id *)arg2;
- (_Bool)removeBackgroundDownloadTaskForResource:(id)arg1 error:(id *)arg2;
- (_Bool)reenqueueBackgroundDownloadTaskForResource:(id)arg1 bumpRetryCount:(_Bool)arg2 didDiscard:(_Bool *)arg3 error:(id *)arg4;
- (_Bool)enqueueBackgroundDownloadTaskForResource:(id)arg1 downloading:(_Bool)arg2 error:(id *)arg3;
- (void)_unscheduleBackgroundDownloads;
- (void)_requestBackgroundDownloads;
- (void)_scheduleBackgroundDownloadsIfNecessary;
- (void)_dequeueTransferTaskInActiveQueue:(id)arg1;
- (void)_enqueueTransferTaskInActiveQueue:(id)arg1;
- (id)_activeQueueForTransferTask:(id)arg1;
- (void)_dispatchTransportTasksIfNecessary;
- (_Bool)_launchTransportTaskForQueue:(id)arg1 highPriority:(_Bool)arg2;
- (_Bool)_canScheduleBackgroundDownloads;
- (unsigned long long)_transportTaskCount;
- (_Bool)_shouldTryLowPriorityDownloadWithError:(id *)arg1;
- (id)_realDownloadTaskForLocalResource:(id)arg1 cloudResource:(id)arg2 didStartHandler:(CDUnknownBlockType)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_resourceStorageCopyTaskForResource:(id)arg1 cloudResource:(id)arg2 didStartHandler:(CDUnknownBlockType)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_failedTaskWithCompletionHandler:(CDUnknownBlockType)arg1 error:(id)arg2 resource:(id)arg3 highPriority:(_Bool)arg4;
- (id)_downloadTaskForLocalResource:(id)arg1 clientBundleID:(id)arg2 highPriority:(_Bool)arg3 proposedTaskIdentifier:(id)arg4 didStartHandler:(CDUnknownBlockType)arg5 progressHandler:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (id)downloadTaskForLocalResource:(id)arg1 clientBundleID:(id)arg2 highPriority:(_Bool)arg3 proposedTaskIdentifier:(id)arg4 didStartHandler:(CDUnknownBlockType)arg5 progressHandler:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (id)cloudResourceForLocalResource:(id *)arg1 shouldNotTrustCaches:(_Bool *)arg2 transportScope:(id *)arg3 error:(id *)arg4;
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;
- (unsigned long long)scopeType;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CPLPlatformObject *platformObject;
@property(readonly) Class superclass;

@end

