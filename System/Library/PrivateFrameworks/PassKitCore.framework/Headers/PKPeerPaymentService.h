//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PKPeerPaymentAccount, PKPeerPaymentWebServiceContext, PKXPCService;
@protocol OS_dispatch_queue;

@interface PKPeerPaymentService : NSObject
{
    PKXPCService *_remoteService;
    PKPeerPaymentAccount *_account;
    NSObject<OS_dispatch_queue> *_accountQueue;
    long long _accountChangedNotificationSuspensionCount;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_synchronousRemoteObjectProxyForSelector:(SEL)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (void)_accountChanged:(id)arg1;
- (void)_sharedPeerPaymentWebServiceContextWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetApplePayManateeViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)checkTLKsMissingWithCompletion:(CDUnknownBlockType)arg1;
- (void)cloudStoreStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)initalizeCloudStoreIfNecessaryWithHandler:(CDUnknownBlockType)arg1;
- (void)unregisterDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)registerDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)downloadPassIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (id)lastUsedAlternateFundingSourcePassUniqueIdentifier;
- (void)setLastUsedAlternateFundingSourcePassUniqueIdentifier:(id)arg1;
- (void)balanceForPass:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateMockAccountBalanceByAddingAmount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateMessageReceivedDate:(id)arg1 forTransactionWithIdentifier:(id)arg2;
- (void)receivedPeerPaymentMessageData:(id)arg1;
- (void)noteAccountDeleted;
- (void)presentPeerPaymentTermsAndConditionsWithAccount:(id)arg1 orientation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentRegistrationFlowWithAccount:(id)arg1 orientation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentRegistrationFlowWithAccount:(id)arg1 amount:(id)arg2 state:(unsigned long long)arg3 senderAddress:(id)arg4 orientation:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)presentIdentityVerificationFlowWithResponse:(id)arg1 orientation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)registrationStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)resumeAccountChangedNotifications;
- (void)suspendAccountChangedNotifications;
- (void)deleteAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)accountWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) PKPeerPaymentAccount *account;
- (void)sharedPeerPaymentWebServiceContextWithCompletion:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) PKPeerPaymentWebServiceContext *sharedPeerPaymentWebServiceContext;
- (void)dealloc;
- (id)init;
- (void)initalizeCloudStoreIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;

@end
