//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol OS_dispatch_queue;

@interface ICUserNotificationManager : NSObject
{
    NSMapTable *_contextForUserNotification;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_handleCallbackForUserNotification:(struct __CFUserNotification *)arg1 responseFlags:(unsigned long long)arg2;
- (void)displayUserNotification:(struct __CFUserNotification *)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end

