//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NetworkExtension/NEVPNProtocolPPP.h>

@interface NEVPNProtocolPPTP : NEVPNProtocolPPP
{
    long long _encryptionLevel;
}

+ (_Bool)supportsSecureCoding;
@property long long encryptionLevel; // @synthesize encryptionLevel=_encryptionLevel;
- (struct __SCNetworkInterface *)createInterface;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)copyLegacyDictionary;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

