//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoAnalysis/PHAWorker.h>

#import <PhotoAnalysis/PHAGraphRegistration-Protocol.h>
#import <PhotoAnalysis/PLPhotoAnalysisGraphServiceProtocol-Protocol.h>

@class NSDate, NSDictionary, NSHashTable, NSMutableDictionary, NSObject, NSProgress, NSString, PGManager, PHAPredicateValidator;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface PHAGraphServiceWorker : PHAWorker <PHAGraphRegistration, PLPhotoAnalysisGraphServiceProtocol>
{
    unsigned long long _inq_state;
    _Bool _serviceEnabled;
    NSDate *_lastTodayWidgetMemoryCreationDate;
    NSDictionary *_snapshotFilenameLookup;
    unsigned long long _pendingGraphRequests;
    NSDate *_graphUpdateAllowedDate;
    unsigned long long _flags;
    NSProgress *_currentGraphRebuildProgress;
    PGManager *_graphManager;
    NSMutableDictionary *_pendingGraphReadyCallbacks;
    PHAPredicateValidator *_relatedRequestPredicateValidator;
    NSObject<OS_dispatch_queue> *_backgroundTaskQueue;
    NSDate *_lastLibraryChangeGraphUpdateJobCompletionDate;
    NSHashTable *_pendingRequestReferences;
    long long _pendingRequestReferenceCount;
    NSObject<OS_os_transaction> *_graphWorkerWarmedUpTransaction;
}

+ (void)initialize;
+ (id)stringFromGraphServiceState:(unsigned long long)arg1;
+ (long long)applicationDataFolderIdentifier;
+ (short)workerType;
+ (void)configureXPCConnection:(id)arg1;
@property(retain, nonatomic) NSObject<OS_os_transaction> *graphWorkerWarmedUpTransaction; // @synthesize graphWorkerWarmedUpTransaction=_graphWorkerWarmedUpTransaction;
@property(nonatomic) long long pendingRequestReferenceCount; // @synthesize pendingRequestReferenceCount=_pendingRequestReferenceCount;
@property(retain, nonatomic) NSHashTable *pendingRequestReferences; // @synthesize pendingRequestReferences=_pendingRequestReferences;
@property(retain, nonatomic) NSDate *lastLibraryChangeGraphUpdateJobCompletionDate; // @synthesize lastLibraryChangeGraphUpdateJobCompletionDate=_lastLibraryChangeGraphUpdateJobCompletionDate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundTaskQueue; // @synthesize backgroundTaskQueue=_backgroundTaskQueue;
@property(retain, nonatomic) PHAPredicateValidator *relatedRequestPredicateValidator; // @synthesize relatedRequestPredicateValidator=_relatedRequestPredicateValidator;
@property(retain, nonatomic) NSMutableDictionary *pendingGraphReadyCallbacks; // @synthesize pendingGraphReadyCallbacks=_pendingGraphReadyCallbacks;
@property(retain, nonatomic) PGManager *graphManager; // @synthesize graphManager=_graphManager;
@property(retain, nonatomic) NSProgress *currentGraphRebuildProgress; // @synthesize currentGraphRebuildProgress=_currentGraphRebuildProgress;
@property(nonatomic) unsigned long long flags; // @synthesize flags=_flags;
- (void).cxx_destruct;
- (void)graphUpdateMadeProgress:(double)arg1;
- (void)graphUpdateIsConsistent;
- (void)graphUpdateDidStop;
- (_Bool)wantsGraphUpdateNotifications;
- (_Bool)wantsLiveGraphUpdates;
- (void)requestSnapshotServiceForPeopleCurationResultsWithGraphOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestGraphRebuildNeededWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestSnapshotServiceForRelatedResultsWithGraphOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (_Bool)_shouldAggregateDataForReporting:(unsigned long long)arg1;
- (void)_logAggregatedStatistics:(id)arg1;
- (id)_dataAggregationKeyForCategory:(unsigned long long)arg1 subCategory:(unsigned long long)arg2 lookupTable:(id)arg3;
- (id)_aggregatedStatsForMoodKeywordCountedSet:(id)arg1;
- (id)_aggregatedStatsForMiroMoodCountVector:(id)arg1;
- (id)_aggregatedStatsForPossibleMoodCountVector:(id)arg1;
- (id)_aggregatedStatsForSuggestedMoodCountVector:(id)arg1;
- (id)_PHMemoryBlacklistedFeatureTypeValueToDataAggregationKeyLookup;
- (id)_PHMemoryBlacklistableFeatureTypeValueToDataAggregationKeyLookup;
- (id)_PHMemoryCategoryValueToDataAggregationKeyLookup;
- (void)requestPerformUpdatesForMomentLocalIdentifiersToInsert:(id)arg1 momentLocalIdentifiersToDelete:(id)arg2 momentLocalIdentifiersToReload:(id)arg3 context:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)requestWriteAdditionalDataToSnapshotResults:(id)arg1 forFilenameKey:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestMetadataSnapshotFolderCreationWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)_assetCollectionForRelatedIdentifier:(id)arg1;
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenMomentForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 additionalSnapshotSummaryInfo:(id)arg5 context:(id)arg6 reply:(CDUnknownBlockType)arg7;
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenAssetForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 context:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)requestSnapshotServiceForRelatedWithAssetLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestSnapshotServiceForRelatedWithMomentLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestGraphServicePerformsQueryWithContext:(id)arg1 query:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestGraphServiceStatusWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestInvalidateServicePersistentCachesWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestInvalidateServiceTransientCachesWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestGraphRebuildFractionCompletedWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestHighlightEstimatesWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestGraphServiceStatisticsWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestSharingMessageSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestSharingSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestCurationDebugInformationForAsset:(id)arg1 precision:(unsigned long long)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestExportGraphServiceForPurpose:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestRelatedDebugInformationBetweenAssetForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 context:(id)arg6 reply:(CDUnknownBlockType)arg7;
- (void)requestRelatedMomentsForPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestRelatedDebugInformationBetweenReferenceAssetCollectionForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 context:(id)arg6 reply:(CDUnknownBlockType)arg7;
- (void)pingGraphWorkerWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestSharingSuggestionsFromMessageStrings:(id)arg1 participantPHIdentifiers:(id)arg2 options:(id)arg3 context:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)requestSuggestedContributionsForAssetsMetadata:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestSuggestedRecipientsForMomentIdentifiers:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestSharingSuggestionsFromMomentLocalIdentifiers:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)simulateMemoriesNotificationWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (unsigned long long)_validatedMemoryNotificationState:(int)arg1;
- (void)didCompleteRebuildOrDiffSuccessfully;
- (_Bool)shouldAllowBackgroundActivityWithDescription:(id)arg1;
- (id)fetchOptionsWithCurrentPhotoLibraryFromFetchOptions:(id)arg1;
- (id)assetCollectionForLocalIdentifier:(id)arg1 options:(id)arg2;
- (long long)_titleTupleFormatForPhotoAnalysisTitleFormat:(long long)arg1;
- (id)_collectionListForLocalIdentifier:(id)arg1;
- (id)_assetCollectionForLocalIdentifier:(id)arg1;
- (id)informationDictionaryForAsset:(id)arg1;
- (void)stopProcessingGraphUpdateJob:(id)arg1;
- (void)startProcessingGraphUpdateJob:(id)arg1;
- (_Bool)stopAnalysisJob:(id)arg1 error:(id *)arg2;
- (_Bool)startAnalysisJob:(id)arg1 error:(id *)arg2;
- (void)requestTitleForPersonIdentifiers:(id)arg1 format:(long long)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestTitleForAssetCollectionWithLocalIdentifier:(id)arg1 format:(long long)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestTitleForCollectionMomentListWithLocalIdentifier:(id)arg1 format:(long long)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestTitleForMemoryWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestAssetsForPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestAssetCollectionsForPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestSocialGroupsForPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestAllSocialGroupsForPersonIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestSortedArrayOfPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestAssetCollectionsRelatedToPersonIdentifiers:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestSetDefaultsObject:(id)arg1 forKey:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestDefaultsObjectForKey:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)generateMemoriesRelatedDiagnosticsLogsWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)_diagnosticsLogsRootFolderPath;
- (void)requestCurationDebugInformationForAssetCollectionWithLocalIdentifier:(id)arg1 precision:(unsigned long long)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestRepresentativeAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestCuratedAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 options:(id)arg4 context:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)requestCuratedAssetForAssetCollectionWithLocalIdentifier:(id)arg1 referenceAssetLocalIdentifier:(id)arg2 precision:(unsigned long long)arg3 options:(id)arg4 context:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)requestAssetCollectionsRelatedToAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestAssetCollectionsRelatedToMomentWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (id)libraryTemporarilyUnavailableError;
- (id)currentlyUnavailableError;
- (long long)unavailableErrorCodeForCurrentState;
- (_Bool)canServiceGraphStatusRequestsInCurrentStateLoadingGraphIfNeeded;
- (_Bool)canServiceGraphCurationRequestsInCurrentStateLoadingGraphIfNeeded;
- (_Bool)shouldStopOperationInProgress;
- (_Bool)canServiceGraphRequestsInCurrentStateLoadingGraphIfNeeded;
- (void)requestTransientMemoryPropertiesWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)_propertiesFromMemory:(id)arg1;
- (void)requestTransientMemoriesWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)_memoryInfoFromMemory:(id)arg1 options:(id)arg2;
- (id)_basicPropertiesFromMemory:(id)arg1;
- (void)requestMemoryTreeDebugInformationWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestMemoryAssetCollectionDebugInformationForIdentifier:(id)arg1 precision:(unsigned long long)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestMemoryDebugInformationForMemoryWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)_processMoodForMemory:(id)arg1 withMoodHistory:(id)arg2;
- (id)_infoForNotificationQualityOfMemory:(id)arg1;
- (id)_infoForGraphCollectionBasedMemory:(id)arg1;
- (id)_infoForMomentsBackingMemory:(id)arg1;
- (id)_minimalLegacyFeatureVectorWithMemory:(id)arg1;
- (id)_featureVectorWithMemory:(id)arg1;
- (long long)_phTitleCategoryForPGTitleCategory:(long long)arg1;
- (id)_infoForMemory:(id)arg1 representativeAssetCount:(unsigned long long)arg2 isTransientMemory:(_Bool)arg3;
- (void)generateMemoriesWithOptions:(id)arg1 context:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)generateMemoriesWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)invalidateGraphWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)rebuildGraphWithContext:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)rebuildGraphWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)notifyWhenGraphReadyWithCoalescingIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)statusAsDictionary;
- (void)handleOperation:(id)arg1;
- (void)pendingRequestReferenceDidDeallocateForAddress:(void *)arg1;
- (id)pendingRequestReferenceForLabel:(id)arg1;
@property(nonatomic) unsigned long long state;
- (unsigned long long)synchronousOffQueueState;
- (id)graphProcessHistoricalChangeJobWithScenario:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)graphRebuildJobWithScenario:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)backgroundMemoryGenerationJobWithScenario:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)shouldUnloadGraphOnCooldown;
- (void)shutdownAndWaitForGraphManager;
- (void)setupGraphManager;
- (_Bool)_graphShouldBeConnected;
- (void)photoAnalysisGraphManager:(id)arg1 willShutdownGraph:(id)arg2;
- (_Bool)canRunWhenGraphIsLoaded;
- (void)shutdown;
- (void)cooldown;
- (void)callAndClearPendingReadyCallbacksWithResult:(_Bool)arg1 error:(id)arg2;
- (void)warmup;
- (_Bool)retryStartup;
- (_Bool)checkForWritablePersistentStorageDirectoryURL;
- (void)startup;
- (_Bool)isQuiescent;
- (_Bool)isEnabled;
- (void)markLastBackgroundGraphRebuildJobDate;
- (id)nextAdditionalJobWithScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2;
- (_Bool)didExceedtimeInterval:(double)arg1 forBackgroundJobUserDefaultsKey:(id)arg2;
- (_Bool)hasAdditionalJobForGraphRebuildInScenario:(unsigned long long)arg1;
- (_Bool)hasAdditionalJobForBackgroundMemoryGenerationInScenario:(unsigned long long)arg1;
- (_Bool)hasAdditionalJobsForScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2;
- (_Bool)_graphShouldProcessLibraryChangesForScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2;
- (void)setupPredicateValidator;
- (id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

