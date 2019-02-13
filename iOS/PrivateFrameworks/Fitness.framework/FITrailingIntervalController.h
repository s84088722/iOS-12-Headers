//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HKQuantity, HKQuantityType, NSArray;

@interface FITrailingIntervalController : NSObject
{
    NSArray *_slices;
    HKQuantityType *_quantityType;
    NSArray *_uncommittedSamples;
    _Bool _thresholdReached;
    HKQuantity *_threshold;
    NSArray *_pauseResumeEvents;
}

@property(readonly, nonatomic) NSArray *pauseResumeEvents; // @synthesize pauseResumeEvents=_pauseResumeEvents;
@property(readonly, nonatomic) _Bool thresholdReached; // @synthesize thresholdReached=_thresholdReached;
@property(retain, nonatomic) HKQuantity *threshold; // @synthesize threshold=_threshold;
- (void).cxx_destruct;
@property(readonly, nonatomic) HKQuantity *quantity;
- (double)idleDurationUntilDate:(id)arg1;
- (double)activeDurationUntilDate:(id)arg1;
@property(readonly, nonatomic) double committedDuration;
- (void)_addResumeEvent:(id)arg1;
- (void)_addPauseEvent:(id)arg1;
- (_Bool)addEvent:(id)arg1 withError:(id *)arg2;
- (void)_processUncommittedSamples;
- (void)_updateSlicesWithSamples:(id)arg1;
- (void)_determineAndProcessThresholdReached;
- (void)addSamples:(id)arg1;
- (void)addSample:(id)arg1;
- (id)initWithQuantityType:(id)arg1 threshold:(id)arg2 startDate:(id)arg3;

@end

