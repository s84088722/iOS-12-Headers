//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKTableViewController.h>

@class HKHealthStore, HKSample, NSArray, UIFont;

@interface WDAppAccessListViewController : HKTableViewController
{
    HKHealthStore *_healthStore;
    NSArray *_allowedApps;
    NSArray *_disallowedApps;
    HKSample *_sample;
    UIFont *_bodyFont;
}

@property(retain, nonatomic) UIFont *bodyFont; // @synthesize bodyFont=_bodyFont;
@property(retain, nonatomic) HKSample *sample; // @synthesize sample=_sample;
@property(retain, nonatomic) NSArray *disallowedApps; // @synthesize disallowedApps=_disallowedApps;
@property(retain, nonatomic) NSArray *allowedApps; // @synthesize allowedApps=_allowedApps;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)resetAccess;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)_textForCellAtIndexPath:(id)arg1;
- (id)_imageForCellAtIndexPath:(id)arg1;
- (id)_identifierForCellInSection:(long long)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_refreshAppAuthorizationData;
- (void)viewDidLoad;
- (id)initWithSample:(id)arg1 healthStore:(id)arg2;

@end

