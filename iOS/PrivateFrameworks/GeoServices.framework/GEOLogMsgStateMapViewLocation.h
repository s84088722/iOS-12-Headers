//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOTouristInfo;

__attribute__((visibility("hidden")))
@interface GEOLogMsgStateMapViewLocation : PBCodable <NSCopying>
{
    int _locationBucket;
    GEOTouristInfo *_touristInfo;
    _Bool _isCurrentLocationInViewport;
    struct {
        unsigned int locationBucket:1;
        unsigned int isCurrentLocationInViewport:1;
    } _has;
}

@property(retain, nonatomic) GEOTouristInfo *touristInfo; // @synthesize touristInfo=_touristInfo;
@property(nonatomic) _Bool isCurrentLocationInViewport; // @synthesize isCurrentLocationInViewport=_isCurrentLocationInViewport;
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
@property(readonly, nonatomic) _Bool hasTouristInfo;
@property(nonatomic) _Bool hasIsCurrentLocationInViewport;
- (int)StringAsLocationBucket:(id)arg1;
- (id)locationBucketAsString:(int)arg1;
@property(nonatomic) _Bool hasLocationBucket;
@property(nonatomic) int locationBucket; // @synthesize locationBucket=_locationBucket;

@end

