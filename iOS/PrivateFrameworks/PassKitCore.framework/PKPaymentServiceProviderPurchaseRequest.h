//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentServiceProviderPurchaseRequest : PKPaymentWebServiceRequest
{
    NSString *_purchaseIdentifier;
}

@property(copy, nonatomic) NSString *purchaseIdentifier; // @synthesize purchaseIdentifier=_purchaseIdentifier;
- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;
- (id)initWithPurchaseIdentifier:(id)arg1;

@end

