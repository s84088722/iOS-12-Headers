//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenTimeUI/STIntroSplashViewController.h>

#import <ScreenTimeUI/UITableViewDataSource-Protocol.h>
#import <ScreenTimeUI/UITableViewDelegate-Protocol.h>

@class NSString, STDeviceBedtime, UITableView;

@interface STIntroDowntimeViewController : STIntroSplashViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableView;
    unsigned long long _datePickerVisibility;
    STDeviceBedtime *_bedtimeModel;
}

@property(retain) STDeviceBedtime *bedtimeModel; // @synthesize bedtimeModel=_bedtimeModel;
@property unsigned long long datePickerVisibility; // @synthesize datePickerVisibility=_datePickerVisibility;
@property(retain) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)stringForDateComponents:(id)arg1;
- (void)datePickerChanged:(id)arg1;
- (long long)tableRowForDatePicker;
- (unsigned long long)tableRowForEndLabelRow;
- (unsigned long long)tableRowForStartLabelRow;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
