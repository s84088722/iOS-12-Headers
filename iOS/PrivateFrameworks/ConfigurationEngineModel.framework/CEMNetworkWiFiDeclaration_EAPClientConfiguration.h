//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSNumber, NSString;

@interface CEMNetworkWiFiDeclaration_EAPClientConfiguration : CEMPayloadBase
{
    NSArray *_payloadAcceptEAPTypes;
    NSString *_payloadUserName;
    NSString *_payloadUserPassword;
    NSNumber *_payloadOneTimePassword;
    NSArray *_payloadPayloadCertificateAnchorUUID;
    NSArray *_payloadTLSTrustedCertificates;
    NSArray *_payloadTLSTrustedServerNames;
    NSNumber *_payloadTLSAllowTrustExceptions;
    NSNumber *_payloadTLSCertificateIsRequired;
    NSString *_payloadTTLSInnerAuthentication;
    NSString *_payloadTLSMinimumVersion;
    NSString *_payloadTLSMaximumVersion;
    NSString *_payloadOuterIdentity;
    NSNumber *_payloadEAPFASTUsePAC;
    NSNumber *_payloadEAPFASTProvisionPAC;
    NSNumber *_payloadEAPFASTProvisionPACAnonymously;
    NSNumber *_payloadEAPSIMNumberOfRANDs;
    NSString *_payloadSystemModeCredentialsSource;
    NSNumber *_payloadSystemModeUseOpenDirectoryCredentials;
    NSNumber *_payloadOneTimeUserPassword;
    NSNumber *_payloadEAPSIMAKAEncryptedIdentityEnabled;
}

+ (id)buildRequiredOnlyWithAcceptEAPTypes:(id)arg1;
+ (id)buildWithAcceptEAPTypes:(id)arg1 withUserName:(id)arg2 withUserPassword:(id)arg3 withOneTimePassword:(id)arg4 withPayloadCertificateAnchorUUID:(id)arg5 withTLSTrustedCertificates:(id)arg6 withTLSTrustedServerNames:(id)arg7 withTLSAllowTrustExceptions:(id)arg8 withTLSCertificateIsRequired:(id)arg9 withTTLSInnerAuthentication:(id)arg10 withTLSMinimumVersion:(id)arg11 withTLSMaximumVersion:(id)arg12 withOuterIdentity:(id)arg13 withEAPFASTUsePAC:(id)arg14 withEAPFASTProvisionPAC:(id)arg15 withEAPFASTProvisionPACAnonymously:(id)arg16 withEAPSIMNumberOfRANDs:(id)arg17 withSystemModeCredentialsSource:(id)arg18 withSystemModeUseOpenDirectoryCredentials:(id)arg19 withOneTimeUserPassword:(id)arg20 withEAPSIMAKAEncryptedIdentityEnabled:(id)arg21;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSNumber *payloadEAPSIMAKAEncryptedIdentityEnabled; // @synthesize payloadEAPSIMAKAEncryptedIdentityEnabled=_payloadEAPSIMAKAEncryptedIdentityEnabled;
@property(copy, nonatomic) NSNumber *payloadOneTimeUserPassword; // @synthesize payloadOneTimeUserPassword=_payloadOneTimeUserPassword;
@property(copy, nonatomic) NSNumber *payloadSystemModeUseOpenDirectoryCredentials; // @synthesize payloadSystemModeUseOpenDirectoryCredentials=_payloadSystemModeUseOpenDirectoryCredentials;
@property(copy, nonatomic) NSString *payloadSystemModeCredentialsSource; // @synthesize payloadSystemModeCredentialsSource=_payloadSystemModeCredentialsSource;
@property(copy, nonatomic) NSNumber *payloadEAPSIMNumberOfRANDs; // @synthesize payloadEAPSIMNumberOfRANDs=_payloadEAPSIMNumberOfRANDs;
@property(copy, nonatomic) NSNumber *payloadEAPFASTProvisionPACAnonymously; // @synthesize payloadEAPFASTProvisionPACAnonymously=_payloadEAPFASTProvisionPACAnonymously;
@property(copy, nonatomic) NSNumber *payloadEAPFASTProvisionPAC; // @synthesize payloadEAPFASTProvisionPAC=_payloadEAPFASTProvisionPAC;
@property(copy, nonatomic) NSNumber *payloadEAPFASTUsePAC; // @synthesize payloadEAPFASTUsePAC=_payloadEAPFASTUsePAC;
@property(copy, nonatomic) NSString *payloadOuterIdentity; // @synthesize payloadOuterIdentity=_payloadOuterIdentity;
@property(copy, nonatomic) NSString *payloadTLSMaximumVersion; // @synthesize payloadTLSMaximumVersion=_payloadTLSMaximumVersion;
@property(copy, nonatomic) NSString *payloadTLSMinimumVersion; // @synthesize payloadTLSMinimumVersion=_payloadTLSMinimumVersion;
@property(copy, nonatomic) NSString *payloadTTLSInnerAuthentication; // @synthesize payloadTTLSInnerAuthentication=_payloadTTLSInnerAuthentication;
@property(copy, nonatomic) NSNumber *payloadTLSCertificateIsRequired; // @synthesize payloadTLSCertificateIsRequired=_payloadTLSCertificateIsRequired;
@property(copy, nonatomic) NSNumber *payloadTLSAllowTrustExceptions; // @synthesize payloadTLSAllowTrustExceptions=_payloadTLSAllowTrustExceptions;
@property(copy, nonatomic) NSArray *payloadTLSTrustedServerNames; // @synthesize payloadTLSTrustedServerNames=_payloadTLSTrustedServerNames;
@property(copy, nonatomic) NSArray *payloadTLSTrustedCertificates; // @synthesize payloadTLSTrustedCertificates=_payloadTLSTrustedCertificates;
@property(copy, nonatomic) NSArray *payloadPayloadCertificateAnchorUUID; // @synthesize payloadPayloadCertificateAnchorUUID=_payloadPayloadCertificateAnchorUUID;
@property(copy, nonatomic) NSNumber *payloadOneTimePassword; // @synthesize payloadOneTimePassword=_payloadOneTimePassword;
@property(copy, nonatomic) NSString *payloadUserPassword; // @synthesize payloadUserPassword=_payloadUserPassword;
@property(copy, nonatomic) NSString *payloadUserName; // @synthesize payloadUserName=_payloadUserName;
@property(copy, nonatomic) NSArray *payloadAcceptEAPTypes; // @synthesize payloadAcceptEAPTypes=_payloadAcceptEAPTypes;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

