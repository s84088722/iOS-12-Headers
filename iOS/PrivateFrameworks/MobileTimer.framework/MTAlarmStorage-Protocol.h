//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MobileTimer/NSObject-Protocol.h>

@class MTAlarm, NSArray, NSDate, NSString;
@protocol MTAlarmObserver, MTSource;

@protocol MTAlarmStorage <NSObject>
@property(readonly, nonatomic) NSArray *allAlarms;
@property(readonly, nonatomic) NSDate *lastModifiedDate;
@property(readonly, nonatomic) MTAlarm *nextAlarm;
@property(readonly, nonatomic) MTAlarm *sleepAlarm;
@property(readonly, nonatomic) NSArray *alarms;
- (void)dismissAlarmWithIdentifier:(NSString *)arg1 dismissDate:(NSDate *)arg2 dismissAction:(unsigned long long)arg3 withCompletion:(void (^)(NSError *))arg4 source:(id <MTSource>)arg5;
- (void)dismissAlarmWithIdentifier:(NSString *)arg1 dismissAction:(unsigned long long)arg2 withCompletion:(void (^)(NSError *))arg3 source:(id <MTSource>)arg4;
- (void)snoozeAlarmWithIdentifier:(NSString *)arg1 snoozeDate:(NSDate *)arg2 snoozeAction:(unsigned long long)arg3 withCompletion:(void (^)(NSError *))arg4 source:(id <MTSource>)arg5;
- (void)snoozeAlarmWithIdentifier:(NSString *)arg1 snoozeAction:(unsigned long long)arg2 withCompletion:(void (^)(NSError *))arg3 source:(id <MTSource>)arg4;
- (void)setAllAlarms:(NSArray *)arg1 sleepAlarm:(MTAlarm *)arg2 source:(id <MTSource>)arg3;
- (void)mergeAlarms:(NSArray *)arg1 sleepAlarm:(MTAlarm *)arg2 source:(id <MTSource>)arg3;
- (void)removeAllAlarmsForSource:(id <MTSource>)arg1;
- (void)removeAlarmWithIdentifier:(NSString *)arg1 withCompletion:(void (^)(NSError *))arg2 source:(id <MTSource>)arg3;
- (void)removeAlarm:(MTAlarm *)arg1 withCompletion:(void (^)(NSError *))arg2 source:(id <MTSource>)arg3;
- (void)updateAlarm:(MTAlarm *)arg1 withCompletion:(void (^)(NSError *))arg2 source:(id <MTSource>)arg3;
- (void)addAlarm:(MTAlarm *)arg1 withCompletion:(void (^)(NSError *))arg2 source:(id <MTSource>)arg3;
- (void)getAlarmsWithCompletion:(void (^)(NSArray *, MTAlarm *, MTAlarm *, NSError *))arg1;
- (void)registerObserver:(id <MTAlarmObserver>)arg1;
@end

