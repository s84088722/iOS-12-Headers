//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol GuidanceSearchResultsDataProviding, GuidanceSearchResultsRouteInfoProviding, GuidanceSearchResultsViewModelDelegate, NavActionCoordination, NavigationMapItemDisplaying;

__attribute__((visibility("hidden")))
@interface GuidanceSearchResultsViewModel : NSObject
{
    _Bool _loading;
    id <GuidanceSearchResultsViewModelDelegate> _delegate;
    NSArray *_results;
    id <GuidanceSearchResultsDataProviding> _dataProvider;
    id <NavActionCoordination> _navActionCoordinator;
    id <GuidanceSearchResultsRouteInfoProviding> _routeInfoProvider;
    id <NavigationMapItemDisplaying> _mapItemDisplayer;
}

@property(getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(readonly, nonatomic) id <NavigationMapItemDisplaying> mapItemDisplayer; // @synthesize mapItemDisplayer=_mapItemDisplayer;
@property(readonly, nonatomic) id <GuidanceSearchResultsRouteInfoProviding> routeInfoProvider; // @synthesize routeInfoProvider=_routeInfoProvider;
@property(readonly, nonatomic) id <NavActionCoordination> navActionCoordinator; // @synthesize navActionCoordinator=_navActionCoordinator;
@property(readonly, nonatomic) id <GuidanceSearchResultsDataProviding> dataProvider; // @synthesize dataProvider=_dataProvider;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
@property(nonatomic) __weak id <GuidanceSearchResultsViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleResults:(id)arg1 error:(id)arg2;
- (void)selectMapItemAtIndex:(unsigned long long)arg1;
- (void)navigateToItemAtIndex:(unsigned long long)arg1;
- (void)cancelResultsView;
- (void)clearSelection;
- (void)loadDataIfNeeded;
@property(readonly, nonatomic) NSString *title;
- (void)dealloc;
- (id)initWithDataProvider:(id)arg1 navActionCoordinator:(id)arg2 routeInfoProvider:(id)arg3 mapItemDisplayer:(id)arg4;

@end

