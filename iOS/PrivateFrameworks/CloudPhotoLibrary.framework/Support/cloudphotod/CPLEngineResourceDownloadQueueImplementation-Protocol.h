//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CPLEngineStorageImplementation-Protocol.h"

@class CPLResource, CPLScopedIdentifier, NSArray;
@protocol NSFastEnumeration;

@protocol CPLEngineResourceDownloadQueueImplementation <CPLEngineStorageImplementation>
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;
- (_Bool)hasActiveOrQueuedBackgroundDownloadOperations;
- (unsigned long long)countOfQueuedDownloadTasks;
- (id <NSFastEnumeration>)enumeratorForDownloadedResources;
- (_Bool)removeAllBackgroundDownloadTasksForItemWithScopedIdentifier:(CPLScopedIdentifier *)arg1 error:(id *)arg2;
- (_Bool)resetDequeuedBackgroundDownloadTasksWithError:(id *)arg1;
- (NSArray *)dequeueNextBackgroundDownloadTasksForResourceType:(unsigned long long)arg1 maximumSize:(unsigned long long)arg2 maximumCount:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)removeBackgroundDownloadTaskForResource:(CPLResource *)arg1 taskIdentifier:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)markBackgroundDownloadTaskForResourceAsSuceeded:(CPLResource *)arg1 taskIdentifier:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)reenqueueBackgroundDownloadTaskForResource:(CPLResource *)arg1 taskIdentifier:(unsigned long long)arg2 bumpRetryCount:(_Bool)arg3 didDiscard:(_Bool *)arg4 error:(id *)arg5;
- (_Bool)enqueueBackgroundDownloadTaskForResource:(CPLResource *)arg1 downloading:(_Bool)arg2 error:(id *)arg3;
- (unsigned long long)newTaskIdentifier;
@end

