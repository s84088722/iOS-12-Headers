//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSDictionary, NSOrderedSet;

__attribute__((visibility("hidden")))
@interface GeoTotalRequestCountTableViewController : UITableViewController
{
    NSDictionary *_info;
    NSDictionary *_sectionDict;
    NSOrderedSet *_orderedSectionKeys;
}

@property(retain, nonatomic) NSOrderedSet *orderedSectionKeys; // @synthesize orderedSectionKeys=_orderedSectionKeys;
@property(retain, nonatomic) NSDictionary *sectionDict; // @synthesize sectionDict=_sectionDict;
@property(retain, nonatomic) NSDictionary *info; // @synthesize info=_info;
- (void).cxx_destruct;
- (unsigned long long)getRequestCountForMode:(unsigned char)arg1 andApp:(id)arg2;
- (unsigned long long)getRequestCountForType:(unsigned char)arg1 andApp:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dataPreProcessing;
- (id)initWithDictionary:(id)arg1;

@end

