//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface ISDeferredDealloc : NSObject
{
    NSObject<OS_dispatch_queue> *_deferredDeallocQueue;
}

+ (id)sharedInstance;
- (void)dealloc;
- (void)_performDeferredDealloc:(id)arg1;
- (void)_performDeferredDealloc:(id)arg1 withDelay:(double)arg2;
- (id)init;

@end

