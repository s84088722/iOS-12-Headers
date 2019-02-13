//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPreviewPresentationController.h>

#import <PlatterKit/PLExpandedPlatterPresentationController-Protocol.h>

@class NSString, PLExpandedPlatterPresentationControllerHelper, UIPanGestureRecognizer;
@protocol PLExpandedPlatterPresentationControllerDelegate;

@interface PLExpandedPlatterPreviewPresentationController : UIPreviewPresentationController <PLExpandedPlatterPresentationController>
{
    PLExpandedPlatterPresentationControllerHelper *_presentationControllerHelper;
    id <PLExpandedPlatterPresentationControllerDelegate> _presentationControllerDelegate;
}

+ (_Bool)_shouldInterdictServiceViewTouches;
+ (struct CGRect)useableContainerViewBoundsForExpandedPlatter:(id)arg1 inContainerViewWithBounds:(struct CGRect)arg2;
@property(nonatomic) __weak id <PLExpandedPlatterPresentationControllerDelegate> presentationControllerDelegate; // @synthesize presentationControllerDelegate=_presentationControllerDelegate;
- (void).cxx_destruct;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)containerViewWillLayoutSubviews;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionWillBegin;
- (_Bool)_shouldDisableInteractionDuringTransitions;
- (_Bool)_shouldMakePresentedViewControllerFirstResponder;
- (void)viewControllerAnimatorDidFinishFirstResponderChanges:(id)arg1;
- (void)viewControllerAnimator:(id)arg1 willBeginPresentationAnimationWithTransitionContext:(id)arg2;
- (struct CGRect)initialPresentationFrameOfPresentingViewInContainerView;
- (struct CGRect)initialFrameOfPresentedViewInContainerView;
- (struct CGRect)finalDismissalFrameOfPresentingViewInContainerView;
- (struct CGRect)finalPresentationFrameOfPresentingViewInContainerView;
@property(nonatomic) double additionalHomeAffordanceSpacing;
@property(nonatomic) __weak UIPanGestureRecognizer *homeAffordancePanGesture;
@property(nonatomic, getter=isHomeAffordanceVisible) _Bool homeAffordanceVisible;
- (void)completeDismissal;
- (void)hintDismissalWithCommitProgress:(double)arg1 overallProgress:(double)arg2;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 sourceView:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

