//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccountUI/VSApplicationControllerDelegate-Protocol.h>

@class NSMutableArray, NSOperationQueue, NSString, VSApplicationController, VSApplicationControllerRequestFactory, VSAuditToken, VSIdentityProvider, VSOptional, VSPreferences, VSViewModel;
@protocol OS_dispatch_source, VSIdentityProviderRequestManagerDelegate;

@interface VSIdentityProviderRequestManager : NSObject <VSApplicationControllerDelegate>
{
    _Bool _canIssuePrivacyVouchers;
    _Bool _didCreateAccount;
    _Bool _allowsApplicationControllerTimer;
    VSIdentityProvider *_identityProvider;
    id <VSIdentityProviderRequestManagerDelegate> _delegate;
    VSAuditToken *_auditToken;
    VSViewModel *_viewModel;
    NSOperationQueue *_privateQueue;
    NSMutableArray *_requestContexts;
    VSApplicationController *_applicationController;
    VSOptional *_currentApplicationControllerRequest;
    VSOptional *_account;
    VSOptional *_storage;
    VSApplicationControllerRequestFactory *_requestFactory;
    VSPreferences *_preferences;
    NSObject<OS_dispatch_source> *_applicationControllerTimerSource;
    double _applicationControllerTimerLeeway;
    double _requestCompletionDelayAfterShowingUserInterface;
    double _applicationControllerTimerDelay;
}

@property(nonatomic) double applicationControllerTimerDelay; // @synthesize applicationControllerTimerDelay=_applicationControllerTimerDelay;
@property(nonatomic) double requestCompletionDelayAfterShowingUserInterface; // @synthesize requestCompletionDelayAfterShowingUserInterface=_requestCompletionDelayAfterShowingUserInterface;
@property(nonatomic) double applicationControllerTimerLeeway; // @synthesize applicationControllerTimerLeeway=_applicationControllerTimerLeeway;
@property(nonatomic) _Bool allowsApplicationControllerTimer; // @synthesize allowsApplicationControllerTimer=_allowsApplicationControllerTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *applicationControllerTimerSource; // @synthesize applicationControllerTimerSource=_applicationControllerTimerSource;
@property(retain, nonatomic) VSPreferences *preferences; // @synthesize preferences=_preferences;
@property(nonatomic) _Bool didCreateAccount; // @synthesize didCreateAccount=_didCreateAccount;
@property(retain, nonatomic) VSApplicationControllerRequestFactory *requestFactory; // @synthesize requestFactory=_requestFactory;
@property(retain, nonatomic) VSOptional *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) VSOptional *account; // @synthesize account=_account;
@property(retain, nonatomic) VSOptional *currentApplicationControllerRequest; // @synthesize currentApplicationControllerRequest=_currentApplicationControllerRequest;
@property(retain, nonatomic) VSApplicationController *applicationController; // @synthesize applicationController=_applicationController;
@property(retain, nonatomic) NSMutableArray *requestContexts; // @synthesize requestContexts=_requestContexts;
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(retain, nonatomic) VSViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) _Bool canIssuePrivacyVouchers; // @synthesize canIssuePrivacyVouchers=_canIssuePrivacyVouchers;
@property(copy, nonatomic) VSAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(nonatomic) __weak id <VSIdentityProviderRequestManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) VSIdentityProvider *identityProvider; // @synthesize identityProvider=_identityProvider;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)applicationController:(id)arg1 request:(id)arg2 didCompleteWithResponse:(id)arg3;
- (void)applicationController:(id)arg1 request:(id)arg2 didFailWithError:(id)arg3;
- (void)applicationController:(id)arg1 didReceiveViewModel:(id)arg2;
- (void)applicationController:(id)arg1 didReceiveViewModelError:(id)arg2;
- (void)applicationController:(id)arg1 startDidFailWithError:(id)arg2;
- (void)applicationControllerDidStart:(id)arg1;
- (id)_accountChannelsWithChannelIDs:(id)arg1;
- (void)_resetVerificationStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_accountMetadataWithAuthenticationScheme:(id)arg1 responseStatusCode:(id)arg2 responseString:(id)arg3 accountMetadataRequest:(id)arg4 verificationData:(id)arg5;
- (_Bool)_canShowAuthenticationUI;
- (double)_requestCompletionDelay;
- (_Bool)_requestRequiresApplicationController:(id)arg1;
- (_Bool)_requestRequiresApplicationControllerIgnoringAuthentication:(id)arg1;
- (void)_notifyDidAuthenticateAccount:(id)arg1;
- (void)_stopObservingViewModel:(id)arg1;
- (void)_startObservingViewModel:(id)arg1;
- (void)_showAuthenticationUI;
- (void)_submitApplicationControllerRequest:(id)arg1;
- (void)_stopApplicationController;
- (id)_applicationControllerRequestWithIdentityProviderRequest:(id)arg1;
- (void)_completeCurrentRequestWithResult:(id)arg1;
- (void)_completeCurrentRequestWithError:(id)arg1;
- (void)_completeCurrentRequestWithApplicationControllerResponse:(id)arg1 verificationData:(id)arg2;
- (void)_completeCurrentRequestWithApplicationControllerResponse:(id)arg1;
- (void)_completeAuthenticationRequestWithApplicationControllerResponse:(id)arg1;
- (void)_completeCachedAccountMetadataRequest;
- (void)_updateAccountWithAccountAuthentication:(id)arg1;
- (void)_completeDeletingAccountWithError:(id)arg1;
- (void)_startDeletingAccount;
- (void)_handleApplicationControllerError:(id)arg1 forRequest:(id)arg2;
- (_Bool)_handleAccountMetadataRequest:(id)arg1 didCompleteWithResponse:(id)arg2;
- (_Bool)_handleLogoutRequestDidComplete:(id)arg1;
- (_Bool)_handleSilentAuthenticationRequest:(id)arg1 didCompleteWithResponse:(id)arg2;
- (_Bool)_handleAuthenticationRequest:(id)arg1 didCompleteWithResponse:(id)arg2;
- (void)_handleApplicationControllerRequest:(id)arg1 didCompleteWithResponse:(id)arg2;
- (void)_stopApplicationControllerTimer;
- (void)_startApplicationControllerTimer;
- (id)_currentRequest;
- (id)_currentRequestContext;
- (void)_processRequestContext:(id)arg1;
- (void)enqueueRequest:(id)arg1;
- (void)dealloc;
- (id)initWithIdentityProvider:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

