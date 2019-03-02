/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:01:03 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HeartRhythmUI/HROnboardingBaseViewController.h>
#import <libobjc.A.dylib/HRStackedButtonViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class HKHeartRhythmAvailability, UIView, UILabel, HRStackedButtonView, NSLayoutConstraint, UIButton, NSArray, NSString;

@interface HROnboardingAtrialFibrillationIntroViewController : HROnboardingBaseViewController <HRStackedButtonViewDelegate, UITextFieldDelegate> {

	BOOL _learnMoreContentExpanded;
	HKHeartRhythmAvailability* _availability;
	UIView* _heroView;
	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	UILabel* _footnoteLabel;
	HRStackedButtonView* _stackedButtonView;
	NSLayoutConstraint* _contentViewBottomConstraint;
	UIButton* _learnMoreButton;
	UIView* _learnMoreContentView;
	NSArray* _learnMoreCollapsedConstraints;
	NSArray* _learnMoreExpandedConstraints;

}

@property (nonatomic,retain) HKHeartRhythmAvailability * availability;                      //@synthesize availability=_availability - In the implementation block
@property (nonatomic,retain) UIView * heroView;                                             //@synthesize heroView=_heroView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * bodyLabel;                                           //@synthesize bodyLabel=_bodyLabel - In the implementation block
@property (nonatomic,retain) UILabel * footnoteLabel;                                       //@synthesize footnoteLabel=_footnoteLabel - In the implementation block
@property (nonatomic,retain) HRStackedButtonView * stackedButtonView;                       //@synthesize stackedButtonView=_stackedButtonView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewBottomConstraint;              //@synthesize contentViewBottomConstraint=_contentViewBottomConstraint - In the implementation block
@property (nonatomic,retain) UIButton * learnMoreButton;                                    //@synthesize learnMoreButton=_learnMoreButton - In the implementation block
@property (assign,nonatomic) BOOL learnMoreContentExpanded;                                 //@synthesize learnMoreContentExpanded=_learnMoreContentExpanded - In the implementation block
@property (nonatomic,retain) UIView * learnMoreContentView;                                 //@synthesize learnMoreContentView=_learnMoreContentView - In the implementation block
@property (nonatomic,retain) NSArray * learnMoreCollapsedConstraints;                       //@synthesize learnMoreCollapsedConstraints=_learnMoreCollapsedConstraints - In the implementation block
@property (nonatomic,retain) NSArray * learnMoreExpandedConstraints;                        //@synthesize learnMoreExpandedConstraints=_learnMoreExpandedConstraints - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)titleString;
-(UILabel *)footnoteLabel;
-(void)setUpConstraints;
-(UILabel *)bodyLabel;
-(UIButton *)learnMoreButton;
-(HKHeartRhythmAvailability *)availability;
-(void)setAvailability:(HKHeartRhythmAvailability *)arg1 ;
-(void)setFootnoteLabel:(UILabel *)arg1 ;
-(void)setHeroView:(UIView *)arg1 ;
-(UIView *)heroView;
-(void)setLearnMoreButton:(UIButton *)arg1 ;
-(id)bodyString;
-(void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2 ;
-(void)learnMoreButtonTapped:(id)arg1 ;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(id)initForOnboarding:(BOOL)arg1 ;
-(id)learnMoreString;
-(id)buttonTitleString;
-(void)setUpUI;
-(id)_bodyFont;
-(void)setStackedButtonView:(HRStackedButtonView *)arg1 ;
-(HRStackedButtonView *)stackedButtonView;
-(double)_assetImageBottomToTitleFirstBaseline;
-(id)_titleFontTextStyle;
-(id)_bodyFontTextStyle;
-(double)_titleLastBaselineToBodyFirstBaseline;
-(void)_setUpStackedButtonView;
-(void)_setStackedButtonViewAsFooterView;
-(id)_createHeroView;
-(BOOL)_activeWatchNeedsLocationCheck;
-(id)footnoteString;
-(id)_footnoteFont;
-(void)_setUpLearnMoreViews;
-(void)_setUpLearnMoreConstraints;
-(id)_createLearnMoreExpandedView;
-(void)setLearnMoreContentView:(UIView *)arg1 ;
-(UIView *)learnMoreContentView;
-(double)_footnoteLeading;
-(void)setLearnMoreCollapsedConstraints:(NSArray *)arg1 ;
-(void)setLearnMoreExpandedConstraints:(NSArray *)arg1 ;
-(double)_learnMoreButtonLastBaselineToContinueButton;
-(double)_learnMoreContentViewLastBaselineToContinueButton;
-(void)_updateViewsForContentExpansionState:(BOOL)arg1 ;
-(NSArray *)learnMoreCollapsedConstraints;
-(NSArray *)learnMoreExpandedConstraints;
-(id)locationFeatureAlertAckButtonString;
-(id)locationNotFoundPromptBodyString;
-(void)_presentFeatureAlertWithMessage:(id)arg1 ;
-(id)locationFeatureIneligiblePromptBodyString;
-(id)_footnoteTextStyle;
-(BOOL)learnMoreContentExpanded;
-(void)setLearnMoreContentExpanded:(BOOL)arg1 ;
-(UILabel *)titleLabel;
-(NSLayoutConstraint *)contentViewBottomConstraint;
-(void)setContentViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)_titleFont;
@end
