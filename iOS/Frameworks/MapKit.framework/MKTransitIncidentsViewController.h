//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/_MKTableViewController.h>

@class NSArray;

@interface MKTransitIncidentsViewController : _MKTableViewController
{
    NSArray *_incidents;
}

@property(copy, nonatomic) NSArray *incidents; // @synthesize incidents=_incidents;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)_cellForRow:(long long)arg1 inSection:(long long)arg2;
- (void)dealloc;
- (void)_localeDidChange;
- (void)_updateTitle;
- (void)infoCardThemeChanged:(id)arg1;
- (void)viewDidLoad;
- (id)initWithIncidents:(id)arg1;

@end

