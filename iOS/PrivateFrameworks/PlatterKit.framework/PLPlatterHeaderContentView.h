//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PlatterKit/BSUIDateLabelDelegate-Protocol.h>
#import <PlatterKit/MTVibrantStylingProviderObserving-Protocol.h>
#import <PlatterKit/MTVibrantStylingRequiring-Protocol.h>
#import <PlatterKit/PLContentSizeCategoryAdjusting-Protocol.h>

@class BSUIFontProvider, MTVibrantStylingProvider, NSArray, NSDate, NSString, NSTimeZone, PLPlatterHeaderContentViewLayoutManager, UIButton, UIFont, UIImageView, UILabel;
@protocol BSUIDateLabel;

@interface PLPlatterHeaderContentView : UIView <BSUIDateLabelDelegate, MTVibrantStylingProviderObserving, MTVibrantStylingRequiring, PLContentSizeCategoryAdjusting>
{
    UILabel<BSUIDateLabel> *_dateLabel;
    NSArray *_iconButtons;
    UIImageView *_iconButtonShadow;
    UIButton *_utilityButton;
    PLPlatterHeaderContentViewLayoutManager *_layoutManager;
    _Bool _hasUpdatedContent;
    _Bool _adjustsFontForContentSizeCategory;
    _Bool _dateAllDay;
    _Bool _heedsHorizontalLayoutMargins;
    _Bool _usesLargeTextLayout;
    MTVibrantStylingProvider *_vibrantStylingProvider;
    NSString *_preferredContentSizeCategory;
    NSDate *_date;
    NSTimeZone *_timeZone;
    long long _dateFormatStyle;
    UIView *_utilityView;
    BSUIFontProvider *_fontProvider;
    UILabel *_titleLabel;
    double _utilityButtonHorizontalLayoutReference;
}

@property(nonatomic, getter=_utilityButtonHorizontalLayoutReference, setter=_setUtilityButtonHorizontalLayoutReference:) double utilityButtonHorizontalLayoutReference; // @synthesize utilityButtonHorizontalLayoutReference=_utilityButtonHorizontalLayoutReference;
@property(nonatomic, getter=_usesLargeTextLayout, setter=_setUsesLargeTextLayout:) _Bool usesLargeTextLayout; // @synthesize usesLargeTextLayout=_usesLargeTextLayout;
@property(retain, nonatomic, getter=_titleLabel, setter=_setTitleLabel:) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic, getter=_fontProvider, setter=_setFontProvider:) BSUIFontProvider *fontProvider; // @synthesize fontProvider=_fontProvider;
@property(nonatomic) _Bool heedsHorizontalLayoutMargins; // @synthesize heedsHorizontalLayoutMargins=_heedsHorizontalLayoutMargins;
@property(retain, nonatomic) UIView *utilityView; // @synthesize utilityView=_utilityView;
@property(readonly, nonatomic) NSArray *iconButtons; // @synthesize iconButtons=_iconButtons;
@property(nonatomic) long long dateFormatStyle; // @synthesize dateFormatStyle=_dateFormatStyle;
@property(copy, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(nonatomic, getter=isDateAllDay) _Bool dateAllDay; // @synthesize dateAllDay=_dateAllDay;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *preferredContentSizeCategory; // @synthesize preferredContentSizeCategory=_preferredContentSizeCategory;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
@property(retain, nonatomic) MTVibrantStylingProvider *vibrantStylingProvider; // @synthesize vibrantStylingProvider=_vibrantStylingProvider;
- (void).cxx_destruct;
- (void)dateLabelDidChange:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)adjustForContentSizeCategoryChange;
- (void)vibrantStylingDidChangeForProvider:(id)arg1;
- (void)layoutSubviews;
- (void)layoutMarginsDidChange;
- (void)_updateUtilityButtonFont;
@property(readonly, nonatomic) double contentBaseline;
@property(readonly, nonatomic) UIButton *utilityButton;
- (void)_tearDownDateLabel;
- (void)_recycleDateLabel;
- (void)_configureDateLabelIfNecessary;
- (id)_dateLabelPreferredFont;
@property(readonly, nonatomic, getter=_dateLabelFont) UIFont *dateLabelFont;
- (void)_updateTextAttributesForDateLabel;
- (id)_updateTitleAttributesForAttributedString:(id)arg1;
- (id)_attributedStringForTitle:(id)arg1;
@property(copy, nonatomic) NSString *title;
- (id)_lazyTitleLabel;
- (id)_newTitleLabel;
- (void)_updateTextAttributesForTitleLabel:(id)arg1;
@property(readonly, nonatomic, getter=_titleLabelFont) UIFont *titleLabelFont;
- (id)_titleLabelPreferredFont;
@property(copy, nonatomic) NSArray *icons;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)_layoutManager;
@property(readonly, nonatomic, getter=_dateLabel) UILabel *dateLabel;
- (void)dealloc;
- (id)init;
- (id)_utilityButton;
- (void)_configureUtilityButtonIfNecessary;
- (void)_reduceTransparencyStatusDidChange:(id)arg1;
- (void)_darkerSystemColorsStatusDidChange:(id)arg1;
- (void)_layoutDateLabelWithScale:(double)arg1;
- (void)_layoutUtilityButtonWithScale:(double)arg1;
- (void)_layoutTitleLabelWithScale:(double)arg1;
- (void)_layoutIconButtonsWithScale:(double)arg1;
- (void)_configureUtilityButton;
- (void)_updateUtilityButtonVibrantStyling;
- (void)_configureDateLabel;
- (void)_configureTitleLabel:(id)arg1;
- (void)_updateStylingForTitleLabel:(id)arg1;
- (void)_configureIconButtonsForIcons:(id)arg1;
- (double)_headerHeightForWidth:(double)arg1;
@property(readonly, nonatomic, getter=_iconTrailingPadding) double iconTrailingPadding;
@property(readonly, nonatomic, getter=_iconLeadingPadding) double iconLeadingPadding;
@property(readonly, nonatomic, getter=_iconDimension) double iconDimension;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

