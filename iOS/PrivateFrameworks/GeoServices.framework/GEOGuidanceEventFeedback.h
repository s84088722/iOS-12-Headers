//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOSignGuidanceFeedback, GEOSpokenGuidanceFeedback, NSData;

@interface GEOGuidanceEventFeedback : PBCodable <NSCopying>
{
    float _distanceToManeuver;
    float _duration;
    unsigned int _enrouteNoticeIndex;
    unsigned int _eventIndex;
    NSData *_routeID;
    GEOSignGuidanceFeedback *_signGuidanceFeedback;
    GEOSpokenGuidanceFeedback *_spokenGuidanceFeedback;
    unsigned int _stepID;
    float _timeToManeuver;
    int _trafficSpeed;
    float _vehicleSpeed;
    struct {
        unsigned int distanceToManeuver:1;
        unsigned int duration:1;
        unsigned int enrouteNoticeIndex:1;
        unsigned int eventIndex:1;
        unsigned int stepID:1;
        unsigned int timeToManeuver:1;
        unsigned int trafficSpeed:1;
        unsigned int vehicleSpeed:1;
    } _has;
}

@property(retain, nonatomic) GEOSpokenGuidanceFeedback *spokenGuidanceFeedback; // @synthesize spokenGuidanceFeedback=_spokenGuidanceFeedback;
@property(retain, nonatomic) GEOSignGuidanceFeedback *signGuidanceFeedback; // @synthesize signGuidanceFeedback=_signGuidanceFeedback;
@property(nonatomic) float duration; // @synthesize duration=_duration;
@property(nonatomic) float vehicleSpeed; // @synthesize vehicleSpeed=_vehicleSpeed;
@property(nonatomic) float timeToManeuver; // @synthesize timeToManeuver=_timeToManeuver;
@property(nonatomic) float distanceToManeuver; // @synthesize distanceToManeuver=_distanceToManeuver;
@property(nonatomic) unsigned int eventIndex; // @synthesize eventIndex=_eventIndex;
@property(nonatomic) unsigned int enrouteNoticeIndex; // @synthesize enrouteNoticeIndex=_enrouteNoticeIndex;
@property(nonatomic) unsigned int stepID; // @synthesize stepID=_stepID;
@property(retain, nonatomic) NSData *routeID; // @synthesize routeID=_routeID;
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
@property(readonly, nonatomic) _Bool hasSpokenGuidanceFeedback;
@property(readonly, nonatomic) _Bool hasSignGuidanceFeedback;
@property(nonatomic) _Bool hasDuration;
- (int)StringAsTrafficSpeed:(id)arg1;
- (id)trafficSpeedAsString:(int)arg1;
@property(nonatomic) _Bool hasTrafficSpeed;
@property(nonatomic) int trafficSpeed; // @synthesize trafficSpeed=_trafficSpeed;
@property(nonatomic) _Bool hasVehicleSpeed;
@property(nonatomic) _Bool hasTimeToManeuver;
@property(nonatomic) _Bool hasDistanceToManeuver;
@property(nonatomic) _Bool hasEventIndex;
@property(nonatomic) _Bool hasEnrouteNoticeIndex;
@property(nonatomic) _Bool hasStepID;
@property(readonly, nonatomic) _Bool hasRouteID;

@end

