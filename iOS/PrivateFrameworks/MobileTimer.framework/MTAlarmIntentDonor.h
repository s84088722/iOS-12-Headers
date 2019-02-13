//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTAlarmObserver-Protocol.h>

@class MTAlarmStorage, NSMutableDictionary, NSString;
@protocol NAScheduler;

@interface MTAlarmIntentDonor : NSObject <MTAlarmObserver>
{
    MTAlarmStorage *_storage;
    NSMutableDictionary *_alarmsByID;
    id <NAScheduler> _serializer;
}

@property(retain, nonatomic) id <NAScheduler> serializer; // @synthesize serializer=_serializer;
@property(readonly, nonatomic) NSMutableDictionary *alarmsByID; // @synthesize alarmsByID=_alarmsByID;
@property(readonly, nonatomic) MTAlarmStorage *storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
- (void)source:(id)arg1 didChangeNextAlarm:(id)arg2;
- (void)source:(id)arg1 didFireAlarm:(id)arg2 triggerType:(unsigned long long)arg3;
- (void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didRemoveAlarms:(id)arg2;
- (void)source:(id)arg1 didUpdateAlarms:(id)arg2;
- (void)source:(id)arg1 didAddAlarms:(id)arg2;
- (void)prepareAlarms;
- (id)initWithStorage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

