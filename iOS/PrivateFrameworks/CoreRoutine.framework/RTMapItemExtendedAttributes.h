//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreRoutine/NSCopying-Protocol.h>
#import <CoreRoutine/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface RTMapItemExtendedAttributes : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _isMe;
    NSString *_addressIdentifier;
    double _wifiConfidence;
    long long _wifiFingerprintLabelType;
    NSUUID *_identifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)fingerprintLabelTypeToString:(long long)arg1;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long wifiFingerprintLabelType; // @synthesize wifiFingerprintLabelType=_wifiFingerprintLabelType;
@property(nonatomic) double wifiConfidence; // @synthesize wifiConfidence=_wifiConfidence;
@property(nonatomic) _Bool isMe; // @synthesize isMe=_isMe;
@property(copy, nonatomic) NSString *addressIdentifier; // @synthesize addressIdentifier=_addressIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToMapItemExtendedAttributes:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithAddressIdentifier:(id)arg1 isMe:(_Bool)arg2 wifiConfidence:(double)arg3 wifiFingerprintLabelType:(long long)arg4;
- (id)initWithIdentifier:(id)arg1 addressIdentifier:(id)arg2 isMe:(_Bool)arg3 wifiConfidence:(double)arg4 wifiFingerprintLabelType:(long long)arg5;
- (id)initWithExtendedAttributesMO:(id)arg1;
- (id)init;

@end

