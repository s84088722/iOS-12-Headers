//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKPersistentCalendarItem.h>

@interface EKPersistentReminder : EKPersistentCalendarItem
{
}

+ (id)reminderWithRandomUUID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)setDisplayOrder:(unsigned long long)arg1;
- (unsigned long long)displayOrder;
- (void)setFirstAlertDate:(id)arg1;
- (id)firstAlertDate;
- (void)setCompletionDate:(id)arg1;
- (id)completionDate;
- (void)setDueDateAllDay:(_Bool)arg1;
- (_Bool)dueDateAllDay;
- (void)setDueDateTimeZone:(id)arg1;
- (id)dueDateTimeZone;
- (void)setDueDate:(id)arg1;
- (id)dueDate;
- (int)entityType;

@end

