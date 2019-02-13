//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ISOperationQueue, LoadDownloadQueueOperation, NSMutableOrderedSet, NSMutableSet, NSNumber, NSSet;
@protocol OS_dispatch_queue;

@interface StoreDownloadQueue : NSObject
{
    NSMutableOrderedSet *_activeRestoreIDs;
    _Bool _automaticDownloadsAreDisabled;
    _Bool _checkAutomaticDownloadQueueOnEnable;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSNumber *_lastCheckedAccountID;
    LoadDownloadQueueOperation *_loadAutomaticDownloadQueueOperation;
    ISOperationQueue *_operationQueue;
    ISOperationQueue *_restoreOperationQueue;
    NSMutableSet *_storeQueueRequests;
    NSMutableOrderedSet *_trackedPurchaseDownloadIDs;
}

+ (void)triggerDownloadsWithMessage:(id)arg1 connection:(id)arg2;
+ (void)synchronizeAutomaticDownloadKindsWithMessage:(id)arg1 connection:(id)arg2;
+ (void)setAutomaticDownloadKindsWithMessage:(id)arg1 connection:(id)arg2;
+ (void)reloadFromServerWithMessage:(id)arg1 connection:(id)arg2;
+ (void)observeXPCServer:(id)arg1;
+ (void)getAutomaticDownloadKindsWithMessage:(id)arg1 connection:(id)arg2;
+ (void)cancelRedownloadsWithMessage:(id)arg1 connection:(id)arg2;
+ (id)sharedDownloadQueue;
- (void).cxx_destruct;
- (id)_validQueueIdentifiersForPlatform;
- (id)_validQueueIdentifiersForDaemon;
- (void)_synchronizeAutomaticDownloadKinds:(CDUnknownBlockType)arg1;
- (void)_setLastCheckedAccountID:(id)arg1;
- (id)_restorableDownloadsQueryInDatabase:(id)arg1;
- (void)_retrySoftFailedRestoreDownloads;
- (void)_retryCanceledRestoreDownloads;
- (id)_newSetAutomaticDownloadKindsOperationWithDownloadKinds:(id)arg1 account:(id)arg2;
- (id)_newQueueRequestsWithReason:(id)arg1 session:(id)arg2;
- (id)_newOperationByCommitingAutomaticDownloadKinds:(id)arg1 account:(id)arg2;
- (id)_newLoadQueueOperationForQueueRequest:(id)arg1;
- (id)_newCheckQueueOperationForQueueRequest:(id)arg1;
- (_Bool)_ignoreVideos;
- (void)_checkAutomaticDownloadQueue:(id)arg1;
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)_downloadQueryWithQueueRequest:(id)arg1 database:(id)arg2;
- (id)_automaticDownloadsQueryWithDatabase:(id)arg1 accountID:(id)arg2;
- (void)_addOperationsForRequests:(id)arg1 reason:(id)arg2;
- (void)_networkTypeChangedNotification:(id)arg1;
- (void)_accountStoreChangedNotification:(id)arg1;
- (void)_accountAuthenticatedNotification:(id)arg1;
- (void)synchronizeAutomaticDownloadKinds;
- (void)setAutomaticDownloadKinds:(id)arg1 account:(id)arg2;
@property(copy, nonatomic) NSSet *automaticDownloadKinds;
- (void)restoreDownloadsWithIdentifiers:(id)arg1 reason:(id)arg2;
- (void)restoreAllRestorableDownloadsWithReason:(id)arg1;
@property(readonly, nonatomic) NSSet *enabledDownloadKinds;
- (void)enableAutomaticDownloadsWithReason:(id)arg1;
- (void)disableAutomaticDownloadsWithReason:(id)arg1;
@property(readonly) NSSet *downloadKindsBeingChecked;
- (void)commitAutomaticDownloadKinds:(id)arg1 markAsDirty:(_Bool)arg2;
- (void)checkQueuesWithRequest:(id)arg1;
- (_Bool)checkQueuesWithReason:(id)arg1;
- (void)checkAutomaticDownloadQueue;
- (_Bool)cancelAllRedownloads;
- (void)dealloc;
- (id)init;

@end

