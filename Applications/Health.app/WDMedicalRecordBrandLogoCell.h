//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDMedicalRecordGroupableCell.h"

@class UIImageView, UIStackView, UIView, WDBrandLogoView, WDClinicalSourcesDataProvider;
@protocol HKClinicalBrandable;

@interface WDMedicalRecordBrandLogoCell : WDMedicalRecordGroupableCell
{
    _Bool _showDisclosureChevron;
    UIStackView *_stackView;
    id <HKClinicalBrandable> _brandable;
    WDClinicalSourcesDataProvider *_dataProvider;
    UIView *_logoAlignedContentView;
    UIImageView *_disclosureChevronView;
    WDBrandLogoView *_logoView;
}

@property(readonly, nonatomic) WDBrandLogoView *logoView; // @synthesize logoView=_logoView;
@property(readonly, nonatomic) UIImageView *disclosureChevronView; // @synthesize disclosureChevronView=_disclosureChevronView;
@property(nonatomic, getter=showsDisclosureChevron) _Bool showDisclosureChevron; // @synthesize showDisclosureChevron=_showDisclosureChevron;
@property(readonly, nonatomic) UIView *logoAlignedContentView; // @synthesize logoAlignedContentView=_logoAlignedContentView;
@property(readonly, nonatomic) WDClinicalSourcesDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(readonly, nonatomic) id <HKClinicalBrandable> brandable; // @synthesize brandable=_brandable;
@property(readonly, nonatomic) UIStackView *_stackView; // @synthesize _stackView;
- (void).cxx_destruct;
@property(nonatomic) double logoSize;
- (void)setBrandable:(id)arg1 dataProvider:(id)arg2;
- (void)_updateBasedOnAccessibilityCategory:(_Bool)arg1;
- (void)_updateContentWithBrandable:(id)arg1 dataProvider:(id)arg2;
- (id)_contentViewMarginsGuide;
- (void)updateConstraints;
- (void)prepareForReuse;
- (void)setUpConstraints;
- (void)setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

