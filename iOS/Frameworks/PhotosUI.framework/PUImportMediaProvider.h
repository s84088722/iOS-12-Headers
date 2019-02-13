//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXMediaProvider.h>

@class NSMutableDictionary, PUImportImageCache, PXLoadingStatusManager;

@interface PUImportMediaProvider : PXMediaProvider
{
    _Bool _hasBeenIdle;
    int _thumbnailImageFormat;
    PXLoadingStatusManager *loadingStatusManager;
    long long _nextRequestID;
    NSMutableDictionary *_thumbnailRequestsByID;
    PUImportImageCache *_imageCache;
    long long _imageRequestsInflight;
    long long _lastRequestsInflight;
    NSMutableDictionary *_extensionPlaceholderCachesByRequestSize;
}

+ (int)defaultThumbnailImageFormat;
+ (void)unregisterPUImportMediaProviderNotificationsReceiver:(struct NSObject *)arg1;
+ (void)registerPUImportMediaProviderNotificationsReceiver:(struct NSObject *)arg1;
@property(nonatomic) _Bool hasBeenIdle; // @synthesize hasBeenIdle=_hasBeenIdle;
@property(retain, nonatomic) NSMutableDictionary *extensionPlaceholderCachesByRequestSize; // @synthesize extensionPlaceholderCachesByRequestSize=_extensionPlaceholderCachesByRequestSize;
@property(nonatomic) long long lastRequestsInflight; // @synthesize lastRequestsInflight=_lastRequestsInflight;
@property(nonatomic) long long imageRequestsInflight; // @synthesize imageRequestsInflight=_imageRequestsInflight;
@property(retain, nonatomic) PUImportImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) NSMutableDictionary *thumbnailRequestsByID; // @synthesize thumbnailRequestsByID=_thumbnailRequestsByID;
@property(readonly, nonatomic) int thumbnailImageFormat; // @synthesize thumbnailImageFormat=_thumbnailImageFormat;
@property(nonatomic) long long nextRequestID; // @synthesize nextRequestID=_nextRequestID;
@property(retain, nonatomic) PXLoadingStatusManager *loadingStatusManager; // @synthesize loadingStatusManager;
- (void).cxx_destruct;
- (id)_placeholderForItem:(id)arg1 size:(unsigned long long)arg2;
@property(readonly, nonatomic) struct CGSize gridItemSize;
- (id)_placeholderExtensionForItem:(id)arg1;
- (id)_newPlaceholderImageForItemWithExtension:(id)arg1 size:(struct CGSize)arg2;
- (double)idleTimeOut;
- (void)performIdleProcessingIfNecessary;
- (id)cachedImageForModel:(id)arg1 atSize:(unsigned long long)arg2;
- (_Bool)thumbnailExistsForModel:(id)arg1;
- (_Bool)thumbnailExistsForModel:(id)arg1 atSize:(unsigned long long)arg2;
- (long long)requestImageForImportItem:(id)arg1 ofSize:(unsigned long long)arg2 priority:(unsigned char)arg3 completion:(CDUnknownBlockType)arg4;
- (long long)requestImageForImportItem:(id)arg1 ofSize:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)imageOfSize:(unsigned long long)arg1 forModel:(id)arg2 localCacheOnly:(_Bool)arg3 priority:(unsigned char)arg4 completion:(CDUnknownBlockType)arg5;
- (void)stopCachingImagesForAllAssets;
- (void)stopCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)startCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)cancelImageRequest:(long long)arg1;
- (void)enumerateAvailableThumbnailDataFormats:(CDUnknownBlockType)arg1;
- (id)thumbnailDataForAsset:(id)arg1 targetSize:(struct CGSize)arg2 outDataSpec:(struct PXMediaProviderThumbnailDataSpec *)arg3;
- (long long)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (long long)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (long long)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (long long)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (long long)requestCGImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (id)init;
- (void)sendMediaProviderThumbnailingBecameIdle;
- (void)ppt_sendMediaProviderDidProcessAsset:(id)arg1;

@end
