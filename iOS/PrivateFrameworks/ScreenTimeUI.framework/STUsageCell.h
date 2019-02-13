//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenTimeUI/STTableCell.h>

@class NSLayoutConstraint, STCandyBarView, STUsageItem, UILabel;

@interface STUsageCell : STTableCell
{
    UILabel *_itemNameLabel;
    STCandyBarView *_usageBarView;
    UILabel *_usageLabel;
    STUsageItem *_usageItem;
    NSLayoutConstraint *_usageBarWidthConstraint;
}

@property(readonly, nonatomic) NSLayoutConstraint *usageBarWidthConstraint; // @synthesize usageBarWidthConstraint=_usageBarWidthConstraint;
@property(retain, nonatomic) STUsageItem *usageItem; // @synthesize usageItem=_usageItem;
@property(readonly, nonatomic) UILabel *usageLabel; // @synthesize usageLabel=_usageLabel;
@property(readonly, nonatomic) STCandyBarView *usageBarView; // @synthesize usageBarView=_usageBarView;
@property(readonly, nonatomic) UILabel *itemNameLabel; // @synthesize itemNameLabel=_itemNameLabel;
- (void).cxx_destruct;
- (void)_didFetchAppInfo:(id)arg1;
- (void)_registerForAppInfoCacheNotifications;
- (void)_didFetchIcon:(id)arg1;
- (void)_registerForIconCacheNotifications;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setValue:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end
