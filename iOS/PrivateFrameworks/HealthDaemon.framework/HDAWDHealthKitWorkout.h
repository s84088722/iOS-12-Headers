//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDAWDHealthKitWorkout : PBCodable <NSCopying>
{
    long long _durationMs;
    long long _endDate;
    long long _startDate;
    unsigned long long _timestamp;
    long long _totalDistance;
    long long _totalEnergyBurned;
    long long _totalSteps;
    int _activityType;
    struct {
        unsigned int durationMs:1;
        unsigned int endDate:1;
        unsigned int startDate:1;
        unsigned int timestamp:1;
        unsigned int totalDistance:1;
        unsigned int totalEnergyBurned:1;
        unsigned int totalSteps:1;
        unsigned int activityType:1;
    } _has;
}

@property(nonatomic) long long totalSteps; // @synthesize totalSteps=_totalSteps;
@property(nonatomic) long long endDate; // @synthesize endDate=_endDate;
@property(nonatomic) long long startDate; // @synthesize startDate=_startDate;
@property(nonatomic) long long totalDistance; // @synthesize totalDistance=_totalDistance;
@property(nonatomic) long long totalEnergyBurned; // @synthesize totalEnergyBurned=_totalEnergyBurned;
@property(nonatomic) long long durationMs; // @synthesize durationMs=_durationMs;
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
@property(nonatomic) _Bool hasTotalSteps;
@property(nonatomic) _Bool hasEndDate;
@property(nonatomic) _Bool hasStartDate;
@property(nonatomic) _Bool hasTotalDistance;
@property(nonatomic) _Bool hasTotalEnergyBurned;
@property(nonatomic) _Bool hasDurationMs;
- (int)StringAsActivityType:(id)arg1;
- (id)activityTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasActivityType;
@property(nonatomic) int activityType; // @synthesize activityType=_activityType;
@property(nonatomic) _Bool hasTimestamp;

@end

