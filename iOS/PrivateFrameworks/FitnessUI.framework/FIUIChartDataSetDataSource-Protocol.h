//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FitnessUI/NSObject-Protocol.h>

@class FIUIChartDataSet, NSArray;
@protocol FIUIChartPoint;

@protocol FIUIChartDataSetDataSource <NSObject>
- (id <FIUIChartPoint>)dataSet:(FIUIChartDataSet *)arg1 chartPointForIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfDataPointsForDataSet:(FIUIChartDataSet *)arg1;

@optional
- (NSArray *)labelsForSet:(FIUIChartDataSet *)arg1;
@end

