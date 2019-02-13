//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDTableViewSection.h"

#import "WDSourceTableViewSection-Protocol.h"

@class HKAuthorizationSettingsViewController, NSArray, NSMutableSet, NSString;

@interface WDDeviceSourcesListTableViewSection : WDTableViewSection <WDSourceTableViewSection>
{
    NSArray *_list;
    NSArray *_sources;
    NSArray *_devices;
    NSMutableSet *_identifiers;
    HKAuthorizationSettingsViewController *_settingsViewController;
}

@property(retain, nonatomic) HKAuthorizationSettingsViewController *settingsViewController; // @synthesize settingsViewController=_settingsViewController;
@property(retain, nonatomic) NSMutableSet *identifiers; // @synthesize identifiers=_identifiers;
@property(retain, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property(retain, nonatomic) NSArray *sources; // @synthesize sources=_sources;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
- (void).cxx_destruct;
- (double)heightForRow:(unsigned long long)arg1;
- (double)estimatedHeightForRow:(unsigned long long)arg1;
- (void)didSelectRow:(unsigned long long)arg1 representedByCell:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)willSelectRow:(id)arg1;
- (id)_noSourcesCellWithTableView:(id)arg1;
- (id)_sourceCellForRow:(unsigned long long)arg1 tableView:(id)arg2;
- (id)cellForRow:(unsigned long long)arg1 table:(id)arg2;
- (id)titleForFooter;
- (id)titleForHeader;
- (unsigned long long)numberOfRows;
- (void)applicationWillEnterForeground;
- (void)setUpWithTableViewController:(id)arg1;
- (_Bool)_isSourceSelectable:(id)arg1;
- (id)_sourceForRow:(long long)arg1;
- (void)setSources:(id)arg1 devices:(id)arg2;
- (void)reloadSources;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

