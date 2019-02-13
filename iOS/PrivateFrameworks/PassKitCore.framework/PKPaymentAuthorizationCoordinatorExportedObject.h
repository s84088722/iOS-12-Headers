//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKPaymentAuthorizationHostProtocol-Protocol.h>

@class NSString, PKPaymentAuthorizationCoordinator;
@protocol OS_dispatch_queue, PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKPaymentAuthorizationServiceProtocol;

@interface PKPaymentAuthorizationCoordinatorExportedObject : NSObject <PKPaymentAuthorizationHostProtocol>
{
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id <PKPaymentAuthorizationCoordinatorDelegate> _delegate;
    id <PKPaymentAuthorizationCoordinatorPrivateDelegate> _privateDelegate;
    PKPaymentAuthorizationCoordinator *_controller;
    id <PKPaymentAuthorizationServiceProtocol> _serviceProxy;
}

@property(retain, nonatomic) id <PKPaymentAuthorizationServiceProtocol> serviceProxy; // @synthesize serviceProxy=_serviceProxy;
@property(nonatomic) PKPaymentAuthorizationCoordinator *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
@property(nonatomic) __weak id <PKPaymentAuthorizationCoordinatorPrivateDelegate> privateDelegate; // @synthesize privateDelegate=_privateDelegate;
@property(nonatomic) __weak id <PKPaymentAuthorizationCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)authorizationDidSelectPaymentMethod:(id)arg1;
- (void)authorizationDidSelectShippingAddress:(id)arg1;
- (void)authorizationDidSelectShippingMethod:(id)arg1;
- (void)authorizationDidAuthorizePeerPaymentQuote:(id)arg1;
- (void)authorizationDidAuthorizePurchase:(id)arg1;
- (void)authorizationDidAuthorizePayment:(id)arg1;
- (void)authorizationDidFinishWithError:(id)arg1;
- (void)authorizationDidRequestMerchantSession;
- (void)authorizationWillStart;
- (void)didEncounterAuthorizationEvent:(unsigned long long)arg1;
- (void)authorizationDidPresent;
- (void)dealloc;
- (id)initWithController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

