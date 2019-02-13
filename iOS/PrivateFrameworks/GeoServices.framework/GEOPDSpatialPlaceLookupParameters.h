//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSpatialPlaceLookupParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _categoryFilters;
    GEOLatLng *_center;
    int _count;
    int _radius;
    struct {
        unsigned int count:1;
        unsigned int radius:1;
    } _has;
}

@property(retain, nonatomic) GEOLatLng *center; // @synthesize center=_center;
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
- (int)StringAsCategoryFilters:(id)arg1;
- (id)categoryFiltersAsString:(int)arg1;
- (void)setCategoryFilters:(int *)arg1 count:(unsigned long long)arg2;
- (int)categoryFilterAtIndex:(unsigned long long)arg1;
- (void)addCategoryFilter:(int)arg1;
- (void)clearCategoryFilters;
@property(readonly, nonatomic) int *categoryFilters;
@property(readonly, nonatomic) unsigned long long categoryFiltersCount;
@property(nonatomic) _Bool hasCount;
@property(nonatomic) int count; // @synthesize count=_count;
@property(nonatomic) _Bool hasRadius;
@property(nonatomic) int radius; // @synthesize radius=_radius;
@property(readonly, nonatomic) _Bool hasCenter;
- (void)dealloc;

@end

