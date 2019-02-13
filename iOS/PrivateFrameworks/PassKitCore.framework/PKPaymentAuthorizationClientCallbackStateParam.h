//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class CNContact, PKAuthorizedPeerPaymentQuote, PKPayment, PKPaymentMethod, PKServiceProviderPurchase, PKShippingMethod;

@interface PKPaymentAuthorizationClientCallbackStateParam : PKPaymentAuthorizationStateParam
{
    long long _kind;
    id _object;
}

+ (id)paramWithCallbackKind:(long long)arg1 object:(id)arg2;
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(nonatomic) long long kind; // @synthesize kind=_kind;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) PKAuthorizedPeerPaymentQuote *authorizedPeerPaymentQuote;
@property(readonly, nonatomic) PKServiceProviderPurchase *purchase;
@property(readonly, nonatomic) PKPayment *payment;
@property(readonly, nonatomic) PKShippingMethod *shippingMethod;
@property(readonly, nonatomic) PKPaymentMethod *paymentMethod;
@property(readonly, nonatomic) CNContact *shippingContact;

@end
