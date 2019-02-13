//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, PXViewLayoutHelper, UIButton, UIColor, UIFont, UILabel, UIVisualEffectView;
@protocol PXUIWidgetHeaderViewDelegate;

@interface PXUIWidgetHeaderView : UIView
{
    _Bool _isPerformingChanges;
    _Bool _isPerformingUpdates;
    struct {
        _Bool hasContent;
        _Bool title;
        _Bool subtitle;
        _Bool caption;
    } _needsUpdateFlags;
    struct {
        _Bool didSelectSubtitle;
        _Bool didSelectCaption;
    } _delegateRespondsTo;
    _Bool _allowUserInteractionWithSubtitle;
    _Bool _allowUserInteractionWithCaption;
    _Bool __hasContent;
    PXViewLayoutHelper *_layoutHelper;
    id <PXUIWidgetHeaderViewDelegate> _delegate;
    NSString *_title;
    NSString *_subtitle;
    NSString *_caption;
    UIColor *_textColor;
    UIFont *_primaryFont;
    UIFont *_secondaryFont;
    long long _layoutStyle;
    double _minimumDistanceBetweenTopAndFirstBaseline;
    double _distanceBetweenTitleBaselineAndSubtitleBaseline;
    double _horizontalSpacingBetweenTitleAndSubtitle;
    double _minimumDistanceBetweenLastBaselineAndBottom;
    NSArray *__constraints;
    double __currentHeight;
    UILabel *__titleLabel;
    UILabel *__subtitleLabel;
    UIButton *__subtitleButton;
    UILabel *__captionLabel;
    UIButton *__captionButton;
    UIVisualEffectView *__visualEffectView;
    struct UIEdgeInsets _contentInsets;
}

@property(readonly, nonatomic) UIVisualEffectView *_visualEffectView; // @synthesize _visualEffectView=__visualEffectView;
@property(readonly, nonatomic) UIButton *_captionButton; // @synthesize _captionButton=__captionButton;
@property(readonly, nonatomic) UILabel *_captionLabel; // @synthesize _captionLabel=__captionLabel;
@property(readonly, nonatomic) UIButton *_subtitleButton; // @synthesize _subtitleButton=__subtitleButton;
@property(readonly, nonatomic) UILabel *_subtitleLabel; // @synthesize _subtitleLabel=__subtitleLabel;
@property(readonly, nonatomic) UILabel *_titleLabel; // @synthesize _titleLabel=__titleLabel;
@property(nonatomic, setter=_setCurrentHeight:) double _currentHeight; // @synthesize _currentHeight=__currentHeight;
@property(copy, nonatomic, setter=_setConstraints:) NSArray *_constraints; // @synthesize _constraints=__constraints;
@property(nonatomic, setter=_setHasContent:) _Bool _hasContent; // @synthesize _hasContent=__hasContent;
@property(nonatomic) double minimumDistanceBetweenLastBaselineAndBottom; // @synthesize minimumDistanceBetweenLastBaselineAndBottom=_minimumDistanceBetweenLastBaselineAndBottom;
@property(nonatomic) double horizontalSpacingBetweenTitleAndSubtitle; // @synthesize horizontalSpacingBetweenTitleAndSubtitle=_horizontalSpacingBetweenTitleAndSubtitle;
@property(nonatomic) double distanceBetweenTitleBaselineAndSubtitleBaseline; // @synthesize distanceBetweenTitleBaselineAndSubtitleBaseline=_distanceBetweenTitleBaselineAndSubtitleBaseline;
@property(nonatomic) double minimumDistanceBetweenTopAndFirstBaseline; // @synthesize minimumDistanceBetweenTopAndFirstBaseline=_minimumDistanceBetweenTopAndFirstBaseline;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(nonatomic) _Bool allowUserInteractionWithCaption; // @synthesize allowUserInteractionWithCaption=_allowUserInteractionWithCaption;
@property(nonatomic) _Bool allowUserInteractionWithSubtitle; // @synthesize allowUserInteractionWithSubtitle=_allowUserInteractionWithSubtitle;
@property(retain, nonatomic) UIFont *secondaryFont; // @synthesize secondaryFont=_secondaryFont;
@property(retain, nonatomic) UIFont *primaryFont; // @synthesize primaryFont=_primaryFont;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <PXUIWidgetHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateCaptionIfNeeded;
- (void)_invalidateCaption;
- (void)_updateSubtitleIfNeeded;
- (void)_invalidateSubtitle;
- (void)_updateTitleIfNeeded;
- (void)_invalidateTitle;
- (void)_updateHasContentIfNeeded;
- (void)_invalidateHasContent;
- (void)_setNeedsUpdate;
- (_Bool)_needsUpdate;
- (void)_updateIfNeeded;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)_handleCaptionButton:(id)arg1;
- (void)_handleSubtitleButton:(id)arg1;
- (_Bool)_canComposeTitleWithSubtitle;
- (_Bool)_hasSubtitle;
@property(readonly, nonatomic) PXViewLayoutHelper *layoutHelper; // @synthesize layoutHelper=_layoutHelper;
- (id)_captionButtonCreateIfNeeded:(_Bool)arg1;
- (id)_captionLabelCreateIfNeeded:(_Bool)arg1;
- (id)_subtitleButtonCreateIfNeeded:(_Bool)arg1;
- (id)_subtitleLabelCreateIfNeeded:(_Bool)arg1;
- (id)_titleLabelCreateIfNeeded:(_Bool)arg1;
- (id)_visualEffectViewCreateIfNeeded:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)_hasAccessibilityLargeText;

@end

