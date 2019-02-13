//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class ACAccountStore, NSMutableDictionary, NSString;

@interface BirthdayCalendarUpdater : NSOperation
{
    // Error parsing type: ^{CalDatabase={__CFRuntimeBase=QAQ}i^{CPRecordStore}^{CalEventOccurrenceCache}^{CalScheduledTaskCache}^{__CFDictionary}^{__CFDictionary}{_opaque_pthread_mutex_t=q[56c]}II^{__CFArray}^{__CFString}^{__CFArray}ii^{__CFString}^{__CFString}^{__CFString}i@?{_opaque_pthread_mutex_t=q[56c]}B^{__CFArray}^{__CFArray}^{__CFArray}^{__CFArray}B@B}, name: _database
    void *_calendar;
    void *_facebookCalendar;
    void *_addressBook;
    ACAccountStore *_accountStore;
    NSMutableDictionary *_accountIdentifiersToIsFacebook;
    NSString *_birthdaySummary;
    long long _defaultAlarmOffset;
}

- (void).cxx_destruct;
- (void)main;
- (int)_pruneEventsFromCalendar:(void *)arg1 matchingFacebookStatus:(_Bool)arg2 andStoreInRecord:(id)arg3;
- (int)_processPerson:(void *)arg1 withBirthdays:(id)arg2 forCalendar:(void *)arg3 preExistingEvents:(id)arg4 addedBirthdayRecord:(id)arg5;
- (id)_birthdayCalendarForCalendarScale:(id)arg1 useCurrentTimezone:(_Bool)arg2;
- (id)_birthdayCalendarForCalendarScale:(id)arg1;
- (_Bool)_isPersonFromFacebook:(void *)arg1;
- (_Bool)_areNormalizedBirthdaysTheSame:(id)arg1 birthday2:(id)arg2;
- (id)copyNormalizedBirthdaysForPerson:(void *)arg1;
- (id)copyOldestNormalizedBirthdaysForPerson:(void *)arg1;
- (_Bool)_isYearlessBirthday:(id)arg1;
- (void *)newBirthdayEventForBirthday:(id)arg1 andPerson:(void *)arg2;
- (void)addDefaultAlarmToEvent:(void *)arg1;
- (_Bool)setBirthday:(id)arg1 forEvent:(void *)arg2;
- (id)copyBirthdayEventSummaryForPerson:(void *)arg1;
- (void)dealloc;
- (id)init;

@end

