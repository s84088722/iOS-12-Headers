//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, NSNumber, NSString, NSURL;
@protocol AlarmDelegate;

@interface Alarm : NSObject
{
    unsigned int _hour;
    unsigned int _minute;
    unsigned int _daySetting;
    _Bool _allowsSnooze;
    NSDate *_lastModified;
    unsigned int _revision;
    Alarm *_editingProxy;
    _Bool _pretendActiveIfProxy;
    NSMutableDictionary *_settings;
    NSArray *_repeatDays;
    NSString *_vibrationID;
    _Bool _snoozed;
    _Bool _isSleepAlarm;
    _Bool _forceActiveForMigration;
    long long _soundType;
    NSString *_sound;
    NSString *_title;
    id <AlarmDelegate> _delegate;
    NSString *_alarmID;
    NSURL *_alarmIDURL;
}

+ (CDUnknownBlockType)timeComparator;
+ (_Bool)verifySettings:(id)arg1;
+ (_Bool)verifyDaySetting:(id)arg1 withMessageList:(id)arg2;
+ (_Bool)verifyMinuteSetting:(id)arg1 withMessageList:(id)arg2;
+ (_Bool)verifyHourSetting:(id)arg1 withMessageList:(id)arg2;
+ (_Bool)verifyIdSetting:(id)arg1 withMessageList:(id)arg2;
@property(retain, nonatomic) NSURL *alarmIDURL; // @synthesize alarmIDURL=_alarmIDURL;
@property(retain, nonatomic) NSString *alarmID; // @synthesize alarmID=_alarmID;
@property(nonatomic) _Bool forceActiveForMigration; // @synthesize forceActiveForMigration=_forceActiveForMigration;
@property(nonatomic) __weak id <AlarmDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned int revision; // @synthesize revision=_revision;
@property(readonly, nonatomic) NSDate *lastModified; // @synthesize lastModified=_lastModified;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *sound; // @synthesize sound=_sound;
@property(readonly, nonatomic) long long soundType; // @synthesize soundType=_soundType;
@property(nonatomic) _Bool allowsSnooze; // @synthesize allowsSnooze=_allowsSnooze;
@property(nonatomic) unsigned int daySetting; // @synthesize daySetting=_daySetting;
@property(nonatomic) unsigned int minute; // @synthesize minute=_minute;
@property(nonatomic) unsigned int hour; // @synthesize hour=_hour;
@property(nonatomic) _Bool isSleepAlarm; // @synthesize isSleepAlarm=_isSleepAlarm;
@property(readonly, nonatomic, getter=isSnoozed) _Bool snoozed; // @synthesize snoozed=_snoozed;
@property(readonly, nonatomic) Alarm *editingProxy; // @synthesize editingProxy=_editingProxy;
- (void).cxx_destruct;
- (void)setAlarmSoundVolume:(id)arg1;
- (id)alarmSoundVolume;
- (void)setAlarmSoundIdentifier:(id)arg1 ofType:(long long)arg2;
- (long long)alarmSoundType;
- (id)alarmSoundIdentifier;
- (id)description;
- (id)debugDescription;
@property(readonly, nonatomic) NSString *uiTitle;
@property(retain, nonatomic) NSString *vibrationID;
@property(copy, nonatomic) NSNumber *soundVolume;
- (void)setSound:(id)arg1 ofType:(long long)arg2;
@property(readonly, nonatomic) NSArray *repeatDays;
@property(readonly, nonatomic) _Bool repeats;
@property(nonatomic) long long bedtimeMinute;
@property(nonatomic) long long bedtimeHour;
@property(copy, nonatomic) NSNumber *bedtimeReminderMinutes;
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(readonly, nonatomic) NSDictionary *settings;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (long long)compareTime:(id)arg1;
- (void)markModified;
- (void)refreshActiveState;
- (id)_newBaseDateComponentsForDay:(long long)arg1;
- (id)timeZoneForOffsetCalculation;
- (id)nowDateForOffsetCalculation;
- (void)dropEditingProxy;
- (void)applyChangesFromEditingProxy;
- (void)prepareEditingProxy;
- (void)applySettings:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (id)init;

@end

