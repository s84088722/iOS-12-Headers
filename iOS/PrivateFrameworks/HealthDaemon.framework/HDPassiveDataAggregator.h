//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDDataAggregator.h>

@interface HDPassiveDataAggregator : HDDataAggregator
{
}

- (void)dataCollector:(id)arg1 didCollectSensorData:(id)arg2 device:(id)arg3;
- (_Bool)persistObjects:(id)arg1 forSensorDatum:(id)arg2 profile:(id)arg3 sourceEntity:(id)arg4 deviceEntity:(id)arg5 error:(id *)arg6;
- (id)dataObjectsFromSensorDatum:(id)arg1 error:(id *)arg2;
- (Class)sensorDatumClass;

@end

