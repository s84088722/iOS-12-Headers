//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@interface AWDCoreRoutineFMCDailyAssessment : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _assistances;
    int _assistedParkingEvents;
    int _duration;
    int _engagedParkingEvents;
    int _engagements;
    int _locationType;
    int _parkingEvents;
    int _suppressedParkingEvents;
    struct {
        unsigned int timestamp:1;
        unsigned int assistances:1;
        unsigned int assistedParkingEvents:1;
        unsigned int duration:1;
        unsigned int engagedParkingEvents:1;
        unsigned int engagements:1;
        unsigned int locationType:1;
        unsigned int parkingEvents:1;
        unsigned int suppressedParkingEvents:1;
    } _has;
}

@property(nonatomic) int locationType; // @synthesize locationType=_locationType;
@property(nonatomic) int suppressedParkingEvents; // @synthesize suppressedParkingEvents=_suppressedParkingEvents;
@property(nonatomic) int assistances; // @synthesize assistances=_assistances;
@property(nonatomic) int engagements; // @synthesize engagements=_engagements;
@property(nonatomic) int assistedParkingEvents; // @synthesize assistedParkingEvents=_assistedParkingEvents;
@property(nonatomic) int engagedParkingEvents; // @synthesize engagedParkingEvents=_engagedParkingEvents;
@property(nonatomic) int parkingEvents; // @synthesize parkingEvents=_parkingEvents;
@property(nonatomic) int duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasLocationType;
@property(nonatomic) _Bool hasSuppressedParkingEvents;
@property(nonatomic) _Bool hasAssistances;
@property(nonatomic) _Bool hasEngagements;
@property(nonatomic) _Bool hasAssistedParkingEvents;
@property(nonatomic) _Bool hasEngagedParkingEvents;
@property(nonatomic) _Bool hasParkingEvents;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasTimestamp;

@end

