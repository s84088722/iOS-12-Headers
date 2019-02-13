//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RemindersListModel.h"

@class NSArray, NSMutableArray;

@interface RemindersStandardListModel : RemindersListModel
{
    NSArray *_fakeFetchedReminders;
    _Bool _isToday;
    NSMutableArray *_completedReminders;
}

- (void).cxx_destruct;
- (void)moveReminderAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)removeReminderFromModel:(id)arg1;
- (id)description;
- (_Bool)invalidateMaintainedReminders;
- (void)protectedRemoveReminderAtIndex:(long long)arg1;
- (void)addReminder:(id)arg1 postponeSave:(_Bool)arg2;
- (_Bool)shouldInvalidateReminder:(id)arg1;
- (_Bool)matchesReminder:(id)arg1;
- (id)storeProtectedData:(id)arg1 rangeAlreadyFaulted:(struct _NSRange)arg2;
- (id)fetchProtectedData;
- (long long)_fetchCountOfCompletedRemindersInCalendars:(id)arg1;
- (id)_fetchCompletedRemindersInCalendars:(id)arg1;
- (void)_fetchRemindersWithDueDate:(id)arg1 calendars:(id)arg2 fetchedReminders:(id *)arg3 fetchedCompletedCount:(long long *)arg4;
- (void)_fetchRemindersForTodayCardWithDueDate:(id)arg1 calendars:(id)arg2 fetchedReminders:(id *)arg3 fetchedCompletedCount:(long long *)arg4;
- (id)predicateForCountingReminders;
- (void)checkOrUncheckReminder:(id)arg1;
- (long long)_compareReminder:(id)arg1 toReminder:(id)arg2;
- (void)faultReminder:(id)arg1;
- (id)propertiesToFetch;
- (long long)indexOfReminder:(id)arg1 protected:(_Bool)arg2;
- (id)reminderAtIndex:(long long)arg1;
@property(readonly, nonatomic) NSArray *completedReminders;
- (id)displayedReminders;
- (long long)numberOfReminders;
- (long long)numberOfIncompleteReminders;
- (void)setDueDate:(id)arg1;

@end

