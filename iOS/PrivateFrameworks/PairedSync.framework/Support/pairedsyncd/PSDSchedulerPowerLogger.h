//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PSDSchedulerObserver-Protocol.h"

@class NSString;

@interface PSDSchedulerPowerLogger : NSObject <PSDSchedulerObserver>
{
}

- (id)stringForPowerLogEvent:(unsigned long long)arg1;
- (void)didFinishSession;
- (void)didStartSyncSessionWithActivityCount:(unsigned long long)arg1 isResuming:(_Bool)arg2;
- (void)didFinishActivity:(id)arg1;
- (void)didStartActivity:(id)arg1;
- (void)scheduler:(id)arg1 didUpdateSyncSessionWithUpdate:(id)arg2;
- (void)scheduler:(id)arg1 willStartSyncSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
