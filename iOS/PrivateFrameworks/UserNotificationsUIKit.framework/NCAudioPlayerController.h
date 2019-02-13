//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayer;
@protocol NCAudioPlayerControllerDelegate;

@interface NCAudioPlayerController : NSObject
{
    _Bool _audioSessionActive;
    float _rate;
    id <NCAudioPlayerControllerDelegate> _delegate;
    AVPlayer *_player;
    long long _playbackState;
    long long _status;
    double _duration;
    long long _timeControlStatus;
}

@property(nonatomic) long long timeControlStatus; // @synthesize timeControlStatus=_timeControlStatus;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic, getter=isAudioSessionActive) _Bool audioSessionActive; // @synthesize audioSessionActive=_audioSessionActive;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) float rate; // @synthesize rate=_rate;
@property(readonly, nonatomic) long long playbackState; // @synthesize playbackState=_playbackState;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(nonatomic) __weak id <NCAudioPlayerControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handlePlayerItemFailedToPlayToEndTimeNotification:(id)arg1;
- (void)handlePlayerItemDidPlayToEndTimeNotification:(id)arg1;
- (void)handleAudioSessionMediaServicesWereResetNotification:(id)arg1;
- (void)handleAudioSessionMediaServicesWereLostNotification:(id)arg1;
- (void)handleAudioSessionRouteChangeNotification:(id)arg1;
- (void)handleAudioSessionInterruptionNotification:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)updateProximityMonitoring;
- (_Bool)shouldEnableProximityMonitoring;
- (void)deactivateAudioSession;
- (void)activateAudioSession;
- (void)setPlaybackState:(long long)arg1;
- (void)seekToTime:(float)arg1;
- (void)stop;
- (void)play;
- (void)pause;
@property(readonly, nonatomic) float currentTime;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1;
- (id)initWithURL:(id)arg1;

@end

