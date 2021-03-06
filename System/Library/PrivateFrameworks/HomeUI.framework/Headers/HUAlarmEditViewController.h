//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <HomeUI/HUAlarmEditSettingViewControllerDelegate-Protocol.h>
#import <HomeUI/UITableViewDataSource-Protocol.h>
#import <HomeUI/UITableViewDelegate-Protocol.h>

@class HUAlarmEditView, MTAlarm, MTMutableAlarm, NSSet, NSString;
@protocol HUAlarmEditViewControllerDelegate;

@interface HUAlarmEditViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, HUAlarmEditSettingViewControllerDelegate>
{
    id <HUAlarmEditViewControllerDelegate> _delegate;
    NSString *_loggedInAppleMusicAccountDSID;
    NSSet *_selectedActionSets;
    HUAlarmEditView *_editAlarmView;
    long long _editingAlarmSetting;
    MTAlarm *_originalAlarm;
    MTMutableAlarm *_editedAlarm;
}

+ (struct CGSize)desiredContentSize;
@property(retain, nonatomic) MTMutableAlarm *editedAlarm; // @synthesize editedAlarm=_editedAlarm;
@property(retain, nonatomic) MTAlarm *originalAlarm; // @synthesize originalAlarm=_originalAlarm;
@property(nonatomic) long long editingAlarmSetting; // @synthesize editingAlarmSetting=_editingAlarmSetting;
@property(retain, nonatomic) HUAlarmEditView *editAlarmView; // @synthesize editAlarmView=_editAlarmView;
@property(readonly, nonatomic) NSSet *selectedActionSets; // @synthesize selectedActionSets=_selectedActionSets;
@property(copy, nonatomic) NSString *loggedInAppleMusicAccountDSID; // @synthesize loggedInAppleMusicAccountDSID=_loggedInAppleMusicAccountDSID;
@property(nonatomic) __weak id <HUAlarmEditViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)alarmEditSettingController:(id)arg1 didEditAlarm:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidUnload;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)handleSuspend;
- (void)handlePickerChanged;
- (void)startEditingSetting:(long long)arg1;
- (void)_doneButtonClicked:(id)arg1;
- (void)_cancelButtonClicked:(id)arg1;
- (void)saveAlarmOnlyIfEdited:(_Bool)arg1;
@property(readonly, nonatomic, getter=isEdited) _Bool edited;
- (_Bool)isNewAlarm;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)dealloc;
- (id)initWithAlarm:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

