//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "FRQuickSettingsTableViewSliderCellDelegate-Protocol.h"

@class NSArray, NSObject, NSString;

@interface FRQuickSettingsTableViewController : UITableViewController <FRQuickSettingsTableViewSliderCellDelegate>
{
    NSArray *_sections;
    NSObject *_model;
}

@property(readonly, nonatomic) NSObject *model; // @synthesize model=_model;
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (void).cxx_destruct;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)cellDidChangeSliderValue:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

