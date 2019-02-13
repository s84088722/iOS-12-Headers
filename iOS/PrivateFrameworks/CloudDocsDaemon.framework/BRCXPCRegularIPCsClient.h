//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCXPCClient.h>

#import <CloudDocsDaemon/BRCForegroundClient-Protocol.h>
#import <CloudDocsDaemon/BRProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BRCXPCRegularIPCsClient : BRCXPCClient <BRProtocol, BRCForegroundClient>
{
}

- (void)scheduleDeepScanForContainer:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)capabilityWhenTryingToReparentItemAtURL:(id)arg1 toNewParent:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)moveBRSecurityBookmarkAtURL:(id)arg1 toURL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)currentSyncedRootURLsWithReply:(CDUnknownBlockType)arg1;
- (oneway void)updatePrivilegesDescriptor;
- (void)overwriteAccessTimeForItemAtURL:(id)arg1 atime:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)lookupMinFileSizeForThumbnailTransferWithReply:(CDUnknownBlockType)arg1;
- (void)lookupExcludedExtensionsForLogoutWithReply:(CDUnknownBlockType)arg1;
- (void)lookupExcludedFilenamesForLogoutWithReply:(CDUnknownBlockType)arg1;
- (void)_t_removePackageExtension:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_t_addPackageExtension:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_t_getPerfValuesWithReply:(CDUnknownBlockType)arg1;
- (void)_t_isAutomaticallyEvictable:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_t_copyItemIDFromItemAtURL:(id)arg1 toItemAtURL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)_t_migrateAllZonesToClouddocsWithReset:(_Bool)arg1 onlyPrepare:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;
- (void)_retryCZMigrationWithRetryCount:(int)arg1 syncContext:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)_crossZoneMoveOperationForReset:(_Bool)arg1;
- (void)_t_noopWithReply:(CDUnknownBlockType)arg1;
- (void)_t_waitForLostScanToFinishWithReply:(CDUnknownBlockType)arg1;
- (void)_t_copyGlobalProgressInfoWithReply:(CDUnknownBlockType)arg1;
- (void)_t_resumeDownloadsForContainerID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_t_suspendDownloadsForContainerID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_t_resumeUploadsForContainerID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_t_suspendUploadsForContainerID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_t_getPCSChainStateAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_t_resetAllZonesWithReply:(CDUnknownBlockType)arg1;
- (void)_t_resetZoneForContainerID:(id)arg1 waitUntilIdle:(_Bool)arg2 includingSharedZones:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;
- (void)_t_setFSEventProcessingState:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_t_resumeSyncUpOfContainer:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_t_pauseSyncUpOfContainer:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_t_resumeSyncDownOfContainer:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_t_pauseSyncDownOfContainer:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_t_removeAllSyncUpBlockingForContainerID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_t_blockSyncForContainerID:(id)arg1 withPendingUpgradeToOSName:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)_t_blockSyncUpOfItemWithID:(id)arg1 containerID:(id)arg2 withPendingUpgradeToOSName:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)boostFilePresenterAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)trashItemAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)removeItemFromDisk:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)handleCloudKitShareMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (oneway void)willAcceptShareAtURL:(id)arg1;
- (void)_presentAcceptDialogsWithMetadata:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)presentAcceptDialogsForShareMetadata:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)startOperation:(id)arg1 toCopyShareURLForShare:(id)arg2 appName:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)copyBulkShareIDsAtURLs:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)startOperation:(id)arg1 toCleanShareSubitemsAtURL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)startOperation:(id)arg1 toPrepFolderForSharingAt:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)startOperation:(id)arg1 toCopyEtagAtURL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)startOperation:(id)arg1 toCopyShortTokenAtURL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)startOperation:(id)arg1 toCopyShareInfoAtURL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)startOperation:(id)arg1 toCopyParticipantTokenAtURL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)startOperation:(id)arg1 toModifyRecordAccessAtURL:(id)arg2 allowAccess:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;
- (void)startOperation:(id)arg1 toLookupShareParticipants:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)startOperation:(id)arg1 toUnshareShare:(id)arg2 forceDelete:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;
- (void)startOperation:(id)arg1 toSaveSharingInfo:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)createSharingInfoForURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)copyCurrentUserNameAndDisplayHandleWithReply:(CDUnknownBlockType)arg1;
- (void)copyCurrentUserNameAndEmailWithReply:(CDUnknownBlockType)arg1;
- (void)copyCurrentUserIdentifierWithReply:(CDUnknownBlockType)arg1;
- (void)startOperation:(id)arg1 toUploadAllFilesInContainer:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)startOperation:(id)arg1 toEvictItemAtURL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)startOperation:(id)arg1 toCopyAvailableQuotaWithReply:(CDUnknownBlockType)arg2;
- (void)startOperation:(id)arg1 toCopyDocumentURLForRecordID:(id)arg2 syncIfNeeded:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;
- (void)startOperation:(id)arg1 toCopySharingAccessToken:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)startOperation:(id)arg1 toCopySharingWebAuthTokenForContainerID:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)startOperation:(id)arg1 toCopySharingInfoAtURL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)getiWorkNeedsShareMigrateAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getiWorkPublishingBadgingStatusAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getiWorkPublishingInfoAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setiWorkPublishingInfoAtURL:(id)arg1 publish:(_Bool)arg2 readonly:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;
- (void)forceConflictForURL:(id)arg1 bookmarkData:(id)arg2 forcedEtag:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)getPublishedURLForItemAtURL:(id)arg1 forStreaming:(_Bool)arg2 requestedTTL:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)enumerateWorkingSetChangesFromChangeToken:(id)arg1 limit:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)enumerateAllFoldersWithSortOrder:(unsigned char)arg1 offset:(unsigned long long)arg2 limit:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)_enumerateFoldersWithParent:(id)arg1 depth:(unsigned long long)arg2 session:(id)arg3 db:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)enumerateItemsInFolder:(id)arg1 sortOrder:(unsigned char)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_enumerateContainersForEnumerationWithDB:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)currentNotifRankWithReply:(CDUnknownBlockType)arg1;
- (void)getIsContainerWithIDOverQuota:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getContainerLastServerUpdateWithID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getContainerStatusWithID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getLocalizedLastSyncWithReply:(CDUnknownBlockType)arg1;
- (void)getLastSyncDateWithReply:(CDUnknownBlockType)arg1;
- (void)getApplicationStatusForProcess:(CDStruct_4c969caf)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getApplicationStatus:(CDUnknownBlockType)arg1;
- (void)getBackReferencingContainerIDsForURLs:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)resolveBookmarkDataToURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)resolveFileObjectIDToURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)resolveFileObjectIDsToContentRecordIDs:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getBookmarkDataForURL:(id)arg1 onlyAllowItemKnowByServer:(_Bool)arg2 allowAccessByBundleID:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)getMigrationStatusForPrimaryiCloudAccount:(CDUnknownBlockType)arg1;
- (void)setMigrationStatus:(BOOL)arg1 forDSID:(id)arg2 shouldUpdateAccount:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;
- (void)getContainersNeedingUpload:(CDUnknownBlockType)arg1;
- (void)jetsamCloudDocsAppsWithReply:(CDUnknownBlockType)arg1;
- (void)currentAccountLogoutWithReply:(CDUnknownBlockType)arg1;
- (void)_unregisterPrematurely;
- (void)currentAccountCreateWithID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)readerThrottleBackoffForDocumentAtPath:(id)arg1 containerID:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)dropSpotlightIndexWithReply:(CDUnknownBlockType)arg1;
- (void)reclaimAmount:(long long)arg1 withUrgency:(int)arg2 reply:(CDUnknownBlockType)arg3;
- (void)purgeAmount:(long long)arg1 withUrgency:(int)arg2 reply:(CDUnknownBlockType)arg3;
- (void)computePurgeableSpaceForAllUrgenciesWithReply:(CDUnknownBlockType)arg1;
- (void)createContainerWithID:(id)arg1 ownerName:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)waitForFileSystemChangeProcessingWithReply:(CDUnknownBlockType)arg1;
- (void)iWorkForceSyncContainerID:(id)arg1 ownedByMe:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;
- (void)forceSyncContainerID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_t_waitUntilIdle:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)refreshSharingStateForItemIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)forceSyncWithBarrierContainerID:(id)arg1 timeout:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)forceSyncZoneHealthWithBarrierWithTimeout:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)zoneNameForContainer:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)healthStatusStringForContainer:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)simulateHealthIssueWithContainer:(id)arg1 status:(id)arg2 brokenStructure:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;
- (void)gatherInformationForPath:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)dumpCoordinationInfoTo:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)dumpDatabaseTo:(id)arg1 containerID:(id)arg2 includeAllItems:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;
- (void)printStatus:(id)arg1 containerID:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)performSelfCheck:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)resetBudgets:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setupInstanceWithDict:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getLoggedInUserPropertyValuesForKeys:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)_loggedInUserPropertyValuesForKeys:(id)arg1 error:(id *)arg2;
- (void)didReceiveHandoffRequestForBundleID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)resolveConflictWithName:(id)arg1 atURL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)getContainerForURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getContainersByID:(CDUnknownBlockType)arg1;
- (void)addExternalDocumentReferenceTo:(id)arg1 inContainer:(id)arg2 underParent:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)iCloudDesktopSettingsChangedWithAttributes:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)evictOldDocumentsWithReply:(CDUnknownBlockType)arg1;
- (void)getEvictableSpaceWithReply:(CDUnknownBlockType)arg1;
- (void)setStorageOpimizationEnabled:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;
- (void)hasOptimizeStorageWithReply:(CDUnknownBlockType)arg1;
- (void)getApplicationDocumentUsageInfoForBundleID:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)getTotalApplicationDocumentUsageWithReply:(CDUnknownBlockType)arg1;
- (void)getNonLocalVersionSenderWithReceiver:(id)arg1 documentURL:(id)arg2 includeCachedVersions:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;
- (void)getItemUpdateSenderWithReceiver:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)thumbnailChangedForItemAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)evictItemAtURL:(id)arg1 options:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)startOperation:(id)arg1 toDownloadItemAtURL:(id)arg2 readingOptions:(unsigned long long)arg3 wantsCurrentVersion:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;
- (void)startDownloadItemsAtURLs:(id)arg1 options:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)getAttributeValues:(id)arg1 forItemAtURL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)_nonSandboxedAttributesToStrip;
- (void)updateItemFromURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getQueryItemForURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_updateDirectoryMtime:(long long)arg1 onDisk:(id)arg2;
- (void)registerInitialSyncBarrierForID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)deleteAllContentsOfContainerID:(id)arg1 onClient:(_Bool)arg2 onServer:(_Bool)arg3 wait:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;
- (oneway void)updateContainerMetadataForID:(id)arg1;
- (void)getContainerURLForID:(id)arg1 forProcess:(CDStruct_4c969caf)arg2 reply:(CDUnknownBlockType)arg3;
- (void)presyncContainerWithID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getContainerURLForID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getContainerURLForID:(id)arg1 recreateDocumentsIfNeeded:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;
- (oneway void)checkinAskClientIfUsingUbiquity:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly) Class superclass;

@end

