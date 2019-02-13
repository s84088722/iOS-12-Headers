//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ControlContaineeViewController.h"

#import "GEOLogContextDelegate-Protocol.h"
#import "RouteSearchFieldsDelegate-Protocol.h"
#import "SearchDataSourceDelegate-Protocol.h"

@class HairlineView, ModalCardHeaderView, NSString, RecentsDataSource, RouteSearchFieldsViewController, SearchDataSource, UITableView;
@protocol RoutePlanningDataCoordination;

__attribute__((visibility("hidden")))
@interface RouteSearchViewController : ControlContaineeViewController <RouteSearchFieldsDelegate, SearchDataSourceDelegate, GEOLogContextDelegate>
{
    RecentsDataSource *_recentsDataSource;
    SearchDataSource *_acDataSource;
    _Bool _didInvalidateRoutePlan;
    id <RoutePlanningDataCoordination> _dataCoordinator;
    ModalCardHeaderView *_modalHeaderView;
    RouteSearchFieldsViewController *_fieldsViewController;
    HairlineView *_hairline;
    UITableView *_suggestionsTableView;
}

@property(nonatomic) _Bool didInvalidateRoutePlan; // @synthesize didInvalidateRoutePlan=_didInvalidateRoutePlan;
@property(retain, nonatomic) UITableView *suggestionsTableView; // @synthesize suggestionsTableView=_suggestionsTableView;
@property(retain, nonatomic) HairlineView *hairline; // @synthesize hairline=_hairline;
@property(retain, nonatomic) RouteSearchFieldsViewController *fieldsViewController; // @synthesize fieldsViewController=_fieldsViewController;
@property(retain, nonatomic) ModalCardHeaderView *modalHeaderView; // @synthesize modalHeaderView=_modalHeaderView;
@property(nonatomic) __weak id <RoutePlanningDataCoordination> dataCoordinator; // @synthesize dataCoordinator=_dataCoordinator;
- (void).cxx_destruct;
- (int)searchFieldTypeForAnalytics;
- (int)currentMapViewTargetForAnalytics;
- (int)currentUITargetForAnalytics;
- (void)_invalidateRoutePlanIfNeeded;
- (void)_routeTapped:(id)arg1;
- (void)_cancelTapped:(id)arg1;
- (_Bool)searchDataSource:(id)arg1 shouldFilterItem:(id)arg2;
- (void)dataSource:(id)arg1 itemTapped:(id)arg2;
- (void)dataSourceUpdated:(id)arg1;
- (int)listForDataSource:(id)arg1;
- (void)updateDataSourceWithFromInput:(id)arg1 toInput:(id)arg2;
- (void)routeSearch:(id)arg1 didUpdateToInputText:(id)arg2;
- (void)routeSearch:(id)arg1 didUpdateFromInputText:(id)arg2;
- (void)routeSearch:(id)arg1 didUpdateToItem:(id)arg2;
- (void)routeSearch:(id)arg1 didUpdateFromItem:(id)arg2;
- (void)routeSearchFieldsDidBeginEditing:(id)arg1;
- (void)routeSearchFieldsDidRequestRoute:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_setupConstraints;
- (void)viewDidLoad;
- (void)makeAFieldFirstResponderIfNeeded;
- (void)setPauseSelectionUpdates:(_Bool)arg1;
- (void)selectDestinationField;
- (void)selectOriginField;
- (void)_customInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

