//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/IDSServiceDelegate-Protocol.h>

@class BLTPBProtobufSequenceNumberManager, NSLock, NSMutableDictionary, NSString;
@protocol BLTAbstractIDSDevice, BLTAbstractIDSService, OS_dispatch_queue;

@interface BLTRemoteObject : NSObject <IDSServiceDelegate>
{
    NSMutableDictionary *_idsSendIDToCompletionHandler;
    NSMutableDictionary *_idsSendIDToResponseHandler;
    NSMutableDictionary *_idsFileIDToResponseHandler;
    NSString *_serviceName;
    _Bool _full;
    NSObject<OS_dispatch_queue> *_idsQueue;
    id <BLTAbstractIDSDevice> _defaultPairedDevice;
    NSMutableDictionary *_idsRequestMessageTypeToSelector;
    NSLock *_sequenceNumberSendLock;
    NSObject<OS_dispatch_queue> *_connectionStatusQueue;
    unsigned long long _simConnectionState;
    id _simConnectionStateHandlerToken;
    _Bool _pairedDeviceReady;
    NSObject<OS_dispatch_queue> *_clientQueue;
    unsigned long long _lastKnownConnectionStatus;
    id <BLTAbstractIDSService> _service;
    BLTPBProtobufSequenceNumberManager *_sequenceNumberManager;
}

@property(readonly, nonatomic) BLTPBProtobufSequenceNumberManager *sequenceNumberManager; // @synthesize sequenceNumberManager=_sequenceNumberManager;
@property(readonly, nonatomic) id <BLTAbstractIDSService> service; // @synthesize service=_service;
@property(getter=isPairedDeviceReady) _Bool pairedDeviceReady; // @synthesize pairedDeviceReady=_pairedDeviceReady;
@property(nonatomic) unsigned long long lastKnownConnectionStatus; // @synthesize lastKnownConnectionStatus=_lastKnownConnectionStatus;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
- (void).cxx_destruct;
- (void)handleFileURL:(id)arg1 extraMetadata:(id)arg2;
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (_Bool)_callSendCompletionHandlerWithSuccess:(_Bool)arg1 identifier:(id)arg2 error:(id)arg3;
- (_Bool)_idsQueueCallSendCompletionHandlerWithSuccess:(_Bool)arg1 identifier:(id)arg2 error:(id)arg3;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (void)_removeAndHandleResponseHandler:(id)arg1;
- (void)_deviceConnectionStatusChanged:(id)arg1;
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)sendFileURL:(id)arg1 withTimeout:(id)arg2 extraMetadata:(id)arg3 responseHandlers:(id)arg4 didSend:(CDUnknownBlockType)arg5 didQueue:(CDUnknownBlockType)arg6;
- (void)_queueSendMessage:(id)arg1 type:(unsigned short)arg2 responseToRequest:(id)arg3 withTimeout:(id)arg4 withDescription:(id)arg5 onlyOneFor:(id)arg6 didSend:(CDUnknownBlockType)arg7 andResponse:(CDUnknownBlockType)arg8 didQueue:(CDUnknownBlockType)arg9;
- (id)_wrapError:(id)arg1 identifier:(id)arg2;
- (void)_queuePerformSend:(CDUnknownBlockType)arg1 responseToRequest:(id)arg2 withTimeout:(id)arg3 withDescription:(id)arg4 shortDescription:(id)arg5 onlyOneFor:(id)arg6 didSend:(CDUnknownBlockType)arg7 andResponse:(CDUnknownBlockType)arg8;
- (void)_sendMessage:(id)arg1 type:(unsigned short)arg2 responseToRequest:(id)arg3 withTimeout:(id)arg4 withDescription:(id)arg5 onlyOneFor:(id)arg6 didSend:(CDUnknownBlockType)arg7 andResponse:(CDUnknownBlockType)arg8 didQueue:(CDUnknownBlockType)arg9;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 didSend:(CDUnknownBlockType)arg4 didQueue:(CDUnknownBlockType)arg5;
- (void)sendResponse:(id)arg1 type:(unsigned short)arg2 withRequest:(id)arg3 withTimeout:(id)arg4 withDescription:(id)arg5 onlyOneFor:(id)arg6 didSend:(CDUnknownBlockType)arg7;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 withDescription:(id)arg4 onlyOneFor:(id)arg5 didSend:(CDUnknownBlockType)arg6 andResponse:(CDUnknownBlockType)arg7;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 withDescription:(id)arg4 didSend:(CDUnknownBlockType)arg5;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 didSend:(CDUnknownBlockType)arg4;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 didSend:(CDUnknownBlockType)arg3;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2;
- (void)_setStandaloneTestModeEnabled:(_Bool)arg1;
- (void)disableStandaloneTestMode;
- (void)enableStandaloneTestModeWithMinimumSendDelay:(unsigned long long)arg1 maximumSendDelay:(unsigned long long)arg2 minimumResponseDelay:(unsigned long long)arg3 maximumResponseDelay:(unsigned long long)arg4;
- (void)registerProtobufHandlers;
- (void)_queueUpdateConnectionStatusWithResetDefaulteDevice:(_Bool)arg1;
- (void)_updateConnectionStatusWithResetDefaulteDevice:(_Bool)arg1;
- (void)_updateConnectionStatus;
- (unsigned long long)connectionStatus;
- (void)setProtobufAction:(SEL)arg1 forIncomingResponsesOfType:(unsigned short)arg2;
- (void)setProtobufAction:(SEL)arg1 forIncomingRequestsOfType:(unsigned short)arg2;
- (void)_storeProtobufAction:(SEL)arg1 messageType:(unsigned short)arg2 messageSendType:(long long)arg3;
- (void)handleAckInitialSequenceNumberRequest:(id)arg1;
- (void)_sendAckInitialSequenceNumberForSession:(id)arg1 withAssert:(_Bool)arg2 sessionState:(unsigned long long *)arg3;
- (void)_sendAckInitialSequenceNumberForSession:(id)arg1 sessionState:(unsigned long long)arg2;
- (void)_sendAssertForSession;
- (void)handleIncomingMessage:(id)arg1;
- (void)_queueHandleIDSProtobuf:(id)arg1;
- (void)handleIDSProtobuf:(id)arg1;
- (_Bool)_sequenceErrorDidHappenAndHandled:(long long)arg1 service:(id)arg2 incomingIdentifier:(id)arg3;
- (void)_handleNewSessionState:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithServiceName:(id)arg1 idsQueueName:(char *)arg2 andClientQueue:(id)arg3;
- (id)initWithServiceName:(id)arg1 idsQueueName:(char *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

