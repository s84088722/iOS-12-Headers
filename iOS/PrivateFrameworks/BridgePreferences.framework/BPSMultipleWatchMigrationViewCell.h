//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class BPSCheckMarkView, BPSRemoveMigrationWatchView, UILabel;

@interface BPSMultipleWatchMigrationViewCell : UITableViewCell
{
    BPSRemoveMigrationWatchView *_watchView;
    BPSCheckMarkView *_checkmarkView;
    UILabel *_deviceDetailLabel;
}

@property(retain, nonatomic) UILabel *deviceDetailLabel; // @synthesize deviceDetailLabel=_deviceDetailLabel;
@property(retain, nonatomic) BPSCheckMarkView *checkmarkView; // @synthesize checkmarkView=_checkmarkView;
@property(retain, nonatomic) BPSRemoveMigrationWatchView *watchView; // @synthesize watchView=_watchView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

