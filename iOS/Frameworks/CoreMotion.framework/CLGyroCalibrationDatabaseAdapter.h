//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreMotion/CLNotifierServiceAdapter.h>

#import <CoreMotion/CLGyroCalibrationDatabaseProtocol-Protocol.h>

@class NSString;

@interface CLGyroCalibrationDatabaseAdapter : CLNotifierServiceAdapter <CLGyroCalibrationDatabaseProtocol>
{
}

+ (_Bool)isSupported;
+ (id)getSilo;
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;
- (int)syncgetNumTemperatures;
- (_Bool)syncgetWipeDatabase;
- (void)dumpDatabase:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (_Bool)syncgetInsertWithBias:(const CDStruct_03942939 *)arg1 variance:(const CDStruct_03942939 *)arg2 temperature:(float)arg3 timestamp:(double)arg4;
- (double)syncgetLastMiniCalibration;
- (_Bool)syncgetSupportsMiniCalibration;
- (int)syncgetNonFactoryRoundCount;
- (_Bool)syncgetBiasFit:(CDStruct_f329898c *)arg1;
- (void)startFactoryGYTT;
- (int)syncgetMaxDynamicTemperature;
- (_Bool)syncgetGyroStatsWithBias:(CDStruct_03942939 *)arg1 slope:(CDStruct_03942939 *)arg2 l2Error:(CDStruct_03942939 *)arg3 isDynamic:(_Bool)arg4 deltaBias:(CDStruct_03942939 *)arg5 deltaSlope:(CDStruct_03942939 *)arg6 deltaError:(CDStruct_03942939 *)arg7 isDeltaDynamic:(_Bool)arg8;
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)doAsync:(CDUnknownBlockType)arg1;
- (struct CLGyroCalibrationDatabase *)adaptee;
- (void)endService;
- (void)beginService;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

