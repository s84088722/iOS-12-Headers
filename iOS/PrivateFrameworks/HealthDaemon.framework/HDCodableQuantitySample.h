//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDDecoding-Protocol.h>
#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableSample, NSMutableArray, NSString;

@interface HDCodableQuantitySample : PBCodable <HDDecoding, NSCopying>
{
    long long _count;
    double _max;
    double _min;
    double _mostRecent;
    double _mostRecentDate;
    double _valueInCanonicalUnit;
    double _valueInOriginalUnit;
    NSString *_originalUnitString;
    NSMutableArray *_quantitySeriesDatas;
    HDCodableSample *_sample;
    _Bool _final;
    _Bool _frozen;
    struct {
        unsigned int count:1;
        unsigned int max:1;
        unsigned int min:1;
        unsigned int mostRecent:1;
        unsigned int mostRecentDate:1;
        unsigned int valueInCanonicalUnit:1;
        unsigned int valueInOriginalUnit:1;
        unsigned int final:1;
        unsigned int frozen:1;
    } _has;
}

+ (Class)quantitySeriesDataType;
@property(retain, nonatomic) NSMutableArray *quantitySeriesDatas; // @synthesize quantitySeriesDatas=_quantitySeriesDatas;
@property(nonatomic) double mostRecentDate; // @synthesize mostRecentDate=_mostRecentDate;
@property(nonatomic) double mostRecent; // @synthesize mostRecent=_mostRecent;
@property(nonatomic) double max; // @synthesize max=_max;
@property(nonatomic) double min; // @synthesize min=_min;
@property(nonatomic) _Bool final; // @synthesize final=_final;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) _Bool frozen; // @synthesize frozen=_frozen;
@property(retain, nonatomic) NSString *originalUnitString; // @synthesize originalUnitString=_originalUnitString;
@property(nonatomic) double valueInOriginalUnit; // @synthesize valueInOriginalUnit=_valueInOriginalUnit;
@property(nonatomic) double valueInCanonicalUnit; // @synthesize valueInCanonicalUnit=_valueInCanonicalUnit;
@property(retain, nonatomic) HDCodableSample *sample; // @synthesize sample=_sample;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
- (id)quantitySeriesDataAtIndex:(unsigned long long)arg1;
- (unsigned long long)quantitySeriesDatasCount;
- (void)addQuantitySeriesData:(id)arg1;
- (void)clearQuantitySeriesDatas;
@property(nonatomic) _Bool hasMostRecentDate;
@property(nonatomic) _Bool hasMostRecent;
@property(nonatomic) _Bool hasMax;
@property(nonatomic) _Bool hasMin;
@property(nonatomic) _Bool hasFinal;
@property(nonatomic) _Bool hasCount;
@property(nonatomic) _Bool hasFrozen;
@property(readonly, nonatomic) _Bool hasOriginalUnitString;
@property(nonatomic) _Bool hasValueInOriginalUnit;
@property(nonatomic) _Bool hasValueInCanonicalUnit;
@property(readonly, nonatomic) _Bool hasSample;
- (_Bool)_applyToDiscreteQuantitySeriesSample:(id)arg1;
- (_Bool)isSeries;
- (_Bool)applyToObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

