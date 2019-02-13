//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUVideoPlayerEventTracker-Protocol.h>

@class NSString, NUVideoAdHistoryEventTracker;
@protocol SVVideoPlaybackAdvancing, SVVideoPlaybackController, SVVideoQueueProviding, SVVideoViewControllerProviding;

@interface NUVideoPlayerDisappearanceController : NSObject <NUVideoPlayerEventTracker>
{
    NUVideoAdHistoryEventTracker *_adHistoryEventTracker;
    id <SVVideoViewControllerProviding> _videoViewControllerProvider;
    id <SVVideoPlaybackController> _playbackController;
    id <SVVideoPlaybackAdvancing> _playbackAdvancer;
    id <SVVideoQueueProviding> _queueProvider;
}

@property(readonly, nonatomic) __weak id <SVVideoQueueProviding> queueProvider; // @synthesize queueProvider=_queueProvider;
@property(readonly, nonatomic) __weak id <SVVideoPlaybackAdvancing> playbackAdvancer; // @synthesize playbackAdvancer=_playbackAdvancer;
@property(readonly, nonatomic) id <SVVideoPlaybackController> playbackController; // @synthesize playbackController=_playbackController;
@property(readonly, nonatomic) id <SVVideoViewControllerProviding> videoViewControllerProvider; // @synthesize videoViewControllerProvider=_videoViewControllerProvider;
@property(readonly, nonatomic) NUVideoAdHistoryEventTracker *adHistoryEventTracker; // @synthesize adHistoryEventTracker=_adHistoryEventTracker;
- (void).cxx_destruct;
- (void)videoPlayerDidBecomeInvisible;
- (id)initWithAdHistoryEventTracker:(id)arg1 videoViewControllerProvider:(id)arg2 playbackController:(id)arg3 playbackAdvancer:(id)arg4 queueProvider:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

