//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoTransitionObserver-Protocol.h>

@class NSString;
@protocol SVVideoEventTracker, SVVideoEventTrackerProviding, SVVideoPlaybackAttemptTrackerFactory, SVVideoPlaybackAttemptTracking;

@interface SVVideoPlaybackAttemptTrackerManager : NSObject <SVVideoTransitionObserver>
{
    id <SVVideoPlaybackAttemptTrackerFactory> _playbackAttemptTrackerFactory;
    id <SVVideoEventTrackerProviding> _eventTrackerProvider;
    id <SVVideoPlaybackAttemptTracking> _playbackAttemptTracker;
    id <SVVideoEventTracker> _eventTracker;
}

@property(retain, nonatomic) id <SVVideoEventTracker> eventTracker; // @synthesize eventTracker=_eventTracker;
@property(retain, nonatomic) id <SVVideoPlaybackAttemptTracking> playbackAttemptTracker; // @synthesize playbackAttemptTracker=_playbackAttemptTracker;
@property(readonly, nonatomic) id <SVVideoEventTrackerProviding> eventTrackerProvider; // @synthesize eventTrackerProvider=_eventTrackerProvider;
@property(readonly, nonatomic) id <SVVideoPlaybackAttemptTrackerFactory> playbackAttemptTrackerFactory; // @synthesize playbackAttemptTrackerFactory=_playbackAttemptTrackerFactory;
- (void).cxx_destruct;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)initWithPlaybackAttemptTrackerFactory:(id)arg1 eventTrackerProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

