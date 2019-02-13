//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProvider/FPReachabilityObserver-Protocol.h>
#import <FileProvider/FPXEnumeratorObserver-Protocol.h>

@class FPItemID, FPItemManager, FPPacer, NSArray, NSData, NSFileProviderEnumerationProperties, NSMutableDictionary, NSMutableSet, NSPredicate, NSString, _FPItemList;
@protocol FPItemCollectionDelegate, FPXEnumerator, OS_dispatch_queue;

@interface FPItemCollection : NSObject <FPXEnumeratorObserver, FPReachabilityObserver>
{
    unsigned long long _observationID;
    FPItemID *_itemID;
    NSFileProviderEnumerationProperties *_enumerationProperties;
    _FPItemList *_currentItems;
    NSObject<OS_dispatch_queue> *_workingQueue;
    NSObject<OS_dispatch_queue> *_itemAccessQueue;
    NSMutableDictionary *_updatedItemsByIdentifiers;
    NSMutableSet *_deletedItemsIdentifiers;
    NSArray *_updateSortDescriptors;
    FPItemManager *_itemManager;
    id <FPXEnumerator> _enumerator;
    NSArray *_fileTypes;
    NSString *_providerIdentifier;
    _Bool _isRecursiveFolderEnumeration;
    _Bool _started;
    _Bool _restartAfterForeground;
    _Bool _shouldResort;
    _Bool _regathering;
    _Bool _enumeratingExtensionResults;
    _Bool _shouldUpdate;
    _Bool _shouldRetryOnceAfterCrash;
    unsigned long long _numGatheredItems;
    NSData *_nextPageToken;
    NSData *_changeToken;
    CDUnknownBlockType _extensionKeepAliveBlock;
    NSPredicate *_itemFilteringPredicate;
    _Bool _gathering;
    _Bool _immutable;
    _Bool _hasMoreUpdates;
    _Bool _observing;
    id <FPItemCollectionDelegate> _delegate;
    NSArray *_sortDescriptors;
    NSString *_identifier;
    NSString *_domainIdentifier;
    NSObject<OS_dispatch_queue> *_updateQueue;
    FPPacer *_updatePacer;
}

+ (void)removeActiveCollection:(id)arg1;
+ (void)addActiveCollection:(id)arg1;
+ (void)resumeVendorEnumeration;
+ (void)suspendVendorEnumeration;
+ (_Bool)isEnumerationSuspended;
+ (void)replacePlaceholders:(id)arg1 withActualItems:(id)arg2;
+ (void)consumeUpdates:(id)arg1 deletes:(id)arg2;
+ (id)activeCollections;
+ (_Bool)_item:(id)arg1 isCollectionRootForObservedItemID:(id)arg2;
+ (_Bool)item:(id)arg1 isValidForObservedItemID:(id)arg2;
+ (void)applicationDidEnterBackground:(id)arg1;
+ (void)applicationWillEnterForeground:(id)arg1;
+ (id)collectionWithIdentifier:(id)arg1 domainIdentifier:(id)arg2 providerIdentifier:(id)arg3 sortDescriptors:(id)arg4;
+ (void)initialize;
@property(readonly, nonatomic) FPPacer *updatePacer; // @synthesize updatePacer=_updatePacer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *updateQueue; // @synthesize updateQueue=_updateQueue;
@property(readonly, copy, nonatomic) NSString *domainIdentifier; // @synthesize domainIdentifier=_domainIdentifier;
@property(nonatomic) _Bool observing; // @synthesize observing=_observing;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workingQueue; // @synthesize workingQueue=_workingQueue;
@property(readonly, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(readonly, nonatomic) _Bool hasMoreUpdates; // @synthesize hasMoreUpdates=_hasMoreUpdates;
@property(readonly, nonatomic, getter=isImmutable) _Bool immutable; // @synthesize immutable=_immutable;
@property(nonatomic) __weak id <FPItemCollectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isGathering) _Bool gathering; // @synthesize gathering=_gathering;
- (void).cxx_destruct;
- (CDUnknownBlockType)isItemMatchingQueryBlock;
- (void)setIsItemMatchingQueryBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSPredicate *itemFilteringPredicate;
- (void)_assignHierarchyPathToChildrenOf:(id)arg1 withPath:(id)arg2 hierarchy:(id)arg3;
- (void)_recomputeHierarchyOfItemList:(id)arg1;
- (void)_flushPendingUpdates;
- (id)indexPathsFromIndexSet:(id)arg1;
- (id)indexPathFromIndex:(long long)arg1;
- (void)_receivedBatchWithUpdatedItems:(id)arg1 deletedItemsIdentifiers:(id)arg2 forceFlush:(_Bool)arg3;
- (void)_receivedBatchWithUpdatedItems:(id)arg1 deletedItemsIdentifiers:(id)arg2;
- (void)replaceContentsWithVendorItems:(id)arg1;
- (void)receivedBatchWithUpdatedItems:(id)arg1 deletedItemsIdentifiers:(id)arg2;
- (void)_updateObservedItem:(id)arg1;
- (void)replacePlaceholders:(id)arg1 withActualItems:(id)arg2;
- (void)_didEncounterError:(id)arg1 forObservationID:(unsigned long long)arg2;
- (void)_didEncounterError:(id)arg1;
- (_Bool)isRegatheringAfterSignal;
- (_Bool)__isObservingID:(unsigned long long)arg1;
- (_Bool)_isObservingID:(unsigned long long)arg1;
- (id)_itemsMutableCopy;
@property(readonly, nonatomic) NSArray *items;
- (id)_t_items;
- (id)itemAtIndexPath:(id)arg1;
- (unsigned long long)_indexOfItem:(id)arg1;
- (unsigned long long)_indexOfItemID:(id)arg1;
- (long long)_numberOfItems;
- (long long)numberOfItems;
- (void)reorderItemsWithSortDescriptors:(id)arg1;
- (void)_restartObservation;
- (void)dealloc;
- (void)didUpdateItem:(id)arg1;
- (void)enumerationResultsDidChange;
- (void)stopObserving;
- (void)_updateItems;
- (void)_updateItemsWithUpdatesCount:(unsigned long long)arg1 section:(unsigned long long)arg2;
- (void)_gatherInitialItems;
- (id)_initialPageFromSortDescriptors:(id)arg1;
- (void)_gatherMoreItemsAfterPage:(id)arg1 section:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *providerIdentifier;
- (void)startObserving;
- (void)startObservingWithEnumerationProperties:(id)arg1;
- (void)reachabilityMonitor:(id)arg1 didChangeReachabilityStatusTo:(_Bool)arg2;
- (_Bool)hasMoreItems;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)initWithIdentifier:(id)arg1 domainIdentifier:(id)arg2 providerIdentifier:(id)arg3 sortDescriptors:(id)arg4 fileTypes:(id)arg5 itemManager:(id)arg6;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

