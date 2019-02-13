//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iAd/NSObject-Protocol.h>

@class ADAdImpressionPublicAttributes, ADPlayer, AVPlayer, UIViewController;

@protocol ADPlayerDelegate <NSObject>
- (void)adPlayerDidFinishPlayback:(ADPlayer *)arg1;
- (void)adPlayer:(ADPlayer *)arg1 elapsedTime:(double)arg2 totalTime:(double)arg3;
- (void)adPlayer:(ADPlayer *)arg1 readyForPlaybackWithAVPlayer:(AVPlayer *)arg2 impressionProperties:(ADAdImpressionPublicAttributes *)arg3;
- (void)adPlayerFailedToPlayWithUnknownError:(ADPlayer *)arg1;
- (void)adPlayerFailedToLoadAsset:(ADPlayer *)arg1;
- (void)adPlayerDidTimeout:(ADPlayer *)arg1;

@optional
- (void)adPlayer:(ADPlayer *)arg1 didChangePlaybackState:(unsigned long long)arg2;
- (UIViewController *)viewControllerForActionFromAdPlayer:(ADPlayer *)arg1;
@end
