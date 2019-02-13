//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (HKAdditions)
+ (struct NSDirectionalEdgeInsets)wd_defaultDirectionalLayoutMargins;
- (void)_updateForCurrentSizeCategory;
- (double)hk_layoutHeightFittingWidth:(double)arg1;
- (void)hk_maskAllCornersWithRadius:(double)arg1;
- (void)hk_maskCorners:(unsigned long long)arg1 radius:(double)arg2;
- (void)hk_constraintAspectRatioFromSize:(struct CGSize)arg1;
- (void)hk_alignVerticalConstraintsWithGuide:(id)arg1 insets:(struct NSDirectionalEdgeInsets)arg2;
- (void)hk_alignHorizontalConstraintsWithGuide:(id)arg1 insets:(struct NSDirectionalEdgeInsets)arg2;
- (void)hk_alignVerticalConstraintsWithView:(id)arg1 insets:(struct NSDirectionalEdgeInsets)arg2;
- (void)hk_alignHorizontalConstraintsWithView:(id)arg1 insets:(struct NSDirectionalEdgeInsets)arg2;
- (void)hk_alignConstraintsWithView:(id)arg1 insets:(struct NSDirectionalEdgeInsets)arg2;
- (void)hk_alignConstraintsWithTopAnchor:(id)arg1 bottomAnchor:(id)arg2 insets:(struct NSDirectionalEdgeInsets)arg3;
- (void)hk_alignConstraintsWithLeadingAnchor:(id)arg1 trailingAnchor:(id)arg2 insets:(struct NSDirectionalEdgeInsets)arg3;
- (void)hk_alignConstraintsWithViewController:(id)arg1;
- (void)hk_alignCenterConstraintsWithView:(id)arg1;
- (void)hk_alignHorizontalConstraintsWithView:(id)arg1 margin:(double)arg2;
- (void)hk_alignVerticalConstraintsWithView:(id)arg1 margin:(double)arg2;
- (void)hk_alignConstraintsWithGuide:(id)arg1;
- (void)hk_alignConstraintsWithView:(id)arg1;
- (long long)hk_trailingTextAlignmentAtOrBelowSizeCategory:(id)arg1;
- (_Bool)hk_isLeftToRight;
- (id)hk_addConstraintsWithFormat:(id)arg1 options:(unsigned long long)arg2 views:(id)arg3;
- (id)hk_addConstraintsWithFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4;
- (id)hk_addEqualsConstraintWithItem:(id)arg1 attribute:(long long)arg2 relatedTo:(id)arg3 attribute:(long long)arg4 constant:(double)arg5;
- (id)hk_addEqualsConstraintWithItem:(id)arg1 attribute:(long long)arg2 relatedTo:(id)arg3 constant:(double)arg4;
@end

