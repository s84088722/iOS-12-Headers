//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardFoundation/NSObject-Protocol.h>

@class ISPlayerView;

@protocol ISPlayerViewDelegate <NSObject>

@optional
- (void)playerViewGestureRecognizerDidChange:(ISPlayerView *)arg1;
- (void)playerViewIsInteractingDidChange:(ISPlayerView *)arg1;
- (void)playerViewPlaybackStateDidChange:(ISPlayerView *)arg1;
@end

