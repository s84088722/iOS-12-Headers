//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBPaymentAmountValue-Protocol.h>

@class NSString, _INPBCurrencyAmountValue;

@interface _INPBPaymentAmountValue : PBCodable <_INPBPaymentAmountValue, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int amountType:1;
    } _has;
    int _amountType;
    _INPBCurrencyAmountValue *_value;
}

@property(retain, nonatomic) _INPBCurrencyAmountValue *value; // @synthesize value=_value;
@property(nonatomic) int amountType; // @synthesize amountType=_amountType;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasValue;
- (int)StringAsAmountType:(id)arg1;
- (id)amountTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasAmountType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

