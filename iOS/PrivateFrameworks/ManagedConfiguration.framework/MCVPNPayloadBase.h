//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class NSMutableDictionary, NSString;

@interface MCVPNPayloadBase : MCPayload
{
    NSMutableDictionary *_configurationDictionary;
    NSString *_serviceName;
    NSString *_vpnType;
    NSString *_userNameKey;
    NSString *_passwordKey;
    NSString *_proxyUserNameKey;
    NSString *_proxyPasswordKey;
    NSString *_sharedSecretKey;
    NSString *_pinKey;
}

@property(retain, nonatomic) NSString *pinKey; // @synthesize pinKey=_pinKey;
@property(retain, nonatomic) NSString *sharedSecretKey; // @synthesize sharedSecretKey=_sharedSecretKey;
@property(retain, nonatomic) NSString *proxyPasswordKey; // @synthesize proxyPasswordKey=_proxyPasswordKey;
@property(retain, nonatomic) NSString *proxyUserNameKey; // @synthesize proxyUserNameKey=_proxyUserNameKey;
@property(retain, nonatomic) NSString *passwordKey; // @synthesize passwordKey=_passwordKey;
@property(retain, nonatomic) NSString *userNameKey; // @synthesize userNameKey=_userNameKey;
@property(copy, nonatomic) NSString *vpnType; // @synthesize vpnType=_vpnType;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain, nonatomic) NSMutableDictionary *configurationDictionary; // @synthesize configurationDictionary=_configurationDictionary;
- (void).cxx_destruct;
- (id)payloadDescriptionKeyValueSections;
- (id)installationWarnings;
- (id)description;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (_Bool)isPayloadAllowed;

@end

