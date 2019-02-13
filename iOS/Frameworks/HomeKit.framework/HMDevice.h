//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMFUnfairLock, NSString, NSUUID;

@interface HMDevice : NSObject <HMObjectMerge, NSSecureCoding>
{
    HMFUnfairLock *_lock;
    _Bool _currentDevice;
    NSUUID *_uniqueIdentifier;
    NSString *_name;
    NSUUID *_idsIdentifier;
    NSUUID *_uuid;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, copy) NSUUID *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property(readonly, getter=isCurrentDevice) _Bool currentDevice; // @synthesize currentDevice=_currentDevice;
- (void).cxx_destruct;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)IDSDeviceForIDSService:(id)arg1;
@property(copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

