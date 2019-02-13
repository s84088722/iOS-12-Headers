//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class NSError, PGPictureInPictureProxy;

@protocol PGPictureInPictureProxyDelegate <NSObject>

@optional
- (void)pictureInPictureProxyPictureInPictureInterruptionEnded:(PGPictureInPictureProxy *)arg1;
- (void)pictureInPictureProxyPictureInPictureInterruptionBegan:(PGPictureInPictureProxy *)arg1;
- (void)pictureInPictureProxy:(PGPictureInPictureProxy *)arg1 didStopPictureInPictureWithAnimationType:(long long)arg2 reason:(long long)arg3;
- (void)pictureInPictureProxy:(PGPictureInPictureProxy *)arg1 willStopPictureInPictureWithAnimationType:(long long)arg2 reason:(long long)arg3;
- (void)pictureInPictureProxy:(PGPictureInPictureProxy *)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(void (^)(_Bool))arg2;
- (void)pictureInPictureProxy:(PGPictureInPictureProxy *)arg1 failedToStartPictureInPictureWithAnimationType:(long long)arg2 error:(NSError *)arg3;
- (void)pictureInPictureProxy:(PGPictureInPictureProxy *)arg1 didStartPictureInPictureWithAnimationType:(long long)arg2;
- (void)pictureInPictureProxy:(PGPictureInPictureProxy *)arg1 willStartPictureInPictureWithAnimationType:(long long)arg2;
- (struct CGRect)pictureInPictureProxyViewFrameForTransitionAnimation:(PGPictureInPictureProxy *)arg1;
- (long long)pictureInPictureProxyInterfaceOrientationForTransitionAnimation:(PGPictureInPictureProxy *)arg1;
@end

