//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOURLRouteHandle, NSMutableArray, PBUnknownFields;

@interface GEOStorageRouteRequestStorage : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOURLRouteHandle *_routeHandle;
    int _transportType;
    NSMutableArray *_waypoints;
    CDStruct_a995201b _has;
}

+ (Class)waypointsType;
@property(retain, nonatomic) GEOURLRouteHandle *routeHandle; // @synthesize routeHandle=_routeHandle;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(retain, nonatomic) NSMutableArray *waypoints; // @synthesize waypoints=_waypoints;
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
@property(readonly, nonatomic) _Bool hasRouteHandle;
- (int)StringAsTransportType:(id)arg1;
- (id)transportTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasTransportType;
- (id)waypointsAtIndex:(unsigned long long)arg1;
- (unsigned long long)waypointsCount;
- (void)addWaypoints:(id)arg1;
- (void)clearWaypoints;

@end

