//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "AudioOutputSettingAllowHFPTableRowDelegate-Protocol.h"
#import "MNNavigationServiceObserver-Protocol.h"
#import "MapsTheming-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AudioSettingsViewControllerConfiguration, NSArray, NSString;
@protocol AudioSettingsViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface AudioSettingsViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate, MNNavigationServiceObserver, AudioOutputSettingAllowHFPTableRowDelegate, MapsTheming>
{
    id <AudioSettingsViewControllerDelegate> _audioSettingsViewControllerDelegate;
    NSArray *_displayedRows;
    NSArray *_pickableRoutes;
    AudioSettingsViewControllerConfiguration *_configuration;
}

@property(retain, nonatomic) AudioSettingsViewControllerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) NSArray *displayedRows; // @synthesize displayedRows=_displayedRows;
@property(nonatomic) __weak id <AudioSettingsViewControllerDelegate> audioSettingsViewControllerDelegate; // @synthesize audioSettingsViewControllerDelegate=_audioSettingsViewControllerDelegate;
- (void).cxx_destruct;
- (void)updateTheme;
- (void)navigationService:(id)arg1 didUpdateAudioOutputSettings:(id)arg2;
- (void)_routesChanged;
- (void)audioOutputSettingAllowHFPTableRow:(id)arg1 didChangeAllowHFPValue:(_Bool)arg2;
- (_Bool)bluetoothIsPicked;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_pauseSpokenAudioChanged:(id)arg1;
- (void)_selectOutputForTableRow:(id)arg1;
- (id)_titleForFooterInSection:(long long)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)_titleForHeaderInSection:(long long)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)preferredContentSizeChanged:(id)arg1;
- (id)_volumeStringForVolumeIndex:(unsigned long long)arg1;
- (unsigned long long)_volumeIndexForVolumeString:(id)arg1;
- (void)_reloadData;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)reloadRoutes;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

