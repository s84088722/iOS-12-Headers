//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDDecoding-Protocol.h>
#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableSample, NSMutableArray, NSString;

@interface HDCodableActivityCache : PBCodable <HDDecoding, NSCopying>
{
    double _activeHours;
    double _briskMinutes;
    long long _cacheIndex;
    double _deepBreathingDuration;
    double _energyBurned;
    double _energyBurnedGoal;
    double _energyBurnedGoalDate;
    long long _flightsClimbed;
    long long _pushCount;
    long long _sequence;
    long long _stepCount;
    double _walkingAndRunningDistance;
    long long _wheelchairUse;
    NSMutableArray *_dailyBriskMinutesStatistics;
    NSMutableArray *_dailyEnergyBurnedStatistics;
    HDCodableSample *_sample;
    struct {
        unsigned int activeHours:1;
        unsigned int briskMinutes:1;
        unsigned int cacheIndex:1;
        unsigned int deepBreathingDuration:1;
        unsigned int energyBurned:1;
        unsigned int energyBurnedGoal:1;
        unsigned int energyBurnedGoalDate:1;
        unsigned int flightsClimbed:1;
        unsigned int pushCount:1;
        unsigned int sequence:1;
        unsigned int stepCount:1;
        unsigned int walkingAndRunningDistance:1;
        unsigned int wheelchairUse:1;
    } _has;
}

+ (Class)dailyBriskMinutesStatisticsType;
+ (Class)dailyEnergyBurnedStatisticsType;
@property(nonatomic) long long sequence; // @synthesize sequence=_sequence;
@property(retain, nonatomic) NSMutableArray *dailyBriskMinutesStatistics; // @synthesize dailyBriskMinutesStatistics=_dailyBriskMinutesStatistics;
@property(retain, nonatomic) NSMutableArray *dailyEnergyBurnedStatistics; // @synthesize dailyEnergyBurnedStatistics=_dailyEnergyBurnedStatistics;
@property(nonatomic) long long wheelchairUse; // @synthesize wheelchairUse=_wheelchairUse;
@property(nonatomic) long long flightsClimbed; // @synthesize flightsClimbed=_flightsClimbed;
@property(nonatomic) long long pushCount; // @synthesize pushCount=_pushCount;
@property(nonatomic) double deepBreathingDuration; // @synthesize deepBreathingDuration=_deepBreathingDuration;
@property(nonatomic) double energyBurnedGoalDate; // @synthesize energyBurnedGoalDate=_energyBurnedGoalDate;
@property(nonatomic) double walkingAndRunningDistance; // @synthesize walkingAndRunningDistance=_walkingAndRunningDistance;
@property(nonatomic) double energyBurnedGoal; // @synthesize energyBurnedGoal=_energyBurnedGoal;
@property(nonatomic) long long stepCount; // @synthesize stepCount=_stepCount;
@property(nonatomic) double activeHours; // @synthesize activeHours=_activeHours;
@property(nonatomic) double briskMinutes; // @synthesize briskMinutes=_briskMinutes;
@property(nonatomic) double energyBurned; // @synthesize energyBurned=_energyBurned;
@property(nonatomic) long long cacheIndex; // @synthesize cacheIndex=_cacheIndex;
@property(retain, nonatomic) HDCodableSample *sample; // @synthesize sample=_sample;
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
@property(nonatomic) _Bool hasSequence;
- (id)dailyBriskMinutesStatisticsAtIndex:(unsigned long long)arg1;
- (unsigned long long)dailyBriskMinutesStatisticsCount;
- (void)addDailyBriskMinutesStatistics:(id)arg1;
- (void)clearDailyBriskMinutesStatistics;
- (id)dailyEnergyBurnedStatisticsAtIndex:(unsigned long long)arg1;
- (unsigned long long)dailyEnergyBurnedStatisticsCount;
- (void)addDailyEnergyBurnedStatistics:(id)arg1;
- (void)clearDailyEnergyBurnedStatistics;
@property(nonatomic) _Bool hasWheelchairUse;
@property(nonatomic) _Bool hasFlightsClimbed;
@property(nonatomic) _Bool hasPushCount;
@property(nonatomic) _Bool hasDeepBreathingDuration;
@property(nonatomic) _Bool hasEnergyBurnedGoalDate;
@property(nonatomic) _Bool hasWalkingAndRunningDistance;
@property(nonatomic) _Bool hasEnergyBurnedGoal;
@property(nonatomic) _Bool hasStepCount;
@property(nonatomic) _Bool hasActiveHours;
@property(nonatomic) _Bool hasBriskMinutes;
@property(nonatomic) _Bool hasEnergyBurned;
@property(nonatomic) _Bool hasCacheIndex;
@property(readonly, nonatomic) _Bool hasSample;
- (_Bool)applyToObject:(id)arg1;
- (id)decodedWalkingAndRunningDistanceQuantity;
- (id)decodedEnergyBurnedGoalQuantity;
- (id)decodedEnergyBurnedQuantity;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

