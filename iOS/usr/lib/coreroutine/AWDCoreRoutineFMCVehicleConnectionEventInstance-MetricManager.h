//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWDSupportFramework/AWDCoreRoutineFMCVehicleConnectionEventInstance.h>

#import <coreroutine/RTMetricManagerMetricIdProtocol-Protocol.h>

@class NSString;

@interface AWDCoreRoutineFMCVehicleConnectionEventInstance (MetricManager) <RTMetricManagerMetricIdProtocol>
@property(readonly, copy) NSString *description;
- (_Bool)valid:(id *)arg1;
- (id)_init;
- (long long)metricId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

