//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOSurchargeOption-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class NSArray, NSMutableArray;
@protocol GEOSurchargeType;

__attribute__((visibility("hidden")))
@interface GEORequestOptions : PBCodable <GEOSurchargeOption, NSCopying>
{
    int _optionUsed;
    NSMutableArray *_requestOptions;
    struct {
        unsigned int optionUsed:1;
    } _has;
}

+ (Class)requestOptionType;
@property(nonatomic) int optionUsed; // @synthesize optionUsed=_optionUsed;
@property(retain, nonatomic) NSMutableArray *requestOptions; // @synthesize requestOptions=_requestOptions;
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
@property(nonatomic) _Bool hasOptionUsed;
- (id)requestOptionAtIndex:(unsigned long long)arg1;
- (unsigned long long)requestOptionsCount;
- (void)addRequestOption:(id)arg1;
- (void)clearRequestOptions;
@property(readonly, nonatomic) id <GEOSurchargeType> selectedSurchargeType;
@property(readonly, nonatomic) unsigned long long selectedSurchargeTypeIndex;
@property(readonly, nonatomic) NSArray *surchargeTypes;

@end

