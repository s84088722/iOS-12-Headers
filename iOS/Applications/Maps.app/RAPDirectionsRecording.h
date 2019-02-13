//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"
#import "RAPAuxiliaryControlsRecording-Protocol.h"

@class GEORPCorrectedSearch, NSData, NSMutableArray, NSString, RAPUserSearchInput;

__attribute__((visibility("hidden")))
@interface RAPDirectionsRecording : PBCodable <RAPAuxiliaryControlsRecording, NSCopying>
{
    struct {
        unsigned int *list;
        unsigned long long count;
        unsigned long long size;
    } _clusteredRouteRideSelections;
    unsigned long long _originatingAuxiliaryControlIndex;
    NSMutableArray *_auxiliaryControls;
    NSMutableArray *_directionsRequests;
    NSData *_directionsResponseID;
    NSMutableArray *_directionsResponses;
    RAPUserSearchInput *_endWaypoint;
    GEORPCorrectedSearch *_endWaypointCorrectedSearchTemplate;
    NSData *_overviewScreenshotImageData;
    unsigned int _selectedDirectionsResponseIndex;
    unsigned int _selectedSuggestedRouteIndexInDirectionsResponse;
    RAPUserSearchInput *_startWaypoint;
    GEORPCorrectedSearch *_startWaypointCorrectedSearchTemplate;
    struct {
        unsigned int originatingAuxiliaryControlIndex:1;
        unsigned int selectedDirectionsResponseIndex:1;
        unsigned int selectedSuggestedRouteIndexInDirectionsResponse:1;
    } _has;
}

+ (Class)auxiliaryControlsType;
+ (Class)directionsResponsesType;
+ (Class)directionsRequestsType;
@property(retain, nonatomic) GEORPCorrectedSearch *endWaypointCorrectedSearchTemplate; // @synthesize endWaypointCorrectedSearchTemplate=_endWaypointCorrectedSearchTemplate;
@property(retain, nonatomic) GEORPCorrectedSearch *startWaypointCorrectedSearchTemplate; // @synthesize startWaypointCorrectedSearchTemplate=_startWaypointCorrectedSearchTemplate;
@property(nonatomic) unsigned long long originatingAuxiliaryControlIndex; // @synthesize originatingAuxiliaryControlIndex=_originatingAuxiliaryControlIndex;
@property(retain, nonatomic) NSMutableArray *auxiliaryControls; // @synthesize auxiliaryControls=_auxiliaryControls;
@property(retain, nonatomic) RAPUserSearchInput *endWaypoint; // @synthesize endWaypoint=_endWaypoint;
@property(retain, nonatomic) RAPUserSearchInput *startWaypoint; // @synthesize startWaypoint=_startWaypoint;
@property(retain, nonatomic) NSData *directionsResponseID; // @synthesize directionsResponseID=_directionsResponseID;
@property(retain, nonatomic) NSData *overviewScreenshotImageData; // @synthesize overviewScreenshotImageData=_overviewScreenshotImageData;
@property(nonatomic) unsigned int selectedSuggestedRouteIndexInDirectionsResponse; // @synthesize selectedSuggestedRouteIndexInDirectionsResponse=_selectedSuggestedRouteIndexInDirectionsResponse;
@property(nonatomic) unsigned int selectedDirectionsResponseIndex; // @synthesize selectedDirectionsResponseIndex=_selectedDirectionsResponseIndex;
@property(retain, nonatomic) NSMutableArray *directionsResponses; // @synthesize directionsResponses=_directionsResponses;
@property(retain, nonatomic) NSMutableArray *directionsRequests; // @synthesize directionsRequests=_directionsRequests;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
- (void)setClusteredRouteRideSelections:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)clusteredRouteRideSelectionsAtIndex:(unsigned long long)arg1;
- (void)addClusteredRouteRideSelections:(unsigned int)arg1;
- (void)clearClusteredRouteRideSelections;
@property(readonly, nonatomic) unsigned int *clusteredRouteRideSelections;
@property(readonly, nonatomic) unsigned long long clusteredRouteRideSelectionsCount;
@property(readonly, nonatomic) _Bool hasEndWaypointCorrectedSearchTemplate;
@property(readonly, nonatomic) _Bool hasStartWaypointCorrectedSearchTemplate;
@property(nonatomic) _Bool hasOriginatingAuxiliaryControlIndex;
- (id)auxiliaryControlsAtIndex:(unsigned long long)arg1;
- (unsigned long long)auxiliaryControlsCount;
- (void)addAuxiliaryControls:(id)arg1;
- (void)clearAuxiliaryControls;
@property(readonly, nonatomic) _Bool hasEndWaypoint;
@property(readonly, nonatomic) _Bool hasStartWaypoint;
@property(readonly, nonatomic) _Bool hasDirectionsResponseID;
@property(readonly, nonatomic) _Bool hasOverviewScreenshotImageData;
@property(nonatomic) _Bool hasSelectedSuggestedRouteIndexInDirectionsResponse;
@property(nonatomic) _Bool hasSelectedDirectionsResponseIndex;
- (id)directionsResponsesAtIndex:(unsigned long long)arg1;
- (unsigned long long)directionsResponsesCount;
- (void)addDirectionsResponses:(id)arg1;
- (void)clearDirectionsResponses;
- (id)directionsRequestsAtIndex:(unsigned long long)arg1;
- (unsigned long long)directionsRequestsCount;
- (void)addDirectionsRequests:(id)arg1;
- (void)clearDirectionsRequests;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

