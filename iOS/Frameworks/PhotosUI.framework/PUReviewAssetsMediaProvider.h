//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUEditableMediaProvider.h>

@class PHConcurrentMapTable;

@interface PUReviewAssetsMediaProvider : PUEditableMediaProvider
{
    int _nextRequestIdentifier;
    double __screenScale;
    PHConcurrentMapTable *__mediaRequests;
}

@property(readonly, nonatomic) PHConcurrentMapTable *_mediaRequests; // @synthesize _mediaRequests=__mediaRequests;
@property(readonly, nonatomic) double _screenScale; // @synthesize _screenScale=__screenScale;
- (void).cxx_destruct;
- (void)cancelImageRequest:(int)arg1;
- (int)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (int)requestAsynchronousVideoURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)requestAVAssetForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)requestImageURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (id)_resizeImageAtURL:(id)arg1 imageUTI:(id)arg2 targetSize:(struct CGSize)arg3 bakeInOrientation:(_Bool)arg4 error:(id *)arg5;
- (int)requestImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (int)_requestAdjustmentDataForAsset:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (int)_incrementRequestIdentifier;
- (id)init;

@end

