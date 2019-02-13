//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPaymentCredential.h>

@class NSArray, NSString, PKCurrencyAmount, PKPaymentSetupProduct;

@interface PKPaymentDigitalIssuanceProductCredential : PKPaymentCredential
{
    NSString *_productIdentifier;
    NSString *_provisioningToken;
    PKCurrencyAmount *_balance;
    PKPaymentSetupProduct *_product;
}

@property(retain, nonatomic) PKPaymentSetupProduct *product; // @synthesize product=_product;
@property(readonly, copy, nonatomic) PKCurrencyAmount *balance; // @synthesize balance=_balance;
@property(copy, nonatomic) NSString *provisioningToken; // @synthesize provisioningToken=_provisioningToken;
@property(copy, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *metadata;
- (void)setRequirementsResponse:(id)arg1;
- (id)initWithPaymentSetupProduct:(id)arg1 provisioningToken:(id)arg2 balance:(id)arg3;

@end

