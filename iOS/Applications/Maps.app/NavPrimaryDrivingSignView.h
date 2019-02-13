//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NavManeuverSignView.h"

@class NSLayoutConstraint, NavSignLaneGuidanceInfo, NavSignLaneGuidanceView, UIView;
@protocol NavDrivingSignLayoutDelegate;

__attribute__((visibility("hidden")))
@interface NavPrimaryDrivingSignView : NavManeuverSignView
{
    _Bool _animatingToHideLaneGuidanceView;
    NavSignLaneGuidanceInfo *_laneGuidanceInfo;
    NavSignLaneGuidanceView *_laneGuidanceView;
    NSLayoutConstraint *_laneGuidanceViewTopMarginConstraint;
    NSLayoutConstraint *_laneGuidanceViewLeadingMarginConstraint;
    NSLayoutConstraint *_laneGuidanceViewTrailingMarginConstraint;
}

@property(nonatomic) _Bool animatingToHideLaneGuidanceView; // @synthesize animatingToHideLaneGuidanceView=_animatingToHideLaneGuidanceView;
@property(readonly, nonatomic) NSLayoutConstraint *laneGuidanceViewTrailingMarginConstraint; // @synthesize laneGuidanceViewTrailingMarginConstraint=_laneGuidanceViewTrailingMarginConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *laneGuidanceViewLeadingMarginConstraint; // @synthesize laneGuidanceViewLeadingMarginConstraint=_laneGuidanceViewLeadingMarginConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *laneGuidanceViewTopMarginConstraint; // @synthesize laneGuidanceViewTopMarginConstraint=_laneGuidanceViewTopMarginConstraint;
@property(readonly, nonatomic) NavSignLaneGuidanceView *laneGuidanceView; // @synthesize laneGuidanceView=_laneGuidanceView;
@property(retain, nonatomic) NavSignLaneGuidanceInfo *laneGuidanceInfo; // @synthesize laneGuidanceInfo=_laneGuidanceInfo;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)guidanceDisplayDidChangeSize:(struct CGSize)arg1;
- (void)_animateTransitioningFromOldLaneGuidance:(id)arg1;
- (void)_animateShowingLaneGuidanceView;
- (void)hideLaneGuidanceAnimated:(_Bool)arg1;
- (void)showLaneGuidance:(id)arg1 animated:(_Bool)arg2;
- (void)updateLaneGuidance:(id)arg1;
- (_Bool)highlightedLanesNotInVisibleRange;
@property(readonly, nonatomic) UIView *viewForSecondarySignTextToAlignLeading;
@property(nonatomic) _Bool debugHighlightLanes;
- (void)updateTheme;
- (void)clearContent;
- (void)_updateLabelText;
- (void)_updateConstraints;
- (void)_setupConstraints;
- (void)refreshSign;
- (void)_setupSubviews;
- (id)_defaultSignLayoutDelegate;

// Remaining properties
@property(nonatomic) __weak id <NavDrivingSignLayoutDelegate> signLayoutDelegate; // @dynamic signLayoutDelegate;

@end

