//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableSet, PHConcurrentMapTable;
@protocol OS_dispatch_queue;

@interface PHCoreImageManager : NSObject
{
    NSObject<OS_dispatch_queue> *_requestLookupTableIsolationQueue;
    NSMapTable *_requestLookupTable;
    PHConcurrentMapTable *_perDomainPreheatItemMapTables;
    PHConcurrentMapTable *_perDomainCloudPreheatItemMapTables;
    PHConcurrentMapTable *_perDomainHighPriorityRequestWaitGroups;
    NSMutableSet *_preheatBlobsToConsiderForCleanup;
    NSObject<OS_dispatch_queue> *_CPLDownloadUpdateIsolationQueue;
    NSObject<OS_dispatch_queue> *_CPLDownloadFireAndForgetRequestQueue;
}

+ (void)_chooseFormatsForSize:(struct CGSize)arg1 contentMode:(long long)arg2 srcAspectRatio:(double)arg3 options:(id)arg4 hasAdjustmentsHandler:(CDUnknownBlockType)arg5 desiredImagePixelSize:(struct CGSize *)arg6 bestFormat:(id *)arg7 degradedFormat:(id *)arg8;
+ (id)_fastestDegradedFormatForRequest:(id)arg1 hasAdjustmentsHandler:(CDUnknownBlockType)arg2;
+ (id)_degradedFormatWithPolicy:(long long)arg1 request:(id)arg2 hasAdjustmentsHandler:(CDUnknownBlockType)arg3;
+ (long long)_plImageVersionFromPHImageRequestOptionsVersion:(long long)arg1;
+ (long long)_wantedCloudPlaceholderKindForImageFormat:(id)arg1;
+ (struct CGImage *)_newResizedImageForImage:(struct CGImage *)arg1 withSize:(struct CGSize)arg2 normalizedCropRect:(struct CGRect)arg3 contentMode:(long long)arg4;
+ (struct CGSize)_aspectedSizeWithSize:(struct CGSize)arg1 maxDimension:(double)arg2;
+ (id)_dictionaryBySettingObject:(id)arg1 forKey:(id)arg2 inDictionary:(id)arg3;
+ (id)_debugFilenameForAsset:(id)arg1;
+ (id)_descriptionForDomain:(id)arg1;
+ (void)runBlockAsPrivilegedAsPhotosApp:(CDUnknownBlockType)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *CPLDownloadFireAndForgetRequestQueue; // @synthesize CPLDownloadFireAndForgetRequestQueue=_CPLDownloadFireAndForgetRequestQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *CPLDownloadUpdateIsolationQueue; // @synthesize CPLDownloadUpdateIsolationQueue=_CPLDownloadUpdateIsolationQueue;
@property(retain, nonatomic) NSMutableSet *preheatBlobsToConsiderForCleanup; // @synthesize preheatBlobsToConsiderForCleanup=_preheatBlobsToConsiderForCleanup;
@property(retain, nonatomic) PHConcurrentMapTable *perDomainHighPriorityRequestWaitGroups; // @synthesize perDomainHighPriorityRequestWaitGroups=_perDomainHighPriorityRequestWaitGroups;
@property(retain, nonatomic) PHConcurrentMapTable *perDomainCloudPreheatItemMapTables; // @synthesize perDomainCloudPreheatItemMapTables=_perDomainCloudPreheatItemMapTables;
@property(retain, nonatomic) PHConcurrentMapTable *perDomainPreheatItemMapTables; // @synthesize perDomainPreheatItemMapTables=_perDomainPreheatItemMapTables;
@property(retain, nonatomic) NSMapTable *requestLookupTable; // @synthesize requestLookupTable=_requestLookupTable;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *requestLookupTableIsolationQueue; // @synthesize requestLookupTableIsolationQueue=_requestLookupTableIsolationQueue;
- (void).cxx_destruct;
- (void)_cancelAsynchronousRequestWithID:(int)arg1;
- (void)_handleNormalImageRequest:(id)arg1 library:(id)arg2 deliveryMode:(long long)arg3 degradedFormat:(id)arg4 bestFormat:(id)arg5 optimalSourcePixelSize:(struct CGSize)arg6 wantsImageDataOrURL:(_Bool)arg7 sync:(_Bool)arg8 isFinalStageOfStagedRequest:(_Bool)arg9 isResponseToSharedStreamsDownload:(_Bool)arg10;
- (void)_processImageRequest:(id)arg1 sync:(_Bool)arg2;
- (void)_handleSyncImageRequestForBRGA5551:(id)arg1;
- (void)_asyncGenerateLiveRenderedImageWithRequest:(id)arg1 library:(id)arg2 format:(int)arg3 desiredImagePixelSize:(struct CGSize)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_fetchAdjustmentDataThruAssetsdAndCPLHandlerWithRequest:(id)arg1 networkAccessAllowed:(_Bool)arg2 trackCPLDownload:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_fetchPreheatableAnySizeImageAsNon5551BytesWithRequest:(id)arg1 library:(id)arg2 format:(int)arg3 bestFormat:(int)arg4 preheatItem:(id)arg5 optimalSourcePixelSize:(struct CGSize)arg6 sync:(_Bool)arg7 fireAndForgetCPLDownload:(_Bool)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (void)_fetchAnySizeImageAsNon5551BytesWithRequest:(id)arg1 library:(id)arg2 format:(int)arg3 bestFormat:(int)arg4 optimalSourcePixelSize:(struct CGSize)arg5 sync:(_Bool)arg6 fireAndForgetCPLDownload:(_Bool)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)_fireAndForgetCPLDownloadWithRequest:(id)arg1 format:(int)arg2;
- (void)_fetchAnySizeImageAsNon5551BytesPossiblyThruAssetsdAndCPLWithRequest:(id)arg1 library:(id)arg2 format:(int)arg3 optimalSourcePixelSize:(struct CGSize)arg4 wantsProperties:(_Bool)arg5 networkAccessAllowed:(_Bool)arg6 networkAccessForced:(_Bool)arg7 trackCPLDownload:(_Bool)arg8 sync:(_Bool)arg9 completionHandler:(CDUnknownBlockType)arg10;
- (id)_resizeUIImage:(id)arg1 withRequest:(id)arg2;
- (void)_unregisterRequest:(id)arg1;
- (void)_registerRequest:(id)arg1;
- (void)asyncEnumeratePendingCPLDownloadRequestsWithBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)asyncEnumeratePendingRequestsWithBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateRequest:(id)arg1 withDownloadContext:(id)arg2;
- (void)_updateCPLDownloadStatesOnStatusDidChangeNotification:(id)arg1;
- (void)_updateCPLDownloadStatesOnConnectionLostNotification:(id)arg1;
- (void)_clearCPLDownloadWaitGroupForRequest:(id)arg1;
- (id)_setupCPLDownloadWaitGroupForRequest:(id)arg1 withTimeout:(unsigned long long)arg2;
- (id)_fastFetchAdjustmentDataWithRequest:(id)arg1;
- (id)_originalPreheatItemCreateTransientWithAsset:(id)arg1 optimalSourcePixelSize:(struct CGSize)arg2 options:(unsigned int)arg3 domain:(id)arg4;
- (id)_preheatItemCreateIfNeededWithAsset:(id)arg1 format:(int)arg2 optimalSourcePixelSize:(struct CGSize)arg3 options:(unsigned int)arg4 CPLPrefetching:(_Bool)arg5 outDidExist:(_Bool *)arg6 domain:(id)arg7;
- (id)_preheatItemWithAsset:(id)arg1 format:(int)arg2 CPLPrefetching:(_Bool)arg3 domain:(id)arg4;
- (id)_preheatItemMapTableWithFormat:(int)arg1 CPLPrefetching:(_Bool)arg2 domain:(id)arg3 createIfNeeded:(_Bool)arg4;
- (id)_preheatItemSourceWithFormat:(int)arg1;
- (void)_performPreheatReferenceCountingOperationForAssets:(id)arg1 CPLPrefetching:(_Bool)arg2 domain:(id)arg3 operation:(long long)arg4 passingTestHandler:(CDUnknownBlockType)arg5;
- (void)_inq_main_cleanupPreheatBlobs;
- (void)_considerPreheatItemForCleanup:(id)arg1 asset:(id)arg2 domain:(id)arg3;
- (id)_highPriorityRequestWaitGroupWithDomain:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

