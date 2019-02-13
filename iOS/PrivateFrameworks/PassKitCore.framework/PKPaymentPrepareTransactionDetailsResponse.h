//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSData, NSDecimalNumber, NSString;

@interface PKPaymentPrepareTransactionDetailsResponse : PKPaymentWebServiceResponse
{
    NSDecimalNumber *_amount;
    NSString *_secureElementIdentifier;
    NSData *_instructions;
    NSData *_signature;
}

@property(readonly, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(readonly, nonatomic) NSData *instructions; // @synthesize instructions=_instructions;
@property(readonly, nonatomic) NSString *secureElementIdentifier; // @synthesize secureElementIdentifier=_secureElementIdentifier;
@property(readonly, nonatomic) NSDecimalNumber *amount; // @synthesize amount=_amount;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end

