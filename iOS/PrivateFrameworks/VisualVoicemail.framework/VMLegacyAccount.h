//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class VMVoicemailManager;

@interface VMLegacyAccount : NSObject
{
    VMVoicemailManager *_voicemailManager;
}

@property(retain, nonatomic) VMVoicemailManager *voicemailManager; // @synthesize voicemailManager=_voicemailManager;
- (void).cxx_destruct;
- (id)allVoicemailsWithFlags:(unsigned long long)arg1 withoutFlags:(unsigned long long)arg2;
- (void)moveVoicemailFromTrash:(id)arg1;
- (void)moveVoicemailToTrash:(id)arg1;
- (id)voicemailWithIdentifier:(unsigned long long)arg1;
- (_Bool)isSubscribed;
- (void)setProvisionalPassword:(id)arg1;
- (void)setGreetingType:(long long)arg1 withData:(id)arg2 duration:(unsigned int)arg3;
- (void)synchronize:(_Bool)arg1;
- (_Bool)greetingAvailable;
- (int)mailboxUsage;
- (_Bool)isOfflineDueToRoaming;
- (_Bool)isOnline;
- (void)handlePasswordNotificationResponse:(id)arg1;
- (_Bool)isMessageWaiting;
- (unsigned int)recentUnreadCount;
- (unsigned int)unreadCount;
- (id)init;

@end

