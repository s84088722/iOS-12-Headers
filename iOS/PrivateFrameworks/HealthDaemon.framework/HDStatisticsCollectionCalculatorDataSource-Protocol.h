//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDStatisticsCollectionCalculator, NSDateInterval;

@protocol HDStatisticsCollectionCalculatorDataSource <NSObject>
- (_Bool)collectionCalculator:(HDStatisticsCollectionCalculator *)arg1 queryForInterval:(NSDateInterval *)arg2 error:(id *)arg3 sampleHandler:(_Bool (^)(double, double, double, long long, _Bool, id *))arg4;
@end

