//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, NSString, UIButton, UIFont, UILabel, UILayoutGuide;

@interface PXOnboardingWelcomeUIView : UIView
{
    CDStruct_6d279c03 _needsUpdateFlags;
    UIButton *_startButton;
    UIView *_iconView;
    NSString *_title;
    NSString *_descriptionText;
    NSString *_buttonTitle;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    NSArray *_constraints;
    NSLayoutConstraint *_iconTopCnst;
    NSLayoutConstraint *_startBottomCnst;
    long long _layoutStyle;
    UILayoutGuide *_leadingWhitespace;
    UILayoutGuide *_middleWhitespace;
    UILayoutGuide *_trailingWhitespace;
    UIFont *_buttonFont;
    struct UIEdgeInsets _contentInsets;
}

@property(retain, nonatomic) UIFont *buttonFont; // @synthesize buttonFont=_buttonFont;
@property(readonly, nonatomic) UILayoutGuide *trailingWhitespace; // @synthesize trailingWhitespace=_trailingWhitespace;
@property(readonly, nonatomic) UILayoutGuide *middleWhitespace; // @synthesize middleWhitespace=_middleWhitespace;
@property(readonly, nonatomic) UILayoutGuide *leadingWhitespace; // @synthesize leadingWhitespace=_leadingWhitespace;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(retain, nonatomic) NSLayoutConstraint *startBottomCnst; // @synthesize startBottomCnst=_startBottomCnst;
@property(retain, nonatomic) NSLayoutConstraint *iconTopCnst; // @synthesize iconTopCnst=_iconTopCnst;
@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(readonly, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIView *iconView; // @synthesize iconView=_iconView;
@property(readonly, nonatomic) UIButton *startButton; // @synthesize startButton=_startButton;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (void).cxx_destruct;
- (id)_createPadConstraints;
- (id)_createLandscapeConstraintsPhone;
- (id)_createPortraitConstraintsPhone;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (void)_invalidateConstraints;
- (void)_updateButtonIfNeeded;
- (void)_invalidateButton;
- (void)tintColorDidChange;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

