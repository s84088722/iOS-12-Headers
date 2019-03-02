//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Navigation/MNSuggestionsManager.h>

#import "MapsSuggestionsSink-Protocol.h"

@class MapsSuggestionsEngine, NSString, NavdMSgLocationUpdater;
@protocol MapsSuggestionsFilter;

__attribute__((visibility("hidden")))
@interface NavdMapsSuggestionsManager : MNSuggestionsManager <MapsSuggestionsSink>
{
    _Bool _engineAttached;
    MapsSuggestionsEngine *_suggestionsEngine;
    id <MapsSuggestionsFilter> _myAdditionalFilter;
    NavdMSgLocationUpdater *_locationUpdater;
}

@property(retain, nonatomic) NavdMSgLocationUpdater *locationUpdater; // @synthesize locationUpdater=_locationUpdater;
@property(retain, nonatomic) id <MapsSuggestionsFilter> myAdditionalFilter; // @synthesize myAdditionalFilter=_myAdditionalFilter;
@property(nonatomic) _Bool engineAttached; // @synthesize engineAttached=_engineAttached;
@property(retain, nonatomic) MapsSuggestionsEngine *suggestionsEngine; // @synthesize suggestionsEngine=_suggestionsEngine;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *uniqueName;
- (void)invalidateForMapsSuggestionsManager:(id)arg1;
- (void)setLocationsAvailable:(_Bool)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)_updateMSgAttached;
- (void)_addSuggestionEntries:(struct NSArray *)arg1;
- (_Bool)refreshSuggestions;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
