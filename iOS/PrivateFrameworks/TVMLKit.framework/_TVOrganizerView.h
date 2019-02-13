//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVMLKit/_TVFocusRedirectView.h>

#import <TVMLKit/TVAppTemplateImpressionable-Protocol.h>

@class NSArray, NSDictionary, NSString, UIColor, UIView;

__attribute__((visibility("hidden")))
@interface _TVOrganizerView : _TVFocusRedirectView <TVAppTemplateImpressionable>
{
    UIView *_lastFocusedView;
    UIView *_rightColumnDivider;
    UIView *_leftColumnDivider;
    _Bool _columnDividersEnabled;
    _Bool _remembersLastFocusedItem;
    UIView *_backgroundImageView;
    double _columnDividerPadding;
    UIColor *_columnDividerColor;
    NSArray *_components;
    NSDictionary *_divsByPosition;
    NSDictionary *_divSizesByPosition;
}

@property(copy, nonatomic) NSDictionary *divSizesByPosition; // @synthesize divSizesByPosition=_divSizesByPosition;
@property(copy, nonatomic) NSDictionary *divsByPosition; // @synthesize divsByPosition=_divsByPosition;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
@property(nonatomic) _Bool remembersLastFocusedItem; // @synthesize remembersLastFocusedItem=_remembersLastFocusedItem;
@property(retain, nonatomic) UIColor *columnDividerColor; // @synthesize columnDividerColor=_columnDividerColor;
@property(nonatomic) _Bool columnDividersEnabled; // @synthesize columnDividersEnabled=_columnDividersEnabled;
@property(nonatomic) double columnDividerPadding; // @synthesize columnDividerPadding=_columnDividerPadding;
@property(retain, nonatomic) UIView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void).cxx_destruct;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (long long)_positionFromView:(id)arg1;
- (struct CGSize)_contentSizeThatFits:(struct CGSize)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)preferredFocusEnvironments;
- (_Bool)canBecomeFocused;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct UIEdgeInsets)tv_alignmentInsetsForExpectedWidth:(double)arg1;
@property(nonatomic) double cornerRadius;
- (void)setComponentsNeedUpdate;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

