//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFObject-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class HMDAccountHandle, HMDAccountIdentifier, HMDDeviceHandle, HMDHomeKitVersion, NSArray, NSString;

@interface HMDRemoteMessageSenderContext : HMFObject <HMFObject, NSCopying>
{
    HMDDeviceHandle *_deviceHandle;
    HMDAccountIdentifier *_accountIdentifier;
    HMDAccountHandle *_accountHandle;
    HMDHomeKitVersion *_deviceVersion;
}

@property(readonly, copy) HMDHomeKitVersion *deviceVersion; // @synthesize deviceVersion=_deviceVersion;
@property(readonly, copy) HMDAccountHandle *accountHandle; // @synthesize accountHandle=_accountHandle;
@property(readonly, copy) HMDAccountIdentifier *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(readonly, copy) HMDDeviceHandle *deviceHandle; // @synthesize deviceHandle=_deviceHandle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *propertyDescription;
- (id)initWithDeviceHandle:(id)arg1 accountHandle:(id)arg2 accountIdentifier:(id)arg3 deviceVersion:(id)arg4;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
@property(readonly) Class superclass;

@end

