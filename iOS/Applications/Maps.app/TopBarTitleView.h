//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSAttributedString, NSString, UILabel;

__attribute__((visibility("hidden")))
@interface TopBarTitleView : UIView
{
    _Bool _allowsVeryLowMinimumScale;
    UIView *_clippingView;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UILabel *_extraDetailLabel;
    double _availableHeight;
    int _style;
    _Bool _isTitleAttributed;
    _Bool _isDetailAttributed;
    _Bool _isExtraDetailAttributed;
    _Bool _isMini;
    _Bool _isDimmed;
    _Bool _isUIDark;
    struct CGRect _idealBounds;
    struct CGRect _maxBounds;
}

+ (int)titleStyleForActivity:(int)arg1;
@property(nonatomic) struct CGRect maxBounds; // @synthesize maxBounds=_maxBounds;
@property(nonatomic) struct CGRect idealBounds; // @synthesize idealBounds=_idealBounds;
@property(nonatomic) _Bool allowsVeryLowMinimumScale; // @synthesize allowsVeryLowMinimumScale=_allowsVeryLowMinimumScale;
@property(nonatomic) int style; // @synthesize style=_style;
@property(readonly, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)updateTransitEstimatesDisplayGuidanceState:(int)arg1 eta:(id)arg2 isCompact:(_Bool)arg3 isDimmed:(_Bool)arg4 isUIDark:(_Bool)arg5 distanceString:(id)arg6 countdownNumber:(id)arg7 countdownType:(unsigned long long)arg8;
- (void)updateEstimatesDisplayGuidanceState:(int)arg1 eta:(id)arg2 isCompact:(_Bool)arg3 isDimmed:(_Bool)arg4 isUIDark:(_Bool)arg5 destinationDisplayName:(id)arg6 expandedTravelTime:(id)arg7 distanceString:(id)arg8;
- (void)_updateEstimatesDisplayGuidanceState:(int)arg1 eta:(id)arg2 isCompact:(_Bool)arg3 isDimmed:(_Bool)arg4 isUIDark:(_Bool)arg5 destinationDisplayName:(id)arg6 expandedCountdownTime:(id)arg7 distanceString:(id)arg8 countdownNumber:(id)arg9 countdownType:(unsigned long long)arg10;
- (void)refreshStyle;
- (void)setShowsDimmedDisplay:(_Bool)arg1 darkUI:(_Bool)arg2 animation:(id)arg3;
- (void)setTitle:(id)arg1 detail:(id)arg2 extraDetail:(id)arg3;
@property(copy, nonatomic) NSAttributedString *attributedExtraDetailLabelText;
@property(copy, nonatomic) NSString *accessibilityDetailLabelText; // @dynamic accessibilityDetailLabelText;
@property(copy, nonatomic) NSString *detailLabelText; // @dynamic detailLabelText;
@property(copy, nonatomic) NSAttributedString *attributedDetailLabelText;
- (_Bool)isTitleLabelTextEmpty;
- (_Bool)isDetailLabelTextEmpty;
@property(copy, nonatomic) NSString *accessibilityTitleLabelText; // @dynamic accessibilityTitleLabelText;
@property(copy, nonatomic) NSString *titleLabelText; // @dynamic titleLabelText;
@property(copy, nonatomic) NSAttributedString *attributedTitleLabelText; // @dynamic attributedTitleLabelText;
- (void)_repositionLabelsOnSameLineForIPad;
- (void)_repositionLabelsSkipRepositioningIfUnchanged:(_Bool)arg1;
- (void)crossFadeLabels;
- (void)_setFramesForBounds:(struct CGRect)arg1;
- (id)defaultDetailFont;
- (id)defaultTitleFontWithDetail:(_Bool)arg1;
- (id)titleFont;
- (void)_centerLabelsIfPossible:(struct CGRect *)arg1 detailFrame:(struct CGRect *)arg2;
- (_Bool)_reduceFrameHeightForMultiLine:(struct CGRect)arg1 titleFont:(id)arg2 titleFrame:(struct CGRect *)arg3 detailFrame:(struct CGRect *)arg4;
- (void)_setFramesForSingleLine:(struct CGRect *)arg1 detailFrame:(struct CGRect *)arg2 extraDetailFrame:(struct CGRect *)arg3;
- (double)_paddingForLabels;
- (void)_updateAfterTextChange;
- (void)layoutSubviews;
@property(nonatomic, getter=isMini) _Bool mini; // @dynamic mini;
- (void)setFrame:(struct CGRect)arg1;
- (void)setAvailableHeight:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1 titleStyle:(int)arg2;
- (id)textColor;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 activity:(int)arg2;
- (id)newContainingBarButtonItem;

@end

