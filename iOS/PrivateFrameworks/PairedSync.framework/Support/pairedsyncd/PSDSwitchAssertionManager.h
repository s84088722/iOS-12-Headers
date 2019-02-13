//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PSDSchedulerObserver-Protocol.h"

@class NRActiveDeviceAssertion, NSString;

@interface PSDSwitchAssertionManager : NSObject <PSDSchedulerObserver>
{
    NRActiveDeviceAssertion *_assertion;
}

- (void).cxx_destruct;
- (void)scheduler:(id)arg1 didUpdateSyncSessionWithUpdate:(id)arg2;
- (void)scheduler:(id)arg1 didClearSyncSession:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)scheduler:(id)arg1 willStartSyncSession:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

