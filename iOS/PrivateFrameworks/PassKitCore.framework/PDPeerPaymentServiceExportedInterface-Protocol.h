//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PDXPCServiceExportedInterface-Protocol.h>

@class NSData, NSDate, NSDecimalNumber, NSNumber, NSString, NSURL, PKCurrencyAmount, PKPaymentPass, PKPeerPaymentAccount, PKPeerPaymentWebServiceContext;

@protocol PDPeerPaymentServiceExportedInterface <PDXPCServiceExportedInterface>
- (void)resetApplePayManateeViewWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)checkTLKsMissingWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)initalizeCloudStoreIfNecessaryWithHandler:(void (^)(_Bool, NSError *))arg1;
- (void)cloudStoreStatusWithCompletion:(void (^)(CKAccountInfo *, _Bool, NSError *))arg1;
- (void)updateMockAccountBalanceByAddingAmount:(NSDecimalNumber *)arg1 completion:(void (^)(PKPeerPaymentAccount *))arg2;
- (void)downloadPassIfNecessaryWithCompletion:(void (^)(_Bool))arg1;
- (void)lastUsedAlternateFundingSourcePassUniqueIdentifier:(void (^)(NSString *))arg1;
- (void)setLastUsedAlternateFundingSourcePassUniqueIdentifier:(NSString *)arg1 handler:(void (^)(void))arg2;
- (void)balanceForPass:(PKPaymentPass *)arg1 completion:(void (^)(PKCurrencyAmount *))arg2;
- (void)updateMessageReceivedDate:(NSDate *)arg1 forTransactionWithIdentifier:(NSString *)arg2 handler:(void (^)(void))arg3;
- (void)receivedPeerPaymentMessageData:(NSData *)arg1 handler:(void (^)(void))arg2;
- (void)noteAccountDeletedWithCompletion:(void (^)(void))arg1;
- (void)presentPeerPaymentTermsAndConditionsWithTermsURL:(NSURL *)arg1 termsIdentifier:(NSString *)arg2 orientation:(NSNumber *)arg3 completion:(void (^)(_Bool))arg4;
- (void)presentRegistrationFlowWithAccount:(PKPeerPaymentAccount *)arg1 amount:(PKCurrencyAmount *)arg2 state:(unsigned long long)arg3 senderAddress:(NSString *)arg4 orientation:(NSNumber *)arg5 completion:(void (^)(_Bool))arg6;
- (void)presentIdentityVerificationFlowWithResponseData:(NSData *)arg1 orientation:(NSNumber *)arg2 completion:(void (^)(_Bool))arg3;
- (void)registrationStatusWithCompletion:(void (^)(unsigned long long))arg1;
- (void)unregisterDeviceWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)registerDeviceWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)deleteAccountWithCompletion:(void (^)(void))arg1;
- (void)updateAccountWithCompletion:(void (^)(PKPeerPaymentAccount *))arg1;
- (void)accountWithCompletion:(void (^)(PKPeerPaymentAccount *))arg1;
- (void)setSharedPeerPaymentWebServiceContext:(PKPeerPaymentWebServiceContext *)arg1 handler:(void (^)(void))arg2;
- (void)sharedPeerPaymentWebServiceContextWithHandler:(void (^)(PKPeerPaymentWebServiceContext *))arg1;

@optional
- (void)initalizeCloudStoreIfNecessaryWithCompletion:(void (^)(_Bool))arg1;
@end

