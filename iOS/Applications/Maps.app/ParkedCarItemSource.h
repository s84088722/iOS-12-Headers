//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PersonalizedItemSource.h"

#import "ParkedCarManagerObserver-Protocol.h"

@class NSObject, NSString, ParkedCarPersonalizedItem;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ParkedCarItemSource : PersonalizedItemSource <ParkedCarManagerObserver>
{
    ParkedCarPersonalizedItem *_item;
    NSObject<OS_dispatch_queue> *_lockQueue;
}

- (void).cxx_destruct;
- (void)parkedCarManager:(id)arg1 didUpdateParkedCar:(id)arg2;
- (void)parkedCarManager:(id)arg1 didAddParkedCar:(id)arg2;
- (void)parkedCarManager:(id)arg1 didRemoveParkedCar:(id)arg2;
- (id)allItems;
- (void)dealloc;
- (void)assignItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

