//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOUserPreferences : PBCodable <NSCopying>
{
    _Bool _avoidHighways;
    _Bool _avoidTolls;
    struct {
        unsigned int avoidHighways:1;
        unsigned int avoidTolls:1;
    } _has;
}

@property(nonatomic) _Bool avoidHighways; // @synthesize avoidHighways=_avoidHighways;
@property(nonatomic) _Bool avoidTolls; // @synthesize avoidTolls=_avoidTolls;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasAvoidHighways;
@property(nonatomic) _Bool hasAvoidTolls;

@end

