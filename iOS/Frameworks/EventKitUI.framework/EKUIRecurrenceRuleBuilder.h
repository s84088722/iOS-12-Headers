//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface EKUIRecurrenceRuleBuilder : NSObject
{
    int _days;
    int _ordinalValue;
    long long _frequency;
    long long _interval;
    unsigned long long _count;
    NSArray *_dayNumbers;
    NSArray *_monthNumbers;
}

@property(retain) NSArray *monthNumbers; // @synthesize monthNumbers=_monthNumbers;
@property int ordinalValue; // @synthesize ordinalValue=_ordinalValue;
@property int days; // @synthesize days=_days;
@property(retain) NSArray *dayNumbers; // @synthesize dayNumbers=_dayNumbers;
@property unsigned long long count; // @synthesize count=_count;
@property long long interval; // @synthesize interval=_interval;
@property long long frequency; // @synthesize frequency=_frequency;
- (void).cxx_destruct;
- (id)description;
- (id)setPositions;
- (id)daysOfTheWeekWithWeek:(long long)arg1;
- (id)daysOfTheWeek;
- (long long)_frequencyToUse;
- (id)recurrenceRule;
- (void)_setDefaultValues;
- (id)init;

@end
