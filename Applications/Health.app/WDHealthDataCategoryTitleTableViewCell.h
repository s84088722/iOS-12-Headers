//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, NSString, UILabel;

@interface WDHealthDataCategoryTitleTableViewCell : UITableViewCell
{
    UILabel *_titleLabel;
    NSLayoutConstraint *_topLayoutConstraint;
    NSLayoutConstraint *_bottomLayoutConstraint;
    long long _headerType;
    double _lastBaselineToBottomDistance;
    NSString *_titleText;
}

@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void).cxx_destruct;
- (void)setLastBaselineToBottomDistance:(double)arg1;
- (void)setHeaderType:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateForCurrentSizeCategory;
- (double)_titleLabelLastBaselineToBottom;
- (double)_titleLabelTopToFirstBaseline;
- (id)_titleLabelFont;
- (void)_updateFont;
- (void)_setupUI;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithHeaderType:(long long)arg1 reuseIdentifier:(id)arg2;

@end

