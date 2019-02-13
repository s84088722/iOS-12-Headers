//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVPlayer.h>

@class AVPlayerItem;
@protocol RCAVPlayerDelegate;

@interface RCAVPlayer : AVPlayer
{
    _Bool _valid;
    _Bool _scrubbing;
    id _periodicTimeObserverToken;
    AVPlayerItem *_AVPlayerItemBeingObserved;
    double _updateRate;
    id <RCAVPlayerDelegate> _delegate;
}

@property(nonatomic) __weak id <RCAVPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double updateRate; // @synthesize updateRate=_updateRate;
- (void).cxx_destruct;
- (void)_endScrubbing;
- (void)_beginScrubbing;
- (void)_invalidate;
- (void)_rateDidChange;
- (void)_periodicTimeUpdate;
- (void)_currentItemBecameReadyToPlay;
- (void)_endObservingObservedPlayerItem;
- (void)_beginObservingPlayerItem:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_AVAudioSessionMediaServicesWereResetNotification:(id)arg1;
- (void)_AVAudioSessionMediaServicesWereLostNotification:(id)arg1;
@property(readonly, nonatomic) _Bool isReadyToPlay;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1;
- (void)dealloc;
- (id)init;

@end

