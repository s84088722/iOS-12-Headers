//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOTileSetVersion : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    struct GEOTileSetRegion *_availableTiles;
    unsigned long long _availableTilesCount;
    unsigned long long _availableTilesSpace;
    struct GEOGenericTile *_genericTiles;
    unsigned long long _genericTilesCount;
    unsigned long long _genericTilesSpace;
    unsigned int _identifier;
    unsigned int _supportedLanguagesVersion;
    unsigned int _timeToLiveSeconds;
    struct {
        unsigned int supportedLanguagesVersion:1;
        unsigned int timeToLiveSeconds:1;
    } _has;
}

@property(nonatomic) unsigned int supportedLanguagesVersion; // @synthesize supportedLanguagesVersion=_supportedLanguagesVersion;
@property(nonatomic) unsigned int timeToLiveSeconds; // @synthesize timeToLiveSeconds=_timeToLiveSeconds;
@property(nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
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
@property(nonatomic) _Bool hasSupportedLanguagesVersion;
- (void)setGenericTiles:(struct GEOGenericTile *)arg1 count:(unsigned long long)arg2;
- (struct GEOGenericTile)genericTileAtIndex:(unsigned long long)arg1;
- (void)addGenericTile:(struct GEOGenericTile)arg1;
- (void)clearGenericTiles;
@property(readonly, nonatomic) struct GEOGenericTile *genericTiles;
@property(readonly, nonatomic) unsigned long long genericTilesCount;
@property(nonatomic) _Bool hasTimeToLiveSeconds;
- (void)setAvailableTiles:(struct GEOTileSetRegion *)arg1 count:(unsigned long long)arg2;
- (struct GEOTileSetRegion)availableTilesAtIndex:(unsigned long long)arg1;
- (void)addAvailableTiles:(struct GEOTileSetRegion)arg1;
- (void)clearAvailableTiles;
@property(readonly, nonatomic) struct GEOTileSetRegion *availableTiles;
@property(readonly, nonatomic) unsigned long long availableTilesCount;
- (void)dealloc;

@end

