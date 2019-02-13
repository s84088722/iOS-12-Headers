//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPArchiverManagerDelegate-Protocol.h>
#import <iWorkImport/TSPComponentWriterDelegate-Protocol.h>
#import <iWorkImport/TSPDataArchiver-Protocol.h>
#import <iWorkImport/TSPExternalReferenceDelegate-Protocol.h>
#import <iWorkImport/TSPObjectModifyDelegate-Protocol.h>
#import <iWorkImport/TSPPersistedObjectUUIDMapDelegate-Protocol.h>

@class NSHashTable, NSMutableArray, NSMutableSet, NSSet, NSString, NSURL, TSPArchiverManager, TSPComponentExternalReferenceMap, TSPDataAttributesSnapshot, TSPDocumentRevision, TSPObject, TSPObjectContainer, TSPObjectContext, TSPObjectReferenceMap, TSPPackageMetadata, TSPPersistedObjectUUIDMap;
@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSPPackageWriteCoordinator : NSObject <TSPArchiverManagerDelegate, TSPComponentWriterDelegate, TSPDataArchiver, TSPExternalReferenceDelegate, TSPPersistedObjectUUIDMapDelegate, TSPObjectModifyDelegate>
{
    // Error parsing type: AB, name: _didWriteObjectContainer
    TSPObjectContext *_context;
    unsigned char _packageIdentifier;
    TSPDocumentRevision *_documentRevision;
    unsigned long long _fileFormatVersion;
    unsigned long long _saveToken;
    long long _preferredPackageType;
    TSPObject *_metadataObject;
    TSPDataAttributesSnapshot *_dataAttributesSnapshot;
    TSPObjectReferenceMap *_objectReferenceMap;
    TSPArchiverManager *_archiverManager;
    NSObject<OS_dispatch_group> *_completionGroup;
    NSSet *_knownComponentLocators;
    struct unordered_map<const long long, TSP::ComponentPropertiesSnapshot, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSP::ComponentPropertiesSnapshot>>> _componentPropertiesSnapshot;
    NSObject<OS_dispatch_queue> *_componentQueue;
    struct unordered_map<const long long, TSP::WrittenComponentInfo, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSP::WrittenComponentInfo>>> _writtenComponents;
    unordered_map_38045d47 _skippedComponents;
    struct map<unsigned int, std::__1::map<long long, TSPComponent *, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, TSPComponent *>>>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::map<long long, TSPComponent *, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, TSPComponent *>>>>>> _remainingComponentsQueue;
    NSMutableSet *_packageLocatorSet;
    TSPObjectContainer *_objectContainer;
    TSPPersistedObjectUUIDMap *_persistedUUIDMap;
    NSObject<OS_dispatch_queue> *_modifyObjectQueue;
    NSHashTable *_modifiedObjectsDuringWrite;
    _Bool _captureSnapshots;
    NSObject<OS_dispatch_queue> *_externalLazyReferencesQueue;
    TSPComponentExternalReferenceMap *_externalLazyReferencesMap;
    NSObject<OS_dispatch_queue> *_objectsQueue;
    struct unordered_map<const long long, TSP::WrittenObjectInfo, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSP::WrittenObjectInfo>>> _writtenObjects;
    struct queue<TSP::WrittenObjectInfo, std::__1::deque<TSP::WrittenObjectInfo, std::__1::allocator<TSP::WrittenObjectInfo>>> _writtenLazyReferences;
    NSObject<OS_dispatch_queue> *_externalReferenceQueue;
    NSMutableArray *_externalReferenceBlocks;
    NSMutableSet *_duplicateUUIDs;
    NSObject<OS_dispatch_queue> *_metadataQueue;
    unsigned long long _readVersion;
    unsigned long long _writeVersion;
    NSHashTable *_referencedDatas;
    NSMutableArray *_dataFinalizeHandlers;
    _Bool _writeSuccess;
    _Bool _isRecoverableError;
    _Bool _isCancelled;
    _Bool _didWriteRootObject;
    _Bool _didWriteMetadata;
    NSURL *_documentTargetURL;
    NSURL *_relativeURLForExternalData;
    TSPPackageMetadata *_packageMetadata;
}

@property(readonly, nonatomic) TSPPackageMetadata *packageMetadata; // @synthesize packageMetadata=_packageMetadata;
@property(readonly, nonatomic) NSURL *relativeURLForExternalData; // @synthesize relativeURLForExternalData=_relativeURLForExternalData;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)persistedObjectUUIDMap:(id)arg1 foundDuplicateUUID:(id)arg2 firstObjectLocation:(struct ObjectLocation)arg3 secondObjectLocation:(struct ObjectLocation)arg4;
- (id)persistedObjectUUIDMap:(id)arg1 needsDescriptionForComponentIdentifier:(long long)arg2 objectIdentifier:(long long)arg3;
- (id)explicitComponentRootObjectForObject:(id)arg1;
- (_Bool)wasComponentCopied:(long long)arg1;
- (long long)componentIdentifierForObjectIdentifier:(long long)arg1 objectOrNil:(id)arg2 objectUUIDOrNil:(id)arg3;
- (id)objectForIdentifier:(long long)arg1;
- (void)addDataFinalizeHandlerForSuccessfulSave:(CDUnknownBlockType)arg1;
- (_Bool)componentWriter:(id)arg1 object:(id)arg2 belongsToLinkedComponent:(id)arg3;
- (void)componentWriter:(id)arg1 locatorForClaimingComponent:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)componentWriterNeedsDocumentRecovery:(id)arg1;
- (void)componentWriter:(id)arg1 wantsComponentOfObject:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)componentWriterWantsDelayedObjects:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)componentWriter:(id)arg1 canSkipArchivingStronglyReferencedObject:(id)arg2 fromComponentRootObject:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)componentWriter:(id)arg1 wantsExplicitComponentRootObjectForObject:(id)arg2 archiverOrNil:(id)arg3 claimingComponent:(id)arg4 hasArchiverAccessLock:(_Bool)arg5;
- (unsigned long long)objectTargetTypeForComponentWriter:(id)arg1;
- (void)addDelayedObject:(id)arg1 forComponentRootObject:(id)arg2 claimingComponent:(id)arg3 isDelayedObjectReferencedByObjectContainer:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (id)explicitComponentRootObjectForObject:(id)arg1 archiverOrNil:(id)arg2 claimingComponent:(id)arg3 newClaimingComponent:(id)arg4 hasArchiverAccessLock:(_Bool)arg5;
- (_Bool)didWriteData:(id)arg1;
- (_Bool)didWriteComponent:(id)arg1 wasCopied:(_Bool *)arg2;
- (_Bool)didWriteObject:(id)arg1 claimingComponent:(id *)arg2;
- (id)createPackageMetadataWritingDatasWithPackageWriter:(id)arg1 saveOperationState:(id)arg2;
- (void)didReferenceData:(id)arg1;
- (void)calculateExternalReferences;
- (void)updateExternalReferencesForLinkedComponent:(id)arg1;
- (void)setArchivedObjects:(id)arg1 componentObjectUUIDMap:(id)arg2 objectReferenceMap:(id)arg3 externalStrongReferences:(id)arg4 externalWeakReferences:(id)arg5 featureInfos:(id)arg6 dataReferences:(id)arg7 forComponent:(id)arg8;
- (id)componentForObjectIdentifier:(long long)arg1 objectOrNil:(id)arg2;
- (_Bool)isObjectInExternalPackage:(id)arg1 claimingComponent:(id *)arg2;
- (_Bool)isComponentExternal:(id)arg1 wasWritten:(_Bool *)arg2 wasCopied:(_Bool *)arg3;
- (_Bool)shouldEnqueueComponent:(id)arg1;
- (_Bool)shouldLinkComponentOfObject:(id)arg1;
- (_Bool)isComponentPersisted:(id)arg1;
- (_Bool)shouldArchiveComponent:(id)arg1 checkForceArchive:(_Bool)arg2;
- (_Bool)shouldArchiveComponent:(id)arg1;
- (void)copyComponent:(id)arg1 locator:(id)arg2 packageWriter:(id)arg3;
- (void)writeExternalReferences:(id)arg1 andUpdateLazyReferences:(id)arg2 withPackageWriter:(id)arg3 forComponent:(id)arg4 locator:(id)arg5;
- (void)archiveComponent:(id)arg1 locator:(id)arg2 storeOutsideObjectArchive:(_Bool)arg3 rootObject:(id)arg4 withPackageWriter:(id)arg5;
- (void)writeComponent:(id)arg1 rootObjectOrNil:(id)arg2 forceArchive:(_Bool)arg3 failToAutosaveOnArchive:(_Bool)arg4 withPackageWriter:(id)arg5;
- (void)writeRemainingComponentsWithPackageWriter:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)nextComponentAndRootObjectForComponentWriteWithCompletion:(CDUnknownBlockType)arg1;
- (void)enqueueComponent:(id)arg1 rootObjectOrNil:(id)arg2 forceArchive:(_Bool)arg3 failToAutosaveOnArchive:(_Bool)arg4;
- (void)enqueueRootObjectImpl:(id)arg1 forceArchive:(_Bool)arg2 failToAutosaveOnArchive:(_Bool)arg3 isAddingDelayedObjectReferencedByObjectContainer:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)enqueueRootObject:(id)arg1 forceArchive:(_Bool)arg2 failToAutosaveOnArchive:(_Bool)arg3 isAddingDelayedObjectReferencedByObjectContainer:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)writeRootObjectAndRelatedComponents:(id)arg1 withPackageWriter:(id)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)writeRemainingRootObjectsAndRelatedComponents:(id)arg1 withPackageWriter:(id)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)enumerateWrittenObjectsWithBlock:(CDUnknownBlockType)arg1;
- (void)updateObjectContextForSuccessfulSaveWithPackageWriter:(id)arg1 packageURL:(id)arg2;
@property(readonly, nonatomic) TSPObjectContainer *objectContainer;
- (void)writeRootObject:(id)arg1 withPackageWriter:(id)arg2 saveOperationState:(id)arg3 completionQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (unsigned long long)writeRootObject:(id)arg1 withPackageWriter:(id)arg2 saveOperationState:(id)arg3 error:(id *)arg4;
- (void)stopCapturingSnapshots;
- (void)willModifyObject:(id)arg1 duringReadOperation:(_Bool)arg2 shouldCaptureSnapshot:(_Bool)arg3;
- (unsigned long long)objectTargetType;
- (void)dealloc;
- (id)initWithContext:(id)arg1 documentRevision:(id)arg2 saveToken:(unsigned long long)arg3 packageIdentifier:(unsigned char)arg4 fileFormatVersion:(unsigned long long)arg5 preferredPackageType:(long long)arg6 metadataObject:(id)arg7 dataAttributesSnapshot:(id)arg8 packageWriteCoordinator:(id)arg9 captureSnapshots:(_Bool)arg10;
- (id)initWithContext:(id)arg1 documentRevision:(id)arg2 saveToken:(unsigned long long)arg3 packageIdentifier:(unsigned char)arg4 fileFormatVersion:(unsigned long long)arg5 preferredPackageType:(long long)arg6 metadataObject:(id)arg7 dataAttributesSnapshot:(id)arg8;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

