//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNChangesNotifierProxy;

@interface CNChangesNotifier : NSObject
{
    CNChangesNotifierProxy *_notifierProxy;
}

+ (void)flushSharedNotifier;
+ (id)sharedNotifierWithNotificationWrapper:(id)arg1 schedulerProvider:(id)arg2;
+ (id)sharedNotifier;
@property(retain, nonatomic) CNChangesNotifierProxy *notifierProxy; // @synthesize notifierProxy=_notifierProxy;
- (void).cxx_destruct;
- (void)setExternalNotificationCoalescingDelay:(double)arg1;
- (void)setForwardsSelfGeneratedDistributedSaveNotifications:(_Bool)arg1;
- (_Bool)forwardsSelfGeneratedDistributedSaveNotifications;
- (void)waitForCurrentTasksToFinish;
- (void)didChangeMeContactSuccessfully:(_Bool)arg1 fromContactStore:(id)arg2 requestIdentifier:(id)arg3;
- (void)didSaveChangesSuccessfully:(_Bool)arg1 fromContactStore:(id)arg2 requestIdentifier:(id)arg3;
- (void)willSaveChanges;
- (void)dealloc;
- (id)initWithNotificationWrapper:(id)arg1 schedulerProvider:(id)arg2;
- (id)init;

@end

