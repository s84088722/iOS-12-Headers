//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IXClientProtocol-Protocol.h"

@class NSCountedSet, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface IXSClientConnection : NSObject <IXClientProtocol>
{
    NSString *_clientName;
    NSString *_clientSigningIdentifier;
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSCountedSet *_interestedCoordinatorAndPromiseUUIDs;
}

+ (void)configureService;
@property(readonly, nonatomic) NSCountedSet *interestedCoordinatorAndPromiseUUIDs; // @synthesize interestedCoordinatorAndPromiseUUIDs=_interestedCoordinatorAndPromiseUUIDs;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(nonatomic) __weak NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void).cxx_destruct;
- (oneway void)_client_promiseWithUUID:(id)arg1 didCancelWithReason:(id)arg2 client:(unsigned long long)arg3;
- (oneway void)_client_promiseDidCompleteSuccessfullyWithUUID:(id)arg1;
- (oneway void)_client_coordinatorWithUUID:(id)arg1 didCancelWithReason:(id)arg2 client:(unsigned long long)arg3;
- (oneway void)_client_coordinatorDidCompleteSuccessfullyWithUUID:(id)arg1;
- (oneway void)_client_coordinatorDidInstallPlaceholderWithUUID:(id)arg1;
- (oneway void)_client_coordinatorShouldBeginRestoringUserDataWithUUID:(id)arg1;
- (oneway void)_client_coordinatorWithUUID:(id)arg1 configuredPromiseDidBeginFulfillment:(unsigned long long)arg2;
- (oneway void)_client_coordinatorShouldPauseWithUUID:(id)arg1;
- (oneway void)_client_coordinatorShouldResumeWithUUID:(id)arg1;
- (oneway void)_client_coordinatorShouldPrioritizeWithUUID:(id)arg1;
- (oneway void)_remote_IXSPromisedOutOfBandStreamingZipTransfer:(id)arg1 setArchiveBytesConsumed:(unsigned long long)arg2;
- (void)_fetchPromisedOutOfBandStreamingZipTransferForUUID:(id)arg1 method:(const char *)arg2 andRunWithPromise:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (oneway void)_remote_IXSPromisedStreamingZipTransfer:(id)arg1 consumeExtractedBytesAtPath:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (oneway void)_remote_IXSPromisedStreamingZipTransfer:(id)arg1 setArchiveBytesConsumed:(unsigned long long)arg2;
- (void)_fetchPromisedStreamingZipTransferForUUID:(id)arg1 method:(const char *)arg2 andRunWithPromise:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (oneway void)_remote_IXSPromisedTransferToPath:(id)arg1 setTryDeltaCopy:(_Bool)arg2;
- (oneway void)_remote_IXSPromisedTransferToPath:(id)arg1 setShouldCopy:(_Bool)arg2;
- (oneway void)_remote_IXSPromisedTransferToPath:(id)arg1 setTransferPath:(id)arg2;
- (void)_fetchPromisedTransferToPathForUUID:(id)arg1 method:(const char *)arg2 andRunWithPromise:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (oneway void)_remote_IXSPlaceholder:(id)arg1 setConfigurationCompleteWithCompletion:(CDUnknownBlockType)arg2;
- (oneway void)_remote_IXSPlaceholder:(id)arg1 getPlugInPlaceholderPromises:(CDUnknownBlockType)arg2;
- (oneway void)_remote_IXSPlaceholder:(id)arg1 hasPlugInPlaceholderPromises:(CDUnknownBlockType)arg2;
- (oneway void)_remote_IXSPlaceholder:(id)arg1 setPlugInPlaceholderPromiseUUIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (oneway void)_remote_IXSPlaceholder:(id)arg1 getEntitlementsPromise:(CDUnknownBlockType)arg2;
- (oneway void)_remote_IXSPlaceholder:(id)arg1 hasEntitlementsPromise:(CDUnknownBlockType)arg2;
- (oneway void)_remote_IXSPlaceholder:(id)arg1 setEntitlementsPromiseUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (oneway void)_remote_IXSPlaceholder:(id)arg1 getLocalizationDictionary:(CDUnknownBlockType)arg2;
- (oneway void)_remote_IXSPlaceholder:(id)arg1 setLocalizationPromiseUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (oneway void)_remote_IXSPlaceholder:(id)arg1 getIconPromise:(CDUnknownBlockType)arg2;
- (oneway void)_remote_IXSPlaceholder:(id)arg1 hasIconPromise:(CDUnknownBlockType)arg2;
- (oneway void)_remote_IXSPlaceholder:(id)arg1 setIconPromiseUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (oneway void)_remote_IXSPlaceholder:(id)arg1 getAttributesWithCompletion:(CDUnknownBlockType)arg2;
- (oneway void)_remote_IXSPlaceholder:(id)arg1 setAttributes:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (oneway void)_remote_IXSPlaceholder:(id)arg1 getLaunchProhibitedWithCompletion:(CDUnknownBlockType)arg2;
- (oneway void)_remote_IXSPlaceholder:(id)arg1 setLaunchProhibited:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (oneway void)_remote_IXSPlaceholder:(id)arg1 getSinfDataWithCompletion:(CDUnknownBlockType)arg2;
- (oneway void)_remote_IXSPlaceholder:(id)arg1 setSinfPromiseUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (oneway void)_remote_IXSPlaceholder:(id)arg1 getMetadataWithCompletion:(CDUnknownBlockType)arg2;
- (oneway void)_remote_IXSPlaceholder:(id)arg1 setMetadataPromiseUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchPlaceholderForUUID:(id)arg1 method:(const char *)arg2 andRunWithPromise:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (oneway void)_remote_IXSOwnedDataPromise:(id)arg1 getStagedPath:(CDUnknownBlockType)arg2;
- (oneway void)_remote_IXSOwnedDataPromise:(id)arg1 setStagedPath:(id)arg2;
- (void)_fetchOwnedDataPromiseForUUID:(id)arg1 method:(const char *)arg2 andRunWithPromise:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (oneway void)_remote_IXSDataPromise:(id)arg1 preflightWithCompletion:(CDUnknownBlockType)arg2;
- (oneway void)_remote_IXSDataPromise:(id)arg1 getErrorInfo:(CDUnknownBlockType)arg2;
- (oneway void)_remote_IXSDataPromise:(id)arg1 resetWithCompletion:(CDUnknownBlockType)arg2;
- (oneway void)_remote_IXSDataPromise:(id)arg1 cancelForReason:(id)arg2 client:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (oneway void)_remote_IXSDataPromise:(id)arg1 setIsComplete:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (oneway void)_remote_IXSDataPromise:(id)arg1 getIsComplete:(CDUnknownBlockType)arg2;
- (oneway void)_remote_IXSDataPromise:(id)arg1 setPercentComplete:(double)arg2;
- (oneway void)_remote_IXSDataPromise:(id)arg1 getPercentComplete:(CDUnknownBlockType)arg2;
- (void)_fetchDataPromiseForUUID:(id)arg1 method:(const char *)arg2 andRunWithPromise:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 setUserDataPromiseUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 setPreparationPromiseUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 setPlaceholderPromiseUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 setIsPaused:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 setInstallOptionsPromiseUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 setInitialODRAssetPromiseUUIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 setAutoEnabledExtensionTypes:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 setAppAssetPromiseUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 setAppAssetPromiseDRI:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 prioritizeWithCompletion:(CDUnknownBlockType)arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 importanceWithCompletion:(CDUnknownBlockType)arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 setImportance:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 hasUserDataPromise:(CDUnknownBlockType)arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 hasPlaceholderPromise:(CDUnknownBlockType)arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 hasInstallOptions:(CDUnknownBlockType)arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 hasInitialODRAssetPromises:(CDUnknownBlockType)arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 hasAutoEnabledExtensionTypes:(CDUnknownBlockType)arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 hasAppAssetPromise:(CDUnknownBlockType)arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 getUserDataRestoreShouldBegin:(CDUnknownBlockType)arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 getUserDataPromise:(CDUnknownBlockType)arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 getPreparationPromise:(CDUnknownBlockType)arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 getPlaceholderPromise:(CDUnknownBlockType)arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 getIsPausedWithCompletion:(CDUnknownBlockType)arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 getIsComplete:(CDUnknownBlockType)arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 getInitialODRAssetPromises:(CDUnknownBlockType)arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 getErrorInfo:(CDUnknownBlockType)arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 getCoordinationState:(CDUnknownBlockType)arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 getAppAssetPromiseDRI:(CDUnknownBlockType)arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 getAppAssetPromise:(CDUnknownBlockType)arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 fireObserversWithCompletion:(CDUnknownBlockType)arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 cancelForReason:(id)arg2 client:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (oneway void)_remote_IXSCoordinatedAppInstall:(id)arg1 appAssetPromiseHasBegunFulfillment:(CDUnknownBlockType)arg2;
- (void)_fetchIXSCoordinatedAppInstallForUUID:(id)arg1 method:(const char *)arg2 andRunWithCoordinator:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void)_remote_removeObserverForDataPromiseWithUUID:(id)arg1;
- (void)_remote_addObserversForDataPromisesWithUUIDs:(id)arg1;
- (void)_remote_removeObserverForCoordinatorWithUUID:(id)arg1;
- (void)_remote_addObserversForCoordinatorsWithUUIDs:(id)arg1 fireObserverMethods:(_Bool)arg2;
- (void)_remote_displayUserPresentableErrorForApps:(id)arg1 code:(long long)arg2;
- (void)_remote_displayUserPresentableErrorForApp:(id)arg1 code:(long long)arg2;
- (void)_remote_registerTransientObserver:(id)arg1 forClientIdentifiers:(id)arg2 respondingToSelectors:(unsigned long long)arg3;
- (void)_remote_registerObserverMachServiceName:(id)arg1 forClientIdentifiers:(id)arg2 respondingToSelectors:(unsigned long long)arg3;
- (void)_remote_uninstallAppWithBundleID:(id)arg1 requestUserConfirmation:(_Bool)arg2 waitForDeletion:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_remote_setRemovability:(unsigned long long)arg1 forAppWithBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_remote_removabilityForAppWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_remote_setTestModeForIdentifierPrefix:(id)arg1 testMode:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_remote_setTestingEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_remote_pingDaemonWithCompletion:(CDUnknownBlockType)arg1;
- (void)_remote_killDaemonForTestingWithCompletion:(CDUnknownBlockType)arg1;
- (void)_remote_purgeRegisteredCoordinatorsAndPromisesForCreator:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_remote_prioritizeCoordinatorForAppWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_remote_setIsPaused:(_Bool)arg1 forCoordinatorForAppWithBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_remote_cancelCoordinatorsForAppsWithBundleIDs:(id)arg1 reason:(id)arg2 client:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_remote_cancelCoordinatorForAppWithBundleID:(id)arg1 reason:(id)arg2 client:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_remote_fetchRegisteredDataPromiseInfoForCreator:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_remote_fetchSeedsForCoordinatorsWithIntent:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_remote_createAppInstallCoordinatorWithSeed:(id)arg1 createIfNotExisting:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_remote_createOutOfBandStreamingZipTransferDataPromiseWithSeed:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_remote_createOutOfBandTransferPromiseWithSeed:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_remote_createInMemoryDictionaryPromiseWithSeed:(id)arg1 dictionary:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_remote_createInMemoryDataPromiseWithSeed:(id)arg1 data:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_remote_createStreamingZipTransferDataPromiseWithSeed:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_remote_createTransferToPathDataPromiseWithSeed:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_remote_createPlaceholderDataPromiseWithSeed:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)interestedInUUID:(id)arg1;
- (void)removeInterestedCoordinatorOrPromiseUUID:(id)arg1;
- (void)removeInterestedCoordinatorOrPromiseUUIDs:(id)arg1;
- (void)addInterestedCoordinatorOrPromiseUUID:(id)arg1;
- (void)addInterestedCoordinatorOrPromiseUUIDs:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *clientSigningIdentifier; // @synthesize clientSigningIdentifier=_clientSigningIdentifier;
@property(readonly, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

