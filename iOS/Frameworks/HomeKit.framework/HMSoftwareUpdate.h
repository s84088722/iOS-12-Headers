//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFMessageReceiver-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMAccessory, HMFSoftwareVersion, HMFUnfairLock, HMSoftwareUpdateDocumentation, HMSoftwareUpdateDocumentationMetadata, NSString, NSUUID, _HMContext;
@protocol HMSoftwareUpdateDelegate, OS_dispatch_queue;

@interface HMSoftwareUpdate : NSObject <HMFMessageReceiver, HMObjectMerge, NSSecureCoding>
{
    HMFUnfairLock *_lock;
    NSUUID *_identifier;
    NSUUID *_uniqueIdentifier;
    long long _state;
    HMSoftwareUpdateDocumentationMetadata *_documentationMetadata;
    HMSoftwareUpdateDocumentation *_documentation;
    id <HMSoftwareUpdateDelegate> _delegate;
    HMFSoftwareVersion *_version;
    unsigned long long _downloadSize;
    _HMContext *_context;
    HMAccessory *_accessory;
}

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
@property __weak HMAccessory *accessory; // @synthesize accessory=_accessory;
@property(retain, nonatomic) _HMContext *context; // @synthesize context=_context;
@property(readonly) unsigned long long downloadSize; // @synthesize downloadSize=_downloadSize;
@property(readonly, copy) HMFSoftwareVersion *version; // @synthesize version=_version;
@property __weak id <HMSoftwareUpdateDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_handleUpdatedDocumentation:(id)arg1;
- (void)requestDocumentation;
- (void)setDocumentation:(id)arg1;
@property(readonly) HMSoftwareUpdateDocumentation *documentation; // @synthesize documentation=_documentation;
- (void)updateDocumentationMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleUpdatedDocumentationMetadata:(id)arg1;
- (void)setDocumentationMetadata:(id)arg1;
@property(readonly) HMSoftwareUpdateDocumentationMetadata *documentationMetadata; // @synthesize documentationMetadata=_documentationMetadata;
@property(readonly, getter=isDocumentationAvailable) _Bool documentationAvailable;
- (void)updateState:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleUpdatedState:(id)arg1;
- (void)setState:(long long)arg1;
@property(readonly) long long state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)_registerNotificationHandlers;
- (void)configureWithContext:(id)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)dealloc;
- (id)initWithVersion:(id)arg1 downloadSize:(unsigned long long)arg2 state:(long long)arg3 documentationMetadata:(id)arg4;
- (id)initWithVersion:(id)arg1 downloadSize:(unsigned long long)arg2 state:(long long)arg3;
- (id)initWithVersion:(id)arg1 downloadSize:(unsigned long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

