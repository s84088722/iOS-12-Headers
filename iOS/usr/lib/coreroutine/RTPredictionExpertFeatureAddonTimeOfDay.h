//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <coreroutine/RTPredictionExpertFeatureAddon.h>

@class NSDateComponents;

@interface RTPredictionExpertFeatureAddonTimeOfDay : RTPredictionExpertFeatureAddon
{
    NSDateComponents *_startDateComponents;
    NSDateComponents *_endDateComponents;
}

+ (id)timeOfDayFeatureAddonsWithRequestedDuration:(double)arg1 offsetFromMidnight:(double)arg2;
@property(readonly, nonatomic) NSDateComponents *endDateComponents; // @synthesize endDateComponents=_endDateComponents;
@property(readonly, nonatomic) NSDateComponents *startDateComponents; // @synthesize startDateComponents=_startDateComponents;
- (void).cxx_destruct;
- (id)description;
- (long long)addonType;
- (id)initWithStartDateComponents:(id)arg1 endDateComponents:(id)arg2;

@end

