//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PUTransitionViewAnimator;

@protocol PUTransitionViewAnimatorDelegate <NSObject>

@optional
- (void)transitionViewAnimatorDidEnd:(PUTransitionViewAnimator *)arg1 finished:(_Bool)arg2;
- (void)transitionViewAnimatorWillEnd:(PUTransitionViewAnimator *)arg1 withTargetTranslation:(inout struct CGPoint *)arg2;
- (void)transitionViewAnimatorDidUpdate:(PUTransitionViewAnimator *)arg1;
@end

