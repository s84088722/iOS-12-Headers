//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngine/RESingleton.h>

@class NSDate, NSMutableDictionary, NSObject, REUpNextTimer;
@protocol OS_dispatch_queue;

@interface RERelevanceSignalUpdateScheduler : RESingleton
{
    NSMutableDictionary *_updateBlocks;
    NSObject<OS_dispatch_queue> *_queue;
    REUpNextTimer *_timer;
    NSDate *_lastFireDate;
    _Bool _alreadyScheduled;
}

- (void).cxx_destruct;
- (void)_queue_updateBlocks;
- (void)_updateBlocks;
- (void)_rescheduleTimer;
- (void)unscheduleEventWithIdentifier:(id)arg1;
- (void)scheduleEventWithIdentifier:(id)arg1 updateFrequency:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

@end

