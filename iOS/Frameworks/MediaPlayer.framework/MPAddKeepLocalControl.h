//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class MPDownloadProgressView, NSMutableDictionary, UIImageView, UILabel, UIView;

@interface MPAddKeepLocalControl : UIControl
{
    UILabel *_controlTitleLabel;
    UIView *_backgroundView;
    UIImageView *_controlImageView;
    NSMutableDictionary *_controlStatusTypeToTitle;
    long long _controlStatusRevision;
    MPDownloadProgressView *_downloadProgressView;
    _Bool _hadFirstTouchHighlight;
    struct UIEdgeInsets _controlImageEdgeInsets;
    UIView *_transientContentView;
    long long _transientContentViewTransactionCount;
    _Bool _traitCollectionDidChangeWasCalled;
    _Bool _allowsAddImage;
    _Bool _scaleImageForAccessibility;
    long long _displayStyle;
    struct MPAddKeepLocalControlStatus _controlStatus;
}

+ (id)_imageNamed:(id)arg1 compatibleWithTraitCollection:(id)arg2;
+ (id)systemLightGrayColor;
+ (id)cloudDownloadImageForTintColor:(id)arg1 outlineColor:(id)arg2 traitCollection:(id)arg3;
+ (id)controlTitleFontForControlStatusType:(long long)arg1;
+ (id)_newControlTitleLabel;
+ (struct CGSize)_expectedSizeForControlStatusType:(long long)arg1 controlTitle:(id)arg2 hasControlImage:(_Bool)arg3 displayScale:(double)arg4 preferredHeight:(double)arg5;
@property(nonatomic) _Bool scaleImageForAccessibility; // @synthesize scaleImageForAccessibility=_scaleImageForAccessibility;
@property(nonatomic) long long displayStyle; // @synthesize displayStyle=_displayStyle;
@property(nonatomic) struct MPAddKeepLocalControlStatus controlStatus; // @synthesize controlStatus=_controlStatus;
@property(nonatomic) _Bool allowsAddImage; // @synthesize allowsAddImage=_allowsAddImage;
- (void).cxx_destruct;
- (void)_updateControlImageViewAnimation;
- (void)_updateControlStatusProperties;
- (void)_updateBackgroundViewCornerRadius;
- (void)_updateControlTitleLabelVisualProperties;
- (id)_currentContentSuperview;
- (void)_endTransientContentViewTransaction;
- (void)_beginTransientContentViewTransaction;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (id)titleForControlStatusType:(long long)arg1;
- (void)setTitle:(id)arg1 forControlStatusType:(long long)arg2;
- (void)setControlStatus:(struct MPAddKeepLocalControlStatus)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)setContentHorizontalAlignment:(long long)arg1;
- (void)_removeAllAnimations:(_Bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)tintColorDidChange;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)maximumSizeWithPreferredHeight:(double)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didMoveToWindow;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

