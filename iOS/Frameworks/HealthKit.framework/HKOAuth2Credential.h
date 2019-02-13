//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDate, NSString;

@interface HKOAuth2Credential : NSObject <NSCopying, NSSecureCoding>
{
    NSData *_accessToken;
    NSString *_tokenType;
    NSData *_refreshToken;
    NSDate *_expiration;
    NSArray *_scope;
}

+ (id)scopeFromScopeString:(id)arg1;
+ (id)_scopeStringFromScope:(id)arg1;
+ (id)expirationFromTimeInterval:(double)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *scope; // @synthesize scope=_scope;
@property(readonly, copy, nonatomic) NSDate *expiration; // @synthesize expiration=_expiration;
@property(readonly, copy, nonatomic) NSData *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(readonly, copy, nonatomic) NSString *tokenType; // @synthesize tokenType=_tokenType;
@property(readonly, copy, nonatomic) NSData *accessToken; // @synthesize accessToken=_accessToken;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *scopeString;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_commonInitWithAccessToken:(id)arg1 tokenType:(id)arg2 refreshToken:(id)arg3 expiration:(id)arg4 scope:(id)arg5;
- (unsigned long long)hash;
- (_Bool)isEqualToCredential:(id)arg1 epsilonExpiration:(double)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)initWithAccessToken:(id)arg1 tokenType:(id)arg2 refreshToken:(id)arg3 expiration:(id)arg4 scopeString:(id)arg5;
- (id)initWithAccessToken:(id)arg1 tokenType:(id)arg2 refreshToken:(id)arg3 expiration:(id)arg4 scope:(id)arg5;
- (id)init;

@end

