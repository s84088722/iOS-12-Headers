//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDQueryServer.h>

@class _HKHeartRateHistogramQueryServerConfiguration;

@interface HDHeartRateHistogramQueryServer : HDQueryServer
{
    _HKHeartRateHistogramQueryServerConfiguration *_heartRateQueryServerConfiguration;
}

+ (Class)queryClass;
@property(readonly, copy, nonatomic) _HKHeartRateHistogramQueryServerConfiguration *heartRateQueryServerConfiguration; // @synthesize heartRateQueryServerConfiguration=_heartRateQueryServerConfiguration;
- (void).cxx_destruct;
- (_Bool)_walkSampleDatesWithPredicate:(id)arg1 entityClass:(Class)arg2 errorOut:(id *)arg3 handler:(CDUnknownBlockType)arg4;
- (id)_intervalsForContextStyle:(long long)arg1 errorOut:(id *)arg2;
- (_Bool)_walkSampleValuesWithPredicate:(id)arg1 errorOut:(id *)arg2 handler:(CDUnknownBlockType)arg3;
- (id)_sqlitePredicateForObjectType:(id)arg1 errorOut:(id *)arg2;
- (id)_queue_fetchHistogramDataWithError:(id *)arg1;
- (void)_queue_start;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 profile:(id)arg4 delegate:(id)arg5;

@end

