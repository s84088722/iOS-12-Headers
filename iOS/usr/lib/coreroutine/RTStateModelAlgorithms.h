//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RTStateModelAlgorithms : NSObject
{
}

+ (id)adjustedDateInterval:(id)arg1 betweenMinDate:(id)arg2 maxDate:(id)arg3 strideDays:(unsigned long long)arg4;
+ (id)adjustedDate:(id)arg1 betweenMinDate:(id)arg2 maxDate:(id)arg3 strideDays:(unsigned long long)arg4 outDeltaDays:(long long *)arg5;
+ (id)adjustedDate:(id)arg1 betweenMinDate:(id)arg2 maxDate:(id)arg3 strideDays:(unsigned long long)arg4;
+ (id)bucketizeDates:(id)arg1 bucketInterval:(double)arg2 latestDate:(id)arg3;

@end
