//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXAssetUIImageViewTile.h>

@class AVPlayerItem, ISWrappedAVAudioSession, ISWrappedAVPlayer, PXVideoPlayerView;

@interface PXAssetLoopUIViewTile : PXAssetUIImageViewTile
{
    unsigned long long _requestCount;
    long long _loopingVideoRequestID;
    PXVideoPlayerView *_loopingVideoView;
    ISWrappedAVPlayer *_loopingVideoPlayer;
    AVPlayerItem *__loopingPlayerItem;
    ISWrappedAVAudioSession *__audioSession;
}

@property(retain, nonatomic, setter=_setAudioSession:) ISWrappedAVAudioSession *_audioSession; // @synthesize _audioSession=__audioSession;
@property(retain, nonatomic, setter=_setLoopingPlayerItem:) AVPlayerItem *_loopingPlayerItem; // @synthesize _loopingPlayerItem=__loopingPlayerItem;
- (void).cxx_destruct;
- (void)imageDidChange;
- (void)setImageRequester:(id)arg1;
- (void)_handlePlayerItemResult:(id)arg1 info:(id)arg2 expectedRequestCount:(unsigned long long)arg3;
- (void)_requestLoopingVideoIfNeeded;
- (void)_updateLoopingVideoView;
- (id)view;
- (void)prepareForReuse;
- (void)becomeReusable;

@end

