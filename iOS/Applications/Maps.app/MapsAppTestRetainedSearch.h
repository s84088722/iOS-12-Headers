//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MapsAppTest.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MapsAppTestRetainedSearch : MapsAppTest
{
    NSString *_query;
    long long _autocompleteResultIndex;
    long long _searchResultIndex;
}

- (void).cxx_destruct;
- (void)returnToSearchResults;
- (void)returnToRetainedAutoComplete;
- (void)didPresentPlaceCard:(id)arg1;
- (void)searchSessionDidChangeSearchResults:(id)arg1;
- (void)startSearchTest;
- (void)searchAutoCompleteTestReceiveResponse:(id)arg1;
- (void)startAutoCompleteTest;
- (void)startAutoCompleteOrSearchTest;
- (_Bool)runTest;

@end
