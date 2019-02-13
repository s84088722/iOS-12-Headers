//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDAccessory, HMDMediaProfile, HMMediaSystemRole, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDMediaSystemComponent : NSObject <NSSecureCoding, HMFDumpState, HMFLogging>
{
    HMMediaSystemRole *_role;
    NSUUID *_uuid;
    HMDAccessory *_accessory;
    NSObject<OS_dispatch_queue> *_propertyQueue;
}

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
+ (id)mediaSystemComponentWithDictionary:(id)arg1 home:(id)arg2;
+ (id)accessoryForMediaSystemComponentWithDictionary:(id)arg1 home:(id)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setRole:(id)arg1;
@property(readonly, nonatomic) HMMediaSystemRole *role; // @synthesize role=_role;
@property(readonly, nonatomic) __weak HMDMediaProfile *mediaProfile;
- (id)serialize;
- (id)dumpState;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)logIdentifier;
- (id)initWithUUID:(id)arg1 accessory:(id)arg2 role:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

