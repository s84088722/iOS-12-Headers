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

@class NSArray, NSString;

@interface NEAppRule : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>
{
    _Bool _noRestriction;
    _Bool _noDivertDNS;
    NSString *_matchSigningIdentifier;
    NSString *_matchDesignatedRequirement;
    NSString *_matchPath;
    NSArray *_matchDomains;
    NSArray *_additionalExecutables;
    NSArray *_matchAccountIdentifiers;
}

+ (_Bool)supportsSecureCoding;
@property _Bool noDivertDNS; // @synthesize noDivertDNS=_noDivertDNS;
@property(copy) NSArray *matchAccountIdentifiers; // @synthesize matchAccountIdentifiers=_matchAccountIdentifiers;
@property _Bool noRestriction; // @synthesize noRestriction=_noRestriction;
@property(copy) NSArray *additionalExecutables; // @synthesize additionalExecutables=_additionalExecutables;
@property(copy) NSArray *matchDomains; // @synthesize matchDomains=_matchDomains;
@property(copy) NSString *matchPath; // @synthesize matchPath=_matchPath;
@property(readonly) NSString *matchDesignatedRequirement; // @synthesize matchDesignatedRequirement=_matchDesignatedRequirement;
@property(readonly) NSString *matchSigningIdentifier; // @synthesize matchSigningIdentifier=_matchSigningIdentifier;
- (void).cxx_destruct;
- (_Bool)signingIdentifierAllowed:(id)arg1 domainsRequired:(out _Bool *)arg2;
- (_Bool)overlapsWithRule:(id)arg1;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)copyLegacyDictionary;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSigningIdentifier:(id)arg1;

@end

