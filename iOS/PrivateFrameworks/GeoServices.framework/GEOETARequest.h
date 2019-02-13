//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAdditionalEnabledMarkets, GEOAutomobileOptions, GEOClientCapabilities, GEOCommonOptions, GEOLocation, GEOPDABClientDatasetMetadata, GEOTFTrafficSnapshot, GEOTransitOptions, GEOWalkingOptions, GEOWaypoint, GEOWaypointTyped, NSData, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GEOETARequest : PBRequest <NSCopying>
{
    struct GEOSessionID _sessionID;
    struct GEOTimepoint _timepoint;
    double _sessionRelativeTimestamp;
    GEOPDABClientDatasetMetadata *_abClientMetadata;
    GEOAdditionalEnabledMarkets *_additionalEnabledMarkets;
    GEOAutomobileOptions *_automobileOptions;
    GEOClientCapabilities *_clientCapabilities;
    GEOCommonOptions *_commonOptions;
    NSMutableArray *_destinationWaypointTypeds;
    NSMutableArray *_destinations;
    NSMutableArray *_deviceHistoricalLocations;
    GEOLocation *_lastKnownRoadLocation;
    GEOWaypoint *_origin;
    GEOWaypointTyped *_originWaypointTyped;
    NSData *_originalRouteID;
    NSData *_originalRouteZilchPoints;
    NSString *_phoneticLocaleIdentifier;
    NSString *_requestingAppId;
    NSMutableArray *_serviceTags;
    NSData *_sessionState;
    GEOTFTrafficSnapshot *_trafficSnapshot;
    GEOTransitOptions *_transitOptions;
    int _transportType;
    unsigned int _walkingLimitMeters;
    GEOWalkingOptions *_walkingOptions;
    _Bool _allowPartialResults;
    _Bool _includeDistance;
    _Bool _includeHistoricTravelTime;
    _Bool _includeRouteTrafficDetail;
    _Bool _includeShortTrafficSummary;
    _Bool _isFromAPI;
    _Bool _needServerLatency;
    _Bool _useLiveTrafficAsFallback;
    struct {
        unsigned int sessionID:1;
        unsigned int timepoint:1;
        unsigned int sessionRelativeTimestamp:1;
        unsigned int transportType:1;
        unsigned int walkingLimitMeters:1;
        unsigned int allowPartialResults:1;
        unsigned int includeDistance:1;
        unsigned int includeHistoricTravelTime:1;
        unsigned int includeRouteTrafficDetail:1;
        unsigned int includeShortTrafficSummary:1;
        unsigned int isFromAPI:1;
        unsigned int needServerLatency:1;
        unsigned int useLiveTrafficAsFallback:1;
    } _has;
}

+ (Class)serviceTagType;
+ (Class)deviceHistoricalLocationType;
+ (Class)destinationWaypointTypedType;
+ (Class)destinationType;
@property(retain, nonatomic) NSMutableArray *serviceTags; // @synthesize serviceTags=_serviceTags;
@property(retain, nonatomic) NSString *requestingAppId; // @synthesize requestingAppId=_requestingAppId;
@property(retain, nonatomic) NSString *phoneticLocaleIdentifier; // @synthesize phoneticLocaleIdentifier=_phoneticLocaleIdentifier;
@property(nonatomic) _Bool includeShortTrafficSummary; // @synthesize includeShortTrafficSummary=_includeShortTrafficSummary;
@property(retain, nonatomic) GEOPDABClientDatasetMetadata *abClientMetadata; // @synthesize abClientMetadata=_abClientMetadata;
@property(retain, nonatomic) GEOLocation *lastKnownRoadLocation; // @synthesize lastKnownRoadLocation=_lastKnownRoadLocation;
@property(retain, nonatomic) GEOClientCapabilities *clientCapabilities; // @synthesize clientCapabilities=_clientCapabilities;
@property(retain, nonatomic) NSMutableArray *deviceHistoricalLocations; // @synthesize deviceHistoricalLocations=_deviceHistoricalLocations;
@property(retain, nonatomic) NSData *originalRouteZilchPoints; // @synthesize originalRouteZilchPoints=_originalRouteZilchPoints;
@property(retain, nonatomic) NSData *originalRouteID; // @synthesize originalRouteID=_originalRouteID;
@property(retain, nonatomic) NSData *sessionState; // @synthesize sessionState=_sessionState;
@property(retain, nonatomic) GEOCommonOptions *commonOptions; // @synthesize commonOptions=_commonOptions;
@property(nonatomic) _Bool isFromAPI; // @synthesize isFromAPI=_isFromAPI;
@property(retain, nonatomic) GEOWalkingOptions *walkingOptions; // @synthesize walkingOptions=_walkingOptions;
@property(retain, nonatomic) GEOTransitOptions *transitOptions; // @synthesize transitOptions=_transitOptions;
@property(retain, nonatomic) GEOAutomobileOptions *automobileOptions; // @synthesize automobileOptions=_automobileOptions;
@property(retain, nonatomic) NSMutableArray *destinationWaypointTypeds; // @synthesize destinationWaypointTypeds=_destinationWaypointTypeds;
@property(retain, nonatomic) GEOWaypointTyped *originWaypointTyped; // @synthesize originWaypointTyped=_originWaypointTyped;
@property(retain, nonatomic) GEOAdditionalEnabledMarkets *additionalEnabledMarkets; // @synthesize additionalEnabledMarkets=_additionalEnabledMarkets;
@property(nonatomic) double sessionRelativeTimestamp; // @synthesize sessionRelativeTimestamp=_sessionRelativeTimestamp;
@property(nonatomic) struct GEOSessionID sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) _Bool includeDistance; // @synthesize includeDistance=_includeDistance;
@property(nonatomic) _Bool allowPartialResults; // @synthesize allowPartialResults=_allowPartialResults;
@property(nonatomic) _Bool includeHistoricTravelTime; // @synthesize includeHistoricTravelTime=_includeHistoricTravelTime;
@property(retain, nonatomic) NSMutableArray *destinations; // @synthesize destinations=_destinations;
@property(retain, nonatomic) GEOWaypoint *origin; // @synthesize origin=_origin;
@property(nonatomic) struct GEOTimepoint timepoint; // @synthesize timepoint=_timepoint;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)serviceTagAtIndex:(unsigned long long)arg1;
- (unsigned long long)serviceTagsCount;
- (void)addServiceTag:(id)arg1;
- (void)clearServiceTags;
@property(readonly, nonatomic) _Bool hasRequestingAppId;
@property(readonly, nonatomic) _Bool hasPhoneticLocaleIdentifier;
@property(nonatomic) _Bool hasIncludeShortTrafficSummary;
@property(nonatomic) _Bool hasIncludeRouteTrafficDetail;
@property(nonatomic) _Bool includeRouteTrafficDetail; // @synthesize includeRouteTrafficDetail=_includeRouteTrafficDetail;
@property(readonly, nonatomic) _Bool hasAbClientMetadata;
@property(readonly, nonatomic) _Bool hasLastKnownRoadLocation;
@property(readonly, nonatomic) _Bool hasClientCapabilities;
- (id)deviceHistoricalLocationAtIndex:(unsigned long long)arg1;
- (unsigned long long)deviceHistoricalLocationsCount;
- (void)addDeviceHistoricalLocation:(id)arg1;
- (void)clearDeviceHistoricalLocations;
@property(readonly, nonatomic) _Bool hasOriginalRouteZilchPoints;
@property(readonly, nonatomic) _Bool hasOriginalRouteID;
@property(readonly, nonatomic) _Bool hasSessionState;
@property(readonly, nonatomic) _Bool hasCommonOptions;
@property(nonatomic) _Bool hasIsFromAPI;
@property(readonly, nonatomic) _Bool hasWalkingOptions;
@property(readonly, nonatomic) _Bool hasTransitOptions;
@property(readonly, nonatomic) _Bool hasAutomobileOptions;
- (id)destinationWaypointTypedAtIndex:(unsigned long long)arg1;
- (unsigned long long)destinationWaypointTypedsCount;
- (void)addDestinationWaypointTyped:(id)arg1;
- (void)clearDestinationWaypointTypeds;
@property(readonly, nonatomic) _Bool hasOriginWaypointTyped;
@property(readonly, nonatomic) _Bool hasAdditionalEnabledMarkets;
@property(nonatomic) _Bool hasWalkingLimitMeters;
@property(nonatomic) unsigned int walkingLimitMeters; // @synthesize walkingLimitMeters=_walkingLimitMeters;
@property(nonatomic) _Bool hasSessionRelativeTimestamp;
@property(nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasIncludeDistance;
@property(nonatomic) _Bool hasAllowPartialResults;
@property(nonatomic) _Bool hasIncludeHistoricTravelTime;
- (id)destinationAtIndex:(unsigned long long)arg1;
- (unsigned long long)destinationsCount;
- (void)addDestination:(id)arg1;
- (void)clearDestinations;
@property(readonly, nonatomic) _Bool hasOrigin;
@property(nonatomic) _Bool hasTimepoint;
- (int)StringAsTransportType:(id)arg1;
- (id)transportTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasTransportType;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(nonatomic) _Bool hasNeedServerLatency;
@property(nonatomic) _Bool needServerLatency;
@property(nonatomic) _Bool hasUseLiveTrafficAsFallback;
@property(nonatomic) _Bool useLiveTrafficAsFallback;
@property(retain, nonatomic) GEOTFTrafficSnapshot *trafficSnapshot;
@property(readonly, nonatomic) _Bool hasTrafficSnapshot;
- (id)initWithQuickETARequest:(id)arg1;

@end

