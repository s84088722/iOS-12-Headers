//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface HKDataMetadataSimpleTableViewCell : UITableViewCell
{
    UILabel *_titleTextLabel;
    UILabel *_subtitleTextLabel;
}

@property(retain, nonatomic) UILabel *subtitleTextLabel; // @synthesize subtitleTextLabel=_subtitleTextLabel;
@property(retain, nonatomic) UILabel *titleTextLabel; // @synthesize titleTextLabel=_titleTextLabel;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setupConstraints;
- (void)layoutSubviews;
- (void)_updateForCurrentSizeCategory;
- (void)setupSubviews;
- (id)initWithReuseIdentifier:(id)arg1;

@end

