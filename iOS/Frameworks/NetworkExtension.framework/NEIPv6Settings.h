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

@interface NEIPv6Settings : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>
{
    NSArray *_addresses;
    NSArray *_networkPrefixLengths;
    NSArray *_includedRoutes;
    NSArray *_excludedRoutes;
    long long _configMethod;
    NSString *_router;
}

+ (_Bool)supportsSecureCoding;
@property(copy) NSString *router; // @synthesize router=_router;
@property long long configMethod; // @synthesize configMethod=_configMethod;
@property(copy) NSArray *excludedRoutes; // @synthesize excludedRoutes=_excludedRoutes;
@property(copy) NSArray *includedRoutes; // @synthesize includedRoutes=_includedRoutes;
@property(readonly) NSArray *networkPrefixLengths; // @synthesize networkPrefixLengths=_networkPrefixLengths;
@property(readonly) NSArray *addresses; // @synthesize addresses=_addresses;
- (void).cxx_destruct;
- (_Bool)hasDefaultRoute;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)copyLegacyDictionary;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAddresses:(id)arg1 networkPrefixLengths:(id)arg2;
- (id)init;

@end

