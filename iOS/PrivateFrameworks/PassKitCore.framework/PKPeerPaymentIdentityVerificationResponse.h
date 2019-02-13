//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class NSArray, NSString, PKPeerPaymentAccount;

@interface PKPeerPaymentIdentityVerificationResponse : PKPeerPaymentWebServiceResponse
{
    _Bool _complete;
    _Bool _manuallyTriggered;
    PKPeerPaymentAccount *_account;
    NSString *_contextLocalizedTitle;
    NSString *_contextLocalizedDescription;
    NSString *_localizedTitle;
    NSString *_localizedDescription;
    NSArray *_requiredFieldsByPage;
    NSArray *_acceptableDocuments;
    NSArray *_encryptionCertificates;
    NSString *_encryptionVersion;
}

@property(nonatomic) _Bool manuallyTriggered; // @synthesize manuallyTriggered=_manuallyTriggered;
@property(readonly, copy, nonatomic) NSString *encryptionVersion; // @synthesize encryptionVersion=_encryptionVersion;
@property(readonly, copy, nonatomic) NSArray *encryptionCertificates; // @synthesize encryptionCertificates=_encryptionCertificates;
@property(readonly, nonatomic) NSArray *acceptableDocuments; // @synthesize acceptableDocuments=_acceptableDocuments;
@property(readonly, copy, nonatomic) NSArray *requiredFieldsByPage; // @synthesize requiredFieldsByPage=_requiredFieldsByPage;
@property(readonly, copy, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(readonly, copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(readonly, copy, nonatomic) NSString *contextLocalizedDescription; // @synthesize contextLocalizedDescription=_contextLocalizedDescription;
@property(readonly, copy, nonatomic) NSString *contextLocalizedTitle; // @synthesize contextLocalizedTitle=_contextLocalizedTitle;
@property(readonly, nonatomic) PKPeerPaymentAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) _Bool complete; // @synthesize complete=_complete;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end

