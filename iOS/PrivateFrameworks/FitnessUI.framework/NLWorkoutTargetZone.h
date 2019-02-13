//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NLWorkoutTargetZone : NSObject
{
    long long _type;
    double _min;
    double _max;
    double _currentValue;
}

+ (id)metadataForTargetZone:(id)arg1;
+ (id)targetZoneFromMetadata:(id)arg1;
+ (id)mapTargetZoneTypeEnumToString:(long long)arg1;
+ (long long)mapTargetZoneTypeStringToEnum:(id)arg1;
+ (void)saveTargetZone:(id)arg1 forActivityType:(id)arg2;
+ (id)serializeTargetZone:(id)arg1;
+ (id)restoreFromDictionary:(id)arg1;
+ (id)restoreFromDictionary:(id)arg1 activityType:(id)arg2;
+ (id)targetZoneForActivityType:(id)arg1;
+ (unsigned long long)stateForZone:(id)arg1 distanceUnit:(id)arg2;
@property(readonly, nonatomic) double currentValue; // @synthesize currentValue=_currentValue;
@property(readonly, nonatomic) double max; // @synthesize max=_max;
@property(readonly, nonatomic) double min; // @synthesize min=_min;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)description;
@property(readonly, nonatomic) _Bool enabled;
- (_Bool)isSingleThreshold;
- (id)initWithType:(long long)arg1 min:(double)arg2 max:(double)arg3 currentValue:(double)arg4;

@end

