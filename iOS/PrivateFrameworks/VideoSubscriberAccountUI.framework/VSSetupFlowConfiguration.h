//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, VSIdentityProvider;

__attribute__((visibility("hidden")))
@interface VSSetupFlowConfiguration : NSObject
{
    _Bool _shouldSkipSetupEntirely;
    _Bool _shouldOfferAuthenticationFlow;
    _Bool _shouldOfferSoleAuthenticationFlow;
    _Bool _canShowSupportedAppsButton;
    VSIdentityProvider *_identityProvider;
    NSArray *_bundlesIDsToConsent;
    NSDictionary *_vouchersByBundleID;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool canShowSupportedAppsButton; // @synthesize canShowSupportedAppsButton=_canShowSupportedAppsButton;
@property(copy, nonatomic) NSDictionary *vouchersByBundleID; // @synthesize vouchersByBundleID=_vouchersByBundleID;
@property(copy, nonatomic) NSArray *bundlesIDsToConsent; // @synthesize bundlesIDsToConsent=_bundlesIDsToConsent;
@property(retain, nonatomic) VSIdentityProvider *identityProvider; // @synthesize identityProvider=_identityProvider;
@property(nonatomic) _Bool shouldOfferSoleAuthenticationFlow; // @synthesize shouldOfferSoleAuthenticationFlow=_shouldOfferSoleAuthenticationFlow;
@property(nonatomic) _Bool shouldOfferAuthenticationFlow; // @synthesize shouldOfferAuthenticationFlow=_shouldOfferAuthenticationFlow;
@property(nonatomic) _Bool shouldSkipSetupEntirely; // @synthesize shouldSkipSetupEntirely=_shouldSkipSetupEntirely;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

