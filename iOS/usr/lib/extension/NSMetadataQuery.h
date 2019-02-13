//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSOperationQueue, NSPredicate;
@protocol NSMetadataQueryDelegate;

@interface NSMetadataQuery : NSObject
{
    unsigned long long _flags;
    double _interval;
    id _private[11];
    void *_reserved;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (void)didEndPossibleFileOperation:(id)arg1;
+ (id)willBeginPossibleCreationOfItemAtURL:(id)arg1;
+ (id)willBeginPossibleDeletionOfItemAtURL:(id)arg1;
+ (id)willBeginPossibleMoveOfItemAtURL:(id)arg1 toURL:(id)arg2;
+ (Class)_stitchingClass;
- (_Bool)_isMDQuery;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (id)_pendingChangeNotificationsArrayForKey:(id)arg1 create:(_Bool)arg2;
- (id)valueOfAttribute:(id)arg1 forResultAtIndex:(unsigned long long)arg2;
@property(readonly, copy) NSArray *groupedResults;
@property(readonly, copy) NSDictionary *valueLists;
- (unsigned long long)indexOfResult:(id)arg1;
@property(readonly, copy) NSArray *results;
- (void)_zapResultArrayIfIdenticalTo:(id)arg1;
- (void)enumerateResultsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateResultsUsingBlock:(CDUnknownBlockType)arg1;
- (id)resultAtIndex:(unsigned long long)arg1;
@property(readonly) unsigned long long resultCount;
- (void)_update;
- (void)_enableAutoUpdates;
- (void)_disableAutoUpdates;
- (void)enableUpdates;
- (void)disableUpdates;
@property(readonly, getter=isStopped) _Bool stopped;
@property(readonly, getter=isGathering) _Bool gathering;
@property(readonly, getter=isStarted) _Bool started;
- (void)stopQuery;
- (void)_inOriginalContextInvokeBlock:(CDUnknownBlockType)arg1;
- (_Bool)startQuery;
- (void)_recreateQuery;
- (void)_resetQueryState;
- (id)_queryString;
- (void)_noteNote5:(id)arg1;
- (void)_noteNote4:(id)arg1;
- (void)_noteNote3:(id)arg1;
- (void)_noteNote2:(id)arg1;
- (void)_noteNote1:(id)arg1;
- (void)_postNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)_setBatchingParams;
- (void)_setExternalDocumentsBundleIdentifier:(id)arg1;
- (id)_externalDocumentsBundleIdentifier;
- (void)setSearchItemURLs:(id)arg1;
- (id)searchItemURLs;
@property(copy) NSArray *searchItems;
@property(retain) NSOperationQueue *operationQueue;
@property(copy) NSArray *searchScopes;
@property double notificationBatchingInterval;
- (id)_allAttributes;
- (id)_sortingAttributes;
@property(copy) NSArray *groupingAttributes;
@property(copy) NSArray *valueListAttributes;
@property(copy) NSArray *sortDescriptors;
@property(copy) NSPredicate *predicate;
- (void)_validatePredicate:(id)arg1 withScopes:(id)arg2;
@property id <NSMetadataQueryDelegate> delegate;
- (void)_validateInvocationContext;
- (_Bool)_canModifyQueryOrObserversInCurrentContext;
- (void)dealloc;
- (id)init;

@end

