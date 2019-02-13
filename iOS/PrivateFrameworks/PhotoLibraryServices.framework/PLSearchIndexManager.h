//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSDictionary, NSMutableDictionary, NSString, PLClientServerTransaction, PLKeywordManager, PLPhotoLibrary, PLSearchIndexDateFormatter, PLSearchMetadataStore, PLThrottleTimer, PLZeroKeywordStore, PSIDatabase;
@protocol OS_dispatch_queue, PLSearchIndexManagerSceneTaxonomyProxy;

@interface PLSearchIndexManager : NSObject
{
    PLSearchIndexDateFormatter *_dateFormatter;
    PLKeywordManager *_keywordManager;
    PLPhotoLibrary *_photoLibrary;
    PSIDatabase *_db;
    PLZeroKeywordStore *_zeroKeywordStore;
    PLSearchMetadataStore *_searchMetadataStore;
    PLThrottleTimer *_throttleTimer;
    PLClientServerTransaction *_serverTransaction;
    id <PLSearchIndexManagerSceneTaxonomyProxy> _sceneTaxonomyProxy;
    NSString *_searchIndexDirectory;
    NSDictionary *_searchSystemInfo;
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_inqUUIDsToProcess;
    NSMutableDictionary *_inqGraphDataByUUID;
    NSMutableDictionary *_inqSynonymsByIndexCategoryMask;
    _Bool _receivedUpdatesWhileIndexing;
    _Bool _hasScheduledCloseIndex;
    _Bool _hasValidSearchIndex;
    _Bool _isTrackingRebuild;
    long long _rebuildReason;
    long long _updateState;
    double _lastIndexingStartTime;
    _Bool _startedIndexing;
    _Bool __indexing;
    CDUnknownBlockType __inqAfterIndexingDidIterate;
    NSCountedSet *__pauseReasons;
}

+ (id)searchIndexManagerLog;
+ (id)_featuredPeopleIdentifiersFromPhotosGraphData:(id)arg1 photosGraphVersion:(long long)arg2;
+ (void)setSceneTaxonomyProxyClass:(Class)arg1;
+ (Class)sceneTaxonomyProxyClass;
+ (id)localeForSearchIndex;
+ (id)defaultSearchMetadataStorePath;
+ (id)defaultZeroKeywordStorePath;
+ (id)defaultDatabasePath;
+ (id)_defaultDatabaseDirectory;
+ (id)_searchMetadataStorePathInDirectory:(id)arg1;
+ (id)_zeroKeywordStorePathInDirectory:(id)arg1;
+ (id)_databasePathInDirectory:(id)arg1;
+ (id)sharedInstance;
+ (int)currentSearchIndexVersion;
+ (id)fetchMomentUUIDsToPopulateSearchIndexWithManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)fetchMemoryUUIDsToPopulateSearchIndexWithManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)fetchAlbumUUIDsToPopulateSearchIndexWithManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)fetchAssetUUIDsToPopulateSearchIndexWithManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)fetchMomentsWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)fetchMemoriesWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)fetchAlbumsWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)fetchAssetsWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
@property(readonly, copy, nonatomic) NSCountedSet *_pauseReasons; // @synthesize _pauseReasons=__pauseReasons;
@property(copy, nonatomic, setter=_setInqAfterIndexingDidIterate:) CDUnknownBlockType _inqAfterIndexingDidIterate; // @synthesize _inqAfterIndexingDidIterate=__inqAfterIndexingDidIterate;
@property(getter=_isIndexing, setter=_setIndexing:) _Bool _indexing; // @synthesize _indexing=__indexing;
- (void)_fetchMemoriesToIndexWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 result:(CDUnknownBlockType)arg3;
- (id)_inqKeywordsByCategoryMaskByAssetUUIDFromAssetSearchKeywords:(id)arg1;
- (void)_inqResumeIndexingIfNeeded;
- (id)_tripUUIDsToRemoveFromUUIDsToProcess:(id)arg1;
- (id)_collectionUUIDsToRemoveFromUUIDsToProcess:(id)arg1;
- (id)_assetUUIDsToRemoveFromUUIDsToProcess:(id)arg1;
- (long long)_inqReasonIfSearchIndexIsInvalid;
@property(readonly) PLPhotoLibrary *_inqPhotoLibrary;
- (void)_inqEnsurePhotoLibraryExists;
- (void)_inqEnsureSceneTaxonomyProxyExists;
- (void)_inqIndexPhotoLibrary;
- (void)_inqEnsureSearchProgressExists;
- (void)_inqEnsureSearchSystemInfoExists;
- (void)_inqEnsureSearchIndexExists;
- (void)_inqCloseIndexIfAbleOrForce:(_Bool)arg1 isDelete:(_Bool)arg2;
- (void)_inqDropClientServerTransactionIfNeeded;
- (void)_inqTakeClientServerTransactionIfNeeded;
- (void)_inqScheduleCloseIndexIfNeeded;
- (_Bool)_removeFileAtPath:(id)arg1 description:(id)arg2;
- (id)_dbSearchSystemInfoPath;
- (id)_searchMetadataStorePath;
- (id)_zeroKeywordStorePath;
- (id)_dbPath;
- (id)_oldDbPath;
- (id)_synonymsProcessPath;
- (id)_graphDataProcessPath;
- (id)_cxindexProgressPath;
- (void)applyGraphUpdates:(id)arg1 supportingData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)applyUpdates:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_updatesEnsuringMutableArraysFromUpdates:(id)arg1;
- (id)_updatesAfterConvertingDetectedFacesToAssetsInUpdates:(id)arg1;
- (id)_updatesAfterConvertingPersonsToAssetsInUpdates:(id)arg1;
- (void)resetSearchIndexWithReason:(long long)arg1 dropCompletion:(CDUnknownBlockType)arg2;
- (void)_inqResetSearchIndexWithReason:(long long)arg1 dropCompletion:(CDUnknownBlockType)arg2;
- (void)dropSearchIndexWithCompletion:(CDUnknownBlockType)arg1;
- (void)closeSearchIndexWithCompletion:(CDUnknownBlockType)arg1;
- (void)ensureSearchIndexExists;
- (void)_inqCloseSearchIndexAndDelete:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_throttleTimerFire:(id)arg1;
- (void)unpauseIndexingWithReason:(id)arg1;
- (void)pauseIndexingWithReason:(id)arg1;
- (void)_setIndexingPaused:(_Bool)arg1 synchronously:(_Bool)arg2 reason:(id)arg3;
- (void)_inqSetIndexingPaused:(_Bool)arg1 reason:(id)arg2;
@property(readonly, getter=isIndexingPaused) _Bool indexingPaused;
- (_Bool)_inqIsIndexingPaused;
- (void)_inqAddUpdatesWithUUIDs:(id)arg1 forKey:(id)arg2;
@property(readonly) unsigned long long enqueuedUUIDsCount;
- (unsigned long long)_inqEnqueuedUUIDsCountForceLoad:(_Bool)arg1;
- (void)_inqEndTrackingUpdateIfNeeded;
- (void)_inqTrackTransitionFromUpdateScheduledToUpdatingIfAble;
- (void)_inqStartTrackingUpdateIfAble;
- (void)_inqEndTrackingRebuildIfNeeded;
- (void)_inqStartTrackingRebuildWithReason:(long long)arg1;
- (void)_localeDidChange:(id)arg1;
- (_Bool)_inqUpdateWordEmbeddingVersion:(id)arg1;
- (_Bool)_inqUpdateSceneTaxonomySHA:(id)arg1;
- (_Bool)_inqUpdateLocale;
- (_Bool)_inqUpdateVersion;
- (_Bool)_inqUpdateSearchSystemInfo:(id)arg1 forKey:(id)arg2 logMessage:(id)arg3;
- (void)_onQueueAsyncWithDelay:(double)arg1 perform:(CDUnknownBlockType)arg2;
- (void)_onQueueAsync:(CDUnknownBlockType)arg1;
- (void)_onQueueSync:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithSearchIndexDirectory:(id)arg1;
- (void)_appendLocationsInfo:(id)arg1 toTrip:(id)arg2;
- (void)_appendWorkText:(id)arg1 toTrip:(id)arg2;
- (void)_appendHomeToTrip:(id)arg1;
- (void)_appendPublicEventCategories:(id)arg1 withSynonyms:(id)arg2 toTrip:(id)arg3;
- (void)_appendPublicEventStrings:(id)arg1 toTrip:(id)arg2 forSearchIndexCategory:(unsigned long long)arg3;
- (void)_appendBusinessCategories:(id)arg1 toTrip:(id)arg2;
- (void)_appendBusinessNames:(id)arg1 toTrip:(id)arg2;
- (void)_appendROIs:(id)arg1 withSynonyms:(id)arg2 toTrip:(id)arg3;
- (void)_appendPOIs:(id)arg1 withSynonyms:(id)arg2 toTrip:(id)arg3;
- (void)_appendHolidays:(id)arg1 toTrip:(id)arg2;
- (void)_appendMeanings:(id)arg1 withSynonyms:(id)arg2 toTrip:(id)arg3;
- (void)_appendScenesWithIdentifiers:(id)arg1 toTrip:(id)arg2 sceneTaxonomyProxy:(id)arg3;
- (void)_appendDates:(id)arg1 withDateFormatter:(id)arg2 withSynonyms:(id)arg3 toTrip:(id)arg4;
- (void)_appendSocialGroupIdentifiers:(id)arg1 toTrip:(id)arg2;
- (void)_appendPersonsWithUUIDs:(id)arg1 toTrip:(id)arg2;
- (void)getSearchIndexContentsForTrip:(id)arg1 fromTripKeywords:(id)arg2 withDateFormatter:(id)arg3 synonymsDictionaries:(id)arg4 sceneTaxonomyProxy:(id)arg5;

@end

