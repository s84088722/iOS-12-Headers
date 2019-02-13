//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, GEOMapItemStorage, GEOWaypointTyped;

@interface GEOComposedWaypoint : PBCodable <NSCopying>
{
    GEOLatLng *_latLng;
    GEOMapItemStorage *_mapItemStorage;
    GEOWaypointTyped *_waypoint;
}

+ (void)composedWaypointForMapServiceResponse:(id)arg1 clientAttributes:(id)arg2 error:(id)arg3 handler:(CDUnknownBlockType)arg4;
+ (id)composedWaypointForWaypointTyped:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 networkActivityHandler:(CDUnknownBlockType)arg3;
+ (id)composedWaypointForTransitID:(unsigned long long)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 isCurrentLocation:(_Bool)arg3 traits:(id)arg4 clientAttributes:(id)arg5 completionHandler:(CDUnknownBlockType)arg6 networkActivityHandler:(CDUnknownBlockType)arg7;
+ (id)composedWaypointForIncompleteMapItem:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 networkActivityHandler:(CDUnknownBlockType)arg5;
+ (id)composedWaypointForMapItem:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 clientAttributes:(id)arg4 completionHandler:(CDUnknownBlockType)arg5 networkActivityHandler:(CDUnknownBlockType)arg6;
+ (id)composedWaypointForMapItem:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 networkActivityHandler:(CDUnknownBlockType)arg5;
+ (id)composedWaypointForMapItemToRefine:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 clientAttributes:(id)arg4 completionHandler:(CDUnknownBlockType)arg5 networkActivityHandler:(CDUnknownBlockType)arg6;
+ (id)composedWaypointForMapItemToRefine:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 networkActivityHandler:(CDUnknownBlockType)arg5;
+ (id)composedWaypointForSearchString:(id)arg1 completionItem:(id)arg2 traits:(id)arg3 clientAttributes:(id)arg4 clientResolvedCompletionHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6 networkActivityHandler:(CDUnknownBlockType)arg7;
+ (id)composedWaypointForSearchString:(id)arg1 completionItem:(id)arg2 traits:(id)arg3 clientAttributes:(id)arg4 completionHandler:(CDUnknownBlockType)arg5 networkActivityHandler:(CDUnknownBlockType)arg6;
+ (id)composedWaypointForAddressString:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 networkActivityHandler:(CDUnknownBlockType)arg5;
+ (id)composedWaypointForCurrentLocation:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 networkActivityHandler:(CDUnknownBlockType)arg5;
+ (id)composedWaypointForCurrentLocation:(id)arg1 traits:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 networkActivityHandler:(CDUnknownBlockType)arg4;
+ (id)composedWaypointForLocation:(id)arg1 mapItem:(id)arg2 traits:(id)arg3 auditToken:(id)arg4 completionHandler:(CDUnknownBlockType)arg5 networkActivityHandler:(CDUnknownBlockType)arg6;
+ (id)composedWaypointForLocation:(id)arg1 mapItem:(id)arg2 traits:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 networkActivityHandler:(CDUnknownBlockType)arg5;
+ (id)composedWaypointForID:(unsigned long long)arg1 resultsProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4 clientAttributes:(id)arg5 completionHandler:(CDUnknownBlockType)arg6 networkActivityHandler:(CDUnknownBlockType)arg7;
+ (id)composedWaypointForID:(unsigned long long)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 networkActivityHandler:(CDUnknownBlockType)arg5;
@property(retain, nonatomic) GEOLatLng *latLng; // @synthesize latLng=_latLng;
@property(retain, nonatomic) GEOMapItemStorage *mapItemStorage; // @synthesize mapItemStorage=_mapItemStorage;
@property(retain, nonatomic) GEOWaypointTyped *waypoint; // @synthesize waypoint=_waypoint;
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
@property(readonly, nonatomic) _Bool hasLatLng;
@property(readonly, nonatomic) _Bool hasMapItemStorage;
@property(readonly, nonatomic) _Bool hasWaypoint;
- (_Bool)isLocationWaypointType;
- (id)timezone;
- (id)geoMapItem;
- (void)setIsCurrentLocation:(_Bool)arg1;
- (_Bool)isCurrentLocation;
- (id)initWithLocation:(id)arg1 isCurrentLocation:(_Bool)arg2;
- (id)initWithMapItem:(id)arg1;
- (double)distanceToWaypoint:(id)arg1;

@end

