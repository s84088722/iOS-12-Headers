//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PSIDatabase;

@interface PLSearchProcessor : NSObject
{
    PSIDatabase *_searchIndex;
}

+ (id)searchProcessorLog;
@property(readonly, nonatomic) PSIDatabase *searchIndex; // @synthesize searchIndex=_searchIndex;
- (void).cxx_destruct;
- (_Bool)_shouldOmitSectionForCategoryMask:(unsigned long long)arg1;
- (_Bool)_categoryMaskIsCombinable:(unsigned long long)arg1;
- (void)_extractSearchResultsFromGroupResults:(id)arg1 withQuery:(id)arg2 resultsHandler:(CDUnknownBlockType)arg3;
- (id)_searchResultsByCategoryMasksForSearchResults:(id)arg1;
- (id)_sortDescriptorsForCategoryMask:(unsigned long long)arg1;
- (id)_numberOfAssetsSortDescriptors;
- (id)_dateSortDescriptors;
- (id)_alphabeticalSortDescriptors;
- (id)completionSuggestionsForQuery:(id)arg1 withSearchSections:(id)arg2 numberOfSuggestions:(unsigned long long)arg3;
- (id)updatedSearchSections:(id)arg1 withTopCollectionResults:(id)arg2;
- (id)searchResultSectionsWithAssetResults:(id)arg1 collectionResults:(id)arg2 tripResults:(id)arg3 combineAssetSections:(_Bool)arg4;
- (void)performQuery:(id)arg1 withResultsHandler:(CDUnknownBlockType)arg2;
- (id)initWithDatabase:(id)arg1;

@end
