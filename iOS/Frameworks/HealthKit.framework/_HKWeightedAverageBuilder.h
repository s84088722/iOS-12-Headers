//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _HKWeightedAverageBuilder : NSObject
{
    double _startTime;
}

- (id)_weightedAverageStatisticsWithValuesAndTimes:(vector_b70ce118 *)arg1 unit:(id)arg2 sorted:(_Bool)arg3 error:(id *)arg4;
- (id)weightedAverageWithSamples:(id)arg1 sorted:(_Bool)arg2 error:(id *)arg3;
- (id)initWithStartDate:(id)arg1;

@end
