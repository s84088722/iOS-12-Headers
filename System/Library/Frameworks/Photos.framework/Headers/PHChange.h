/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:29:19 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSSet, NSDictionary, NSMutableDictionary, NSArray, NSObject, NSMapTable, NSManagedObjectContext, PHPersistentChangeToken;

@interface PHChange : NSObject {

	NSSet* _insertedObjectIDs;
	NSSet* _changedObjectIDs;
	NSSet* _deletedObjectIDs;
	NSDictionary* _changedAttributesByOID;
	NSDictionary* _changedRelationshipsByOID;
	NSMutableDictionary* _updatedObjectsChangedAttributesByEntityName;
	NSMutableDictionary* _updatedObjectsChangedRelationshipsByEntityName;
	NSArray* _changedObjectIDsArray;
	NSMutableDictionary* _changeDetailsForObjects;
	NSMutableDictionary* _collectionChangeDetailsForObjects;
	NSObject*<OS_dispatch_queue> _changeDetailIsolation;
	NSMapTable* _changeHandlingMap;
	BOOL _unknownMergeEvent;
	NSMutableDictionary* _objectIDsByLocalIdentifier;
	NSManagedObjectContext* _context;
	NSDictionary* _deletedUuidsByObjectId;
	PHPersistentChangeToken* _changeToken;

}

@property (nonatomic,readonly) NSManagedObjectContext * context;                   //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSDictionary * deletedUuidsByObjectId;              //@synthesize deletedUuidsByObjectId=_deletedUuidsByObjectId - In the implementation block
@property (nonatomic,readonly) BOOL hasIncrementalChanges; 
@property (nonatomic,readonly) PHPersistentChangeToken * changeToken;              //@synthesize changeToken=_changeToken - In the implementation block
+(id)mergePersistedChanges:(id)arg1 ;
+(void)pl_simulateChangeWithAssetContainerList:(id)arg1 handler:(/*^block*/id)arg2 ;
+(id)handlerQueue;
-(id)insertedObjectIDs;
-(id)_pl_prettyDescriptionWithIndent:(long long)arg1 ;
-(void)preloadSimulatedChangeDetailsForManualFetchResults:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithChangedIdentifiers:(id)arg1 unknownMergeEvent:(BOOL)arg2 changeToken:(id)arg3 ;
-(id)initWithInsertedObjectIDs:(id)arg1 updatedObjectIDs:(id)arg2 deletedObjectIDs:(id)arg3 deletedUuidsByObjectId:(id)arg4 changedAttributesByOID:(id)arg5 changedRelationshipsByOID:(id)arg6 unknownMergeEvent:(BOOL)arg7 changeToken:(id)arg8 managedObjectContext:(id)arg9 ;
-(void)_prepareCachedValuesForEntity:(id)arg1 ;
-(id)_preloadChangeDetailsWithRefetchForFetchResults:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)_preloadChangeDetailsWithClearCacheForFetchResults:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)fetchUUIDMapForObjectIDs:(id)arg1 entityClass:(Class)arg2 ;
-(id)_propertyNamesForObjectID:(id)arg1 entityClass:(Class)arg2 ;
-(id)changedAttributesByOID;
-(id)changedRelationshipsByOID;
-(NSDictionary *)deletedUuidsByObjectId;
-(id)_formatedDeletedUUidsByObjectId;
-(id)_formatEncodedDictionary:(id)arg1 withDecodeBlock:(/*^block*/id)arg2 ;
-(id)initWithChangedIdentifiers:(id)arg1 unknownMergeEvent:(BOOL)arg2 ;
-(BOOL)anyUpdatedObjectsWithChangedAttributes:(unsigned long long)arg1 ofEntity:(id)arg2 ;
-(BOOL)anyUpdatedObjectsWithChangedRelationships:(unsigned long long)arg1 ofEntity:(id)arg2 ;
-(void)preloadChangeDetailsForFetchResults:(id)arg1 inManagedObjectContext:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)faceRelationshipChangedForPersonWithLocalIdentifier:(id)arg1 ;
-(BOOL)personRelationshipChangedForFaceWithLocalIdentifier:(id)arg1 ;
-(BOOL)contentOrThumbnailChangedForAsset:(id)arg1 ;
-(id)changedLocalIdentifiersForEntityClass:(Class)arg1 ;
-(id)changedPropertyNamesForObject:(id)arg1 ;
-(id)changedPropertyNamesForLocalIdentifier:(id)arg1 entityClass:(Class)arg2 ;
-(id)updatedObjectIDs;
-(id)deletedObjectIDs;
-(BOOL)keyFaceChangedForPersonOID:(id)arg1 ;
-(BOOL)contentOrThumbnailChangedForPHAssetOID:(id)arg1 ;
-(BOOL)trashedStateChangedForPHAssetOID:(id)arg1 ;
-(BOOL)hiddenStateChangedForPHAssetOID:(id)arg1 ;
-(BOOL)favoriteStateChangedForPHAssetOID:(id)arg1 ;
-(BOOL)containsChangesForEntityClass:(Class)arg1 ;
-(BOOL)hasIncrementalChanges;
-(id)changeDetailsForFetchResult:(id)arg1 ;
-(id)changeDetailsForObject:(id)arg1 ;
-(PHPersistentChangeToken *)changeToken;
-(id)init;
-(id)description;
-(NSManagedObjectContext *)context;
@end
