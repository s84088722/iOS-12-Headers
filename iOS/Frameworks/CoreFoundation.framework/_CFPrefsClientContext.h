//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface _CFPrefsClientContext : NSObject
{
    // Error parsing type: A@, name: _cfprefsd
    struct __CFDictionary *_suiteCache;
    struct __CFSet *_observedSources;
    NSObject<OS_xpc_object> *_entitlements;
    struct __CFBoolean *_sandboxed;
    struct os_unfair_lock_s _lock;
    BOOL _isPlatformBinary;
    _Bool _impersonatingAnotherProcess;
    _Bool _hasInFlightKVONotifications;
    _Bool _didDeferKVONotifications;
    _Bool _valid;
}

@end

