//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _NSFileAccessAsynchronousProcessAssertionScheduler : NSObject
{
    NSMutableDictionary *_assertionsPerPID;
    struct os_unfair_lock_s _lock;
}

+ (id)sharedInstance;
- (void)removeAssertionWithToken:(id)arg1;
- (id)addAssertionWithName:(id)arg1 forPID:(int)arg2;
- (id)init;

@end

