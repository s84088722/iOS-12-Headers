//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "StatusBarSupplementaryView-Protocol.h"

@class NSArray, NSString, UIButton, UILabel, UILayoutGuide;

__attribute__((visibility("hidden")))
@interface NavContainerResumeRouteControl : UIControl <StatusBarSupplementaryView>
{
    UILayoutGuide *_contentLayoutGuide;
    NSArray *_contentLayoutGuideConstraints;
    UILabel *_titleLabel;
    UIButton *_closeButton;
}

@property(readonly, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSArray *contentLayoutGuideConstraints; // @synthesize contentLayoutGuideConstraints=_contentLayoutGuideConstraints;
@property(readonly, nonatomic) UILayoutGuide *contentLayoutGuide; // @synthesize contentLayoutGuide=_contentLayoutGuide;
- (void).cxx_destruct;
- (id)initialConstraintsForAnimatingPositionInStatusBarBackgroundView:(id)arg1;
- (id)constraintsForPositionInStatusBarBackgroundView:(id)arg1;
@property(retain, nonatomic) NSString *title;
- (void)setHighlighted:(_Bool)arg1;
- (void)_updateBackgroundColor;
- (void)_closeButtonAction;
- (void)updateTheme;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

