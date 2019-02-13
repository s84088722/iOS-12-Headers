//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISearchContainerViewController.h>

#import "CarChromeModeController-Protocol.h"
#import "SearchDataProviderDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UISearchControllerDelegate-Protocol.h"
#import "UISearchResultsUpdating-Protocol.h"

@class CarChromeViewController, CarKeyboardSearchResultsController, ChromeViewController, NSString, SearchDataProvider;

__attribute__((visibility("hidden")))
@interface CarKeyboardSearchModeController : UISearchContainerViewController <SearchDataProviderDelegate, UISearchResultsUpdating, UISearchBarDelegate, UISearchControllerDelegate, CarChromeModeController>
{
    CarChromeViewController *_chromeViewController;
    unsigned long long _requestedInteractionModel;
    SearchDataProvider *_searchDataProvider;
    CarKeyboardSearchResultsController *_searchResultsController;
}

@property(readonly, nonatomic) CarKeyboardSearchResultsController *searchResultsController; // @synthesize searchResultsController=_searchResultsController;
@property(readonly, nonatomic) SearchDataProvider *searchDataProvider; // @synthesize searchDataProvider=_searchDataProvider;
@property(readonly, nonatomic) unsigned long long requestedInteractionModel; // @synthesize requestedInteractionModel=_requestedInteractionModel;
@property(nonatomic) ChromeViewController *chromeViewController;
- (void).cxx_destruct;
- (int)currentUsageTarget;
- (void)didDismissSearchController:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)searchDataProviderDidUpdate:(id)arg1;
- (void)resignCurrentModeAnimated:(_Bool)arg1 toMode:(id)arg2;
- (void)becomeCurrentModeWithViews:(id)arg1 animated:(_Bool)arg2 state:(id)arg3 fromMode:(id)arg4;
- (_Bool)invalidAfterDisconnect;
- (_Bool)shouldTimeoutAfterDisconnect;
- (id)viewController;
- (_Bool)showsNavigationBar;
- (_Bool)showsMapView;
- (id)itemAtIndexPath:(id)arg1;
- (long long)itemCount;
- (void)pushDetailsForItemSelectedAtIndexPath:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithRequestedInteractionModel:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

