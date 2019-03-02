//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CompanionSync/NMSDeviceTargetable-Protocol.h>
#import <CompanionSync/NMSObfuscatableDescriptionProviding-Protocol.h>

@class IDSMessageContext, NMSIncomingRequest, NSData, NSDictionary, NSSet, NSString;

@interface NMSOutgoingResponse : NSObject <NMSDeviceTargetable, NMSObfuscatableDescriptionProviding>
{
    _Bool _sent;
    NSSet *targetDeviceIDs;
    NMSIncomingRequest *_request;
    NSData *_data;
    unsigned long long _priority;
    double _sendTimeout;
    NSDictionary *_persistentUserInfo;
    NSDictionary *_extraIDSOptions;
    NSString *_idsIdentifier;
    id _pbResponse;
    IDSMessageContext *_idsContext;
}

@property(retain, nonatomic) IDSMessageContext *idsContext; // @synthesize idsContext=_idsContext;
@property(retain, nonatomic) id pbResponse; // @synthesize pbResponse=_pbResponse;
@property(copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property(getter=isSent) _Bool sent; // @synthesize sent=_sent;
@property(retain, nonatomic) NSDictionary *extraIDSOptions; // @synthesize extraIDSOptions=_extraIDSOptions;
@property(retain, nonatomic) NSDictionary *persistentUserInfo; // @synthesize persistentUserInfo=_persistentUserInfo;
@property(nonatomic) double sendTimeout; // @synthesize sendTimeout=_sendTimeout;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) __weak NMSIncomingRequest *request; // @synthesize request=_request;
@property(copy, nonatomic) NSSet *targetDeviceIDs; // @synthesize targetDeviceIDs;
- (void).cxx_destruct;
- (id)CPObfuscatedDescriptionObject;
@property(readonly, copy) NSString *description;
- (id)_makePBResponse;
- (void)send;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
