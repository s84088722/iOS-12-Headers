//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBPriceRangeValue-Protocol.h>

@class NSString, _INPBDecimalNumberValue, _INPBValueMetadata;

@interface _INPBPriceRangeValue : PBCodable <_INPBPriceRangeValue, NSSecureCoding, NSCopying>
{
    struct _has;
    NSString *_currencyCode;
    _INPBDecimalNumberValue *_maximumPrice;
    _INPBDecimalNumberValue *_minimumPrice;
    _INPBValueMetadata *_valueMetadata;
}

@property(retain, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
@property(retain, nonatomic) _INPBDecimalNumberValue *minimumPrice; // @synthesize minimumPrice=_minimumPrice;
@property(retain, nonatomic) _INPBDecimalNumberValue *maximumPrice; // @synthesize maximumPrice=_maximumPrice;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasValueMetadata;
@property(readonly, nonatomic) _Bool hasMinimumPrice;
@property(readonly, nonatomic) _Bool hasMaximumPrice;
@property(readonly, nonatomic) _Bool hasCurrencyCode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

