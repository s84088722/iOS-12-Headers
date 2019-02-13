//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class UIButton, UIColor, UIView;

@interface FRShowMoreButtonFooterView : UICollectionReusableView
{
    UIButton *_showMoreButton;
    UIView *_separatorView;
}

+ (id)_seeAllPressed;
+ (id)_seeAllImage;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(readonly, nonatomic) UIButton *showMoreButton; // @synthesize showMoreButton=_showMoreButton;
- (void).cxx_destruct;
- (_Bool)accessibilityActivate;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (id)accessibilityElements;
- (_Bool)isAccessibilityElement;
- (void)layoutSubviews;
- (void)updateButtonFontForPreferredContentSizeCategory;
- (void)traitCollectionDidChange:(id)arg1;
@property(retain, nonatomic) UIColor *separatorColor;
- (id)_createShowMoreButton;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end
