//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EKCalendarVisibilityManager, EKEventStore, NSArray, PPContactScorer, PPEventCache, _PASNotificationToken;
@protocol OS_dispatch_queue;

@interface PPLocalEventStore : NSObject
{
    EKEventStore *_store;
    _Bool _accessGranted;
    NSArray *_calendars;
    PPEventCache *_eventCache;
    EKCalendarVisibilityManager *_calendarVisibilityManager;
    NSObject<OS_dispatch_queue> *_eventLoadingQueue;
    PPContactScorer *_contactScorer;
    _PASNotificationToken *_assetUpdateNotificationToken;
}

+ (id)defaultStore;
- (void).cxx_destruct;
- (void)refreshCacheWithChanges:(id)arg1;
- (void)dealloc;
- (id)eventsFromDate:(id)arg1 toDate:(id)arg2;
- (void)iterateEventsFrom:(id)arg1 to:(id)arg2 inChunks:(int)arg3 withBlock:(CDUnknownBlockType)arg4;
- (id)eventMetaDataFromDate:(id)arg1 toDate:(id)arg2;
- (id)eventHighlightForEKEvent:(id)arg1 usingScorer:(id)arg2 date:(id)arg3 rankingOptions:(int)arg4;
- (id)eventHighlightsFrom:(id)arg1 to:(id)arg2 options:(int)arg3;
- (id)calendars;
- (void)_registerForNotifications;
- (double)_scoreForSecondsRelativeToNow:(double)arg1;
- (id)_filterOutAllDayAndMultiDayEvents:(id)arg1;
- (_Bool)_inObservedCalendars:(id)arg1;
- (_Bool)_isAllDayOrMultiDay:(id)arg1;
- (id)_predicateForRange:(struct _NSRange)arg1;
- (id)_loadCalendars;
- (void)_preloadEvents;
- (id)getWeakStore;
- (id)_makeEventCache;
- (void)askForEKAccess;
- (void)_setupCalendarVisibilityManager;
- (id)_recordForDeletedEKEventWithChangeIdentifier:(id)arg1;
- (id)_recordForEKEvent:(id)arg1;
- (id)eventWithExternalID:(id)arg1;
- (id)eventsInRange:(struct _NSRange)arg1;
- (id)resolveEventNameRecordChanges:(id)arg1 client:(id)arg2 error:(id *)arg3;
- (_Bool)_ekChangeIsEvent:(id)arg1;
- (id)_resolveEventFromEKChange:(id)arg1;
- (id)eventNameRecordsForClient:(id)arg1 error:(id *)arg2;
- (_Bool)iterEventNameRecordsForClient:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (id)init;
- (void)clearCaches;

@end

