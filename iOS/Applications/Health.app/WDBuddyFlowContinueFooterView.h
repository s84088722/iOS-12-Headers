//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIButton;

@interface WDBuddyFlowContinueFooterView : UIView
{
    double _width;
    double _bottomInset;
    NSLayoutConstraint *_continueButtonBaselineConstraint;
    NSLayoutConstraint *_continueButtonBaselineToBottomConstraint;
    UIButton *_continueButton;
}

@property(retain, nonatomic) UIButton *continueButton; // @synthesize continueButton=_continueButton;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateForCurrentSizeCategory;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 bottomInset:(double)arg3 width:(double)arg4;

@end

