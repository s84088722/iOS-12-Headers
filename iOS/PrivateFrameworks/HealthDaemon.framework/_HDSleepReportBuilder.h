//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCalendar, NSDateInterval, NSMutableDictionary;

@interface _HDSleepReportBuilder : NSObject
{
    NSDateInterval *_resultInterval;
    NSCalendar *_calendar;
    NSMutableDictionary *_inBedSamplesBySource;
}

- (void).cxx_destruct;
- (id)calculateResult;
- (void)addSleepSamples:(id)arg1;
- (id)_categorySampleBufferForSource:(id)arg1;
- (id)initWithResultInterval:(id)arg1 calendar:(id)arg2;

@end

