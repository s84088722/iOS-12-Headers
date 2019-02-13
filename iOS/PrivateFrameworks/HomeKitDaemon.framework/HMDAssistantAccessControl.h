//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFObject-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDAssistantAccessControlModel, HMDUser, NSArray, NSMutableSet, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDAssistantAccessControl : HMFObject <HMFLogging, HMFObject, NSSecureCoding, HMDBackingStoreObjectProtocol>
{
    NSMutableSet *_accessories;
    _Bool _enabled;
    HMDUser *_user;
    unsigned long long _cachedHash;
    unsigned long long _options;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
}

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
+ (id)modelIDNamespace;
+ (id)accessControlWithMessage:(id)arg1 user:(id)arg2 error:(id *)arg3;
+ (_Bool)isAccessorySupported:(id)arg1;
@property(readonly) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)logIdentifier;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;
@property(readonly, copy) HMDAssistantAccessControlModel *model;
@property(readonly, copy) NSUUID *modelID;
- (void)notifyClientOfUpdateWithMessage:(id)arg1;
- (void)removeAccessoriesAddedByOldController:(id)arg1;
- (void)handleRemovedAccessory:(id)arg1;
- (void)removeAccessory:(id)arg1;
- (void)addAccessory:(id)arg1;
- (void)setAccessories:(id)arg1;
@property(readonly, copy) NSArray *accessories;
@property unsigned long long options; // @synthesize options=_options;
- (void)setEnabled:(_Bool)arg1;
@property(readonly, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property __weak HMDUser *user; // @synthesize user=_user;
@property(readonly) unsigned long long cachedHash; // @synthesize cachedHash=_cachedHash;
@property(readonly, copy) NSString *propertyDescription;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)dealloc;
- (id)initWithUser:(id)arg1;
- (id)initWithUser:(id)arg1 model:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
@property(readonly) Class superclass;

@end

