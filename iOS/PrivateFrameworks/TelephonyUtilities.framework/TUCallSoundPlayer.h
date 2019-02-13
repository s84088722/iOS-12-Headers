//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TUSoundPlayer;

@interface TUCallSoundPlayer : NSObject
{
    TUSoundPlayer *_player;
    long long _currentlyPlayingSoundType;
}

@property(nonatomic) long long currentlyPlayingSoundType; // @synthesize currentlyPlayingSoundType=_currentlyPlayingSoundType;
@property(retain, nonatomic) TUSoundPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
- (void)stopPlaying;
- (_Bool)attemptToPlayDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)attemptToPlayDescriptor:(id)arg1;
- (_Bool)attemptToPlaySoundType:(long long)arg1 forCall:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)attemptToPlaySoundType:(long long)arg1 forCall:(id)arg2;
- (id)init;

@end

