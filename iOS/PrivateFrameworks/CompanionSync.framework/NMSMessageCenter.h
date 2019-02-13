//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CompanionSync/IDSServiceDelegate-Protocol.h>

@class IDSService, NMSPersistentDictionary, NMSWindowData, NSDate, NSMutableDictionary, NSString, _NMSDispatchQueue, _SYMultiSuspendableQueue;
@protocol NMSMessageCenterDelegate, OS_dispatch_queue, OS_dispatch_source, OS_os_activity;

@interface NMSMessageCenter : NSObject <IDSServiceDelegate>
{
    NSString *_serviceIdentifier;
    NSString *_launchNotification;
    struct __CFString *_loggingFacility;
    IDSService *_service;
    NSMutableDictionary *_requestHandlers;
    NSMutableDictionary *_errorHandlers;
    NSMutableDictionary *_responseHandlers;
    NSMutableDictionary *_pbMapping;
    NMSPersistentDictionary *_persistentContextStore;
    NSDate *_nextExpireTimerFireDate;
    NSObject<OS_dispatch_source> *_expireTimer;
    unsigned long long _currentBytesInFlight;
    NMSWindowData *_windowData;
    NSObject<OS_dispatch_source> *_windowTimeout;
    _NMSDispatchQueue *_windowQueue;
    _Bool _checkedForQWS;
    _SYMultiSuspendableQueue *_idsIncomingQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    _Bool _enableTransmissionWindow;
    _Bool _delegateRequiresACKs;
    id <NMSMessageCenterDelegate> _delegate;
    NSObject<OS_os_activity> *_transportActivity;
    unsigned long long _maxMessagesInFlight;
    unsigned long long _minMessagesInFlight;
    unsigned long long _maxBytesInFlight;
    double _windowResponseTimeout;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)setMessageWindowCountEnabled:(_Bool)arg1;
+ (_Bool)messageWindowCountEnabled;
@property(retain, nonatomic) IDSService *service; // @synthesize service=_service;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool delegateRequiresACKs; // @synthesize delegateRequiresACKs=_delegateRequiresACKs;
@property(nonatomic) double windowResponseTimeout; // @synthesize windowResponseTimeout=_windowResponseTimeout;
@property(nonatomic) unsigned long long maxBytesInFlight; // @synthesize maxBytesInFlight=_maxBytesInFlight;
@property(nonatomic) unsigned long long minMessagesInFlight; // @synthesize minMessagesInFlight=_minMessagesInFlight;
@property(nonatomic) unsigned long long maxMessagesInFlight; // @synthesize maxMessagesInFlight=_maxMessagesInFlight;
@property(nonatomic) _Bool enableTransmissionWindow; // @synthesize enableTransmissionWindow=_enableTransmissionWindow;
@property(retain, nonatomic) NSObject<OS_os_activity> *transportActivity; // @synthesize transportActivity=_transportActivity;
@property(nonatomic) __weak id <NMSMessageCenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (void)service:(id)arg1 didSwitchActivePairedDevice:(id)arg2 acknowledgementBlock:(CDUnknownBlockType)arg3;
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (_Bool)cancelMessageWithID:(id)arg1 error:(id *)arg2;
- (void)_obliterate;
- (void)_handleError:(id)arg1 context:(id)arg2;
- (void)_sendResponse:(id)arg1;
- (void)sendFile:(id)arg1;
- (void)sendRequest:(id)arg1;
- (id)_decodeIncomingRequestData:(id)arg1 context:(id)arg2;
- (id)_buildDataForResponse:(id)arg1 options:(id *)arg2;
- (id)_buildDataForRequest:(id)arg1 options:(id *)arg2;
- (void)resumeIncomingMessages;
- (void)suspendIncomingMessages;
- (void)dropExtantMessages;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *actionQ;
@property(readonly, nonatomic) IDSService *idsService;
- (void)resume;
- (void)_updateExpireTimerWithDate:(id)arg1;
- (void)_expireMessages;
- (void)_checkForSwitch;
@property(readonly, nonatomic, getter=_currentBytesInFlight) unsigned long long currentBytesInFlight;
- (id)_pbMappingForMessageID:(unsigned short)arg1;
- (void)mapPBRequest:(Class)arg1 toResponse:(Class)arg2 messageID:(unsigned short)arg3;
- (void)addResponseHandler:(unsigned short)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)addErrorHandlerForMessageID:(unsigned short)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)addRequestHandlerForMessageID:(unsigned short)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (id)responseHandlers;
- (id)errorHandlers;
- (id)requestHandlers;
- (void)_timeoutWindowedMessages;
- (void)_setNextWindowTimeoutFireDate;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithIDSServiceIdentifier:(id)arg1;
- (id)initWithIDSServiceIdentifier:(id)arg1 launchOnDemandNotification:(id)arg2 cacheFolderPath:(id)arg3;
- (id)init;
- (id)deviceIDFromDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

