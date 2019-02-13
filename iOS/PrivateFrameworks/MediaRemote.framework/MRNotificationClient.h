//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOrderedSet;
@protocol OS_dispatch_queue;

@interface MRNotificationClient : NSObject
{
    unsigned long long _registeredNowPlayingObservers;
    NSObject<OS_dispatch_queue> *_customNotificationsQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSOrderedSet *_nowPlayingNotifications;
    NSOrderedSet *_routesChangedNotifications;
    NSOrderedSet *_volumeControlNotifications;
    NSOrderedSet *_externalScreenNotifications;
    NSOrderedSet *_originNotifications;
    NSOrderedSet *_supportedCommandsNotifications;
    NSOrderedSet *_voiceInputNotifications;
    NSOrderedSet *_errorNotifications;
    _Bool _receivesExternalScreenTypeChangedNotifications;
    _Bool _receivesSupportedCommandsNotifications;
    _Bool _receivesRoutesChangedNotifications;
    _Bool _receivesVolumeControlNotifications;
    _Bool _receivesOriginChangedNotifications;
    _Bool _receivesPlaybackErrorNotifications;
    _Bool _receivesVoiceInputRecordingStateNotifications;
}

+ (id)nowPlayingNotifications;
@property(nonatomic) _Bool receivesVoiceInputRecordingStateNotifications; // @synthesize receivesVoiceInputRecordingStateNotifications=_receivesVoiceInputRecordingStateNotifications;
@property(nonatomic) _Bool receivesPlaybackErrorNotifications; // @synthesize receivesPlaybackErrorNotifications=_receivesPlaybackErrorNotifications;
@property(nonatomic) _Bool receivesOriginChangedNotifications; // @synthesize receivesOriginChangedNotifications=_receivesOriginChangedNotifications;
@property(nonatomic) _Bool receivesVolumeControlNotifications; // @synthesize receivesVolumeControlNotifications=_receivesVolumeControlNotifications;
@property(nonatomic) _Bool receivesRoutesChangedNotifications; // @synthesize receivesRoutesChangedNotifications=_receivesRoutesChangedNotifications;
@property(nonatomic) _Bool receivesSupportedCommandsNotifications; // @synthesize receivesSupportedCommandsNotifications=_receivesSupportedCommandsNotifications;
@property(nonatomic) _Bool receivesExternalScreenTypeChangedNotifications; // @synthesize receivesExternalScreenTypeChangedNotifications=_receivesExternalScreenTypeChangedNotifications;
- (void).cxx_destruct;
- (_Bool)_postNotification:(id)arg1 userInfo:(id)arg2 object:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (_Bool)postNotification:(id)arg1 userInfo:(id)arg2 object:(id)arg3;
- (void)dispatchNotification:(id)arg1 userInfo:(id)arg2 object:(id)arg3;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property(readonly, nonatomic, getter=isRegisteredForNowPlayingNotifications) _Bool registeredForNowPlayingNotifications;
- (void)unregisterForNowPlayingNotifications;
- (void)registerForNowPlayingNotificationsWithQueue:(id)arg1 force:(_Bool)arg2;
- (void)registerForNowPlayingNotificationsWithQueue:(id)arg1;
- (id)init;

@end

