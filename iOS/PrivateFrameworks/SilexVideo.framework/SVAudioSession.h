//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol OS_dispatch_semaphore;

@interface SVAudioSession : NSObject
{
    _Bool _audioSessionActive;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSMapTable *_players;
}

+ (id)sharedSession;
@property(readonly, nonatomic) NSMapTable *players; // @synthesize players=_players;
@property(readonly, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(nonatomic, getter=isAudioSessionActive) _Bool audioSessionActive; // @synthesize audioSessionActive=_audioSessionActive;
- (void).cxx_destruct;
- (id)desiredAudioSessionCategory;
- (void)deactivateAudioSessionCategory;
- (void)activateAudioSessionCategory;
- (void)setupAudioSessionCategory;
- (_Bool)needsToSetupAudioSessionCategory;
- (_Bool)canDeactivateAudioSession;
- (_Bool)shouldActivateAudioSession;
- (void)removeInterestForPlayer:(id)arg1;
- (void)addInterestForPlayer:(id)arg1 withMode:(int)arg2;
- (id)init;

@end

