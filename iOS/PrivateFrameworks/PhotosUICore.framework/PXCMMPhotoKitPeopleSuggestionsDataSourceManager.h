//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXCMMPeopleSuggestionsDataSourceManager.h>

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSMutableOrderedSet, NSString, PHAssetCollection, PXCMMPhotoKitPeopleSuggestionsDataSource, PXCMMPhotoKitPeopleSuggestionsDataSourceState, PXUpdater;

@interface PXCMMPhotoKitPeopleSuggestionsDataSourceManager : PXCMMPeopleSuggestionsDataSourceManager <PXPhotoLibraryUIChangeObserver>
{
    _Bool _isPrefetching;
    _Bool _hasCreatedInitialDataSource;
    _Bool _needsDeferredLoading;
    _Bool _hasStartedLoadingFinalDataSource;
    _Bool _hasFinishedLoadingFinalDataSource;
    PXCMMPhotoKitPeopleSuggestionsDataSourceState *__state;
    NSMutableOrderedSet *__remainingPeopleToFetch;
    PHAssetCollection *_assetCollection;
    PXUpdater *_updater;
}

+ (id)photosGraphPeopleSuggestionsDataSourceManagerWithAssetCollection:(id)arg1;
+ (id)mockDataSourceManagerFromPeopleInPhotosInAssetCollection:(id)arg1;
+ (id)sharedWorkerQueue;
@property(nonatomic) _Bool hasFinishedLoadingFinalDataSource; // @synthesize hasFinishedLoadingFinalDataSource=_hasFinishedLoadingFinalDataSource;
@property(nonatomic) _Bool hasStartedLoadingFinalDataSource; // @synthesize hasStartedLoadingFinalDataSource=_hasStartedLoadingFinalDataSource;
@property(retain, nonatomic) PXUpdater *updater; // @synthesize updater=_updater;
@property(retain, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
@property(retain) NSMutableOrderedSet *_remainingPeopleToFetch; // @synthesize _remainingPeopleToFetch=__remainingPeopleToFetch;
@property(retain, nonatomic) PXCMMPhotoKitPeopleSuggestionsDataSourceState *_state; // @synthesize _state=__state;
- (void).cxx_destruct;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)_handleFinishedFetchingBatch:(id)arg1 preparedChangeDetails:(id)arg2 forFetchResult:(id)arg3;
- (void)_workerQueue_fetchRemainingPeopleInBatches;
- (void)startPrefetchingIfNeeded;
- (id)_createSuggestionsDataSourceFromCurrentState;
- (id)createInitialDataSource;
- (id)people;
- (void)_handleFinishedLoadingFinalDataSourceFetchResult:(id)arg1;
- (void)_loadFinalDataSource;
- (_Bool)isLoading;
- (void)cancelLoading;
- (void)boostLoading;
- (void)startLoading;
- (id)_initWithAssetCollection:(id)arg1;
- (id)initWithPeopleFetchResult:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) PXCMMPhotoKitPeopleSuggestionsDataSource *dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

