//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SGNotificationListener : NSObject
{
    CDUnknownBlockType _callback;
    struct __CFString *_notification;
    struct _opaque_pthread_mutex_t _lock;
}

- (void).cxx_destruct;
- (_Bool)unsubscribe;
- (void)dealloc;
- (void)_notify;
- (id)initWithNotification:(struct __CFString *)arg1 callback:(CDUnknownBlockType)arg2;

@end

