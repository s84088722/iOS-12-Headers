//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVOutputDeviceAuthorizationSessionDelegate-Protocol.h"
#import "MRDDiagnosticCollecting-Protocol.h"
#import "MRDXPCMessageHandling-Protocol.h"

@class MRDAVHostedRoutingService, MRDAVRoutingDataSource, MRDAVSystemEndpointController, MSVSystemDialog, NSMutableArray, NSMutableSet, NSString;
@protocol OS_os_transaction;

@interface MRDAVRoutingServer : NSObject <AVOutputDeviceAuthorizationSessionDelegate, MRDXPCMessageHandling, MRDDiagnosticCollecting>
{
    MRDAVHostedRoutingService *_hostedRoutingService;
    MRDAVSystemEndpointController *_systemEndpointController;
    NSMutableSet *_routeUIDsToIgnorePortStatusFailures;
    NSMutableSet *_reconnaissanceSessions;
    NSMutableArray *_mostRecentlyPickedDevices;
    int _mostRecentStatus;
    _Bool _lastAirplayActiveState;
    int _airplayActiveNotificationToken;
    MRDAVRoutingDataSource *_routingDataSource;
    MSVSystemDialog *_activePasswordDialog;
    NSObject<OS_os_transaction> *_discoveryTransaction;
}

@property(retain, nonatomic) NSObject<OS_os_transaction> *discoveryTransaction; // @synthesize discoveryTransaction=_discoveryTransaction;
@property(retain, nonatomic) MSVSystemDialog *activePasswordDialog; // @synthesize activePasswordDialog=_activePasswordDialog;
@property(readonly, nonatomic) MRDAVRoutingDataSource *routingDataSource; // @synthesize routingDataSource=_routingDataSource;
- (void).cxx_destruct;
- (void)_predictGroupLeaderForOutputDeviceIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_resolveEndpointForOutputDeviceIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_createAirPlaySecuritySettings;
- (void)_setApplicationPickedRoutes:(id)arg1 updateRoutes:(_Bool)arg2 forClient:(id)arg3;
- (void)_presentPasswordDialogForRoute:(id)arg1 withOptions:(unsigned int)arg2;
- (void)_postExternalScreenDidChange;
- (_Bool)_setPickedRoute:(id)arg1 withPassword:(id)arg2 options:(unsigned int)arg3;
- (void)_loadMostRecentlyPicked;
- (void)_saveMostRecentlyPicked;
- (void)_clearPasswordForOutputDevice:(id)arg1;
- (id)_savedPasswordForOutputDevice:(id)arg1;
- (id)_existingKeychainAccountForOutputDevice:(id)arg1 password:(id *)arg2;
- (void)_handleAuthenticationFailureForRoute:(id)arg1 withOptions:(unsigned int)arg2;
- (void)_handleErrorStatus:(int)arg1 forRoute:(id)arg2;
- (_Bool)_shouldIgnorePortStatusFailureForRouteWithUID:(id)arg1 previouslyCachedRouteUID:(id *)arg2;
- (void)_updateSystemRouteDiscoveryMode;
- (id)_passwordDialogForRouteWithName:(id)arg1 usingInputType:(long long)arg2;
- (id)_descriptionForDiscoveryMode:(unsigned int)arg1;
- (void)_unregisterNotifications;
- (void)_registerNotifications;
- (void)_handleAuthorizationRequest:(id)arg1;
- (void)_activeEndpointDidChangeNotification:(id)arg1;
- (void)_postRouteStatusDidChangeNotificationForRoute:(id)arg1 newStatus:(int)arg2;
- (void)_failedToConnectToOutputDeviceNotification:(id)arg1;
- (void)_routingDataSourceRouteStatusDidChangeNotification:(id)arg1;
- (void)_routingDataSourceExternalScreenDidChangeNotification:(id)arg1;
- (void)_routingDataSourcePickedRouteVolumeControlAvailabilityDidChangeNotification:(id)arg1;
- (void)_routingDataSourcePickableRoutesDidChangeNotification:(id)arg1;
- (void)_clientInvalidatedNotification:(id)arg1;
- (void)_handleRemoveFromParentGroup:(id)arg1 fromClient:(id)arg2;
- (void)_handlePredictGroupLeader:(id)arg1 fromClient:(id)arg2;
- (void)_handleGroupDevicesAndSendCommand:(id)arg1 fromClient:(id)arg2;
- (void)_handleCreateEndpointWithDevices:(id)arg1 fromClient:(id)arg2;
- (void)_handleGetAirplayStatus:(id)arg1 fromClient:(id)arg2;
- (void)_handleGetIsGroupLeader:(id)arg1 fromClient:(id)arg2;
- (void)_handleGetDeviceUID:(id)arg1 fromClient:(id)arg2;
- (void)_handleGetGroupUID:(id)arg1 fromClient:(id)arg2;
- (void)_handlePresentRouteAuthorizationStatusMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handlePromptForRouteAuthorizationMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleGetHostedEndpointForOriginMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleGetActiveSystemEndpointUIDsMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleUpdateActiveSystemEndpointUIDMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleGetRecentAVOutputDeviceUIDsMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleSetRecentAVOutputDeviceUIDMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleGetHostedRoutingXPCEndpointMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleGetAirPlaySecuritySettingsMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleGetLocalReceiverPairingIdentityMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleSetApplicationPickedRoutes:(id)arg1 fromClient:(id)arg2;
- (void)_handleUnpickAirPlayRoutesMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleSetSavedAVRoutePasswordMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleGetSavedAVRoutePasswordMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleGetExternalScreenTypeMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleSetPickedRouteHasVolumeControlMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleGetPickedRouteHasVolumeControlMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleSetPickedRouteMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleGetPickableRoutesMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleSetRouteDiscoveryModeMessage:(id)arg1 fromClient:(id)arg2;
- (_Bool)outputDeviceAuthorizationSession:(id)arg1 shouldRetryAuthorizationRequest:(id)arg2 reason:(id)arg3;
- (void)outputDeviceAuthorizationSession:(id)arg1 didProvideAuthorizationRequest:(id)arg2;
- (void)collectDiagnostic:(id)arg1;
- (void)handleXPCMessage:(id)arg1 fromClient:(id)arg2;
- (id)clientsWithApplicationPickedRoutes;
- (id)clientsForApplicationPickedRoute:(id)arg1;
- (id)applicationPickedRoutes;
- (_Bool)routeIsActiveWithUID:(id)arg1;
- (void)pickCachedRouteWithUID:(id)arg1;
- (_Bool)setPickedRoute:(id)arg1 withPassword:(id)arg2 options:(unsigned int)arg3;
- (id)pickableRoutesForCategory:(id)arg1;
@property(readonly, nonatomic) NSString *localReceiverPairingIdentity;
- (void)dealloc;
- (id)initWithRoutingDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

