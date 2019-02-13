//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMApplicationData-Protocol.h>
#import <HomeKit/HMFMessageReceiver-Protocol.h>
#import <HomeKit/HMMutableApplicationData-Protocol.h>

@class HMAccessory, HMApplicationData, HMFUnfairLock, HMHome, HMHomeManagerConfiguration, HMMutableArray, NSArray, NSNumber, NSOperationQueue, NSString, NSUUID, _HMContext, _HMLocationHandler;
@protocol HMHomeManagerDelegate, OS_dispatch_queue;

@interface HMHomeManager : NSObject <HMFMessageReceiver, HMMutableApplicationData, HMApplicationData>
{
    HMFUnfairLock *_lock;
    HMAccessory *_currentAccessory;
    _Bool _thisDeviceResidentCapable;
    _Bool _residentEnabledForThisDevice;
    _Bool _accessAllowedWhenLocked;
    _Bool _mediaAccessoryControlRequested;
    _Bool _didUpdateHomes;
    _Bool _frameworkMergeComplete;
    _Bool _fetchInProgress;
    _Bool _viewServiceActive;
    int _serverGenerationCounterToken;
    id <HMHomeManagerDelegate> _delegate;
    HMHome *_primaryHome;
    HMHome *_currentHome;
    HMApplicationData *_applicationData;
    unsigned long long _dataSyncState;
    unsigned long long _status;
    unsigned long long _residentProvisioningStatus;
    HMHomeManagerConfiguration *_configuration;
    unsigned long long _options;
    HMMutableArray *_currentHomes;
    HMMutableArray *_homeInvitations;
    NSOperationQueue *_mergeOperationQueue;
    unsigned long long _generationCounter;
    NSNumber *_fileGenerationCounter;
    NSNumber *_fileMetadataVersion;
    unsigned long long _metadataVersion;
    _HMLocationHandler *_locationHandler;
    NSString *_homeCacheDir;
    NSString *_homeDataCache;
    NSString *_metadataCache;
    NSUUID *_uuid;
    _HMContext *_context;
}

+ (_Bool)dataSyncInProgressFromDataSyncState:(unsigned long long)arg1;
@property(nonatomic, getter=isViewServiceActive) _Bool viewServiceActive; // @synthesize viewServiceActive=_viewServiceActive;
@property(readonly, nonatomic) _HMContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain) NSString *metadataCache; // @synthesize metadataCache=_metadataCache;
@property(retain) NSString *homeDataCache; // @synthesize homeDataCache=_homeDataCache;
@property(retain) NSString *homeCacheDir; // @synthesize homeCacheDir=_homeCacheDir;
@property(readonly, nonatomic) _HMLocationHandler *locationHandler; // @synthesize locationHandler=_locationHandler;
@property(nonatomic) unsigned long long metadataVersion; // @synthesize metadataVersion=_metadataVersion;
@property(retain, nonatomic) NSNumber *fileMetadataVersion; // @synthesize fileMetadataVersion=_fileMetadataVersion;
@property(retain, nonatomic) NSNumber *fileGenerationCounter; // @synthesize fileGenerationCounter=_fileGenerationCounter;
@property(nonatomic) int serverGenerationCounterToken; // @synthesize serverGenerationCounterToken=_serverGenerationCounterToken;
@property(nonatomic) unsigned long long generationCounter; // @synthesize generationCounter=_generationCounter;
@property(nonatomic) _Bool fetchInProgress; // @synthesize fetchInProgress=_fetchInProgress;
@property(nonatomic) _Bool frameworkMergeComplete; // @synthesize frameworkMergeComplete=_frameworkMergeComplete;
@property(nonatomic) _Bool didUpdateHomes; // @synthesize didUpdateHomes=_didUpdateHomes;
@property(retain, nonatomic) NSOperationQueue *mergeOperationQueue; // @synthesize mergeOperationQueue=_mergeOperationQueue;
@property(retain, nonatomic) HMMutableArray *homeInvitations; // @synthesize homeInvitations=_homeInvitations;
@property(retain, nonatomic) HMMutableArray *currentHomes; // @synthesize currentHomes=_currentHomes;
- (void).cxx_destruct;
- (void)_pairingIdentityForAccessoryWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)pairingIdentityForAccessoryWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_registerForMediaAccessoryControl:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)registerForMediaAccessoryControl:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleResidentProvisioningStatusChanged:(id)arg1;
- (void)_handleAccessAllowedWhenLockedUpdatedNotification:(id)arg1;
- (void)_handleResidentEnabledForThisDeviceUpdatedNotification:(id)arg1;
- (void)_handleResidentDeviceCapableUpdatedNotification:(id)arg1;
- (void)_handleAppDataUpdatedNotification:(id)arg1;
- (void)_updateInvitation:(id)arg1 presenceAuthStatus:(unsigned long long)arg2 invitationState:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_acceptInvitation:(id)arg1 presenceAuthStatus:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_acceptInvitation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_declineInvitation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleQueryHomeKitUsageStateResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleMetadataUpdatedNotification:(id)arg1;
- (void)_handleUserInvitationsUpdatedNotification:(id)arg1;
- (void)_handleHomesDidUpdateNotification:(id)arg1;
- (void)_handleCurrentHomeChangedNotification:(id)arg1;
- (void)_handlePrimaryChangedNotification:(id)arg1;
- (void)_handleHomeRemovedNotification:(id)arg1;
- (void)_handleHomeAddedNotification:(id)arg1;
- (id)_homeWithUUID:(id)arg1;
- (void)_registerNotificationHandlers;
- (id)_privateDelegate;
- (void)_mergeCurrentAppDataWithNewAppData:(id)arg1 operations:(id)arg2;
- (void)_updateAppData:(id)arg1;
- (void)_mergeCurrentHomeInvitationsWithNewHomeInvitations:(id)arg1 operations:(id)arg2;
- (void)_mergeCurrentHomesWithNewHomes:(id)arg1 newPrimaryHome:(id)arg2 newCurrentHome:(id)arg3 newInvitations:(id)arg4 newAppData:(id)arg5 refreshRequested:(_Bool)arg6;
- (void)_notifyDelegateOfAppDataUpdate;
- (void)_updateHomes:(id)arg1;
- (void)_updateCurrentHome:(id)arg1;
- (void)_handleRuntimeStateUpdateNotification:(id)arg1;
- (void)_requestRuntimeUpdate:(id)arg1;
- (void)_handleRuntimeStateUpdatePayload:(id)arg1;
- (void)_requestFetchHomeConfigurationWithGenerationCounter:(id)arg1 cachedHomeConfiguration:(id)arg2 metadataVersion:(id)arg3 cachedMetadataConfiguration:(id)arg4 refreshRequested:(_Bool)arg5;
- (void)_fetchHomeConfigurationWithCache:(_Bool)arg1 refreshRequested:(_Bool)arg2;
- (void)_writeCaches:(id)arg1 homeData:(_Bool)arg2 metadata:(_Bool)arg3;
@property(readonly, nonatomic) unsigned long long serverGenerationCounter;
- (void)_dumpCaches:(id)arg1 metadata:(id)arg2;
- (_Bool)_isValidCachedHomeConfiguration:(id)arg1;
- (void)_removeCacheFiles:(_Bool)arg1;
- (void)_determineCacheFiles;
- (void)_determineCacheDirectory;
- (void)_processHomeConfigurationRequest:(id)arg1 refreshRequested:(_Bool)arg2;
- (void)__handleHomeManagerState:(id)arg1;
- (void)_requestRefresh;
- (void)_fetchHomeConfigurationWithPrivacyCheckWithCache:(_Bool)arg1 refreshRequested:(_Bool)arg2;
- (void)_start;
- (void)_pingDeviceWithDestination:(id)arg1 secure:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_pingDeviceWithUUID:(id)arg1 secure:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)__removeAccountWithHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)__removeAccountWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)__resolveAccountHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_checkName:(id)arg1 inHome:(id)arg2 withValidationOptions:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)checkName:(id)arg1 inHome:(id)arg2 withValidationOptions:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_updateAccessAllowedWhenLocked:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateAccessAllowedWhenLocked:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateResidentEnabledForThisDevice:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateResidentEnabledForThisDevice:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateApplicationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateApplicationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateiCloudSwitchState:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateiCloudSwitchState:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_queryiCloudSwitchStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)queryiCloudSwitchStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_shouldDisplayiCloudSwitchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)shouldDisplayiCloudSwitchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_setMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_queryMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)queryMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_primaryAccountWasDeletedWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)primaryAccountWasDeletedWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)idmsAccountUsernameModifiedWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_primaryAccountDidChange:(id)arg1 modified:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)primaryAccountWasModified:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)primaryAccountDidChange:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_logAppViewEvent:(id)arg1 name:(id)arg2 uuid:(id)arg3 information:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)logAppViewEvent:(id)arg1 name:(id)arg2 uuid:(id)arg3 information:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_checkEventValidity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkEventValidity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_deleteDuetEvents:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteDuetEvents:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_dumpState:(id)arg1 payload:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dumpState:(id)arg1 payload:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queryVersionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)queryVersionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_queryHomeKitUsageStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)queryHomeKitUsageStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_logControl:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)logControl:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_eraseHomeDataAndDeleteMetadata:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)eraseHomeDataAndDeleteMetadata:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)eraseHomeDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resetConfiguration:(_Bool)arg1 withoutPopup:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_removeHome:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeHome:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_addHomeWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addHomeWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updatePrimaryHome:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updatePrimaryHome:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(nonatomic) _Bool mediaAccessoryControlRequested; // @synthesize mediaAccessoryControlRequested=_mediaAccessoryControlRequested;
- (void)_notifyResidentProvisioningStatus:(unsigned long long)arg1;
- (void)setResidentProvisioningStatus:(unsigned long long)arg1;
- (void)_setResidentProvisioningStatus:(unsigned long long)arg1;
@property(readonly) unsigned long long residentProvisioningStatus; // @synthesize residentProvisioningStatus=_residentProvisioningStatus;
- (void)_notifyAccessAllowedWhenLockedUpdated:(_Bool)arg1;
- (void)setAccessAllowedWhenLocked:(_Bool)arg1;
@property(readonly, getter=isAccessAllowedWhenLocked) _Bool accessAllowedWhenLocked; // @synthesize accessAllowedWhenLocked=_accessAllowedWhenLocked;
- (void)notifyResidentEnabledUpdated:(_Bool)arg1;
- (void)setResidentEnabledForThisDevice:(_Bool)arg1;
@property(readonly, getter=isResidentEnabledForThisDevice) _Bool residentEnabledForThisDevice; // @synthesize residentEnabledForThisDevice=_residentEnabledForThisDevice;
- (void)notifyResidentCapableUpdated:(_Bool)arg1;
- (void)_updateStatusWithPayload:(id)arg1;
- (void)_handleStatusUpdated:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
@property(readonly) unsigned long long status; // @synthesize status=_status;
@property(readonly, nonatomic, getter=isDataSyncInProgress) _Bool dataSyncInProgress;
- (void)_updateDataSyncState:(id)arg1;
- (void)setDataSyncState:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long dataSyncState; // @synthesize dataSyncState=_dataSyncState;
- (void)setThisDeviceResidentCapable:(_Bool)arg1;
@property(readonly, getter=isThisDeviceResidentCapable) _Bool thisDeviceResidentCapable; // @synthesize thisDeviceResidentCapable=_thisDeviceResidentCapable;
@property(readonly, copy, nonatomic) NSArray *incomingHomeInvitations;
@property(readonly, copy, nonatomic) NSArray *homes;
@property(readonly) unsigned long long options; // @synthesize options=_options;
@property(readonly) HMHomeManagerConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)setApplicationData:(id)arg1;
@property(readonly, nonatomic) HMApplicationData *applicationData;
- (void)setCurrentAccessory:(id)arg1;
@property(readonly) __weak HMAccessory *currentAccessory;
- (void)setCurrentHome:(id)arg1;
@property(readonly, nonatomic) HMHome *currentHome; // @synthesize currentHome=_currentHome;
@property(retain, nonatomic) HMHome *primaryHome; // @synthesize primaryHome=_primaryHome;
@property(nonatomic) __weak id <HMHomeManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)initWithHomeMangerConfiguration:(id)arg1;
- (id)initWithOptions:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
