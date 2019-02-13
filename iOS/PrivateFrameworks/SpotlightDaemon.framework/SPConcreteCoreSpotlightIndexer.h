//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableArray, NSMutableSet, NSString, SPCoreSpotlightIndexer;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SPConcreteCoreSpotlightIndexer : NSObject
{
    // Error parsing type: AI, name: _maintenanceOperations
    int *_cancelPtr;
    _Bool _suspended;
    _Bool _softSuspended;
    _Bool _scheduledStringsCleanup;
    NSMapTable *_checkedInClients;
    NSMutableSet *_knownClients;
    NSMutableSet *_reindexAllDelegateBundleIDs;
    double _lastPreheat;
    double _lastTTLPass;
    unsigned long long _createCount;
    SPCoreSpotlightIndexer *_owner;
    struct __SI *_index;
    struct __SIResultQueue *_resultQueue;
    NSObject<OS_dispatch_queue> *_indexQueue;
    NSObject<OS_dispatch_queue> *_firstUnlockQueue;
    NSString *_dataclass;
    NSObject<OS_dispatch_source> *_indexIdleTimer;
    double _idleStartTime;
    NSMutableArray *_outstandingMaintenance;
}

+ (id)_stateInfoAttributeNameWithClientStateName:(id)arg1;
+ (void)initialize;
@property(readonly, nonatomic) NSMapTable *checkedInClients; // @synthesize checkedInClients=_checkedInClients;
@property(readonly, nonatomic) NSMutableSet *knownClients; // @synthesize knownClients=_knownClients;
@property(retain, nonatomic) NSMutableArray *outstandingMaintenance; // @synthesize outstandingMaintenance=_outstandingMaintenance;
@property(readonly, nonatomic) double idleStartTime; // @synthesize idleStartTime=_idleStartTime;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *indexIdleTimer; // @synthesize indexIdleTimer=_indexIdleTimer;
@property(retain, nonatomic) NSString *dataclass; // @synthesize dataclass=_dataclass;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *firstUnlockQueue; // @synthesize firstUnlockQueue=_firstUnlockQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *indexQueue; // @synthesize indexQueue=_indexQueue;
@property(nonatomic) struct __SIResultQueue *resultQueue; // @synthesize resultQueue=_resultQueue;
@property(nonatomic) struct __SI *index; // @synthesize index=_index;
@property(nonatomic) __weak SPCoreSpotlightIndexer *owner; // @synthesize owner=_owner;
- (void).cxx_destruct;
- (void)_fetchAccumulatedStorageSizeForBundleId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_startInternalQueryWithIndex:(struct __SI *)arg1 query:(id)arg2 fetchAttributes:(id)arg3 resultsHandler:(CDUnknownBlockType)arg4;
- (void)powerStateChanged;
- (void)attributesForBundleId:(id)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchAttributes:(id)arg1 bundleID:(id)arg2 identifiers:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchAttributes:(id)arg1 bundleID:(id)arg2 identifiers:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)changeStateOfSearchableItemsWithUIDs:(id)arg1 toState:(long long)arg2 forBundleID:(id)arg3;
- (void)fetchLastClientStateForBundleID:(id)arg1 clientStateName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteAllInteractionsWithBundleID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteActionsWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteActionsBeforeTime:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteSearchableItemsSinceDate:(id)arg1 forBundleID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_deleteSearchableItemsMatchingQuery:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteAllSearchableItemsForBundleID:(id)arg1 shouldGC:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)zombifyAllContactItems:(id)arg1;
- (void)_scheduleStringsCleanupForBundleID:(id)arg1;
- (void)deleteAllUserActivities:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 forBundleID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteItemsForEnumerator:(id)arg1 traceID:(long long)arg2 bundleID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)deleteItemsForQuery:(id)arg1 bundleID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_backgroundDeleteItems:(id)arg1 bundleID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)willModifySearchableItemsWithIdentifiers:(id)arg1 forBundleID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)startQueryWithQueryTask:(id)arg1 startHandler:(CDUnknownBlockType)arg2 eventHandler:(CDUnknownBlockType)arg3 resultsHandler:(CDUnknownBlockType)arg4;
- (id)_startQueryWithQueryTask:(id)arg1 eventHandler:(CDUnknownBlockType)arg2 resultsHandler:(CDUnknownBlockType)arg3;
- (void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 clientStateName:(id)arg4 forBundleID:(id)arg5 options:(long long)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 forBundleID:(id)arg4 options:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)indexFromBundle:(id)arg1 options:(long long)arg2 items:(id)arg3 itemsText:(id)arg4 clientState:(id)arg5 clientStateName:(id)arg6 deletes:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)_setClientState:(id)arg1 clientStateName:(id)arg2 forBundleID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)preheat;
- (void)suspendIndexForDeviceLock;
- (void)ensureOpenIndexFiles;
- (void)readyIndex:(_Bool)arg1;
- (void)resumeIndex;
- (void)closeIndex;
- (_Bool)writeDiagnostic:(id)arg1 bundleID:(id)arg2 identifier:(id)arg3;
- (void)issueConsistencyCheck;
- (void)issueRepair;
- (void)cleanupStringsWithActivity:(id)arg1 group:(id)arg2 shouldDefer:(_Bool *)arg3 flags:(int)arg4;
- (void)cleanupStringsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)mergeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)mergeWithGroup:(id)arg1;
- (void)issueSplit;
- (void)shrink:(unsigned long long)arg1;
- (void)coolDown:(id)arg1;
- (void)commitUpdates:(id)arg1;
- (void)addCompletedBundleIDs:(id)arg1 forIndexerTask:(id)arg2;
- (void)fetchAllCompletedBundleIDsForIndexerTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)reindexAllStarted;
- (void)finishReindexAll;
- (void)startReindexAll;
- (void)performIndexerTask:(id)arg1 withIndexDelegatesAndCompletionHandler:(CDUnknownBlockType)arg2;
- (void)performIndexerTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_addNewClientWithBundleID:(id)arg1;
- (void)addClients:(id)arg1;
- (void)checkInWithBundleID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)clientDidCheckin:(id)arg1 service:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (int)openIndex:(_Bool)arg1;
- (int)openIndex:(_Bool)arg1 shouldReindexAll:(_Bool)arg2;
- (void)_saveCorruptIndexWithPath:(id)arg1;
- (void)_expireCorruptIndexFilesWithPath:(id)arg1 keepLatest:(_Bool)arg2;
- (void)revokeExpiredItems:(id)arg1;
- (void)removeExpiredItemsForBundleId:(id)arg1 group:(id)arg2;
- (void)indexFinishedDrainingJournal;
- (void)indexFinishedDrainingJournal:(id)arg1;
- (void)scheduleMaintenance:(CDUnknownBlockType)arg1 description:(id)arg2 forDarkWake:(_Bool)arg3;
- (id)_indexMaintenanceActivityName;
- (void)_performXPCActivity:(id)arg1 name:(id)arg2;
- (id)_indexPath;
- (void)dirty;
- (void)_cancelIdleTimer;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 protectionClass:(id)arg2 cancelPtr:(int *)arg3;
- (void)performQueryForCountOfItemsInCategory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dumpAllRankingDiagnosticInformationForQuery:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)updateRankingDates;
- (id)getPropertyForKey:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2 sync:(_Bool)arg3;

@end

