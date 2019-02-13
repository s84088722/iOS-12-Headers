//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDDataCollectorSensorDatum.h>

@class HKQuantity, NSArray;

@interface HDHeartEventSensorDatum : HDDataCollectorSensorDatum
{
    NSArray *_associatedSampleUUIDs;
    HKQuantity *_heartRateThreshold;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) HKQuantity *heartRateThreshold; // @synthesize heartRateThreshold=_heartRateThreshold;
@property(readonly, nonatomic) NSArray *associatedSampleUUIDs; // @synthesize associatedSampleUUIDs=_associatedSampleUUIDs;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)metadata;
- (id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 heartRateThreshold:(id)arg3 associatedSampleUUIDs:(id)arg4 resumeContext:(id)arg5;

@end

