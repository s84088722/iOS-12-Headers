//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/UINavigationControllerDelegate-Protocol.h>

@class NSNumber, NSString, PKPassView, PKPaymentPass, PKPaymentProvisioningController, PKPaymentWebService, PKVerificationRequestRecord, UIImage;
@protocol PKPaymentSetupViewControllerDelegate, PKPaymentVerificationControllerDelegate;

@interface PKPaymentVerificationController : NSObject <UINavigationControllerDelegate>
{
    NSString *_installedBankAppBundleID;
    NSString *_installedBankAppTitle;
    NSString *_inStoreBankAppTitle;
    NSNumber *_inStoreBankAppStoreID;
    UIImage *_passSnapshot;
    _Bool _bankAppNotFound;
    PKPaymentPass *_pass;
    id <PKPaymentVerificationControllerDelegate> _delegate;
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;
    PKPaymentWebService *_webService;
    long long _context;
    long long _verificationContext;
    PKVerificationRequestRecord *_verificationRecord;
    PKPaymentProvisioningController *_provisioningController;
    PKPassView *_passView;
}

@property(retain, nonatomic) PKPassView *passView; // @synthesize passView=_passView;
@property(retain, nonatomic) PKPaymentProvisioningController *provisioningController; // @synthesize provisioningController=_provisioningController;
@property(readonly, nonatomic) PKVerificationRequestRecord *verificationRecord; // @synthesize verificationRecord=_verificationRecord;
@property(nonatomic) long long verificationContext; // @synthesize verificationContext=_verificationContext;
@property(nonatomic) long long context; // @synthesize context=_context;
@property(readonly, nonatomic) PKPaymentWebService *webService; // @synthesize webService=_webService;
@property(nonatomic) __weak id <PKPaymentSetupViewControllerDelegate> setupDelegate; // @synthesize setupDelegate=_setupDelegate;
@property(nonatomic) __weak id <PKPaymentVerificationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
- (void).cxx_destruct;
- (void)_downloadAndAddPassWithCompletion:(CDUnknownBlockType)arg1;
- (void)submitVerificationCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performVerificationUpdateRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performVerificationOptionsRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)_requestDelegatePresentationOfViewController:(id)arg1;
- (void)_wrapViewControllerAndRequestDelegatePresentationOfView:(id)arg1;
- (void)_presentVerificatonEntryCompletionViewController;
- (void)_presentVerificationViewControllerForStepIdentifier:(id)arg1;
- (void)_completeVerificationUsingOutboundCall;
- (void)_completeVerificationUsingBankApp;
- (void)continueVerification;
- (void)selectOtherVerificationMethod;
- (id)_outboundCallPhoneNumber;
- (void)_launchBankApp;
- (void)_performStoreLookupForBankApp;
- (id)_bankAppStoreIDs;
- (_Bool)_isBankAppInstalled;
- (id)_bankAppName;
@property(readonly) NSString *alternateMethodButtonTitle;
@property(readonly) NSString *continueVerificationButtonTitle;
- (id)_textMessageFormattedPhoneNumber:(id)arg1;
- (id)_voiceCallFormattedPhoneNumber:(id)arg1;
@property(readonly) _Bool shouldDisabledVerificationButton;
@property(readonly) NSString *verificationBodyString;
@property(readonly) NSString *verificationTitleString;
- (unsigned long long)_channelType;
- (void)_didChangePresentation;
- (void)setVerificationRecord:(id)arg1;
- (void)sharedPaymentServiceChanged;
- (id)passSnapshot;
- (void)dealloc;
- (id)initWithPaymentPass:(id)arg1 passView:(id)arg2 webService:(id)arg3 context:(long long)arg4 delegate:(id)arg5 setupDelegate:(id)arg6 verificationContext:(long long)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

