//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@interface AWDCoreRoutineMapItem : PBCodable <NSCopying>
{
    CDStruct_95bda58d _mapItemSources;
    _Bool _hasMuid;
    struct {
        unsigned int hasMuid:1;
    } _has;
}

@property(nonatomic) _Bool hasMuid; // @synthesize hasMuid=_hasMuid;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasHasMuid;
- (int)StringAsMapItemSources:(id)arg1;
- (id)mapItemSourcesAsString:(int)arg1;
- (void)setMapItemSources:(int *)arg1 count:(unsigned long long)arg2;
- (int)mapItemSourcesAtIndex:(unsigned long long)arg1;
- (void)addMapItemSources:(int)arg1;
- (void)clearMapItemSources;
@property(readonly, nonatomic) int *mapItemSources;
@property(readonly, nonatomic) unsigned long long mapItemSourcesCount;
- (void)dealloc;

@end
