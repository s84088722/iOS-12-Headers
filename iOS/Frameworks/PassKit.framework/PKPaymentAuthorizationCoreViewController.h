//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PassKit/PKPaymentAuthorizationServiceProtocol-Protocol.h>

@class NSString, PKPaymentAuthorizationDataModel, PKPaymentAuthorizationLayout, PKPaymentAuthorizationStateMachine;
@protocol PKPaymentAuthorizationHostProtocol;

@interface PKPaymentAuthorizationCoreViewController : UIViewController <PKPaymentAuthorizationServiceProtocol>
{
    long long _paymentAuthorizationStyle;
    PKPaymentAuthorizationLayout *_paymentAuthorizationLayout;
    PKPaymentAuthorizationStateMachine *_stateMachine;
    PKPaymentAuthorizationDataModel *_dataModel;
    id <PKPaymentAuthorizationHostProtocol> _delegate;
}

@property(nonatomic) __weak id <PKPaymentAuthorizationHostProtocol> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PKPaymentAuthorizationDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property(readonly, nonatomic) PKPaymentAuthorizationStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(readonly, nonatomic) PKPaymentAuthorizationLayout *paymentAuthorizationLayout; // @synthesize paymentAuthorizationLayout=_paymentAuthorizationLayout;
@property(readonly, nonatomic) long long paymentAuthorizationStyle; // @synthesize paymentAuthorizationStyle=_paymentAuthorizationStyle;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

