//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEConfigurationLegacySupport-Protocol.h>
#import <NetworkExtension/NEConfigurationValidating-Protocol.h>
#import <NetworkExtension/NEPrettyDescription-Protocol.h>
#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NSArray, NSURL;

@interface NEOnDemandRule : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>
{
    long long _action;
    NSArray *_DNSSearchDomainMatch;
    NSArray *_DNSServerAddressMatch;
    long long _interfaceTypeMatch;
    NSArray *_SSIDMatch;
    NSURL *_probeURL;
}

+ (id)createOnDemandRulesFromLegacyDictionary:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(copy) NSURL *probeURL; // @synthesize probeURL=_probeURL;
@property(copy) NSArray *SSIDMatch; // @synthesize SSIDMatch=_SSIDMatch;
@property long long interfaceTypeMatch; // @synthesize interfaceTypeMatch=_interfaceTypeMatch;
@property(copy) NSArray *DNSServerAddressMatch; // @synthesize DNSServerAddressMatch=_DNSServerAddressMatch;
@property(copy) NSArray *DNSSearchDomainMatch; // @synthesize DNSSearchDomainMatch=_DNSSearchDomainMatch;
@property(readonly) long long action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)copyLegacyDictionary;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAction:(long long)arg1;

@end

