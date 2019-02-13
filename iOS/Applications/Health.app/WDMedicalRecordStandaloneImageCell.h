//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDMedicalRecordGroupableCell.h"

@class NSString, UIImage, UIImageView, UILabel;

@interface WDMedicalRecordStandaloneImageCell : WDMedicalRecordGroupableCell
{
    _Bool _showDisclosureIndicator;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIImageView *_disclosureChevronView;
    UIImageView *_titleImageView;
}

@property(retain, nonatomic) UIImageView *titleImageView; // @synthesize titleImageView=_titleImageView;
@property(retain, nonatomic) UIImageView *disclosureChevronView; // @synthesize disclosureChevronView=_disclosureChevronView;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool showDisclosureIndicator; // @synthesize showDisclosureIndicator=_showDisclosureIndicator;
- (void).cxx_destruct;
- (void)_updateForCurrentSizeCategory;
@property(copy, nonatomic) UIImage *titleImage;
@property(copy, nonatomic) NSString *detail;
@property(copy, nonatomic) NSString *title;
- (void)setupSubviews;

@end

