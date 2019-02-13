//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoPassKit/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSSet, NSString, PKPaymentWebServiceBackgroundContext, PKPaymentWebServiceContext, PKPeerPaymentAccount, PKPeerPaymentWebServiceContext, PKTransitAppletState;

@protocol NPKPaymentWebServiceCompanionTargetDeviceDelegate <NSObject>
- (void)checkCompanionPeerPaymentRegistrationState;
- (void)handleDownloadAllPaymentPasses;
- (void)handleUpdatedPeerPaymentWebServiceContext:(PKPeerPaymentWebServiceContext *)arg1 account:(PKPeerPaymentAccount *)arg2;
- (void)sendPaymentOptionsDefaultsToWatch;
- (void)showPaymentSetupForAppDisplayName:(NSString *)arg1;
- (void)sendWebServiceContextToWatch;
- (void)handlePaymentWebServiceContextFromWatch:(PKPaymentWebServiceContext *)arg1;
- (void)setNewAuthRandom:(void (^)(_Bool))arg1;
- (void)archiveWebServiceBackgroundContext:(PKPaymentWebServiceBackgroundContext *)arg1;
- (void)archiveWebServiceContext:(PKPaymentWebServiceContext *)arg1;
- (void)handleBalanceUpdate:(NSSet *)arg1 forUniqueID:(NSString *)arg2;
- (void)handleRemoveTransactionsWithIdentifiers:(NSArray *)arg1;
- (void)handleAppletState:(PKTransitAppletState *)arg1 forUniqueID:(NSString *)arg2;
- (void)handlePaymentTransactions:(NSArray *)arg1 appletStates:(NSDictionary *)arg2 forUniqueIDs:(NSArray *)arg3;
- (void)handlePreferredAID:(NSString *)arg1 forPassWithUniqueID:(NSString *)arg2;
- (void)handleUpdatePaymentPassWithTypeIdentifier:(NSString *)arg1;
- (void)handlePushToken:(NSString *)arg1;
- (void)handlePreconditionNotMetWithUniqueIDs:(NSArray *)arg1 preconditionDescription:(NSString *)arg2 shouldUnregister:(_Bool)arg3;
@end

