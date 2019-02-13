//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/EKEditItemViewController.h>

#import <EventKitUI/UITableViewDataSource-Protocol.h>
#import <EventKitUI/UITableViewDelegate-Protocol.h>

@class NSMutableArray, NSString, UITableView;

__attribute__((visibility("hidden")))
@interface EKEventAvailabilityEditViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate>
{
    long long _availability;
    unsigned long long _supportedAvailabilities;
    NSMutableArray *_choices;
    UITableView *_table;
}

@property(nonatomic) long long availability; // @synthesize availability=_availability;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_selectRow:(unsigned long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
@property(nonatomic) unsigned long long supportedAvailabilities;
- (void)loadView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

