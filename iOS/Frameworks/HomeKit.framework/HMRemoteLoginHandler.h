//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFMessageReceiver-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class ACAccount, HMAccessory, HMFUnfairLock, HMRemoteLoginAnisetteDataProvider, NSString, NSUUID, _HMContext;
@protocol OS_dispatch_queue;

@interface HMRemoteLoginHandler : NSObject <HMFMessageReceiver, NSSecureCoding, HMObjectMerge>
{
    HMFUnfairLock *_lock;
    ACAccount *_loggedInAccount;
    NSString *_currentSessionID;
    NSUUID *_uniqueIdentifier;
    HMRemoteLoginAnisetteDataProvider *_anisetteDataProvider;
    _HMContext *_context;
    NSUUID *_uuid;
    HMAccessory *_accessory;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) __weak HMAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) _HMContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) HMRemoteLoginAnisetteDataProvider *anisetteDataProvider; // @synthesize anisetteDataProvider=_anisetteDataProvider;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_handleRemoteLoginSignoutResponse:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_signout:(CDUnknownBlockType)arg1;
- (void)signout:(CDUnknownBlockType)arg1;
- (void)_handleLoginResponse:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_proxyLoginWithAuthResults:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)proxyLoginWithAuthResults:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleQueryProxiedDeviceResponse:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queryProxiedDevice:(CDUnknownBlockType)arg1;
- (void)queryProxiedDevice:(CDUnknownBlockType)arg1;
- (void)_companionLoginWithAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)companionLoginWithAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_callAccountUpdateDelegate:(id)arg1;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_handleRemoteLoginAccountUpdated:(id)arg1;
@property(readonly, getter=isControllable) _Bool controllable;
@property(readonly, nonatomic, getter=isSessionInProgress) _Bool sessionInProgress;
@property(retain, nonatomic) NSString *currentSessionID; // @synthesize currentSessionID=_currentSessionID;
- (void)updateLoggedInAccount:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setLoggedInAccount:(id)arg1;
@property(readonly, nonatomic) ACAccount *loggedInAccount; // @synthesize loggedInAccount=_loggedInAccount;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void)registerForMessages;
- (void)_configureWithContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

