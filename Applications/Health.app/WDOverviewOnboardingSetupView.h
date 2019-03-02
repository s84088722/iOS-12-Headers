//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, UIButton, UILabel;
@protocol WDOverviewOnboardingSetupViewDelegate;

@interface WDOverviewOnboardingSetupView : UIView
{
    id <WDOverviewOnboardingSetupViewDelegate> _delegate;
    UIView *_roundedBackgroundView;
    UIView *_heroView;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    UIButton *_onboardingButton;
    NSLayoutConstraint *_imageBottomToTitleFirstBaseline;
    NSLayoutConstraint *_titleLastBaselineToBodyFirstBaseline;
    NSLayoutConstraint *_bodyLastBaselineToButtonTop;
    NSLayoutConstraint *_imageBottomToBodyFirstBaseline;
}

@property(retain, nonatomic) NSLayoutConstraint *imageBottomToBodyFirstBaseline; // @synthesize imageBottomToBodyFirstBaseline=_imageBottomToBodyFirstBaseline;
@property(retain, nonatomic) NSLayoutConstraint *bodyLastBaselineToButtonTop; // @synthesize bodyLastBaselineToButtonTop=_bodyLastBaselineToButtonTop;
@property(retain, nonatomic) NSLayoutConstraint *titleLastBaselineToBodyFirstBaseline; // @synthesize titleLastBaselineToBodyFirstBaseline=_titleLastBaselineToBodyFirstBaseline;
@property(retain, nonatomic) NSLayoutConstraint *imageBottomToTitleFirstBaseline; // @synthesize imageBottomToTitleFirstBaseline=_imageBottomToTitleFirstBaseline;
@property(retain, nonatomic) UIButton *onboardingButton; // @synthesize onboardingButton=_onboardingButton;
@property(retain, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *heroView; // @synthesize heroView=_heroView;
@property(retain, nonatomic) UIView *roundedBackgroundView; // @synthesize roundedBackgroundView=_roundedBackgroundView;
@property(nonatomic) __weak id <WDOverviewOnboardingSetupViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_didTapOnboardingButton;
- (void)_updateConstraintConstants;
- (void)_setUpConstraints;
@property(readonly, nonatomic) NSString *buttonTitleString;
@property(readonly, nonatomic) NSString *bodyString;
@property(readonly, nonatomic) NSString *titleString;
- (id)createHeroView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
