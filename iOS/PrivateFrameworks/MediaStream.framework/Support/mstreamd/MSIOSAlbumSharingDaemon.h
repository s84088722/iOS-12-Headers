//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreMediaStream/MSAlbumSharingDaemon.h>

#import "APSConnectionDelegate-Protocol.h"
#import "IDSServiceDelegate-Protocol.h"
#import "MSPowerBudgetDelegate-Protocol.h"
#import "XPCNSServiceListenerDelegate-Protocol.h"

@class APSConnection, IDSService, NSDictionary, NSMutableDictionary, NSString, NSTimer, XPCNSServiceListener;

@interface MSIOSAlbumSharingDaemon : MSAlbumSharingDaemon <XPCNSServiceListenerDelegate, APSConnectionDelegate, MSPowerBudgetDelegate, IDSServiceDelegate>
{
    XPCNSServiceListener *_serviceListener;
    XPCNSServiceListener *noWakeServiceListener;
    APSConnection *_prodAPSConnection;
    APSConnection *_devAPSConnection;
    NSMutableDictionary *_personIDToPowerBudgetMap;
    NSDictionary *_powerBudgetPersistedParameters;
    NSTimer *_busyPingTimer;
    IDSService *_idsService;
}

@property(retain, nonatomic) IDSService *idsService; // @synthesize idsService=_idsService;
@property(retain, nonatomic) NSTimer *busyPingTimer; // @synthesize busyPingTimer=_busyPingTimer;
@property(retain, nonatomic) NSDictionary *powerBudgetPersistedParameters; // @synthesize powerBudgetPersistedParameters=_powerBudgetPersistedParameters;
@property(retain, nonatomic) NSMutableDictionary *personIDToPowerBudgetMap; // @synthesize personIDToPowerBudgetMap=_personIDToPowerBudgetMap;
@property(retain, nonatomic) APSConnection *devAPSConnection; // @synthesize devAPSConnection=_devAPSConnection;
@property(retain, nonatomic) APSConnection *prodAPSConnection; // @synthesize prodAPSConnection=_prodAPSConnection;
@property(retain, nonatomic) XPCNSServiceListener *noWakeServiceListener; // @synthesize noWakeServiceListener;
@property(retain, nonatomic) XPCNSServiceListener *serviceListener; // @synthesize serviceListener=_serviceListener;
- (void).cxx_destruct;
- (void)forgetEverythingCompletionBlock:(CDUnknownBlockType)arg1;
- (void)forgetEverythingAboutPersonID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)isWaitingForAuth;
- (void)didReceiveAuthSuccessForPersonID:(id)arg1;
- (void)didReceiveAuthFailureForPersonID:(id)arg1;
- (void)stabilizedDidUnidle;
- (void)_busyPingTimerDidExpire:(id)arg1;
- (void)stabilizedDidIdle;
- (void)didUnidle;
- (void)didIdle;
- (void)MSPowerBudgetGotSignificantEvent:(id)arg1;
- (void)MSPowerBudget:(id)arg1 didRequestStorageOfPersistedValues:(id)arg2;
- (id)MSPowerBudgetDidRequestPersistedValues:(id)arg1;
- (void)_readPowerBudgetParametersForPersonID:(id)arg1;
- (void)didReceiveGlobalResetSyncForPersonID:(id)arg1;
- (_Bool)isPersonIDAllowedToDownloadAssets:(id)arg1;
- (void)setFocusAssetCollectionGUID:(id)arg1 forPersonID:(id)arg2;
- (void)setFocusAlbumGUID:(id)arg1 forPersonID:(id)arg2;
- (void)didEndForegroundFocusForPersonID:(id)arg1;
- (void)didBeginForegroundFocusForPersonID:(id)arg1;
- (void)didReceivePushNotificationForPersonID:(id)arg1;
- (void)didDestroyStateMachineForPersonID:(id)arg1;
- (id)powerBudgetForPersonID:(id)arg1;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)_updatePushNotificationTopicsOutListenToProduction:(_Bool *)arg1 outListenToDevelopment:(_Bool *)arg2;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4;
- (void)XPCNSServiceListener:(id)arg1 didReceiveNewConnection:(id)arg2;
- (_Bool)XPCNSServiceListener:(id)arg1 shouldReceiveNewConnection:(id)arg2;
- (void)shutDownCompletionBlock:(CDUnknownBlockType)arg1;
- (void)sendServerSideConfigurationDidChangeNotificationForPersonID:(id)arg1;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

