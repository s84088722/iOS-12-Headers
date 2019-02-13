//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface CLKComplicationObserver : NSObject
{
    NSHashTable *_wakeSessionObservers;
    NSHashTable *_observers;
}

+ (id)sharedObserver;
- (void).cxx_destruct;
- (void)complicationListDidChange;
- (void)reloadOrExtendForBundleID:(id)arg1;
- (void)wakeSessionWillEndForBundleID:(id)arg1;
- (void)wakeSessionWillBeginForBundleID:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)removeWakeSessionObserver:(id)arg1;
- (void)addWakeSessionObserver:(id)arg1;
- (id)init;

@end

