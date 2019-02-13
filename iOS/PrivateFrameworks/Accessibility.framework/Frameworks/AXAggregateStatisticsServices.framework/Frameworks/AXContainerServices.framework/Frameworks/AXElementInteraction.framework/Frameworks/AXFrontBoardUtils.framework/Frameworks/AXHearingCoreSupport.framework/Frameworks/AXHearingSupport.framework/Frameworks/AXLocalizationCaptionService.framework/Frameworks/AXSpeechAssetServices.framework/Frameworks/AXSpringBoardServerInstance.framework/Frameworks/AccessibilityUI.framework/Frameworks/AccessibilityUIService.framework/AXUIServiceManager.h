//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityUIService/AXUIMessageSenderDelegate-Protocol.h>

@class AXAccessQueue, AXUIDisplayManager, AXUIMessageSender, BSProcessDeathWatcher, NSMutableArray, NSMutableDictionary, NSString;

@interface AXUIServiceManager : NSObject <AXUIMessageSenderDelegate>
{
    BSProcessDeathWatcher *_springBoardReaper;
    _Bool _didEncounterError;
    _Bool _shouldAllowServicesToProcessMessages;
    AXUIDisplayManager *_displayManager;
    AXAccessQueue *_resumingConnectionsQueue;
    NSMutableArray *_pausedConnections;
    AXAccessQueue *_entitlementsCheckersAccessQueue;
    NSMutableDictionary *_entitlementsCheckers;
    AXUIMessageSender *_messageSender;
    NSMutableArray *_serviceContexts;
    AXAccessQueue *_servicesAccessQueue;
    unsigned long long _lastUsedServiceIdentifier;
}

+ (void)_releaseSharedServiceManager;
+ (id)sharedServiceManager;
@property(nonatomic) _Bool shouldAllowServicesToProcessMessages; // @synthesize shouldAllowServicesToProcessMessages=_shouldAllowServicesToProcessMessages;
@property(nonatomic) unsigned long long lastUsedServiceIdentifier; // @synthesize lastUsedServiceIdentifier=_lastUsedServiceIdentifier;
@property(retain, nonatomic) AXAccessQueue *servicesAccessQueue; // @synthesize servicesAccessQueue=_servicesAccessQueue;
@property(retain, nonatomic) NSMutableArray *serviceContexts; // @synthesize serviceContexts=_serviceContexts;
@property(retain, nonatomic) AXUIMessageSender *messageSender; // @synthesize messageSender=_messageSender;
@property(nonatomic) _Bool didEncounterError; // @synthesize didEncounterError=_didEncounterError;
@property(retain, nonatomic) NSMutableDictionary *entitlementsCheckers; // @synthesize entitlementsCheckers=_entitlementsCheckers;
@property(retain, nonatomic) AXAccessQueue *entitlementsCheckersAccessQueue; // @synthesize entitlementsCheckersAccessQueue=_entitlementsCheckersAccessQueue;
@property(retain, nonatomic) NSMutableArray *pausedConnections; // @synthesize pausedConnections=_pausedConnections;
@property(retain, nonatomic) AXAccessQueue *resumingConnectionsQueue; // @synthesize resumingConnectionsQueue=_resumingConnectionsQueue;
@property(retain, nonatomic) AXUIDisplayManager *displayManager; // @synthesize displayManager=_displayManager;
- (void).cxx_destruct;
- (id)_servicesForUniqueIdentifiers:(id)arg1;
- (id)_uniqueIdentifierForService:(id)arg1;
- (id)_serviceContextForService:(id)arg1;
- (id)_serviceContextForClientWithIdentifier:(id)arg1;
- (void)_unregisterAllClientsWithConnection:(id)arg1;
- (_Bool)_registerClientWithIdentifier:(id)arg1 connection:(id)arg2 serviceBundleName:(id)arg3 initiatingMessageIdentifier:(unsigned long long)arg4 error:(id *)arg5;
- (void)_applicationDidReceiveMemoryWarning:(id)arg1;
- (void)_applicationDidFinishLaunching;
- (void)_registerForSpringBoardDeath;
- (_Bool)_serviceWithClass:(Class)arg1 canProcessMessageWithIdentifier:(unsigned long long)arg2 fromClientWithConnection:(id)arg3 possibleRequiredEntitlements:(id *)arg4;
- (void)_handleConnection:(id)arg1;
- (_Bool)_start;
- (void)messageSender:(id)arg1 willSendXPCMessage:(id)arg2 context:(void *)arg3;
- (void)messageSender:(id)arg1 accessXPCConnectionForMessageWithContext:(void *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)_sendSynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 toClientWithMessenger:(id)arg3 error:(id *)arg4;
- (void)_sendAsynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 toClientWithMessenger:(id)arg3 targetAccessQueue:(id)arg4 completionRequiresWritingBlock:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (id)_clientMessengerWithIdentifier:(id)arg1;
- (void)endTransactionWithIdentifier:(id)arg1 forService:(id)arg2;
- (void)beginTransactionWithIdentifier:(id)arg1 forService:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

