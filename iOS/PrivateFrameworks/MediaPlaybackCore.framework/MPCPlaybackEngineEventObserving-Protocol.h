//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@class MPAVItem, MPCPlaybackEngine, MPPlaybackContext, NSError, NSString;

@protocol MPCPlaybackEngineEventObserving <NSObject>

@optional
- (void)engineDidEndStateRestoration:(MPCPlaybackEngine *)arg1;
- (void)engineWillBeginStateRestoration:(MPCPlaybackEngine *)arg1;
- (void)engine:(MPCPlaybackEngine *)arg1 didChangeRepeatType:(long long)arg2;
- (void)engine:(MPCPlaybackEngine *)arg1 didChangeShuffleType:(long long)arg2;
- (void)engine:(MPCPlaybackEngine *)arg1 didChangeQueueWithReason:(NSString *)arg2;
- (void)engine:(MPCPlaybackEngine *)arg1 didResetQueueWithPlaybackContext:(MPPlaybackContext *)arg2 error:(NSError *)arg3;
- (void)engine:(MPCPlaybackEngine *)arg1 willResetQueueWithPlaybackContext:(MPPlaybackContext *)arg2;
- (void)engine:(MPCPlaybackEngine *)arg1 didChangeToItem:(MPAVItem *)arg2;
- (void)engine:(MPCPlaybackEngine *)arg1 willChangeToItem:(MPAVItem *)arg2 fromItem:(MPAVItem *)arg3;
- (void)engine:(MPCPlaybackEngine *)arg1 didChangeToState:(unsigned long long)arg2;
@end

