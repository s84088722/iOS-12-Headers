//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@interface CTEmergencyMode : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _enabled;
    long long _type;
}

+ (_Bool)supportsSecureCoding;
+ (id)convertFromEmergencyMode:(const struct EmergencyMode *)arg1;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToCTEmergencyMode:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithEnabled:(_Bool)arg1 type:(long long)arg2;

@end

