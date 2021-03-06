//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOHours : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _days;
    NSMutableArray *_timeRanges;
}

+ (Class)timeRangeType;
@property(retain, nonatomic) NSMutableArray *timeRanges; // @synthesize timeRanges=_timeRanges;
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
- (id)timeRangeAtIndex:(unsigned long long)arg1;
- (unsigned long long)timeRangesCount;
- (void)addTimeRange:(id)arg1;
- (void)clearTimeRanges;
- (int)StringAsDays:(id)arg1;
- (id)daysAsString:(int)arg1;
- (void)setDays:(int *)arg1 count:(unsigned long long)arg2;
- (int)dayAtIndex:(unsigned long long)arg1;
- (void)addDay:(int)arg1;
- (void)clearDays;
@property(readonly, nonatomic) int *days;
@property(readonly, nonatomic) unsigned long long daysCount;
- (void)dealloc;
- (id)initWithPlaceDataHours:(id)arg1;

@end

