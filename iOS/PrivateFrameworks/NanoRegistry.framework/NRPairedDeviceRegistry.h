//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoRegistry/NRRegistryClient.h>

#import <NanoRegistry/NRPairedDeviceRegistryXPCFrameworkDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface NRPairedDeviceRegistry : NRRegistryClient <NRPairedDeviceRegistryXPCFrameworkDelegate>
{
    _Bool _disconnected;
    unsigned short _lastCompatibilityState;
    NSMutableDictionary *_legacyDevices;
    NSObject<OS_dispatch_queue> *_legacyDevicesQueue;
    NSObject<OS_dispatch_queue> *_legacyDevicesQueueFirst;
    unsigned long long _lastStatus;
    NSMutableArray *_waitingToPairBlocks;
}

+ (CDUnknownBlockType)activePairedDeviceSelectorBlock;
+ (CDUnknownBlockType)pairedDevicesSelectorBlock;
+ (CDUnknownBlockType)activeDeviceSelectorBlock;
+ (id)sharedInstance;
+ (_Bool)shouldBoostProcess;
+ (Class)proxyClass;
@property(retain, nonatomic) NSMutableArray *waitingToPairBlocks; // @synthesize waitingToPairBlocks=_waitingToPairBlocks;
@property(nonatomic) unsigned short lastCompatibilityState; // @synthesize lastCompatibilityState=_lastCompatibilityState;
@property(nonatomic) unsigned long long lastStatus; // @synthesize lastStatus=_lastStatus;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *legacyDevicesQueueFirst; // @synthesize legacyDevicesQueueFirst=_legacyDevicesQueueFirst;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *legacyDevicesQueue; // @synthesize legacyDevicesQueue=_legacyDevicesQueue;
@property(retain, nonatomic) NSMutableDictionary *legacyDevices; // @synthesize legacyDevices=_legacyDevices;
- (void).cxx_destruct;
- (unsigned long long)migrationCountForPairingID:(id)arg1;
- (unsigned long long)lastSyncSwitchIndex;
- (void)clearRecoveryFlagWithCompletion:(CDUnknownBlockType)arg1;
- (void)checkIfFlaggedForRecoveryWithCompletion:(CDUnknownBlockType)arg1;
- (void)keepPhoneUnlockedInternalTestSPI:(CDUnknownBlockType)arg1;
- (id)devicesFromMigrationConsentRequestData:(id)arg1;
- (id)migrationConsentRequestData;
- (id)lastMigrationRequestPhoneName;
- (void)beginMigrationWithDevice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)beginMigrationWithDevice:(id)arg1 passcode:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)setMigrationConsented:(_Bool)arg1 forDevice:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)setMigrationConsented:(_Bool)arg1 forDeviceID:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)waitForWatchPairingExtendedMetadataForAdvertisedName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopWatchSetupPush;
- (_Bool)isWatchSetupPushActive;
- (void)startWatchSetupPush;
- (void)_pingActiveGizmoWithPriority:(long long)arg1 withMessageSize:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)putMigrationChallengeCharacteristicWriteData:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getMigrationPairingCharacteristicReadDataWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_getActiveDeviceAssertionsWithInlineBlock:(CDUnknownBlockType)arg1;
- (void)getSwitchEventsFromIndex:(unsigned int)arg1 inlineCallback:(CDUnknownBlockType)arg2;
- (void)_getSwitchEventsFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2 inlineCallback:(CDUnknownBlockType)arg3;
- (id)_deviceIDAtSwitchIndex:(unsigned int)arg1 date:(id *)arg2;
- (unsigned int)switchIndex;
- (void)pairingClientDidEnterPhase:(id)arg1;
- (id)deviceIDForIDSDevice:(id)arg1;
- (id)deviceIDForNRDevice:(id)arg1;
- (id)deviceForNRDevice:(id)arg1 fromIDSDevices:(id)arg2;
- (id)deviceForIDSDevice:(id)arg1;
- (id)deviceForBluetoothID:(id)arg1;
- (id)deviceForBTDeviceID:(id)arg1;
- (id)deviceForPairingID:(id)arg1;
- (void)_submitAlbertPairingReport;
- (void)_submitServerRequestReportWithRequestType:(id)arg1 duration:(double)arg2 errorCode:(unsigned int)arg3;
- (id)serverRequestReporterWithType:(id)arg1;
- (void)sendDevicesUpdatedNotification;
- (void)xpcHasNewOOBKey:(id)arg1;
- (void)xpcDeviceID:(id)arg1 needsPasscode:(id)arg2;
- (_Bool)supportsPairedDevice;
- (void)overrideSignalStrengthLimit:(long long)arg1;
- (void)endDiscovery;
- (void)beginDiscovery;
- (void)retriggerUnpairInfoDialog;
- (long long)minQuickSwitchCompatibilityVersion;
- (long long)minPairingCompatibilityVersion;
- (long long)maxPairingCompatibilityVersion;
- (long long)pairingCompatibilityVersion;
- (void)userIsCheckingForUpdate;
- (id)blockAndQueryVersions;
- (_Bool)isPaired;
- (id)pairingID;
- (id)pairingStorePath;
- (void)resumePairingClientCrashMonitoring;
- (void)suspendPairingClientCrashMonitoring;
- (void)abortPairingWithReason:(id)arg1;
- (void)abortPairing;
- (void)_fireWaitingToPairBlocks;
- (id)waitForActivePairedDevice;
- (void)waitForPairingStorePathPairingID:(CDUnknownBlockType)arg1;
- (void)pairingStorePathPairingID:(CDUnknownBlockType)arg1;
- (void)enterCompatibilityState:(unsigned short)arg1 forDevice:(id)arg2;
- (void)fakePairedSyncIsCompleteWithCompletion:(CDUnknownBlockType)arg1;
- (void)switchToSimulator:(id)arg1 withQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)unpairWithSimulator:(id)arg1 withQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)pairWithSimulator:(id)arg1 withQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)unpairWithDevice:(id)arg1 withOptions:(id)arg2 operationHasBegun:(CDUnknownBlockType)arg3;
- (void)unpairWithDevice:(id)arg1 shouldObliterate:(_Bool)arg2 operationHasBegun:(CDUnknownBlockType)arg3;
- (void)notifyPairingShouldContinue;
- (void)notifyPasscode:(id)arg1 forDevice:(id)arg2;
- (void)notifyActivationCompleted:(id)arg1 withSuccess:(_Bool)arg2;
- (void)gizmoPasscodeAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(CDUnknownBlockType)arg2;
- (void)gizmoOOBAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(CDUnknownBlockType)arg2;
- (void)companionPasscodePairWithDevice:(id)arg1 withOptions:(id)arg2 operationHasBegun:(CDUnknownBlockType)arg3;
- (void)companionOOBDiscoverAndPairWithName:(id)arg1 withOutOfBandPairingKey:(id)arg2 withOptions:(id)arg3 operationHasBegun:(CDUnknownBlockType)arg4;
- (id)getAllDevicesWithArchivedDevicesMatching:(CDUnknownBlockType)arg1;
- (id)getDevicesMatching:(CDUnknownBlockType)arg1;
- (id)getAllDevicesWithArchivedDevices;
- (id)getAllDevices;
- (id)getActivePairedDevice;
- (id)getPairedDevices;
- (id)getDevices;
- (_Bool)isKeychainEnabled;
- (void)getDevicesWithBlock:(CDUnknownBlockType)arg1;
- (void)_fireChangeNotificationsForDiff:(id)arg1 collection:(id)arg2 secureProperties:(id)arg3 index:(unsigned long long)arg4 notify:(_Bool)arg5;
- (void)_postNotification:(id)arg1 forDeviceID:(id)arg2 withUserInfo:(id)arg3;
- (void)_fireCompatibilityStateStatusNotificationsWithCollection:(id)arg1;
- (unsigned short)compatibilityState;
- (unsigned short)_getCompatibilityStateWithCollection:(id)arg1;
- (void)_fireCompatibilityStateChangedNotificationWithCollection:(id)arg1;
@property(readonly, nonatomic) unsigned long long status;
- (unsigned long long)_getStatusWithCollection:(id)arg1;
- (void)_fireStatusChangedNotificationWithCollection:(id)arg1;
- (id)_legacyDevicesWithCollection:(id)arg1 secureProperties:(id)arg2;
- (id)_getClientInfo;
- (id)_getSecureProperties:(id)arg1;
- (id)_getChangeHistory;
- (id)initWithBoost:(_Bool)arg1 disconnected:(_Bool)arg2;
- (_Bool)supportsWatch;
- (id)initWithBoost:(_Bool)arg1;
- (id)init;
- (void)_invalidateActiveDeviceAssertionWithIdentifier:(id)arg1;
- (void)setActivePairedDevice:(id)arg1 withActiveDeviceAssertionHandler:(CDUnknownBlockType)arg2;
- (void)setActivePairedDevice:(id)arg1 isMagicSwitch:(_Bool)arg2 operationHasCompleted:(CDUnknownBlockType)arg3;
- (void)setActivePairedDevice:(id)arg1 operationHasCompleted:(CDUnknownBlockType)arg2;
- (_Bool)pairedDeviceSupportQuickSwitch;
- (_Bool)pairedDeviceCountIsLessThanMaxPairedDevices;
- (long long)maxPairedDeviceCount;
- (void)threadIsBlockedWaitingOn_nanoregistryd_syncGrabLegacyRegistryWithBlock:(CDUnknownBlockType)arg1;
- (id)_getLocalDeviceCollection;

@end

