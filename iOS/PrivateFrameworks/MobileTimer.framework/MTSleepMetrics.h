//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HKHealthStore, HKObserverQuery, NSMutableSet;
@protocol MTAlarmStorage, NAScheduler;

@interface MTSleepMetrics : NSObject
{
    id <NAScheduler> _serializer;
    id <MTAlarmStorage> _alarmStorage;
    HKHealthStore *_healthStore;
    HKObserverQuery *_healthObserver;
    NSMutableSet *_sleepDataObservers;
}

+ (id)sleepDataForRange:(id)arg1 intervalComponents:(id)arg2;
+ (id)sleepDataForRange:(id)arg1;
+ (id)sleepDataForPastWeek;
+ (id)inBedSampleWithInterval:(id)arg1 metadata:(id)arg2;
+ (void)unregisterSleepDataObserver:(id)arg1;
+ (void)registerSleepDataObserver:(id)arg1;
+ (id)_sharedPublicMetrics;
@property(retain, nonatomic) NSMutableSet *sleepDataObservers; // @synthesize sleepDataObservers=_sleepDataObservers;
@property(retain, nonatomic) HKObserverQuery *healthObserver; // @synthesize healthObserver=_healthObserver;
@property(readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(retain, nonatomic) id <MTAlarmStorage> alarmStorage; // @synthesize alarmStorage=_alarmStorage;
@property(retain, nonatomic) id <NAScheduler> serializer; // @synthesize serializer=_serializer;
- (void).cxx_destruct;
- (id)sleepDataForRange:(id)arg1 intervalComponents:(id)arg2;
- (id)sleepDataForRange:(id)arg1;
- (id)sleepDataForPastWeek;
- (void)_saveTimeInBedSampleToHealthStore;
- (_Bool)_queue_hasUnprocessedIntervals;
- (void)deviceFirstUnlocked;
- (void)saveTimeInBed;
- (id)_queue_unprocessedInBedIntervals;
- (void)_queue_setUnprocessedInBedIntervals:(id)arg1;
- (void)logUserWokeUp:(id)arg1;
- (void)logUserWentToBed:(id)arg1;
- (void)sleepMonitor:(id)arg1 wakeUpAlarmWasDismissed:(id)arg2 sleepAlarm:(id)arg3;
- (void)sleepMonitor:(id)arg1 bedtimeReminderWasConfirmed:(id)arg2 sleepAlarm:(id)arg3;
- (void)unregisterSleepDataObserver:(id)arg1;
- (void)registerSleepDataObserver:(id)arg1;
- (id)initWithAlarmStorage:(id)arg1;

@end

