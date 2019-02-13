//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UITableViewDataSource-Protocol.h"

@class NSArray, NSMutableArray, NSString, UITableView, UIViewController;
@protocol RAPPresentingViewController;

__attribute__((visibility("hidden")))
@interface RAPTablePartsDataSource : NSObject <UITableViewDataSource>
{
    UIViewController<RAPPresentingViewController> *_presentingViewController;
    NSMutableArray *_tableParts;
    NSMutableArray *_tableSections;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSArray *tableParts; // @synthesize tableParts=_tableParts;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)indexPathForRow:(long long)arg1 ofSection:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)sectionAtIndex:(long long)arg1;
- (long long)indexOfSection:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)popTablePart:(id)arg1 withRowAnimation:(long long)arg2;
- (void)pushTablePart:(id)arg1 withRowAnimation:(long long)arg2;
- (void)_createPartAndSectionArraysIfNeeded;
- (void)_rebuildTableSections;
- (void)tablePartDidChange:(id)arg1;
- (void)setTableParts:(id)arg1 withRowAnimation:(long long)arg2;
- (void)_clearPartsAndSections;
- (void)dealloc;
- (id)initWithPresentingViewController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

