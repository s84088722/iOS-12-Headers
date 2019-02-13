//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FPDTrackedObject.h"

#import "FPDFileCoordinationProviderDelegate-Protocol.h"
#import "FPDPushMessageDelegate-Protocol.h"

@class FPDExtensionSession, NSArray, NSDictionary, NSExtension, NSMutableDictionary, NSObject, NSOperationQueue, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface FPDExtension : FPDTrackedObject <FPDFileCoordinationProviderDelegate, FPDPushMessageDelegate>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_readWriteLockQueue;
    NSObject<OS_dispatch_queue> *_domainQueue;
    NSOperationQueue *_providedItemsOperationQueue;
    NSURL *_providedItemsURL;
    NSExtension *_extension;
    NSMutableDictionary *_coordinatorMetadataPerURL;
    NSDictionary *_fileCoordinationProviderByURL;
    NSMutableDictionary *_domainsByID;
    NSMutableDictionary *_enabledByDomainID;
    _Bool _readonly;
    _Bool _enabledByDefault;
    _Bool _supportsEnumeration;
    _Bool _invalidated;
    _Bool _isAvailableSystemWide;
    _Bool _usesUniqueItemIdentifiersAcrossDevices;
    NSObject<OS_dispatch_queue> *_presentersQueue;
    NSString *_identifier;
    NSString *_purposeIdentifier;
    NSString *_localizedName;
    NSString *_owningApplicationIdentifier;
    NSString *_bundleVersion;
    FPDExtensionSession *_session;
    NSURL *_supportURL;
    NSURL *_extensionBundleURL;
    NSMutableDictionary *_filePresenters;
    NSString *_extensionPointVersion;
    NSArray *_supportedFileTypes;
    NSMutableDictionary *_indexerByDomainIdentifier;
    NSString *_containingBundleIdentifier;
    NSURL *_domainsPlistURL;
}

+ (id)instanceWithExtension:(id)arg1 queue:(id)arg2;
@property(nonatomic) _Bool usesUniqueItemIdentifiersAcrossDevices; // @synthesize usesUniqueItemIdentifiersAcrossDevices=_usesUniqueItemIdentifiersAcrossDevices;
@property(retain, nonatomic) NSURL *domainsPlistURL; // @synthesize domainsPlistURL=_domainsPlistURL;
@property(retain, nonatomic) NSString *containingBundleIdentifier; // @synthesize containingBundleIdentifier=_containingBundleIdentifier;
@property(nonatomic) _Bool isAvailableSystemWide; // @synthesize isAvailableSystemWide=_isAvailableSystemWide;
@property(retain, nonatomic) NSMutableDictionary *indexerByDomainIdentifier; // @synthesize indexerByDomainIdentifier=_indexerByDomainIdentifier;
@property(retain, nonatomic) NSArray *supportedFileTypes; // @synthesize supportedFileTypes=_supportedFileTypes;
@property(retain, nonatomic) NSString *extensionPointVersion; // @synthesize extensionPointVersion=_extensionPointVersion;
@property(retain, nonatomic) NSMutableDictionary *filePresenters; // @synthesize filePresenters=_filePresenters;
@property(retain, nonatomic) NSURL *extensionBundleURL; // @synthesize extensionBundleURL=_extensionBundleURL;
@property(readonly, nonatomic) NSURL *supportURL; // @synthesize supportURL=_supportURL;
@property(readonly, nonatomic) FPDExtensionSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(nonatomic) _Bool supportsEnumeration; // @synthesize supportsEnumeration=_supportsEnumeration;
@property(nonatomic) _Bool enabledByDefault; // @synthesize enabledByDefault=_enabledByDefault;
@property(nonatomic) _Bool readonly; // @synthesize readonly=_readonly;
@property(readonly, nonatomic) NSString *owningApplicationIdentifier; // @synthesize owningApplicationIdentifier=_owningApplicationIdentifier;
@property(readonly, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, nonatomic) NSString *purposeIdentifier; // @synthesize purposeIdentifier=_purposeIdentifier;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *presentersQueue; // @synthesize presentersQueue=_presentersQueue;
- (void).cxx_destruct;
- (void)dumpStateTo:(id)arg1;
- (_Bool)isProviderForURL:(id)arg1;
- (id)providerInfo;
- (void)unregisterFromFileCoordinator;
- (void)registerFileCoordinatorWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)didReceiveMessage:(id)arg1;
- (void)fetchSupportedServicesForDocumentAtURL:(id)arg1 forPID:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)enableAllDomainsIfNoUserElection;
- (void)setEnabled:(_Bool)arg1 forDomainIdentifier:(id)arg2 forPID:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)enabledForDomainIdentifier:(id)arg1;
@property(readonly, nonatomic) NSDictionary *domainsByID;
- (_Bool)removeDomain:(id)arg1 forPID:(int)arg2 error:(id *)arg3;
- (_Bool)removeAllDomainsForPID:(int)arg1 error:(id *)arg2;
- (void)addDomain:(id)arg1 forPID:(int)arg2;
- (void)_readDomainProperties;
- (void)_writeDomainProperties;
- (void)reindexAllSearchableItemsForPID:(int)arg1 acknowledgementHandler:(CDUnknownBlockType)arg2;
- (void)valuesForAttributes:(id)arg1 forItemAtURL:(id)arg2 forPID:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)didChangeItemID:(id)arg1 forPID:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)evictItemAtURL:(id)arg1 forPID:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 forPID:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeTrashedItemsOlderThanDate:(id)arg1 forPID:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setLastUsedDate:(id)arg1 forItemID:(id)arg2 forPID:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)trashItemAtURL:(id)arg1 forPID:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)itemChangedAtURL:(id)arg1 forPID:(int)arg2;
- (void)startProvidingItemAtURL:(id)arg1 readingOptions:(unsigned long long)arg2 forPID:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLForItemID:(id)arg1 creatingPlaceholderIfMissing:(_Bool)arg2 ignoreAlternateContentsURL:(_Bool)arg3 forPID:(int)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)itemIDForURL:(id)arg1 forPID:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)itemForURL:(id)arg1 forPID:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setAlternateContentsURL:(id)arg1 onDocumentURL:(id)arg2 forPID:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)didUpdateAlternateContentsDocumentForDocumentAtURL:(id)arg1 forPID:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_newFileProviderProxyWithoutTimeoutWithPID:(int)arg1;
- (id)_newFileProviderProxyWithPID:(int)arg1;
- (void)_providedItemAtURL:(id)arg1 withPresenterWithID:(id)arg2 didMoveToURL:(id)arg3;
- (void)_providedItemAtURL:(id)arg1 didLosePresenterWithID:(id)arg2;
- (void)_providedItemAtURL:(id)arg1 didGainPresenterWithID:(id)arg2;
- (void)_writerWithID:(id)arg1 didFinishWritingForURL:(id)arg2;
- (void)_cancelProvidingItemAtURL:(id)arg1 toReaderWithID:(id)arg2;
- (void)_provideItemAtURL:(id)arg1 toReaderWithID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_provideItemAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_physicalURLForURL:(id)arg1;
- (id)_providedItemsOperationQueue;
- (id)_fileReactorID;
@property(readonly, copy) NSString *description;
@property(readonly) NSArray *providedItemsURLs;
@property(retain) NSExtension *extension;
- (void)invalidate;
- (void)start;
- (id)initWithExtension:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

