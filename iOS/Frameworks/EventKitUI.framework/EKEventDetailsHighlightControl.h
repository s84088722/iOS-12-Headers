//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSArray, NSLayoutConstraint, NSString, UIColor, UIImageView, UILabel;

@interface EKEventDetailsHighlightControl : UIControl
{
    NSArray *_titleAndSubtitleVisibleContraints;
    NSArray *_justTitleVisibleContraints;
    NSArray *_justSubtitleVisibleContraints;
    NSArray *_justTitleAndActionVisibleContraints;
    NSString *_actionText;
    NSString *_subtitleText;
    UIColor *_actionColor;
    UIImageView *_iconStack;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_actionLabel;
    NSLayoutConstraint *_topMarginConstraint;
    NSLayoutConstraint *_interLabelPaddingConstraint;
    NSLayoutConstraint *_bottomMarginConstraint;
}

+ (double)bottomMarginConstant;
+ (double)interLabelBaselineDeltaConstant;
+ (double)topMarginConstant;
+ (id)subtitleColor;
+ (id)subtitleFont;
+ (id)titleFont;
+ (_Bool)requiresConstraintBasedLayout;
@property(readonly, retain, nonatomic) NSLayoutConstraint *bottomMarginConstraint; // @synthesize bottomMarginConstraint=_bottomMarginConstraint;
@property(readonly, retain, nonatomic) NSLayoutConstraint *interLabelPaddingConstraint; // @synthesize interLabelPaddingConstraint=_interLabelPaddingConstraint;
@property(readonly, retain, nonatomic) NSLayoutConstraint *topMarginConstraint; // @synthesize topMarginConstraint=_topMarginConstraint;
@property(readonly, nonatomic) UILabel *actionLabel; // @synthesize actionLabel=_actionLabel;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *iconStack; // @synthesize iconStack=_iconStack;
- (void).cxx_destruct;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)setSubtitleAttributedText:(id)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setActionText:(id)arg1 color:(id)arg2;
- (void)_updateSubtitleAndActionText;
- (void)setTitleText:(id)arg1;
- (void)_updateTitleAndSubtitleConstraints;
- (void)setIconImage:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

