//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FRReferredUserGoToFeedButton, UIImageView, UILabel;
@protocol FRWelcomeToNewsInterstitialViewDelegate;

@interface FRWelcomeToNewsInterstitialView : UIView
{
    id <FRWelcomeToNewsInterstitialViewDelegate> _delegate;
    UILabel *_titleLabel;
    unsigned long long _displayMode;
    UIView *_contentView;
    UIImageView *_iconImageView;
    UILabel *_subtitleLabel;
    FRReferredUserGoToFeedButton *_readMoreNewsButton;
}

+ (_Bool)shouldShowIcon:(unsigned long long)arg1;
+ (struct CGSize)buttonSize:(unsigned long long)arg1 inBounds:(struct CGRect)arg2;
+ (struct CGSize)iconSize:(unsigned long long)arg1;
+ (_Bool)shouldCenterLabel:(unsigned long long)arg1;
+ (double)subtitleLabelWidthForDisplayMode:(unsigned long long)arg1 inBounds:(struct CGRect)arg2;
+ (id)subtitleLabelParagraphStyle:(unsigned long long)arg1;
+ (id)titleLabelParagraphStyle:(unsigned long long)arg1;
+ (double)subtitleLabelTopMargin:(unsigned long long)arg1;
+ (double)titleLabelTopMargin:(unsigned long long)arg1;
+ (double)subtitleLabelTracking:(unsigned long long)arg1;
+ (double)titleLabelTracking:(unsigned long long)arg1;
+ (double)subtitleLabelFontSize:(unsigned long long)arg1;
+ (id)titleLabelFont:(unsigned long long)arg1;
+ (double)titleLabelFontSize:(unsigned long long)arg1;
+ (id)welcomeToAppleNewsSeparator:(unsigned long long)arg1;
+ (struct UIEdgeInsets)contentViewInsetsWithDisplayMode:(unsigned long long)arg1 inBounds:(struct CGRect)arg2 bottomBarHeight:(double)arg3;
+ (double)contentViewBottomInset:(unsigned long long)arg1 bottomBarHeight:(double)arg2;
+ (double)contentViewWidth:(unsigned long long)arg1 inBounds:(struct CGRect)arg2;
+ (double)contentViewTopInset:(unsigned long long)arg1 inBounds:(struct CGRect)arg2;
+ (unsigned long long)displayModeFromTraitCollection:(id)arg1;
@property(retain, nonatomic) FRReferredUserGoToFeedButton *readMoreNewsButton; // @synthesize readMoreNewsButton=_readMoreNewsButton;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <FRWelcomeToNewsInterstitialViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)readMoreNewsButtonTapped:(id)arg1;
- (void)layoutSubviews;
- (void)updateSubviews:(_Bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

