//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface DistributedNotificationCenter : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_observers;
}

+ (void)unregisterObserverWithMessage:(id)arg1 connection:(id)arg2;
+ (void)registerObserverWithMessage:(id)arg1 connection:(id)arg2;
+ (void)observeXPCServer:(id)arg1;
+ (id)defaultCenter;
- (void)_saveRegisteredPortNames;
- (void)_removeObserverWithPortName:(id)arg1 notificationName:(id)arg2;
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_addObserverWithPortName:(id)arg1 notificationName:(id)arg2;
- (void)postNotificationName:(struct __CFString *)arg1;
- (void)dealloc;
- (id)init;

@end

