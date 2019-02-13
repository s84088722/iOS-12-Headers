//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKit/HMEvent.h>

#import <HomeKit/HMCharacteristicEventProtocol-Protocol.h>
#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSMutableCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMCharacteristic, NSString;
@protocol NSCopying;

@interface HMCharacteristicEvent : HMEvent <NSSecureCoding, HMCharacteristicEventProtocol, NSCopying, NSMutableCopying>
{
    id <NSCopying> _triggerValue;
    HMCharacteristic *_characteristic;
}

+ (_Bool)supportsSecureCoding;
+ (id)createWithDictionary:(id)arg1 home:(id)arg2;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_handleEventUpdatedNotification:(id)arg1;
- (id)_serializeForAdd;
- (void)_updateTriggerValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateTriggerValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) id <NSCopying> triggerValue; // @synthesize triggerValue=_triggerValue;
- (void)setCharacteristic:(id)arg1;
@property(readonly, nonatomic) HMCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
- (id)initWithCharacteristic:(id)arg1 triggerValue:(id)arg2;
- (id)initWithDict:(id)arg1 characteristic:(id)arg2 triggerValue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

