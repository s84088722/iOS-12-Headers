//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PSDSchedulerObserver-Protocol.h"

@class NSDictionary, NSString;
@protocol OS_dispatch_queue;

@interface PSDSchedulerIDSObserver : NSObject <PSDSchedulerObserver>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_startingStatistics;
    _Bool _syncComplete;
}

- (void).cxx_destruct;
- (void)_logAggdKey:(id)arg1 value:(long long)arg2;
- (id)aggdKeyForStatistics:(id)arg1 channelName:(id)arg2;
- (void)_logStatistics:(id)arg1 channelName:(id)arg2;
- (void)_logStatisticsCollectionDiff:(id)arg1;
- (void)_diffWithStatistics:(id)arg1;
- (void)_requestFinalStatisticsIfPossibleWithBlock:(CDUnknownBlockType)arg1;
- (void)scheduler:(id)arg1 didClearSyncSession:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)scheduler:(id)arg1 willStartSyncSession:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

