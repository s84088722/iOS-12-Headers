//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXPhotosDetailsContext.h>

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSObject, NSString, PHFetchResult, PHManualFetchResult;
@protocol OS_dispatch_queue;

@interface PXPeopleDetailsContext : PXPhotosDetailsContext <PXPhotoLibraryUIChangeObserver>
{
    NSObject<OS_dispatch_queue> *_fetchingQueue;
    PHManualFetchResult *_peopleFetchResult;
    PHFetchResult *_keyFaceAssetFetchResult;
}

@property(readonly, nonatomic) PHFetchResult *keyFaceAssetFetchResult; // @synthesize keyFaceAssetFetchResult=_keyFaceAssetFetchResult;
@property(readonly, nonatomic) PHManualFetchResult *peopleFetchResult; // @synthesize peopleFetchResult=_peopleFetchResult;
- (void).cxx_destruct;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (id)_displayTitleForPeople:(id)arg1;
- (id)_fetchKeyFaceAssetFetchResultFromPerson:(id)arg1;
- (void)_updateKeyFaceAssetFetchResult;
- (void)setKeyFaceAssetFetchResult:(id)arg1;
- (_Bool)shouldUseKeyFace;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)didPerformChanges;
- (id)initWithPhotosDataSource:(id)arg1 parentContext:(id)arg2 people:(id)arg3;
- (id)initWithPhotosDataSource:(id)arg1 displayTitleInfo:(id)arg2 parentContext:(id)arg3 keyAssetsFetchResult:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

