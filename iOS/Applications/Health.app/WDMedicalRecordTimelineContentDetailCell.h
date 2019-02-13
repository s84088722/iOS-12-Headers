//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDMedicalRecordGroupableCell.h"

@class NSString, UIImageView, UILabel;

@interface WDMedicalRecordTimelineContentDetailCell : WDMedicalRecordGroupableCell
{
    NSString *_contentString;
    NSString *_contentDetailString;
    UILabel *_contentLabel;
    UILabel *_contentValueLabel;
    UIImageView *_disclosureChevronView;
}

@property(retain, nonatomic) UIImageView *disclosureChevronView; // @synthesize disclosureChevronView=_disclosureChevronView;
@property(retain, nonatomic) UILabel *contentValueLabel; // @synthesize contentValueLabel=_contentValueLabel;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
- (void).cxx_destruct;
- (id)_contentDetailFont;
- (id)_contentFont;
- (id)_generateDisplayAttributedString;
@property(copy, nonatomic) NSString *contentValue;
@property(copy, nonatomic) NSString *contentDetail;
@property(copy, nonatomic) NSString *content;
- (void)setupSubviews;

@end

