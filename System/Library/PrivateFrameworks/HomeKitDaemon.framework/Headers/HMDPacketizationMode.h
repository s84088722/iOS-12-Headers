//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDNumberParser.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@interface HMDPacketizationMode : HMDNumberParser <NSSecureCoding>
{
    unsigned long long _packetizationMode;
}

+ (id)arrayWithModes:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long packetizationMode; // @synthesize packetizationMode=_packetizationMode;
- (id)initWithPacketizationMode:(unsigned long long)arg1;
- (id)initWithTLVData:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
