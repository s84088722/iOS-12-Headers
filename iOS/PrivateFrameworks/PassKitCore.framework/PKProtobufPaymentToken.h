//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSData, NSString, PKProtobufPaymentMethod;

@interface PKProtobufPaymentToken : PBCodable <NSCopying>
{
    NSString *_instrumentName;
    NSString *_network;
    NSData *_paymentData;
    PKProtobufPaymentMethod *_paymentMethod;
    NSString *_redeemURL;
    NSString *_retryNonce;
    NSString *_transactionIdentifier;
}

@property(retain, nonatomic) NSString *retryNonce; // @synthesize retryNonce=_retryNonce;
@property(retain, nonatomic) NSString *redeemURL; // @synthesize redeemURL=_redeemURL;
@property(retain, nonatomic) NSData *paymentData; // @synthesize paymentData=_paymentData;
@property(retain, nonatomic) NSString *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
@property(retain, nonatomic) NSString *network; // @synthesize network=_network;
@property(retain, nonatomic) NSString *instrumentName; // @synthesize instrumentName=_instrumentName;
@property(retain, nonatomic) PKProtobufPaymentMethod *paymentMethod; // @synthesize paymentMethod=_paymentMethod;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasRetryNonce;
@property(readonly, nonatomic) _Bool hasRedeemURL;
@property(readonly, nonatomic) _Bool hasPaymentData;
@property(readonly, nonatomic) _Bool hasTransactionIdentifier;
@property(readonly, nonatomic) _Bool hasNetwork;
@property(readonly, nonatomic) _Bool hasInstrumentName;
@property(readonly, nonatomic) _Bool hasPaymentMethod;

@end

