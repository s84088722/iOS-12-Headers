//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString;
@protocol OS_os_log;

@interface HKSynchronousObserverSet : NSObject
{
    NSHashTable *_observerTable;
    NSString *_name;
    NSObject<OS_os_log> *_category;
    struct os_unfair_lock_s _lock;
}

- (void).cxx_destruct;
@property(readonly) unsigned long long count;
- (void)notifyObservers:(CDUnknownBlockType)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (id)initWithName:(id)arg1 loggingCategory:(id)arg2;

@end

