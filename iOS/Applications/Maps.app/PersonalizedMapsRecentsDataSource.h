//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DataSource.h"

#import "CustomSearchManagerObserver-Protocol.h"
#import "RecentsDataProviderDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MapsTheme, NSArray, NSString, RecentsDataProvider, SearchResult;

__attribute__((visibility("hidden")))
@interface PersonalizedMapsRecentsDataSource : DataSource <CustomSearchManagerObserver, RecentsDataProviderDelegate, UITableViewDelegate, UITableViewDataSource>
{
    SearchResult *_currentLocation;
    NSArray *_content;
    RecentsDataProvider *_recentsDataProvider;
    NSArray *_suggestions;
    MapsTheme *_mapsTheme;
    _Bool _shouldIncludeSignificantLocationSuggestions;
    _Bool _isCurrentLocationValid;
}

- (void).cxx_destruct;
- (void)customSearchManager:(id)arg1 didModifyCustomSearchResult:(id)arg2 coordinateChanged:(_Bool)arg3;
- (void)customSearchManager:(id)arg1 didReplaceCustomSearchResult:(id)arg2 animated:(_Bool)arg3 shouldSelectOnMap:(_Bool)arg4 context:(id)arg5;
- (void)recentsDataProviderDidUpdate:(id)arg1;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)isCurrentLocationSection:(long long)arg1;
- (_Bool)isRecentsSection:(long long)arg1;
- (id)objectForIndexPath:(id)arg1;
- (void)updateContent;
- (void)updateSuggestions;
- (void)setActive:(_Bool)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithTableView:(id)arg1 mapsTheme:(id)arg2 includeSignificantLocationSuggestions:(_Bool)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
