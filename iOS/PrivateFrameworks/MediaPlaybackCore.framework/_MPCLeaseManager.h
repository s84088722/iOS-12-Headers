//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPCPlaybackEngine;

@interface _MPCLeaseManager : NSObject
{
    _Bool _isPreparingForImminentPlaybackIntent;
    MPCPlaybackEngine *_playbackEngine;
}

@property(readonly, nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
- (void).cxx_destruct;
- (void)_playerDidPauseForPlaybackPreventionNotification:(id)arg1;
- (void)prepareForPlayback;
- (void)dealloc;
- (id)initWithPlaybackEngine:(id)arg1;

@end

