//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOTransitClusterArtworkSet : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _artworkIndexs;
}

- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setArtworkIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)artworkIndexAtIndex:(unsigned long long)arg1;
- (void)addArtworkIndex:(unsigned int)arg1;
- (void)clearArtworkIndexs;
@property(readonly, nonatomic) unsigned int *artworkIndexs;
@property(readonly, nonatomic) unsigned long long artworkIndexsCount;
- (void)dealloc;

@end

