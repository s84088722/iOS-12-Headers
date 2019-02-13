//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKit/PKExtensionBaseContext.h>

#import <PassKit/PKExtensionHostContextProtocol-Protocol.h>

@class NSObject, NSString;
@protocol OS_dispatch_group, PKPaymentAuthorizationHostProtocol;

@interface PKExtensionHostContext : PKExtensionBaseContext <PKExtensionHostContextProtocol>
{
    id <PKPaymentAuthorizationHostProtocol> _delegate;
    NSObject<OS_dispatch_group> *_delayCallbacksGroup;
}

@property(retain, nonatomic) NSObject<OS_dispatch_group> *delayCallbacksGroup; // @synthesize delayCallbacksGroup=_delayCallbacksGroup;
@property(nonatomic) __weak id <PKPaymentAuthorizationHostProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didEncounterAuthorizationEvent:(unsigned long long)arg1;
- (void)authorizationDidPresent;
- (void)authorizationDidSelectPaymentMethod:(id)arg1;
- (void)authorizationDidSelectShippingAddress:(id)arg1;
- (void)authorizationDidSelectShippingMethod:(id)arg1;
- (void)authorizationDidAuthorizePeerPaymentQuote:(id)arg1;
- (void)authorizationDidAuthorizePurchase:(id)arg1;
- (void)authorizationDidAuthorizePayment:(id)arg1;
- (void)authorizationDidRequestMerchantSession;
- (void)authorizationDidFinishWithError:(id)arg1;
- (void)authorizationWillStart;
- (void)endDelayingCallbacks;
- (void)beginDelayingCallbacks;
- (id)vendorContextWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)vendorContext;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

