//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface LocalAttachmentCleanUpSupport : NSObject
{
    NSObject<OS_dispatch_source> *_source;
}

- (void).cxx_destruct;
- (void)_dispatchCleanupAfterDelay:(long long)arg1;
- (void)_setTimerOnSource:(long long)arg1;
- (void)interruptNextScheduledCleanup;
- (void)scheduleNextCleanup;
- (void)cleanUpOrphanedFiles;
- (void)dealloc;
- (id)init;

@end

