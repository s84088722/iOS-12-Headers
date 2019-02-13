//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEODirectionsRequest, GEODirectionsResponse, GEOMapItemStorage, GEOTransitDecoderData, GEOTransitSuggestedRoute, NSData, NSMutableArray, NSString;

@interface GEOCompanionRouteDetails : PBCodable <NSCopying>
{
    CDStruct_82f37d05 _coordinates;
    CDStruct_9f2792e4 _trafficColorOffsets;
    CDStruct_9f2792e4 _trafficColors;
    GEOTransitDecoderData *_decoderData;
    GEOMapItemStorage *_destination;
    NSString *_destinationName;
    unsigned int _distance;
    unsigned int _historicalDuration;
    NSString *_name;
    GEOMapItemStorage *_origin;
    unsigned int _originalDuration;
    NSData *_originalRouteID;
    GEOTransitSuggestedRoute *_originalSuggestedRoute;
    GEODirectionsRequest *_request;
    GEODirectionsResponse *_response;
    NSMutableArray *_routeDescriptions;
    NSData *_routeID;
    NSMutableArray *_steps;
    NSString *_trafficDescription;
    int _transportType;
    _Bool _canNavigate;
    _Bool _showTransitSchedules;
    struct {
        unsigned int distance:1;
        unsigned int historicalDuration:1;
        unsigned int originalDuration:1;
        unsigned int transportType:1;
        unsigned int canNavigate:1;
        unsigned int showTransitSchedules:1;
    } _has;
}

+ (Class)routeDescriptionsType;
+ (Class)stepType;
+ (id)syntheticRouteDetailsWithOrigin:(id)arg1 destination:(id)arg2 transportType:(int)arg3 destinationName:(id)arg4;
@property(retain, nonatomic) NSMutableArray *routeDescriptions; // @synthesize routeDescriptions=_routeDescriptions;
@property(retain, nonatomic) NSData *originalRouteID; // @synthesize originalRouteID=_originalRouteID;
@property(retain, nonatomic) NSString *trafficDescription; // @synthesize trafficDescription=_trafficDescription;
@property(retain, nonatomic) GEODirectionsResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) GEODirectionsRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) GEOTransitDecoderData *decoderData; // @synthesize decoderData=_decoderData;
@property(retain, nonatomic) GEOTransitSuggestedRoute *originalSuggestedRoute; // @synthesize originalSuggestedRoute=_originalSuggestedRoute;
@property(nonatomic) unsigned int distance; // @synthesize distance=_distance;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool canNavigate; // @synthesize canNavigate=_canNavigate;
@property(nonatomic) unsigned int historicalDuration; // @synthesize historicalDuration=_historicalDuration;
@property(retain, nonatomic) GEOMapItemStorage *origin; // @synthesize origin=_origin;
@property(retain, nonatomic) GEOMapItemStorage *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) NSData *routeID; // @synthesize routeID=_routeID;
@property(retain, nonatomic) NSMutableArray *steps; // @synthesize steps=_steps;
@property(nonatomic) unsigned int originalDuration; // @synthesize originalDuration=_originalDuration;
@property(retain, nonatomic) NSString *destinationName; // @synthesize destinationName=_destinationName;
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
- (id)routeDescriptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)routeDescriptionsCount;
- (void)addRouteDescriptions:(id)arg1;
- (void)clearRouteDescriptions;
@property(readonly, nonatomic) _Bool hasOriginalRouteID;
@property(readonly, nonatomic) _Bool hasTrafficDescription;
@property(readonly, nonatomic) _Bool hasResponse;
@property(readonly, nonatomic) _Bool hasRequest;
- (int)StringAsTransportType:(id)arg1;
- (id)transportTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasTransportType;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(nonatomic) _Bool hasShowTransitSchedules;
@property(nonatomic) _Bool showTransitSchedules; // @synthesize showTransitSchedules=_showTransitSchedules;
@property(readonly, nonatomic) _Bool hasDecoderData;
@property(readonly, nonatomic) _Bool hasOriginalSuggestedRoute;
@property(nonatomic) _Bool hasDistance;
@property(readonly, nonatomic) _Bool hasName;
@property(nonatomic) _Bool hasCanNavigate;
@property(nonatomic) _Bool hasHistoricalDuration;
- (void)setTrafficColorOffsets:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)trafficColorOffsetAtIndex:(unsigned long long)arg1;
- (void)addTrafficColorOffset:(unsigned int)arg1;
- (void)clearTrafficColorOffsets;
@property(readonly, nonatomic) unsigned int *trafficColorOffsets;
@property(readonly, nonatomic) unsigned long long trafficColorOffsetsCount;
- (void)setTrafficColors:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)trafficColorAtIndex:(unsigned long long)arg1;
- (void)addTrafficColor:(unsigned int)arg1;
- (void)clearTrafficColors;
@property(readonly, nonatomic) unsigned int *trafficColors;
@property(readonly, nonatomic) unsigned long long trafficColorsCount;
@property(readonly, nonatomic) _Bool hasOrigin;
@property(readonly, nonatomic) _Bool hasDestination;
@property(readonly, nonatomic) _Bool hasRouteID;
- (void)setCoordinates:(double *)arg1 count:(unsigned long long)arg2;
- (double)coordinatesAtIndex:(unsigned long long)arg1;
- (void)addCoordinates:(double)arg1;
- (void)clearCoordinates;
@property(readonly, nonatomic) double *coordinates;
@property(readonly, nonatomic) unsigned long long coordinatesCount;
- (id)stepAtIndex:(unsigned long long)arg1;
- (unsigned long long)stepsCount;
- (void)addStep:(id)arg1;
- (void)clearSteps;
@property(nonatomic) _Bool hasOriginalDuration;
@property(readonly, nonatomic) _Bool hasDestinationName;
- (void)dealloc;
- (id)stepWithID:(unsigned long long)arg1;
- (unsigned long long)stepIndexWithID:(unsigned long long)arg1;
- (_Bool)isSyntheticRoute;
- (id)initWithRoute:(id)arg1 destinationName:(id)arg2 stringFormatter:(id)arg3;
- (id)initWithRoute:(id)arg1 fallbackDestinationName:(id)arg2 stringFormatter:(id)arg3;

@end

