//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, PXUIButton, UIButton, UIImageView, UILabel, UIScrollView, UIVisualEffectView;
@protocol PXCloudPhotoWelcomeViewDelegate;

@interface PXCloudPhotoWelcomeView : UIView
{
    NSLayoutConstraint *_goButtonWidthConstraint;
    NSArray *_layoutConstraints;
    UIScrollView *_scrollView;
    UIView *_containerView;
    struct {
        _Bool goButtonTapped;
        _Bool learnMoreTapped;
        _Bool notNowTapped;
    } _delegateRespondsTo;
    _Bool _buttonsEnabled;
    id <PXCloudPhotoWelcomeViewDelegate> _delegate;
    UIVisualEffectView *_statusBarVisualEffectView;
    UIImageView *_graphicImageView;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    UIButton *_learnMoreButton;
    UILabel *_finePrintLabel;
    UIVisualEffectView *_buttonContainerVisualEffectView;
    PXUIButton *_goButton;
    UIButton *_notNowButton;
}

+ (void)initialize;
@property(readonly, nonatomic) UIButton *notNowButton; // @synthesize notNowButton=_notNowButton;
@property(readonly, nonatomic) PXUIButton *goButton; // @synthesize goButton=_goButton;
@property(readonly, nonatomic) UIVisualEffectView *buttonContainerVisualEffectView; // @synthesize buttonContainerVisualEffectView=_buttonContainerVisualEffectView;
@property(readonly, nonatomic) UILabel *finePrintLabel; // @synthesize finePrintLabel=_finePrintLabel;
@property(readonly, nonatomic) UIButton *learnMoreButton; // @synthesize learnMoreButton=_learnMoreButton;
@property(readonly, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *graphicImageView; // @synthesize graphicImageView=_graphicImageView;
@property(readonly, nonatomic) UIVisualEffectView *statusBarVisualEffectView; // @synthesize statusBarVisualEffectView=_statusBarVisualEffectView;
@property(nonatomic, getter=areButtonsEnabled) _Bool buttonsEnabled; // @synthesize buttonsEnabled=_buttonsEnabled;
@property(nonatomic) __weak id <PXCloudPhotoWelcomeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleNotNowTapped:(id)arg1;
- (void)_goButtonTapped:(id)arg1;
- (void)_learnMoreTapped:(id)arg1;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (void)_updateFontAndStyle;
- (void)flashScrollIndicators;
- (void)reloadContent;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

