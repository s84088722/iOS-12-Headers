//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/CNObjectValidation-Protocol.h>
#import <Contacts/NSCopying-Protocol.h>
#import <Contacts/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface CNSocialProfile : NSObject <CNObjectValidation, NSCopying, NSSecureCoding>
{
    NSString *_urlString;
    NSString *_username;
    NSString *_userIdentifier;
    NSString *_service;
    NSString *_displayname;
    NSString *_teamIdentifier;
    NSArray *_bundleIdentifiers;
}

+ (_Bool)supportsSecureCoding;
+ (id)socialProfileWithDictionaryRepresentation:(id)arg1;
+ (id)localizedStringForService:(id)arg1;
+ (id)localizedStringForKey:(id)arg1;
@property(copy, nonatomic) NSArray *bundleIdentifiers; // @synthesize bundleIdentifiers=_bundleIdentifiers;
@property(copy, nonatomic) NSString *teamIdentifier; // @synthesize teamIdentifier=_teamIdentifier;
@property(copy, nonatomic) NSString *displayname; // @synthesize displayname=_displayname;
@property(copy, nonatomic) NSString *service; // @synthesize service=_service;
@property(copy, nonatomic) NSString *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
- (void).cxx_destruct;
- (_Bool)isValid:(id *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1 ignoreURLs:(_Bool)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUrlString:(id)arg1 username:(id)arg2 userIdentifier:(id)arg3 service:(id)arg4 displayname:(id)arg5 teamIdentifier:(id)arg6 bundleIdentifiers:(id)arg7;
- (id)initWithUrlString:(id)arg1 username:(id)arg2 userIdentifier:(id)arg3 service:(id)arg4 displayname:(id)arg5;
- (id)initWithUrlString:(id)arg1 username:(id)arg2 userIdentifier:(id)arg3 service:(id)arg4;
- (id)dictionaryRepresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

