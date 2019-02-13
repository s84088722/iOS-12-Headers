//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/NSCopying-Protocol.h>
#import <Contacts/NSSecureCoding-Protocol.h>

@class NSString;

@interface CNAccount : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    NSString *_externalIdentifierString;
}

+ (_Bool)supportsSecureCoding;
+ (id)makeIdentifier;
+ (id)makeIdentifierString;
+ (id)identifierProvider;
+ (id)localAccount;
+ (id)predicateForAccountsWithIdentifiers:(id)arg1;
+ (id)predicateForAccountForContainerWithIdentifier:(id)arg1;
+ (id)predicateForAccountWithExternalIdentifier:(id)arg1;
@property(readonly, copy, nonatomic) NSString *externalIdentifierString; // @synthesize externalIdentifierString=_externalIdentifierString;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 externalIdentifier:(id)arg2;
- (id)initWithExternalIdentifier:(id)arg1;
- (id)init;

@end

