//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GuidanceDisplayObserver-Protocol.h"
#import "MapsTheming-Protocol.h"
#import "NavSignLabelDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, NavSignLabel, TextFirstLineCharacterRangeFinder;
@protocol NavContainerLayoutDelegate, NavSignLayoutDelegate, NavSignViewAnalyticsDelegate;

__attribute__((visibility("hidden")))
@interface NavSignView : UIView <GuidanceDisplayObserver, MapsTheming, NavSignLabelDelegate>
{
    _Bool _dimmed;
    _Bool _preferShortestTextAlternative;
    _Bool _usePersistentDisplay;
    _Bool _highlightedLanesNotInVisibleRange;
    TextFirstLineCharacterRangeFinder *_firstLineCharacterRangeFinder;
    id <NavContainerLayoutDelegate> _containerLayoutDelegate;
    id <NavSignLayoutDelegate> _signLayoutDelegate;
    id <NavSignViewAnalyticsDelegate> _analyticsDelegate;
    NavSignLabel *_majorLabel;
    NavSignLabel *_minorLabel;
    NSLayoutConstraint *_minSignHeightConstraint;
    NSLayoutConstraint *_maxSignHeightConstraint;
    NSLayoutConstraint *_majorLabelLeadingMarginConstraint;
    NSLayoutConstraint *_majorLabelTrailingMarginConstraint;
    NSLayoutConstraint *_minorToMajorLabelLeadingAlignmentConstraint;
    NSLayoutConstraint *_minorLabelLeadingMarginConstraint;
    NSLayoutConstraint *_minorLabelTrailingMarginConstraint;
    NSLayoutConstraint *_majorLabelBaselineToTopConstraint;
    NSLayoutConstraint *_minorLabelBaselineToTopConstraint;
    NSLayoutConstraint *_minorToMajorLabelBaselineConstraint;
    NSLayoutConstraint *_bottomToMajorLabelBaselineConstraint;
    NSLayoutConstraint *_bottomToMinorLabelBaselineConstraint;
}

@property(readonly, nonatomic) NSLayoutConstraint *bottomToMinorLabelBaselineConstraint; // @synthesize bottomToMinorLabelBaselineConstraint=_bottomToMinorLabelBaselineConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *bottomToMajorLabelBaselineConstraint; // @synthesize bottomToMajorLabelBaselineConstraint=_bottomToMajorLabelBaselineConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *minorToMajorLabelBaselineConstraint; // @synthesize minorToMajorLabelBaselineConstraint=_minorToMajorLabelBaselineConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *minorLabelBaselineToTopConstraint; // @synthesize minorLabelBaselineToTopConstraint=_minorLabelBaselineToTopConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *majorLabelBaselineToTopConstraint; // @synthesize majorLabelBaselineToTopConstraint=_majorLabelBaselineToTopConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *minorLabelTrailingMarginConstraint; // @synthesize minorLabelTrailingMarginConstraint=_minorLabelTrailingMarginConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *minorLabelLeadingMarginConstraint; // @synthesize minorLabelLeadingMarginConstraint=_minorLabelLeadingMarginConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *minorToMajorLabelLeadingAlignmentConstraint; // @synthesize minorToMajorLabelLeadingAlignmentConstraint=_minorToMajorLabelLeadingAlignmentConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *majorLabelTrailingMarginConstraint; // @synthesize majorLabelTrailingMarginConstraint=_majorLabelTrailingMarginConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *majorLabelLeadingMarginConstraint; // @synthesize majorLabelLeadingMarginConstraint=_majorLabelLeadingMarginConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *maxSignHeightConstraint; // @synthesize maxSignHeightConstraint=_maxSignHeightConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *minSignHeightConstraint; // @synthesize minSignHeightConstraint=_minSignHeightConstraint;
@property(readonly, nonatomic) _Bool highlightedLanesNotInVisibleRange; // @synthesize highlightedLanesNotInVisibleRange=_highlightedLanesNotInVisibleRange;
@property(nonatomic) _Bool usePersistentDisplay; // @synthesize usePersistentDisplay=_usePersistentDisplay;
@property(nonatomic) _Bool preferShortestTextAlternative; // @synthesize preferShortestTextAlternative=_preferShortestTextAlternative;
@property(readonly, nonatomic) NavSignLabel *minorLabel; // @synthesize minorLabel=_minorLabel;
@property(readonly, nonatomic) NavSignLabel *majorLabel; // @synthesize majorLabel=_majorLabel;
@property(nonatomic, getter=isDimmed) _Bool dimmed; // @synthesize dimmed=_dimmed;
@property(nonatomic) __weak id <NavSignViewAnalyticsDelegate> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
@property(nonatomic) __weak id <NavSignLayoutDelegate> signLayoutDelegate; // @synthesize signLayoutDelegate=_signLayoutDelegate;
@property(nonatomic) __weak id <NavContainerLayoutDelegate> containerLayoutDelegate; // @synthesize containerLayoutDelegate=_containerLayoutDelegate;
- (void).cxx_destruct;
- (double)_calculateInterLabelConstraintConstant;
- (void)_configureLabels;
@property(readonly, nonatomic) TextFirstLineCharacterRangeFinder *firstLineCharacterRangeFinder; // @synthesize firstLineCharacterRangeFinder=_firstLineCharacterRangeFinder;
- (void)_updateConstraints;
- (void)_setupConstraints;
- (void)_updateLabelText;
- (void)_setupSubviews;
- (id)_defaultSignLayoutDelegate;
- (void)navSignLabel:(id)arg1 didSelectAlternate:(unsigned long long)arg2;
- (void)layoutSubviews;
- (void)updateTheme;
- (void)guidanceDisplayDidChangeSize:(struct CGSize)arg1;
@property(nonatomic) double maxHeight;
- (void)setSignLayoutDelegate:(id)arg1 withAnimation:(id)arg2;
@property(readonly, nonatomic) _Bool hasText;
@property(readonly, nonatomic) _Bool hasMinorText;
@property(readonly, nonatomic) _Bool hasMajorText;
- (void)refreshSign;
- (void)clearContent;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isSecondaryDrivingSign;
- (_Bool)isPrimaryDrivingSign;
- (_Bool)isManeuverSign;
- (_Bool)isMessageSign;
- (id)secondaryDrivingSign;
- (id)primaryDrivingSign;
- (id)maneuverSign;
- (id)messageSign;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

