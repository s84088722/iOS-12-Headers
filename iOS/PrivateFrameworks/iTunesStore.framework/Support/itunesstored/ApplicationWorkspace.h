//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UMUserSwitchStakeholder-Protocol.h"

@class ISOperationQueue, NSCountedSet, NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface ApplicationWorkspace : NSObject <UMUserSwitchStakeholder>
{
    NSMutableDictionary *_appProgress;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSLock *_lock;
    NSMutableSet *_odrDownloads;
    NSMutableDictionary *_odrProgress;
    NSMutableDictionary *_odrWaitBlocks;
    NSXPCConnection *_odrXPCConnection;
    NSMutableArray *_operations;
    NSCountedSet *_pendingInstalls;
    ISOperationQueue *_placeholderIconOperationQueue;
    NSMutableArray *_syncWaitBlocks;
    NSMutableDictionary *_waitBlocks;
}

+ (_Bool)keepSafeHarborDataForBundleID:(id)arg1;
+ (id)defaultWorkspace;
- (void).cxx_destruct;
- (void)_decrementPendingInstallsForDownloadIdentifier:(long long)arg1;
- (void)_incrementPendingInstallsForDownloadIdentifier:(long long)arg1;
- (void)_updatePlaceholderWithODRProgressForApplicationHandle:(id)arg1;
- (id)_thumbnailDownloadOperationForDownloadID:(long long)arg1;
- (void)_stopObservingODRProgress:(id)arg1;
- (void)_removeOperationsForDownloadIdentifier:(long long)arg1 operationClass:(Class)arg2;
- (void)_removeOperationsForDownloadIdentifier:(long long)arg1;
- (void)_removeODRProgressForApplicationHandle:(id)arg1;
- (_Bool)_removeODRDownloadsForApplicationHandle:(id)arg1;
- (void)_removeApplicationDownloadProgressForApplicationHandle:(id)arg1;
- (void)_performNextOperation;
- (id)_odrXPCConnection;
- (void)_observeODRProgress:(id)arg1 forApplicationHandle:(id)arg2;
- (_Bool)_isRunningODRDownloadsForApplicationHandle:(id)arg1;
- (_Bool)_isInstallingForDownloadIdentifier:(long long)arg1;
- (_Bool)_hasThumbnailDownloadOperationForDownloadID:(long long)arg1;
- (void)_fireWaitBlocksForSyncTermination;
- (void)_fireWaitBlocksIfNecessaryForDownloadWithIdentifier:(long long)arg1;
- (void)_fireODRWaitBlocksForApplicationHandle:(id)arg1;
- (id)_copyCombinedApplicationProgress:(id)arg1 andODRProgress:(id)arg2 forApplicationHandle:(id)arg3;
- (void)_cleanupODR;
- (void)_cancelPlaceholderThumbnailInstallForDownloadID:(long long)arg1;
- (id)_applicationHandleForODRProgress:(id)arg1;
- (void)_addProgressOperation:(id)arg1;
- (void)_addOperationAtBeginning:(id)arg1;
- (void)_addOnDemandOperationWithApplicationHandle:(id)arg1 action:(long long)arg2;
- (void)willSwitchUser;
- (id)sinfPathForBundleID:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)waitForOnDemandResourceDownloadsForApplicationHandle:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)shouldResumeOnDemandResourceDownloadsForApplicationHandle:(id)arg1;
- (void)resumeOnDemandResourceDownloadsForApplicationHandle:(id)arg1;
- (void)pauseOnDemandResourceDownloadsForApplicationHandle:(id)arg1;
- (void)onDemandResourceDownloadsStartedForApplicationHandle:(id)arg1;
- (void)onDemandResourceDownloadsCompletedForApplicationHandle:(id)arg1 withError:(id)arg2;
- (void)onDemandResourceDownloadsCancelledForApplicationHandle:(id)arg1 withError:(id)arg2;
- (void)downloadOnDemandResourceForApplicationHandle:(id)arg1;
- (void)cancelOnDemandResourceDownloadsForApplicationHandle:(id)arg1;
- (void)waitForSyncBubbleToTerminateWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)waitForInstallOfDownloadIdentifier:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)updatePlaceholderWithApplicationProgress:(id)arg1;
- (void)updatePlaceholderForApplicationHandle:(id)arg1;
- (void)uninstallPlaceholderForApplicationHandle:(id)arg1;
- (void)suspendQuotas;
- (_Bool)shouldModifyQuota:(id)arg1;
- (void)setIconData:(id)arg1 forApplicationHandle:(id)arg2;
- (void)resumeQuotas;
- (void)restorePlaceholderForApplicationHandle:(id)arg1;
- (void)resetProgressForApplicationHandle:(id)arg1;
- (void)replayIncompleteOperations;
- (void)markFailedPlaceholderForApplicationHandle:(id)arg1;
- (_Bool)isRemovedSystemApp:(id)arg1;
- (_Bool)isInstalledApp:(id)arg1;
- (void)installPlaceholderForApplicationHandle:(id)arg1;
- (_Bool)isMultiUser;
- (_Bool)isDownloadingOrInstallingForItemIdentifier:(id)arg1;
- (void)finishInstallOfApplicationHandle:(id)arg1;
- (void)endExternalInstallationForDownloadIdentifier:(long long)arg1;
- (void)cancelPlaceholderInstallationForDownloadIdentifier:(long long)arg1;
- (void)beginExternalInstallationForDownloadIdentifier:(long long)arg1;
- (void)addPlaceholderThumbnailOperation:(id)arg1;
- (void)applyWorkspaceChanges:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

