//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OpusKit/AVAudioPlayerDelegate-Protocol.h>

@class AVPlayer, NSArray, NSMutableDictionary, NSOperationQueue, NSString, OKAudioDucker, OKMediaItem, OKPresentation;
@protocol OKAudioPlaylistDelegate, OS_dispatch_queue;

@interface OKAudioPlaylist : NSObject <AVAudioPlayerDelegate>
{
    NSArray *_mediaItems;
    NSMutableDictionary *_players;
    _Bool _playing;
    _Bool _loops;
    long long _currentPlayerIndex;
    AVPlayer *_currentMedia;
    OKAudioDucker *_ducker;
    OKPresentation *_presentation;
    id <OKAudioPlaylistDelegate> _delegate;
    NSOperationQueue *_mediaItemOperationQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
    double _playingMusicCurrentTime;
    double _playingMusicDuration;
}

@property(nonatomic) _Bool loops; // @synthesize loops=_loops;
- (void)endFading;
- (void)beginFadingWithDuration:(double)arg1;
- (void)endDucking;
- (void)beginDuckingToLevel:(double)arg1 fadeDuration:(double)arg2;
- (void)audioFinishedPlaying:(id)arg1;
- (void)rewind;
- (void)prev;
- (void)next;
- (void)stop;
- (void)play;
- (void)_playMediaItem:(id)arg1 forMediaItem:(id)arg2;
@property(nonatomic) double playingMusicCurrentTime; // @synthesize playingMusicCurrentTime=_playingMusicCurrentTime;
@property(readonly, nonatomic) double playingMusicDuration; // @synthesize playingMusicDuration=_playingMusicDuration;
@property(nonatomic) float volume;
- (void)setPlaying:(_Bool)arg1;
- (_Bool)isPlaying;
- (id)currentMedia;
- (void)setCurrentMedia:(id)arg1;
@property(readonly, nonatomic) OKMediaItem *playingItem;
@property(nonatomic) id <OKAudioPlaylistDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)initWithAudioItems:(id)arg1 presentation:(id)arg2;
- (id)initWithAudioURLs:(id)arg1 presentation:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

