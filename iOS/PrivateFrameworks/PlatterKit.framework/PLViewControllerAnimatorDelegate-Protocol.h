//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PlatterKit/NSObject-Protocol.h>

@class PLViewControllerAnimator;
@protocol UIViewControllerContextTransitioning;

@protocol PLViewControllerAnimatorDelegate <NSObject>

@optional
- (void)viewControllerAnimator:(PLViewControllerAnimator *)arg1 didEndDismissalAnimation:(_Bool)arg2 withTransitionContext:(id <UIViewControllerContextTransitioning>)arg3;
- (void)viewControllerAnimator:(PLViewControllerAnimator *)arg1 didEndPresentationAnimation:(_Bool)arg2 withTransitionContext:(id <UIViewControllerContextTransitioning>)arg3;
@end

