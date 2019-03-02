//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class NUIMultilineSizingHelper, UIView;

@interface NUIContentScrollView : UIScrollView
{
    NUIMultilineSizingHelper *_multilineSizeHelper;
    UIView *_documentView;
    long long _horizontalAlignment;
    long long _verticalAlignment;
}

@property(nonatomic) long long verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(nonatomic) long long horizontalAlignment; // @synthesize horizontalAlignment=_horizontalAlignment;
@property(retain, nonatomic) UIView *documentView; // @synthesize documentView=_documentView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (void)_resetToBeginningOfDoublePass;
- (void)_setInSecondConstraintsPass:(_Bool)arg1;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect)arg1;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (_Bool)_needsDoubleUpdateConstraintsPass;
- (struct CGSize)intrinsicContentSize;
- (void)updateConstraints;
- (_Bool)isLayoutSizeDependentOnPerpendicularAxis;
- (id)initWithDocumentView:(id)arg1;
@property(retain, nonatomic) UIView *contentView;
- (id)initWithContentView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
