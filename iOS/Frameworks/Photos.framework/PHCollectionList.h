//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHCollection.h>

@class NSArray, NSDate, NSString, PHQuery;

@interface PHCollectionList : PHCollection
{
    long long _collectionListType;
    long long _collectionListSubtype;
    NSString *_localizedTitle;
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_localizedLocationNames;
    NSArray *_collections;
    PHQuery *_query;
    NSString *_transientIdentifier;
    int _plAlbumKind;
    CDUnknownBlockType _childCollectionsSortingComparator;
    unsigned long long _unreadAssetCollectionsCount;
    unsigned long long _estimatedChildCollectionCount;
}

+ (id)transientCollectionListWithAssetCollectionsFetchResult:(id)arg1 title:(id)arg2 identifier:(id)arg3;
+ (id)transientCollectionListWithAssetCollections:(id)arg1 title:(id)arg2 identifier:(id)arg3;
+ (id)transientCollectionListWithAssetCollectionsFetchResult:(id)arg1 title:(id)arg2;
+ (id)transientCollectionListWithAssetCollections:(id)arg1 title:(id)arg2;
+ (id)transientCollectionListWithCollectionsFetchResult:(id)arg1 title:(id)arg2 identifier:(id)arg3;
+ (id)transientCollectionListWithCollections:(id)arg1 title:(id)arg2 identifier:(id)arg3;
+ (id)transientCollectionListWithCollectionsFetchResult:(id)arg1 title:(id)arg2;
+ (id)transientCollectionListWithCollections:(id)arg1 title:(id)arg2;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2;
+ (id)fetchMomentListsWithSubtype:(long long)arg1 options:(id)arg2;
+ (id)fetchMomentListsWithSubtype:(long long)arg1 containingMoment:(id)arg2 options:(id)arg3;
+ (id)fetchRootAlbumCollectionListWithOptions:(id)arg1;
+ (id)fetchCollectionListsWithType:(long long)arg1 subtype:(long long)arg2 options:(id)arg3;
+ (id)fetchCollectionListsWithType:(long long)arg1 localIdentifiers:(id)arg2 options:(id)arg3;
+ (id)fetchCollectionListsWithCloudIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchCollectionListsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchCollectionListsContainingCollection:(id)arg1 options:(id)arg2;
+ (id)entityKeyMap;
+ (id)identifierCode;
+ (_Bool)managedObjectSupportsTrashedState;
+ (id)fetchType;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *transientIdentifier; // @synthesize transientIdentifier=_transientIdentifier;
@property(readonly, nonatomic) unsigned long long estimatedChildCollectionCount; // @synthesize estimatedChildCollectionCount=_estimatedChildCollectionCount;
@property(readonly, nonatomic) unsigned long long unreadAssetCollectionsCount; // @synthesize unreadAssetCollectionsCount=_unreadAssetCollectionsCount;
@property(readonly, copy, nonatomic) CDUnknownBlockType childCollectionsSortingComparator; // @synthesize childCollectionsSortingComparator=_childCollectionsSortingComparator;
@property(readonly, nonatomic) PHQuery *query; // @synthesize query=_query;
@property(readonly, nonatomic) long long collectionListSubtype; // @synthesize collectionListSubtype=_collectionListSubtype;
@property(readonly, nonatomic) long long collectionListType; // @synthesize collectionListType=_collectionListType;
@property(readonly, nonatomic) NSArray *collections; // @synthesize collections=_collections;
@property(readonly, nonatomic) NSArray *localizedLocationNames; // @synthesize localizedLocationNames=_localizedLocationNames;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (id)description;
- (id)initTransientWithCollections:(id)arg1 orQuery:(id)arg2 title:(id)arg3 identifier:(id)arg4;
- (_Bool)hasLocationInfo;
@property(readonly, nonatomic) _Bool keyCollectionsAtEnd;
- (unsigned long long)collectionFixedOrderPriority;
- (_Bool)collectionHasFixedOrder;
- (_Bool)canPerformEditOperation:(long long)arg1;
- (_Bool)canContainCollections;
- (id)localizedTitle;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (Class)changeRequestClass;
- (id)pl_assetContainerList;

@end

