//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class VMVoicemailManager;

@interface VMServiceClient : NSObject
{
    VMVoicemailManager *_voicemailManager;
}

+ (id)sharedClient;
@property(retain, nonatomic) VMVoicemailManager *voicemailManager; // @synthesize voicemailManager=_voicemailManager;
- (void).cxx_destruct;
- (void)handleOnlineStatusChangedNotification:(id)arg1;
- (void)handleSubscriptionStatusChangedNotification:(id)arg1;
- (void)handleVoicemailsChangedNotification:(id)arg1;
- (void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (_Bool)sharedServiceIsSubscribed;
- (id)sharedAccount;
- (void)dealloc;
- (id)init;

@end

