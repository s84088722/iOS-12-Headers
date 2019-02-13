//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class HUGridLayoutOptions, NSArray, NSString, UIButton, UILabel;

@interface HUGridSectionHeaderView : UICollectionReusableView
{
    NSString *_sectionTitle;
    UIButton *_button;
    HUGridLayoutOptions *_layoutOptions;
    UILabel *_titleLabel;
    NSArray *_headerCellConstraints;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) NSArray *headerCellConstraints; // @synthesize headerCellConstraints=_headerCellConstraints;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) HUGridLayoutOptions *layoutOptions; // @synthesize layoutOptions=_layoutOptions;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
- (void).cxx_destruct;
- (void)_updateTitleLabel;
- (void)updateConstraints;
- (void)_invalidateConstraints;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

