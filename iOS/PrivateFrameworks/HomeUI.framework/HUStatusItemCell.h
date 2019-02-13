//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUCellProtocol-Protocol.h>

@class HFItem, HUGridLayoutOptions, NSArray, NSLayoutConstraint, NSString, UILabel, UIView;
@protocol HUResizableCellDelegate;

@interface HUStatusItemCell : UITableViewCell <HUCellProtocol>
{
    HFItem *_item;
    HUGridLayoutOptions *_gridLayoutOptions;
    UILabel *_titleLabel;
    NSLayoutConstraint *_firstBaselineToTopAnchorConstraint;
    NSArray *_staticConstraints;
    UIView *_titleLabelSnapshot;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) UIView *titleLabelSnapshot; // @synthesize titleLabelSnapshot=_titleLabelSnapshot;
@property(retain, nonatomic) NSArray *staticConstraints; // @synthesize staticConstraints=_staticConstraints;
@property(readonly, nonatomic) NSLayoutConstraint *firstBaselineToTopAnchorConstraint; // @synthesize firstBaselineToTopAnchorConstraint=_firstBaselineToTopAnchorConstraint;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) HUGridLayoutOptions *gridLayoutOptions; // @synthesize gridLayoutOptions=_gridLayoutOptions;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)_updateTitleLabel;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <HUResizableCellDelegate> resizingDelegate;
@property(readonly) Class superclass;

@end

