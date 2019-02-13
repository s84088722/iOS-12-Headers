//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NEHotspotEAPSettings, NEHotspotHS20Settings, NSNumber, NSString;

@interface NEHotspotConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _joinOnce;
    NSString *_SSID;
    NSNumber *_lifeTimeInDays;
    long long _securityType;
    NSString *_passphrase;
    NEHotspotEAPSettings *_eapSettings;
    NEHotspotHS20Settings *_hs20Settings;
}

+ (_Bool)supportsSecureCoding;
@property(copy) NEHotspotHS20Settings *hs20Settings; // @synthesize hs20Settings=_hs20Settings;
@property(copy) NEHotspotEAPSettings *eapSettings; // @synthesize eapSettings=_eapSettings;
@property(copy) NSString *passphrase; // @synthesize passphrase=_passphrase;
@property long long securityType; // @synthesize securityType=_securityType;
@property(copy) NSNumber *lifeTimeInDays; // @synthesize lifeTimeInDays=_lifeTimeInDays;
@property _Bool joinOnce; // @synthesize joinOnce=_joinOnce;
@property(readonly) NSString *SSID; // @synthesize SSID=_SSID;
- (void).cxx_destruct;
- (long long)validate;
- (_Bool)validateEAPSettings;
- (_Bool)validateTrustedServerCertificateReferences;
- (_Bool)validateClientTrustChainReference;
- (void)buildClientTrustChainReference:(struct __SecIdentity *)arg1;
- (_Bool)validateSecIdentityReference:(_Bool)arg1;
- (_Bool)isWEPPassphraseValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHS20Settings:(id)arg1 eapSettings:(id)arg2;
- (id)initWithSSID:(id)arg1 eapSettings:(id)arg2;
- (id)initWithSSID:(id)arg1 passphrase:(id)arg2 isWEP:(_Bool)arg3;
- (id)initWithSSID:(id)arg1;
- (id)init;
- (id)description;

@end

