//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EKEventStore, NSMutableArray, NSString;

@interface RemindersSearchModel : NSObject
{
    EKEventStore *_eventStore;
    NSMutableArray *_uncompletedSearchResults;
    NSMutableArray *_completedSearchResults;
    id _lastReminderFetch;
    NSString *_lastSearchQuery;
}

- (void).cxx_destruct;
- (void)_cancelLastFetch;
- (void)_refreshSearchResultsWithItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)completedReminders;
- (void)performTestSearchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)performSearchWithText:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)propertiesToFetch;
- (id)uncompletedReminders;
- (id)initWithEventStore:(id)arg1;

@end

