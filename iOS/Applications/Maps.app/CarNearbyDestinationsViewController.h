//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CarDefaultSearchResultsViewController.h"

#import "CarDestinationsTab-Protocol.h"
#import "MKLocationManagerObserver-Protocol.h"

@class BrowseCategory, BrowseManager, CLLocation, CarChromeViewController, CarDestinationsTabBarItem, CarMissingContentOverlayView, ChromeViewController, NSArray, NSString, UIActivityIndicatorView;
@protocol CarDestinationsTabDelegate;

__attribute__((visibility("hidden")))
@interface CarNearbyDestinationsViewController : CarDefaultSearchResultsViewController <MKLocationManagerObserver, CarDestinationsTab>
{
    CarMissingContentOverlayView *_noContentView;
    CLLocation *_lastFetchedFromLocation;
    _Bool _needsRefresh;
    UIActivityIndicatorView *_spinner;
    _Bool _loading;
    _Bool _fetchingResults;
    id <CarDestinationsTabDelegate> _delegate;
    CarChromeViewController *_chromeViewController;
    BrowseCategory *_category;
    BrowseManager *_browseManager;
    NSArray *_results;
    NSArray *_searchResults;
    NSString *_headerText;
}

@property(nonatomic) _Bool fetchingResults; // @synthesize fetchingResults=_fetchingResults;
@property(copy, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
@property(retain, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
@property(retain, nonatomic) BrowseManager *browseManager; // @synthesize browseManager=_browseManager;
@property(retain, nonatomic) BrowseCategory *category; // @synthesize category=_category;
@property(nonatomic) ChromeViewController *chromeViewController;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) __weak id <CarDestinationsTabDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)pushDetailsForItemSelectedAtIndexPath:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)titleForSection:(long long)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (_Bool)shouldTimeoutAfterDisconnect;
- (_Bool)contentNeedsRefreshingForUpdatedLocation:(id)arg1;
- (void)reloadContentIfNeededForUpdatedLocation:(id)arg1;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)fetchResults:(CDUnknownBlockType)arg1;
- (id)noContentView;
- (void)didReselectTab;
- (void)didSelectTab;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)resignCurrentModeAnimated:(_Bool)arg1 toMode:(id)arg2;
- (void)becomeCurrentModeWithViews:(id)arg1 animated:(_Bool)arg2 state:(id)arg3 fromMode:(id)arg4;
- (id)viewController;
- (_Bool)showsMapView;
@property(readonly, nonatomic) CarDestinationsTabBarItem *destinationsTabBarItem;
- (id)initWithCategory:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

