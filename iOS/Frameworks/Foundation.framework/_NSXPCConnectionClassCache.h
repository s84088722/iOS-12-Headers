//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface _NSXPCConnectionClassCache : NSObject
{
    struct _opaque_pthread_mutex_t _lock;
    NSMutableSet *_cache;
}

- (void)clear;
- (void)addClass:(Class)arg1;
- (_Bool)containsClass:(Class)arg1;
- (void)dealloc;
- (id)init;

@end

