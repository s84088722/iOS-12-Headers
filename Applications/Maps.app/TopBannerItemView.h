//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class HairlineView, MKArtworkImageView, MapsThemeLabel, NSLayoutConstraint, TopBannerItem, UIButton;

__attribute__((visibility("hidden")))
@interface TopBannerItemView : UIView
{
    NSLayoutConstraint *_badgeViewWidthConstraint;
    NSLayoutConstraint *_badgeViewToMessageLabelConstraint;
    NSLayoutConstraint *_messageLabelToTrailingConstraint;
    NSLayoutConstraint *_messageLabelToButtonConstraint;
    HairlineView *_hairlineView;
    _Bool _firstItemWithIcon;
    TopBannerItem *_item;
    MapsThemeLabel *_messageLabel;
    MKArtworkImageView *_badgeImageView;
    UIButton *_button;
}

@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) MKArtworkImageView *badgeImageView; // @synthesize badgeImageView=_badgeImageView;
@property(retain, nonatomic) MapsThemeLabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) TopBannerItem *item; // @synthesize item=_item;
@property(nonatomic, getter=isFirstItemWithIcon) _Bool firstItemWithIcon; // @synthesize firstItemWithIcon=_firstItemWithIcon;
- (void).cxx_destruct;
- (void)_updateUI;
- (void)_buttonTapped:(id)arg1;
@property(nonatomic, getter=isHairlineVisible) _Bool hairlineVisible;
- (void)_setupConstraints;
- (void)_customInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
