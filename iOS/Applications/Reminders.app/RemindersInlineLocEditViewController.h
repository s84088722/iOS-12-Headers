//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CNAutocompleteFetchDelegate-Protocol.h"
#import "MKMapViewDelegate-Protocol.h"
#import "MKMapViewDelegatePrivate-Protocol.h"
#import "RemindersLocationPickerModelDelegate-Protocol.h"
#import "RemindersMapDragRadiusDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CNAutocompleteStore, EKStructuredLocation, MKLocalSearch, MKMapView, NSArray, NSLayoutConstraint, NSMutableArray, NSString, RemindersLocationPickerModel, RemindersMapDragRadiusView, UISearchBar, UISegmentedControl, UITableView, UIView, _MKLocationShifter;
@protocol CNCancelable, RemindersLocationEditorDelegate;

@interface RemindersInlineLocEditViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, RemindersLocationPickerModelDelegate, CNAutocompleteFetchDelegate, MKMapViewDelegate, MKMapViewDelegatePrivate, RemindersMapDragRadiusDelegate>
{
    UISearchBar *_searchBar;
    UIView *_dividerView;
    UITableView *_tableView;
    UISegmentedControl *_proximityControl;
    UIView *_proximityControlBackground;
    MKMapView *_mapView;
    RemindersMapDragRadiusView *_dragView;
    NSMutableArray *_constraints;
    NSString *_selectedLocationAddressString;
    EKStructuredLocation *_structuredLocation;
    long long _proximity;
    RemindersLocationPickerModel *_model;
    _MKLocationShifter *_locationShifter;
    _Bool _needsAddToRecents;
    NSMutableArray *_recents;
    MKLocalSearch *_locationSearch;
    NSArray *_locationSearchResults;
    CNAutocompleteStore *_autocompleteStore;
    NSMutableArray *_contactsResults;
    id <CNCancelable> _currentSearch;
    _Bool _everConnectedToCar;
    NSLayoutConstraint *_mapHeightConstraint;
    id <RemindersLocationEditorDelegate> _delegate;
}

+ (id)carImage;
+ (id)pinImage;
+ (id)workImage;
+ (id)homeImage;
+ (id)locationImage;
@property(nonatomic) id <RemindersLocationEditorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)overlayForRadius:(double)arg1;
- (CDStruct_02837cd9)boundingMapRectForOverlay:(id)arg1;
- (void)radiusDidChange:(double)arg1;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (void)mapView:(id)arg1 didDeselectLabelMarker:(id)arg2;
- (void)mapView:(id)arg1 didSelectLabelMarker:(id)arg2;
- (void)mapViewDidChangeVisibleRegion:(id)arg1;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;
- (void)locationPickerModel:(id)arg1 didEncounterError:(id)arg2;
- (void)locationPickerModelDidChangeSelection:(id)arg1;
- (void)locationPickerModel:(id)arg1 didUpdateMeCardItem:(long long)arg2;
- (void)locationPickerModelDidUpdateCustomLocation:(id)arg1;
- (void)locationPickerModelDidUpdateCurrentLocation:(id)arg1;
- (void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2;
- (void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)resetSearchResults;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_updateSelectedRemindersLocationWithAddressDictionary:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)_showCarOptions;
- (_Bool)_allowsSearching;
- (void)_proximityChanged:(id)arg1;
- (_Bool)_hasLocation;
- (void)updateRecents:(id)arg1;
- (void)_createProximityControlIfNeeded;
- (void)_updateUI;
- (void)_updateMapHeight;
- (double)mapHeight;
- (void)_updateLayoutContraints;
- (void)setupMap;
- (void)displayLocation:(id)arg1;
- (id)overlayWithCenterCoordinate:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithProximity:(long long)arg1 structuredLocation:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

