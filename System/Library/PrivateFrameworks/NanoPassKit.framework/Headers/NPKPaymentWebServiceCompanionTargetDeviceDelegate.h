/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:53:22 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NPKPaymentWebServiceCompanionTargetDeviceDelegate <NSObject>
@required
-(void)setNewAuthRandom:(/*^block*/id)arg1;
-(void)handlePreconditionNotMetWithUniqueIDs:(id)arg1 preconditionDescription:(id)arg2 shouldUnregister:(BOOL)arg3;
-(void)handlePushToken:(id)arg1;
-(void)handleUpdatePaymentPassWithTypeIdentifier:(id)arg1;
-(void)handlePreferredAID:(id)arg1 forPassWithUniqueID:(id)arg2;
-(void)handlePaymentTransactions:(id)arg1 appletStates:(id)arg2 forUniqueIDs:(id)arg3;
-(void)handleAppletState:(id)arg1 forUniqueID:(id)arg2;
-(void)handleRemoveTransactionsWithIdentifiers:(id)arg1;
-(void)handleBalanceUpdate:(id)arg1 forUniqueID:(id)arg2;
-(void)archiveWebServiceContext:(id)arg1;
-(void)archiveWebServiceBackgroundContext:(id)arg1;
-(void)handlePaymentWebServiceContextFromWatch:(id)arg1;
-(void)sendWebServiceContextToWatch;
-(void)showPaymentSetupForAppDisplayName:(id)arg1;
-(void)sendPaymentOptionsDefaultsToWatch;
-(void)handleUpdatedPeerPaymentWebServiceContext:(id)arg1 account:(id)arg2;
-(void)handleDownloadAllPaymentPasses;
-(void)checkCompanionPeerPaymentRegistrationState;

@end

