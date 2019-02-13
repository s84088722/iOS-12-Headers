//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSDShapeSearchResultProviding-Protocol.h>

@class NSArray, NSCache, NSDictionary, NSSet, NSURL, TSDShapeSearchIndex, TSULocale;

__attribute__((visibility("hidden")))
@interface TSDShapeLibrary : NSObject <TSDShapeSearchResultProviding>
{
    NSArray *_categories;
    long long _dataLoadStatus;
    TSULocale *_locale;
    NSArray *_categorySort;
    long long _searchIndexStatus;
    NSDictionary *_library;
    NSURL *_libraryURL;
    TSDShapeSearchIndex *_searchIndex;
    NSCache *_shapeCache;
    NSSet *_shapeIDsToRemove;
}

+ (void)loadDataWithCompletion:(CDUnknownBlockType)arg1;
+ (id)sharedLibrary;
@property(readonly, nonatomic) NSSet *p_shapeIDsToRemove; // @synthesize p_shapeIDsToRemove=_shapeIDsToRemove;
@property(retain, nonatomic) NSCache *p_shapeCache; // @synthesize p_shapeCache=_shapeCache;
@property(retain, nonatomic) TSDShapeSearchIndex *p_searchIndex; // @synthesize p_searchIndex=_searchIndex;
@property(retain, nonatomic) NSURL *p_libraryURL; // @synthesize p_libraryURL=_libraryURL;
@property(retain, nonatomic) NSDictionary *p_library; // @synthesize p_library=_library;
@property(nonatomic) long long p_searchIndexStatus; // @synthesize p_searchIndexStatus=_searchIndexStatus;
@property(retain, nonatomic) NSArray *p_categorySort; // @synthesize p_categorySort=_categorySort;
@property(readonly, nonatomic) TSULocale *locale; // @synthesize locale=_locale;
@property(readonly, nonatomic) long long dataLoadStatus; // @synthesize dataLoadStatus=_dataLoadStatus;
- (void).cxx_destruct;
- (id)p_libraryByRemovingBlacklistedShapes:(id)arg1;
- (id)p_shapeIDByLocalizationKeyFromLibrary:(id)arg1;
- (id)p_shapeDictionariesByIDFromLibrary:(id)arg1;
- (id)p_keywordDelimiterFromLibrary:(id)arg1;
- (id)p_shapeDictionariesByID;
- (id)p_sortedCategoriesFromLibrary:(id)arg1;
- (id)p_parseLibraryFromJSON;
- (void)p_createSearchIndexWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)p_cacheDataAfterParsingWithSearchIndex:(id)arg1;
- (void)p_loadDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)p_loadCategoriesAndSearchIndexIfNeeded;
- (long long)p_setupLibrary;
- (void)p_setupLibraryIfNeeded;
- (id)shapeFromSearchResult:(id)arg1;
- (id)resultsForSearchTerm:(id)arg1;
- (id)shapeWithLocalizationKey:(id)arg1;
- (id)shapeWithID:(id)arg1;
- (void)setDataLoadStatus:(long long)arg1;
@property(readonly, nonatomic) NSArray *categories; // @synthesize categories=_categories;
- (id)initWithShapeLibraryURL:(id)arg1 categorySortURL:(id)arg2 locale:(id)arg3;

@end

