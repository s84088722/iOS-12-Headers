//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/NSCopying-Protocol.h>
#import <VideoSubscriberAccount/NSSecureCoding-Protocol.h>

@class NSArray, NSNumber, NSString, NSURL, VSOptional;

@interface VSIdentityProvider : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_displayName;
    _Bool _prohibitedByStore;
    _Bool _developer;
    VSOptional *_uniqueID;
    VSOptional *_providerID;
    VSOptional *_providerInfo;
    NSString *_nameForSorting;
    NSNumber *_rankForSorting;
    NSArray *_supportedTemplates;
    NSArray *_supportedAuthenticationSchemes;
    NSURL *_authenticationURL;
    NSURL *_appStoreRoomURL;
    NSArray *_appAdamIDs;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSArray *appAdamIDs; // @synthesize appAdamIDs=_appAdamIDs;
@property(copy, nonatomic) NSURL *appStoreRoomURL; // @synthesize appStoreRoomURL=_appStoreRoomURL;
@property(copy, nonatomic) NSURL *authenticationURL; // @synthesize authenticationURL=_authenticationURL;
@property(nonatomic, getter=isDeveloper) _Bool developer; // @synthesize developer=_developer;
@property(nonatomic, getter=isProhibitedByStore) _Bool prohibitedByStore; // @synthesize prohibitedByStore=_prohibitedByStore;
@property(copy, nonatomic) NSArray *supportedAuthenticationSchemes; // @synthesize supportedAuthenticationSchemes=_supportedAuthenticationSchemes;
@property(copy, nonatomic) NSArray *supportedTemplates; // @synthesize supportedTemplates=_supportedTemplates;
@property(copy, nonatomic) NSNumber *rankForSorting; // @synthesize rankForSorting=_rankForSorting;
@property(copy, nonatomic) NSString *nameForSorting; // @synthesize nameForSorting=_nameForSorting;
@property(retain, nonatomic) VSOptional *providerInfo; // @synthesize providerInfo=_providerInfo;
@property(retain, nonatomic) VSOptional *providerID; // @synthesize providerID=_providerID;
@property(retain, nonatomic) VSOptional *uniqueID; // @synthesize uniqueID=_uniqueID;
- (void).cxx_destruct;
- (_Bool)isFullySupportedForRequestsExpectingAuthenticationSchemes:(id)arg1;
- (_Bool)supportsRequestsExpectingAuthenticationSchemes:(id)arg1;
@property(readonly, nonatomic) _Bool supportsTemplatesSufficientForCurrentPlatform;
@property(readonly, nonatomic) _Bool supportsTemplatesSufficientForSomeKnownPlatform;
@property(readonly, nonatomic) VSOptional *displayName;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

