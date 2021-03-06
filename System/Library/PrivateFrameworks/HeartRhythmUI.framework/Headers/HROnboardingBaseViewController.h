/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:01:03 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HeartRhythmUI/HeartRhythmUI-Structs.h>
#import <HealthUI/HKViewController.h>

@protocol HROnboardingPageViewControllerDelegate;
@class UIView, UIScrollView, NSLayoutConstraint;

@interface HROnboardingBaseViewController : HKViewController {

	BOOL _onboarding;
	UIView* _contentView;
	UIScrollView* _scrollView;
	long long _leftButtonType;
	long long _rightButtonType;
	id<HROnboardingPageViewControllerDelegate> _delegate;
	UIView* _footerView;
	NSLayoutConstraint* _scrollViewBottomConstraint;

}

@property (nonatomic,retain) UIScrollView * scrollView;                                               //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UIView * footerView;                                                     //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * scrollViewBottomConstraint;                         //@synthesize scrollViewBottomConstraint=_scrollViewBottomConstraint - In the implementation block
@property (getter=isOnboarding,nonatomic,readonly) BOOL onboarding;                                   //@synthesize onboarding=_onboarding - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                    //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) long long leftButtonType;                                                //@synthesize leftButtonType=_leftButtonType - In the implementation block
@property (assign,nonatomic) long long rightButtonType;                                               //@synthesize rightButtonType=_rightButtonType - In the implementation block
@property (assign,nonatomic,__weak) id<HROnboardingPageViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setUpConstraints;
-(id)_buttonForButtonType:(long long)arg1 ;
-(void)closeButtonTapped:(id)arg1 ;
-(BOOL)isOnboarding;
-(void)setScrollViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)scrollViewBottomConstraint;
-(id)initForOnboarding:(BOOL)arg1 ;
-(void)setRightButtonType:(long long)arg1 ;
-(void)setUpUI;
-(void)setFooterView:(id)arg1 insets:(NSDirectionalEdgeInsets)arg2 ;
-(void)removeFooterView;
-(id)_titleFontTextStyle;
-(double)_titleTopToFirstBaselineLeading;
-(double)titleTopToFirstBaseline;
-(void)_setUpNavigationBar;
-(void)_adjustScrollViewForFooterView;
-(id)_onboardingElectrocardiogramCancelButton;
-(id)_onboardingAtrialFibrillationDetectionCancelButton;
-(id)_closeButton;
-(id)_skipButton;
-(void)onboardingElectrocardiogramCancelButtonTapped:(id)arg1 ;
-(void)onboardingAtrialFibrillationDetectionCancelButtonTapped:(id)arg1 ;
-(void)skipButtonTapped:(id)arg1 ;
-(void)setLeftButtonType:(long long)arg1 ;
-(long long)leftButtonType;
-(long long)rightButtonType;
-(void)setDelegate:(id<HROnboardingPageViewControllerDelegate>)arg1 ;
-(UIView *)contentView;
-(id<HROnboardingPageViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setContentView:(UIView *)arg1 ;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(id)titleFont;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
@end

