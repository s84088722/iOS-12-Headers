//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (NUIContainerView)
@property(nonatomic) _Bool invalidatingIntrinsicContentSizeAlsoInvalidatesSuperview;
@property(nonatomic) double customFirstBaselineOffsetFromContentTop;
@property(nonatomic) double customFirstBaselineOffsetFromTop;
@property(nonatomic) double customBaselineOffsetFromBottom;
@property(nonatomic, getter=isBaselineRelativeAlignmentRectInsets) _Bool baselineRelativeAlignmentRectInsets;
@property(nonatomic) struct UIEdgeInsets customAlignmentRectInsets;
@property(nonatomic) double customScreenScale;
@property(nonatomic) struct CGSize maximumLayoutSize;
@property(nonatomic) struct CGSize minimumLayoutSize;
- (id)containerViewInfoCreateIfNeeded:(_Bool)arg1;
- (_Bool)isLayoutSizeDependentOnPerpendicularAxis;
- (_Bool)supportsAsynchronousMeasurement;
- (struct CGSize)effectiveLayoutSizeFittingSize:(struct CGSize)arg1;
@end

