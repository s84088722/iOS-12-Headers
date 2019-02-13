//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSServiceDelegate-Protocol.h"

@class IDSService, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source, SPTransportDelegate;

@interface SPTransport : NSObject <IDSServiceDelegate>
{
    _Bool _canSend;
    _Bool _wifiEnabled;
    IDSService *_secureRemoteService;
    IDSService *_insecureRemoteService;
    id <SPTransportDelegate> _delegate;
    NSMutableDictionary *_messages;
    NSObject<OS_dispatch_queue> *_messagesAccessQueue;
    long long _wifiThresholdCount;
    NSObject<OS_dispatch_source> *_wifiTimer;
    NSObject<OS_dispatch_queue> *_retainedIDSMessageContextsQueue;
    NSMutableArray *_retainedIDSMessageContexts;
    NSString *_outgoingMessageBlockedUntil;
    NSObject<OS_dispatch_queue> *_blockedOutgoingMessagesQueue;
    NSObject<OS_dispatch_queue> *_sendQueue;
}

+ (id)sharedInstance;
@property(retain) NSObject<OS_dispatch_queue> *sendQueue; // @synthesize sendQueue=_sendQueue;
@property(retain) NSObject<OS_dispatch_queue> *blockedOutgoingMessagesQueue; // @synthesize blockedOutgoingMessagesQueue=_blockedOutgoingMessagesQueue;
@property(retain) NSString *outgoingMessageBlockedUntil; // @synthesize outgoingMessageBlockedUntil=_outgoingMessageBlockedUntil;
@property(retain, nonatomic) NSMutableArray *retainedIDSMessageContexts; // @synthesize retainedIDSMessageContexts=_retainedIDSMessageContexts;
@property(retain) NSObject<OS_dispatch_queue> *retainedIDSMessageContextsQueue; // @synthesize retainedIDSMessageContextsQueue=_retainedIDSMessageContextsQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *wifiTimer; // @synthesize wifiTimer=_wifiTimer;
@property _Bool wifiEnabled; // @synthesize wifiEnabled=_wifiEnabled;
@property long long wifiThresholdCount; // @synthesize wifiThresholdCount=_wifiThresholdCount;
@property _Bool canSend; // @synthesize canSend=_canSend;
@property(retain) NSObject<OS_dispatch_queue> *messagesAccessQueue; // @synthesize messagesAccessQueue=_messagesAccessQueue;
@property(retain) NSMutableDictionary *messages; // @synthesize messages=_messages;
@property(retain) id <SPTransportDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) IDSService *insecureRemoteService; // @synthesize insecureRemoteService=_insecureRemoteService;
@property(retain) IDSService *secureRemoteService; // @synthesize secureRemoteService=_secureRemoteService;
- (void).cxx_destruct;
- (void)removeOutgoingMessageBlockIfIdentiferMatches:(id)arg1 sendError:(id)arg2;
- (_Bool)handleDataProtectionSendFailureOrRetryFailureOnService:(id)arg1 account:(id)arg2 identifier:(id)arg3 error:(id)arg4;
- (void)temporarilyRetainIDSMessageContext:(id)arg1;
- (void)incomingProtobuf:(id)arg1;
- (void)incomingInsecureProtobuf:(id)arg1;
- (void)incomingSecureProtobuf:(id)arg1;
- (_Bool)saveForPossibleResend:(id)arg1;
- (id)serviceForTransport:(long long)arg1;
- (_Bool)_sendProtobuf:(id)arg1 sender:(id)arg2 timeOut:(double)arg3 securityType:(long long)arg4 retryExpiration:(id)arg5 tryGeneration:(unsigned long long)arg6 withCompletion:(CDUnknownBlockType)arg7;
- (_Bool)sendProtobuf:(id)arg1 sender:(id)arg2 timeOut:(double)arg3 securityType:(long long)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)serviceSpaceDidBecomeAvailable:(id)arg1;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (void)_sendData:(id)arg1 forApplication:(id)arg2 idsPriority:(long long)arg3 installer:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)sendData:(id)arg1 forApplication:(id)arg2 idsPriority:(long long)arg3 installer:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)_sendPlist:(id)arg1 timeOut:(double)arg2 securityType:(long long)arg3 retryExpiration:(id)arg4 tryGeneration:(unsigned long long)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (void)sendPlist:(id)arg1 timeOut:(double)arg2 securityType:(long long)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)wifiTimeOut;
- (void)killWiFiTimer;
- (void)startWiFiTimer;
- (void)keepWiFiAliveIfNeeded;
- (_Bool)isWiFiRequiredForSize:(long long)arg1;
- (_Bool)isWiFiEnabled;
- (void)disableWiFiIfNeededForDataOfSize:(long long)arg1;
- (void)enableWiFiIfNeededForDataOfSize:(long long)arg1;
- (void)setTransportDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

