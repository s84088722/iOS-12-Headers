//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import "ISDialogOperationDelegate-Protocol.h"

@class ISBiometricStore, ISDialogButton, NSArray, NSDictionary, NSString, SSAuthenticationContext, SSRedeemCodesResponse;

@interface RedeemCodesOperation : ISOperation <ISDialogOperationDelegate>
{
    SSAuthenticationContext *_authenticationContext;
    ISBiometricStore *_biometricStore;
    _Bool _cameraRecognized;
    ISDialogButton *_dialogButton;
    _Bool _headless;
    NSDictionary *_installedExternalVersionByiTunesIdentifier;
    NSArray *_redeemCodes;
    NSDictionary *_redeemMetadataByCode;
    SSRedeemCodesResponse *_redeemResponse;
    NSString *_userAgent;
    NSString *_logCorrelationKey;
}

@property(retain, nonatomic) NSString *logCorrelationKey; // @synthesize logCorrelationKey=_logCorrelationKey;
@property _Bool cameraRecognized; // @synthesize cameraRecognized=_cameraRecognized;
@property _Bool headless; // @synthesize headless=_headless;
- (void).cxx_destruct;
- (id)_installedExternalVersionForRedeemCodeMetadata:(id)arg1;
- (_Bool)_fetchRedeemCodeMetadataWithError:(id *)arg1;
- (_Bool)_didUserCancelWithError:(id)arg1;
- (_Bool)_canPerformExtendedBiometricActions;
- (id)_newURLRequestPropertiesForServiceActionButton:(id)arg1;
- (id)_newURLRequestPropertiesForCode:(id)arg1;
- (_Bool)_processDictionary:(id)arg1 dialog:(id *)arg2 error:(id *)arg3;
- (void)_runNonHeadless;
- (void)_runHeadless;
- (id)_authenticateAppleAccount:(id)arg1 withTitle:(id)arg2 error:(id *)arg3;
- (void)operation:(id)arg1 selectedButton:(id)arg2;
- (void)run;
@property(copy) NSString *userAgent;
@property(copy) SSAuthenticationContext *authenticationContext;
@property(readonly) SSRedeemCodesResponse *redeemResponse;
@property(readonly) NSArray *redeemCodes;
- (id)initWithRedeemCodes:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

