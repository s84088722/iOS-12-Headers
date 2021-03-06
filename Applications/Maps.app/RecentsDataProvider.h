//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CustomSearchManagerObserver-Protocol.h"
#import "MapsSuggestionsSink-Protocol.h"

@class AutocompleteContext, MapsSuggestionsEngine, MapsSuggestionsNetworkRequester, NSArray, NSPredicate, NSString, PersonalizedItemSource, RecentsDataFilter, SuggestionsItemSource;
@protocol MapsSuggestionsFilter, OS_dispatch_queue, RecentsDataProviderDelegate;

__attribute__((visibility("hidden")))
@interface RecentsDataProvider : NSObject <MapsSuggestionsSink, CustomSearchManagerObserver>
{
    AutocompleteContext *_analyticsContext;
    int _mapType;
    SuggestionsItemSource *_suggestionsItemSource;
    _Bool _attachedToSuggestionsEngine;
    RecentsDataFilter *_filter;
    unsigned long long _maximumNumberOfSuggestions;
    id <MapsSuggestionsFilter> _additionalMapsSuggestionsFilter;
    CDUnknownBlockType _singleSuggestionsUpdateCompletion;
    NSObject<OS_dispatch_queue> *_appConnectionMapsSuggestionsUpdateQueue;
    MapsSuggestionsNetworkRequester *_requester;
    MapsSuggestionsEngine *_mapsSuggestionsEngine;
    _Bool _active;
    _Bool _includeFavoritesRow;
    _Bool _includeSuggestions;
    _Bool _includeMarkedLocation;
    NSArray *_content;
    NSArray *_recents;
    struct NSArray *_suggestions;
    id <RecentsDataProviderDelegate> _delegate;
}

@property(readonly, nonatomic) _Bool includeMarkedLocation; // @synthesize includeMarkedLocation=_includeMarkedLocation;
@property(readonly, nonatomic) _Bool includeSuggestions; // @synthesize includeSuggestions=_includeSuggestions;
@property(readonly, nonatomic) _Bool includeFavoritesRow; // @synthesize includeFavoritesRow=_includeFavoritesRow;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) __weak id <RecentsDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *suggestions; // @synthesize suggestions=_suggestions;
@property(readonly, copy, nonatomic) NSArray *recents; // @synthesize recents=_recents;
@property(copy, nonatomic) NSArray *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)customSearchManager:(id)arg1 didModifyCustomSearchResult:(id)arg2 coordinateChanged:(_Bool)arg3;
- (void)customSearchManager:(id)arg1 didReplaceCustomSearchResult:(id)arg2 animated:(_Bool)arg3 shouldSelectOnMap:(_Bool)arg4 context:(id)arg5;
- (_Bool)removeContentItemAtIndex:(unsigned long long)arg1;
- (void)_addressbookDidChange:(id)arg1;
- (void)_contentChangedWithSpecificCallback:(SEL)arg1;
- (void)_contentChanged;
- (void)_recentsChanged;
- (id)strippedData:(id)arg1;
- (id)_buildContent;
- (id)filteredRecentsExcludingDuplicatesOfEntries:(id)arg1;
- (void)_stopObservingAutoOptions;
- (void)_startObservingAutoOptions;
- (void)_updateAppConnectionSuggestionsEntriesIfNeeded:(struct NSArray *)arg1;
- (CDUnknownBlockType)_suggestionsFilterBlock;
- (void)_performSingleSuggestionsUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_stopFetchingSuggestions;
- (void)_startFetchingSuggestions;
- (void)_startOrStopFetchingSuggestionsAsNeeded;
- (void)invalidateForMapsSuggestionsManager:(id)arg1;
- (void)fetchSuggestions;
- (id)recentsEngine;
- (id)_createMapsSuggestionEngine;
@property(readonly, nonatomic) NSString *uniqueName;
@property(readonly, nonatomic) PersonalizedItemSource *suggestionsItemSource;
- (id)analyticsContext;
@property(readonly, nonatomic) NSPredicate *filterPredicate;
@property(readonly, nonatomic) int searchMode;
- (void)willEnterForeground;
- (void)dealloc;
- (id)initForCarPlayWithFilterPredicate:(id)arg1;
- (id)initForMapsWithViewMode:(long long)arg1 searchMode:(int)arg2;
- (id)initForForNanoMaps;
- (id)initWithMarkedLocation:(_Bool)arg1 suggestions:(_Bool)arg2 favoritesRow:(_Bool)arg3 maximumNumberOfSuggestions:(unsigned long long)arg4 viewMode:(long long)arg5 searchMode:(int)arg6 filterPredicate:(id)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

