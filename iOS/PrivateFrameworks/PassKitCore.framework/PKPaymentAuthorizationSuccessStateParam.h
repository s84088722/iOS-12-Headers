//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class PKPeerPaymentTransactionMetadata;

@interface PKPaymentAuthorizationSuccessStateParam : PKPaymentAuthorizationStateParam
{
    PKPeerPaymentTransactionMetadata *_peerPaymentTransactionMetadata;
}

+ (id)paramWithPeerPaymentTransactionMetadata:(id)arg1;
@property(retain, nonatomic) PKPeerPaymentTransactionMetadata *peerPaymentTransactionMetadata; // @synthesize peerPaymentTransactionMetadata=_peerPaymentTransactionMetadata;
- (void).cxx_destruct;
- (id)description;

@end

