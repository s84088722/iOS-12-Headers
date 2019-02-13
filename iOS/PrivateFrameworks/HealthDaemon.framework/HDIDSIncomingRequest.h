//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDNanoSyncDescription-Protocol.h>

@class HDIDSMessageCenter, HDIDSOutgoingResponse, IDSDevice, NSData, NSString;

@interface HDIDSIncomingRequest : NSObject <HDNanoSyncDescription>
{
    _Bool _expectsResponse;
    unsigned short _messageID;
    IDSDevice *_fromDevice;
    NSString *_idsIdentifier;
    NSData *_data;
    unsigned long long _priority;
    HDIDSOutgoingResponse *_response;
    HDIDSMessageCenter *_messageCenter;
    id _pbRequest;
}

@property(retain, nonatomic) id pbRequest; // @synthesize pbRequest=_pbRequest;
@property(nonatomic) __weak HDIDSMessageCenter *messageCenter; // @synthesize messageCenter=_messageCenter;
@property(retain, nonatomic) HDIDSOutgoingResponse *response; // @synthesize response=_response;
@property(nonatomic) _Bool expectsResponse; // @synthesize expectsResponse=_expectsResponse;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property(nonatomic) unsigned short messageID; // @synthesize messageID=_messageID;
@property(retain, nonatomic) IDSDevice *fromDevice; // @synthesize fromDevice=_fromDevice;
- (void).cxx_destruct;
- (void)configureResponse;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)nanoSyncDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

