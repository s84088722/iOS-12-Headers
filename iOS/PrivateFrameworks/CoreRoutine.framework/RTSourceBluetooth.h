//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreRoutine/RTSource.h>

#import <CoreRoutine/NSCopying-Protocol.h>
#import <CoreRoutine/NSSecureCoding-Protocol.h>

@class NSString;

@interface RTSourceBluetooth : RTSource <NSSecureCoding, NSCopying>
{
    NSString *_deviceName;
    long long _deviceType;
}

+ (_Bool)supportsSecureCoding;
+ (id)stringFromBluetoothDeviceType:(long long)arg1;
@property(readonly, nonatomic) long long deviceType; // @synthesize deviceType=_deviceType;
@property(readonly, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceName:(id)arg1 type:(long long)arg2;

@end

