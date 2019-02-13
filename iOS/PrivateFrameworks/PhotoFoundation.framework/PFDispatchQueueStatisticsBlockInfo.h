//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PFDispatchQueueStatisticsBlockInfo : NSObject
{
    _Bool _skippedExecuting;
    unsigned long long _receivedTimestamp;
    unsigned long long _enqueueTimestamp;
    unsigned long long _dequeueTimestamp;
    unsigned long long _executionTimestamp;
    unsigned long long _completionTimestamp;
}

+ (void)initialize;
@property _Bool skippedExecuting; // @synthesize skippedExecuting=_skippedExecuting;
@property(readonly) unsigned long long completionTimestamp; // @synthesize completionTimestamp=_completionTimestamp;
@property(readonly) unsigned long long executionTimestamp; // @synthesize executionTimestamp=_executionTimestamp;
@property(readonly) unsigned long long dequeueTimestamp; // @synthesize dequeueTimestamp=_dequeueTimestamp;
@property(readonly) unsigned long long enqueueTimestamp; // @synthesize enqueueTimestamp=_enqueueTimestamp;
@property(readonly) unsigned long long receivedTimestamp; // @synthesize receivedTimestamp=_receivedTimestamp;
- (unsigned long long)executionTime;
- (unsigned long long)executionLatency;
- (void)blockCompleted;
- (void)blockWillStart;
- (void)blockDequeued;
- (void)blockEnqueued;
- (unsigned long long)nsecBetween:(unsigned long long)arg1 and:(unsigned long long)arg2;
- (unsigned long long)currentAbsoluteTime;
- (id)init;

@end

