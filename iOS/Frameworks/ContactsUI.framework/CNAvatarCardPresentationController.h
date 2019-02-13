//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

@class CNAvatarCardTransition, UITapGestureRecognizer, UIView, UIViewController, UIVisualEffectView;
@protocol CNCardTransitioning;

__attribute__((visibility("hidden")))
@interface CNAvatarCardPresentationController : UIPresentationController
{
    unsigned int _alignmentEdge;
    UIView *_sourceView;
    double _alignmentY;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIViewController *_sourceViewController;
    CNAvatarCardTransition *_transition;
    id <CNCardTransitioning> _originalTransitioning;
    UIVisualEffectView *_backgroundView;
    UIVisualEffectView *_vibrancyView;
    UIView *_dimmingView;
    UIView *_cardView;
    UIView *_contentView;
    struct CGRect _sourceTargetRect;
    struct CGRect _sourceRect;
}

@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(retain, nonatomic) UIVisualEffectView *vibrancyView; // @synthesize vibrancyView=_vibrancyView;
@property(retain, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) id <CNCardTransitioning> originalTransitioning; // @synthesize originalTransitioning=_originalTransitioning;
@property(retain, nonatomic) CNAvatarCardTransition *transition; // @synthesize transition=_transition;
@property(retain, nonatomic) UIViewController *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) unsigned int alignmentEdge; // @synthesize alignmentEdge=_alignmentEdge;
@property(nonatomic) double alignmentY; // @synthesize alignmentY=_alignmentY;
@property(nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(nonatomic) struct CGRect sourceTargetRect; // @synthesize sourceTargetRect=_sourceTargetRect;
- (void).cxx_destruct;
- (void)tapGestureRecognized:(id)arg1;
- (struct CGRect)_frameOfPresentedViewControllerViewInSuperview;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (id)presentedView;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionWillBegin;
- (void)_layoutViews;
- (void)containerViewWillLayoutSubviews;
- (_Bool)shouldPresentInFullscreen;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;

@end

