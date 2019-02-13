//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _PASLock;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PPEventCache : NSObject
{
    CDUnknownBlockType _backfiller;
    _PASLock *_data;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    unsigned long long _memoryPressureStatus;
}

- (void).cxx_destruct;
- (id)cachedEventHighlightForEKEvent:(id)arg1 rankingOptions:(int)arg2;
- (void)setEventHighlight:(id)arg1;
- (void)evictAllEventsNotInRanges:(id)arg1;
- (void)evictAllEventsNotInRange:(struct _NSRange)arg1;
- (void)removeAllObjects;
- (void)refreshCachedEvent:(id)arg1;
- (id)evictEventWithIdentifier:(id)arg1;
- (id)objectForRange:(struct _NSRange)arg1;
- (void)_handleMemoryPressureStatus;
- (void)setExtraSecondsToBackfill:(unsigned long long)arg1;
- (id)initWithBackfiller:(CDUnknownBlockType)arg1;

@end

