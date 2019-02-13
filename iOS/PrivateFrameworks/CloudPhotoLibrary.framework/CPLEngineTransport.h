//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>
#import <CloudPhotoLibrary/CPLEngineComponent-Protocol.h>

@class CPLEngineLibrary, CPLPlatformObject, NSString;

@interface CPLEngineTransport : NSObject <CPLAbstractObject, CPLEngineComponent>
{
    CPLPlatformObject *_platformObject;
    CPLEngineLibrary *_engineLibrary;
}

+ (id)platformImplementationProtocol;
@property(readonly, nonatomic) __weak CPLEngineLibrary *engineLibrary; // @synthesize engineLibrary=_engineLibrary;
@property(readonly, nonatomic) CPLPlatformObject *platformObject; // @synthesize platformObject=_platformObject;
- (void).cxx_destruct;
- (id)createGroupForQueryUserIdentities;
- (id)createGroupForAcceptingMomentShare;
- (id)createGroupForFetchingMomentShare;
- (id)createGroupForPublishingMomentShare;
- (id)createGroupForPruningCheck;
- (id)createGroupForAnalysisDownload;
- (id)createGroupForMovieStreaming;
- (id)createGroupForResourcesDownload;
- (id)createGroupForThumbnailsDownload;
- (id)createGroupForChangeDownload;
- (id)createGroupForChangeUpload;
- (id)createGroupForLibraryStateCheck;
- (id)createGroupForFeedback;
- (id)createGroupForFetchScopeListChanges;
- (id)createGroupForTransportScopeUpdate;
- (id)createGroupForTransportScopeDelete;
- (id)createGroupForSetup;
- (id)createGroupForThumbnailPrefetch;
- (id)createGroupForPrefetch;
- (id)createGroupForInitialDownload;
- (id)createGroupForResetSync;
- (id)createGroupForInitialUpload;
- (void)getPushEnvironmentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getStatusDictionaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)componentName;
- (void)closeAndDeactivate:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)upgradeFlags:(id)arg1 fromTransportScope:(id)arg2;
- (id)transportScopeForUpgradeFromScopeName:(id)arg1;
- (id)scopeNameForTransportScope:(id)arg1;
- (id)descriptionForTransportScope:(id)arg1;
- (void)cancelBlockedTasksIncludingBackground:(_Bool)arg1;
- (void)noteClientIsEndingSignificantWork;
- (void)noteClientIsBeginningSignificantWork;
- (void)setShouldOverride:(_Bool)arg1 forSystemBudgets:(unsigned long long)arg2;
- (void)getSystemBudgetsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)simpleDescriptionForScopeListSyncAnchor:(struct NSData *)arg1;
- (id)simpleDescriptionForSyncAnchor:(struct NSData *)arg1;
- (id)bestErrorForUnderlyingError:(id)arg1;
- (id)sendFeedbackTaskForMessages:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)queryUserIdentitiesTaskForParticipants:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)acceptTaskForMomentShare:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)fetchTaskForMomentShareURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)publishTaskForMomentShare:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)inMemoryDownloadTaskForResource:(id)arg1 transportScope:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)resourcesDownloadTaskWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)rampingRequestTaskForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)resourceCheckTaskForResources:(id)arg1 transportScopes:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)resourcePublishTaskForResource:(id)arg1 transportScope:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)fetchTransportScopeForScope:(id)arg1 transportScope:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)getLibraryInfoAndStateWithTransportScope:(id)arg1 scope:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)updateTransportScope:(id)arg1 scope:(id)arg2 libraryInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)deleteTransportScope:(id)arg1 scope:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)fetchScopeListChangesForScopeListSyncAnchor:(struct NSData *)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)downloadBatchTaskForSyncAnchor:(struct NSData *)arg1 transportScope:(id)arg2 scope:(id)arg3 currentLibraryInfo:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)queryTaskForCursor:(id)arg1 class:(Class)arg2 transportScope:(id)arg3 scopeIdentifier:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)uploadBatchTaskForBatch:(id)arg1 transportScope:(id)arg2 scope:(id)arg3 additionalTransportScopes:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)checkRecordsExistenceTaskForRecords:(id)arg1 fetchRecordProperties:(id)arg2 transportScope:(id)arg3 scope:(id)arg4 additionalTransportScopes:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)setupTaskUpdateDisabledFeatures:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) Class userIdentifierClass;
@property(readonly, nonatomic) Class transportGroupClass;
- (id)initWithEngineLibrary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

