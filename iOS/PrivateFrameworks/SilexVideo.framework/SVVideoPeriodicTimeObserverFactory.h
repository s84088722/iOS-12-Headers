//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoPeriodicTimeObserverFactory-Protocol.h>

@class NSString;
@protocol SVPlayerProviding, SVTimeConverting, SVVideoPlaybackStateObserverFactory;

@interface SVVideoPeriodicTimeObserverFactory : NSObject <SVVideoPeriodicTimeObserverFactory>
{
    id <SVPlayerProviding> _playerProvider;
    id <SVVideoPlaybackStateObserverFactory> _playbackStateObserverFactory;
    id <SVTimeConverting> _timeConverter;
}

@property(readonly, nonatomic) id <SVTimeConverting> timeConverter; // @synthesize timeConverter=_timeConverter;
@property(readonly, nonatomic) id <SVVideoPlaybackStateObserverFactory> playbackStateObserverFactory; // @synthesize playbackStateObserverFactory=_playbackStateObserverFactory;
@property(readonly, nonatomic) id <SVPlayerProviding> playerProvider; // @synthesize playerProvider=_playerProvider;
- (void).cxx_destruct;
- (id)createPeriodicTimeObserverForVideo:(id)arg1;
- (id)initWithPlayerProvider:(id)arg1 playbackStateObserverFactory:(id)arg2 timeConverter:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

