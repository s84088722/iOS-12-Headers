//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ControlCenterUI/NSObject-Protocol.h>

@class UIView;

@protocol _UIPreviewInteractionViewControllerTransition <NSObject>
- (void)transitionDidEnd:(_Bool)arg1;
- (void)performTransitionFromView:(UIView *)arg1 toView:(UIView *)arg2 containerView:(UIView *)arg3;

@optional
- (void)performWithCustomAnimator:(void (^)(void))arg1 completion:(void (^)(_Bool))arg2;
- (void)prepareTransitionFromView:(UIView *)arg1 toView:(UIView *)arg2 containerView:(UIView *)arg3;
@end

