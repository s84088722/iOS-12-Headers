//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SGJournal : NSObject
{
    NSMutableArray *_calendarObservers;
    NSMutableArray *_contactsObservers;
    NSMutableArray *_queuedOperations;
    _Bool _observersFrozen;
}

- (void).cxx_destruct;
- (_Bool)hasObserver:(id)arg1;
- (void)thawObserversForTesting;
- (void)freezeObservers;
- (void)addContactsObserver:(id)arg1;
- (void)addCalendarObserver:(id)arg1;
- (void)addEntries:(id)arg1;
- (unsigned long long)_eventBatchOperationSupportedForEntries:(id)arg1;
- (void)addEntry:(id)arg1;
- (void)_callCalendarObservers:(id)arg1 contactsObservers:(id)arg2 withEntry:(id)arg3;
- (id)init;

@end

