//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <ToneKit/PSStateRestoration-Protocol.h>
#import <ToneKit/TKTonePickerTableViewLayoutMarginsObserver-Protocol.h>
#import <ToneKit/TKTonePickerTableViewSeparatorObserver-Protocol.h>

@class NSString, TKTonePickerItem;
@protocol TKTonePickerTableViewControllerHelper;

@interface TKToneClassicsTableViewController : UITableViewController <PSStateRestoration, TKTonePickerTableViewLayoutMarginsObserver, TKTonePickerTableViewSeparatorObserver>
{
    TKTonePickerItem *_classicTonesHeaderItem;
    id <TKTonePickerTableViewControllerHelper> _tonePickerTableViewControllerHelper;
}

@property(nonatomic) __weak id <TKTonePickerTableViewControllerHelper> tonePickerTableViewControllerHelper; // @synthesize tonePickerTableViewControllerHelper=_tonePickerTableViewControllerHelper;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)separatorColorDidChangeInTonePickerTableView:(id)arg1;
- (void)layoutMarginsDidChangeInTonePickerTableView:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)didUpdateDetailText:(id)arg1 ofToneClassicsPickerItem:(id)arg2;
- (void)didUpdateCheckedStatus:(_Bool)arg1 ofToneClassicsPickerItem:(id)arg2;
- (void)didReloadTones;
- (void)dealloc;
- (id)initWithClassicTonesHeaderItem:(id)arg1;
- (_Bool)canBeShownFromSuspendedState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

