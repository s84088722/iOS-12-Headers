//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACXDeviceConnectionProtocol-Protocol.h"

@class NSString, NSXPCConnection;
@protocol OS_os_transaction;

@interface ACXDeviceConnectionClient : NSObject <ACXDeviceConnectionProtocol>
{
    NSXPCConnection *_xpcConnection;
    NSObject<OS_os_transaction> *_observerTransaction;
}

+ (void)messageAllObserversWithInstallProgressForApplication:(id)arg1 progress:(double)arg2 phase:(unsigned long long)arg3;
+ (void)messageAllObserversWithInstallStateUpdate:(id)arg1;
+ (void)configureService;
@property(retain) NSObject<OS_os_transaction> *observerTransaction; // @synthesize observerTransaction=_observerTransaction;
@property __weak NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void).cxx_destruct;
- (void)cancelUpdatePendingForCompanionApp:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setUpdatePendingForCompanionApp:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updatePreferencesForApplicationWithIdentifier:(id)arg1 preferences:(id)arg2 forDeviceWithPairingID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchProvisioningProfilesForApplicationWithBundleID:(id)arg1 forDeviceWithPairingID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchProvisioningProfilesForDeviceWithPairingID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeProvisioningProfileWithID:(id)arg1 fromDeviceWithPairingID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)installProvisioningProfileWithData:(id)arg1 onDeviceWithPairingID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getAlwaysInstallForDeviceWithPairingID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeApplication:(id)arg1 fromDeviceWithPairingID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)installApplication:(id)arg1 withProvisioningProfileInfo:(id)arg2 forTestFlight:(_Bool)arg3 onDeviceWithPairingID:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)retryPendingAppInstallationsOnDeviceWithPairingID:(id)arg1;
- (void)cancelPendingInstallations;
- (void)installAllApplications;
- (void)fetchWatchAppBundleIDForCompanionAppBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchWatchAppBundleURLWithinCompanionAppWithWatchAppIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchInfoForApplicationWithBundleID:(id)arg1 forDeviceWithPairingID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchApplicationWithContainingApplicationBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchInstalledCompatibleApplicationsForDeviceWithPairingID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)activeComplicationsForDeviceWithPairingID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchInstalledComplicationsForDeviceWithPairingID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchInstalledApplicationsForDeviceWithPairingID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)disableObservers;
- (void)enableObservers;
@property(readonly, copy) NSString *description;
- (id)_deviceForPairingID:(id)arg1 error:(id *)arg2;
- (id)_gizmoStateForDeviceWithPairingID:(id)arg1 error:(id *)arg2;
- (id)_hasEntitlement:(id)arg1 forRequestType:(id)arg2;
@property(readonly) NSString *clientSigningIdentifier;
@property(readonly) NSString *clientName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

