//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "InboxTableViewDelegate-Protocol.h"
#import "InboxTableViewGroupControllerDelegate-Protocol.h"
#import "UITableViewDataSourcePrefetching-Protocol.h"
#import "UIViewControllerPreviewingDelegate_Deprecated-Protocol.h"

@class CalendarModel, EKUIAccountRefresher, NSArray, NSString;
@protocol InboxNewSectionViewControllerDelegate, UIViewControllerPreviewing;

@interface InboxNewSectionViewController : UITableViewController <InboxTableViewDelegate, InboxTableViewGroupControllerDelegate, UIViewControllerPreviewingDelegate_Deprecated, UITableViewDataSourcePrefetching>
{
    CalendarModel *_model;
    _Bool _isRefreshing;
    double _minimumContentHeight;
    id <UIViewControllerPreviewing> _viewControllerPreviewingRegistration;
    EKUIAccountRefresher *_currentAccountRefresher;
    _Bool _reloadsSuspendedUntilRefreshCompletes;
    _Bool _needReloadWhenRefreshCompletes;
    _Bool _viewIsVisible;
    id <InboxNewSectionViewControllerDelegate> _inboxNewSectionDelegate;
    NSArray *_allGroups;
    NSArray *_visibleGroups;
}

@property(nonatomic) _Bool viewIsVisible; // @synthesize viewIsVisible=_viewIsVisible;
@property(retain) NSArray *visibleGroups; // @synthesize visibleGroups=_visibleGroups;
@property(retain) NSArray *allGroups; // @synthesize allGroups=_allGroups;
@property(nonatomic) __weak id <InboxNewSectionViewControllerDelegate> inboxNewSectionDelegate; // @synthesize inboxNewSectionDelegate=_inboxNewSectionDelegate;
- (void).cxx_destruct;
- (void)_delegateShouldClose;
- (id)_groupForSection:(long long)arg1;
- (id)_groupForIndexPath:(id)arg1;
- (void)accountRefreshFinished:(id)arg1;
- (void)_pulledToRefresh:(id)arg1;
- (void)refresh:(id)arg1;
- (void)inboxTableViewGroupController:(id)arg1 viewProposedTimeForAttendee:(id)arg2 onEvent:(id)arg3;
- (void)inboxTableViewGroupController:(id)arg1 viewCommentsForEvent:(id)arg2;
- (void)inboxTableViewGroupController:(id)arg1 inspectEvent:(id)arg2;
- (void)inboxTableViewGroupController:(id)arg1 addedRows:(id)arg2 removedRows:(id)arg3 updatedRows:(id)arg4;
- (id)parentTableViewControllerForGroupController:(id)arg1;
- (id)noContentStringForInboxTableView:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint)arg2 inSourceView:(id)arg3;
- (id)previewViewControllerForRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 prefetchRowsAtIndexPaths:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct CGSize)preferredContentSize;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)_canEnableRefresh;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (void)inboxWillDismiss;
- (void)_updateGroupVisibility;
- (void)_refreshIfNeeded;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

