//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapRegion, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBounds : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOMapRegion *_displayMapRegion;
    GEOMapRegion *_mapRegion;
    float _maxZoom;
    float _minZoom;
    struct {
        unsigned int maxZoom:1;
        unsigned int minZoom:1;
    } _has;
}

+ (id)boundsInfoForPlaceData:(id)arg1;
@property(nonatomic) float maxZoom; // @synthesize maxZoom=_maxZoom;
@property(nonatomic) float minZoom; // @synthesize minZoom=_minZoom;
@property(retain, nonatomic) GEOMapRegion *displayMapRegion; // @synthesize displayMapRegion=_displayMapRegion;
@property(retain, nonatomic) GEOMapRegion *mapRegion; // @synthesize mapRegion=_mapRegion;
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
@property(nonatomic) _Bool hasMaxZoom;
@property(nonatomic) _Bool hasMinZoom;
@property(readonly, nonatomic) _Bool hasDisplayMapRegion;
@property(readonly, nonatomic) _Bool hasMapRegion;

@end

