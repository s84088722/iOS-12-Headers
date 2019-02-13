//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ISIconCache, NSHashTable;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ISIconManager : NSObject
{
    struct os_unfair_lock_s _observerLock;
    id _iconCache;
    id _iconRegistry;
    id _observers;
    id _internalQueue;
    id _notificationIconsInvalidatedToken;
}

+ (id)sharedInstance;
@property(retain) id notificationIconsInvalidatedToken; // @synthesize notificationIconsInvalidatedToken=_notificationIconsInvalidatedToken;
@property(retain) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain) NSHashTable *iconRegistry; // @synthesize iconRegistry=_iconRegistry;
@property(readonly) ISIconCache *iconCache; // @synthesize iconCache=_iconCache;
- (void).cxx_destruct;
- (void)_notifyObserversDidInvalidateIcons:(id)arg1;
- (void)_validateIcons:(id)arg1;
- (void)_handleIconsInvalidatedNotification:(id)arg1;
- (void)invalidateIcons:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)findOrRegisterIcon:(id)arg1;
- (void)dealloc;
- (id)_init;

@end

