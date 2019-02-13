//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDSourceStoredDataViewController.h"

@class UILabel;

@interface WDWatchStoredDataViewController : WDSourceStoredDataViewController
{
    UILabel *_messageLabel;
    _Bool _watchPaired;
}

@property _Bool watchPaired; // @synthesize watchPaired=_watchPaired;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateFont;
- (void)handlePairedDevicesSnapshot:(id)arg1;
- (void)updateTableHeaderViewForUnpairedWatch;
- (void)addUnpairedWatchHeaderView;
- (void)viewWillAppear:(_Bool)arg1;

@end

