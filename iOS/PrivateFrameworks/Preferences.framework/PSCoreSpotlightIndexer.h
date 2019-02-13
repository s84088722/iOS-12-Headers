//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSSearchableIndex, CSTopHitSearchQuery, NSDate, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PSCoreSpotlightIndexer : NSObject
{
    CSSearchableIndex *_prefsSearchableIndex;
    NSObject<OS_dispatch_queue> *_spotlightIndexQueue;
    CSTopHitSearchQuery *_searchQuery;
    NSMutableArray *_indexFromControllerLog;
}

+ (id)sharedInstance;
+ (char *)spotlightIndexQueueIdentifier;
+ (id)searchIndexIdentifier;
@property(retain, nonatomic) NSMutableArray *indexFromControllerLog; // @synthesize indexFromControllerLog=_indexFromControllerLog;
@property(retain, nonatomic) CSTopHitSearchQuery *searchQuery; // @synthesize searchQuery=_searchQuery;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *spotlightIndexQueue; // @synthesize spotlightIndexQueue=_spotlightIndexQueue;
@property(retain, nonatomic) CSSearchableIndex *prefsSearchableIndex; // @synthesize prefsSearchableIndex=_prefsSearchableIndex;
- (void).cxx_destruct;
- (id)_urlsFromManifestForSpecifier:(id)arg1 bundle:(id)arg2;
- (id)_urlForSpecifier:(id)arg1 identifier:(id)arg2 category:(id)arg3 childCategory:(id *)arg4 prefix:(id)arg5 path:(id *)arg6 baseURL:(id)arg7 shouldLinkToRow:(_Bool)arg8;
- (id)_specifiersForSpecifier:(id)arg1 bundle:(id)arg2 parentBundle:(id)arg3;
- (id)_specifiersPlistPathForSpecifier:(id)arg1 bundle:(id)arg2 parentBundle:(id)arg3;
- (id)_bundleForSpecifier:(id)arg1 parentBundle:(id)arg2;
- (id)_indexItemsFromManifestForSpecifier:(id)arg1 bundle:(id)arg2;
- (id)_indexItemForSpecifier:(id)arg1 category:(id)arg2 keywords:(id)arg3 url:(id)arg4 description:(id)arg5;
- (id)descriptionForCSSearchableItems:(id)arg1;
- (id)descriptionForCSSearchableItem:(id)arg1;
- (id)_rankingHintScoreForURL:(id)arg1;
- (id)_descriptionForSpecifierName:(id)arg1 withParentSpecifierNames:(id)arg2;
- (id)_childSpecifiersForSpecifier:(id)arg1 bundle:(id)arg2 childBundleToUpdate:(id *)arg3;
- (id)_keyValueDictionaryForURL:(id)arg1;
- (void)_reIndexNonRootSpecifier:(id)arg1 parentSpecifiers:(id)arg2 bundle:(id)arg3 category:(id)arg4 baseURL:(id)arg5 withURLPrefix:(id)arg6 waitForCompletion:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;
- (void)_reIndexRootSpecifier:(id)arg1 childSpecifiers:(id)arg2 parentSpecifierNames:(id)arg3 bundle:(id)arg4 childBundle:(id)arg5 category:(id)arg6 baseURL:(id)arg7 withURLPrefix:(id)arg8 waitForCompletion:(_Bool)arg9 completion:(CDUnknownBlockType)arg10;
- (void)_indexSpecifierForURL:(id)arg1 specifiers:(id)arg2 bundle:(id)arg3 withURLPrefix:(id)arg4 waitForCompletion:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_deleteSpecifiers:(id)arg1 bundle:(id)arg2 category:(id)arg3 pathURL:(id)arg4 withURLPrefix:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_indexSearchableItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_indexSpecifiers:(id)arg1 bundle:(id)arg2 category:(id)arg3 pathURL:(id)arg4 withURLPrefix:(id)arg5 parentSpecifierNames:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)deleteIndexWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)deleteSpecifiers:(id)arg1 bundle:(id)arg2 withURLPrefix:(id)arg3 waitForCompletion:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)indexSpecifiers:(id)arg1 bundle:(id)arg2 withURLPrefix:(id)arg3 waitForCompletion:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)indexSpecifiersWithURLs:(id)arg1 topLevelSpecifiers:(id)arg2 bundle:(id)arg3 withURLPrefix:(id)arg4 waitForCompletion:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)reindexSpecifiersIfNeeded:(id)arg1 bundle:(id)arg2 withURLPrefix:(id)arg3 waitForCompletion:(_Bool)arg4 setHasIndexed:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)topHitSearchForString:(id)arg1 keyboardLanguage:(id)arg2 foundItemsHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)searchableItemClassIdentifier;
- (id)searchableItemAttributeSetClassIdenfitier;
- (void)setLastIndexLanguage:(id)arg1;
- (id)lastIndexLanguage;
- (void)setLastIndexBuild:(id)arg1;
- (id)lastIndexBuild;
- (void)setLastIndexDate:(id)arg1;
@property(readonly, nonatomic) NSDate *lastIndexDate;
- (void)setNeedsIndex;
- (void)setNeedsIndex:(_Bool)arg1;
@property(readonly, nonatomic) _Bool needsIndex;
- (_Bool)controllerIsBlacklisted:(id)arg1;
- (id)blacklistedControllers;

@end

