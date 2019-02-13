//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class HKSplashScreenItem, NSLayoutConstraint, NSString, UIImage, UIImageView, UILabel;

@interface HKSplashScreenFeatureViewCell : UITableViewCell
{
    HKSplashScreenItem *_splashScreenItem;
    UILabel *_fullDescriptionLabel;
    UIImageView *_itemIconView;
    double _cellPadding;
    NSLayoutConstraint *_iconTopConstraint;
    UIImage *_icon;
    NSString *_title;
    NSString *_featureDescription;
}

+ (id)_descriptionFont;
+ (id)_titleFont;
+ (id)defaultReuseIdentifier;
@property(retain, nonatomic) NSString *featureDescription; // @synthesize featureDescription=_featureDescription;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSLayoutConstraint *iconTopConstraint; // @synthesize iconTopConstraint=_iconTopConstraint;
@property(readonly) double cellPadding; // @synthesize cellPadding=_cellPadding;
@property(retain, nonatomic) UIImageView *itemIconView; // @synthesize itemIconView=_itemIconView;
@property(retain, nonatomic) UILabel *fullDescriptionLabel; // @synthesize fullDescriptionLabel=_fullDescriptionLabel;
@property(retain, nonatomic) HKSplashScreenItem *splashScreenItem; // @synthesize splashScreenItem=_splashScreenItem;
- (void).cxx_destruct;
- (id)lastBaselineAnchor;
- (id)firstBaselineAnchor;
- (void)createSubviews;
- (void)setIcon:(id)arg1 title:(id)arg2 description:(id)arg3;
- (void)updateForFontOrTextChange;
- (void)traitCollectionDidChange:(id)arg1;

@end

