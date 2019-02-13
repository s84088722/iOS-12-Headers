//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSiriSearchResult : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_disambiguationLabels;
    NSMutableArray *_resultDetourInfos;
    _Bool _isChainResultSet;
    CDStruct_5984ff81 _has;
}

+ (Class)resultDetourInfoType;
+ (Class)disambiguationLabelType;
@property(nonatomic) _Bool isChainResultSet; // @synthesize isChainResultSet=_isChainResultSet;
@property(retain, nonatomic) NSMutableArray *resultDetourInfos; // @synthesize resultDetourInfos=_resultDetourInfos;
@property(retain, nonatomic) NSMutableArray *disambiguationLabels; // @synthesize disambiguationLabels=_disambiguationLabels;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIsChainResultSet;
- (id)resultDetourInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultDetourInfosCount;
- (void)addResultDetourInfo:(id)arg1;
- (void)clearResultDetourInfos;
- (id)disambiguationLabelAtIndex:(unsigned long long)arg1;
- (unsigned long long)disambiguationLabelsCount;
- (void)addDisambiguationLabel:(id)arg1;
- (void)clearDisambiguationLabels;

@end

