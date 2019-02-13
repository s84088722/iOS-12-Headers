//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MusicLibrary/NSCopying-Protocol.h>

@class MIPAlbum, MIPArtist, MIPGenre, MIPMediaItem, MIPMultiverseIdentifier, MIPPlaylist, MIPSeries;

@interface MSPMediaSyncOperation : PBCodable <NSCopying>
{
    MIPAlbum *_album;
    MIPArtist *_artist;
    MIPGenre *_genre;
    MIPMediaItem *_mediaItem;
    MIPMultiverseIdentifier *_multiverseId;
    int _operationType;
    MIPPlaylist *_playlist;
    MIPSeries *_series;
    struct {
        unsigned int operationType:1;
    } _has;
}

@property(retain, nonatomic) MIPPlaylist *playlist; // @synthesize playlist=_playlist;
@property(retain, nonatomic) MIPMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(retain, nonatomic) MIPSeries *series; // @synthesize series=_series;
@property(retain, nonatomic) MIPGenre *genre; // @synthesize genre=_genre;
@property(retain, nonatomic) MIPAlbum *album; // @synthesize album=_album;
@property(retain, nonatomic) MIPArtist *artist; // @synthesize artist=_artist;
@property(retain, nonatomic) MIPMultiverseIdentifier *multiverseId; // @synthesize multiverseId=_multiverseId;
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
@property(readonly, nonatomic) _Bool hasPlaylist;
@property(readonly, nonatomic) _Bool hasMediaItem;
@property(readonly, nonatomic) _Bool hasSeries;
@property(readonly, nonatomic) _Bool hasGenre;
@property(readonly, nonatomic) _Bool hasAlbum;
@property(readonly, nonatomic) _Bool hasArtist;
@property(readonly, nonatomic) _Bool hasMultiverseId;
- (int)StringAsOperationType:(id)arg1;
- (id)operationTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasOperationType;
@property(nonatomic) int operationType; // @synthesize operationType=_operationType;

@end

