//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSourceManager.h>

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSString, PHFetchOptions, PHFetchResult, PHPhotoLibrary, PXMemoriesFeedDataSource;

@interface PXMemoriesFeedDataSourceManagerBase : PXSectionedDataSourceManager <PXPhotoLibraryUIChangeObserver>
{
    PHPhotoLibrary *_photoLibrary;
    _Bool _memoryGenerationHasStarted;
    _Bool __generatingAdditionalEntries;
    PHFetchOptions *_baseFetchOptions;
    PHFetchResult *_memoriesFetchResult;
    unsigned long long _firstUngroupedMemoryIndex;
}

+ (_Bool)shouldGroupTogetherMemoriesWithCreationDate:(id)arg1 andCreationDate:(id)arg2;
+ (id)generateEntriesFromMemories:(id)arg1 startingFromIndex:(unsigned long long)arg2 maximumNumberOfEntries:(unsigned long long)arg3 finalMemoryIndex:(out unsigned long long *)arg4;
+ (id)_updatedFetchResultsForMemoriesForDatasource:(id)arg1 changeDetails:(id)arg2 changeInstance:(id)arg3;
+ (id)baseFetchOptions;
+ (id)mostRecentCreationDate;
@property(nonatomic) unsigned long long firstUngroupedMemoryIndex; // @synthesize firstUngroupedMemoryIndex=_firstUngroupedMemoryIndex;
@property(retain, nonatomic) PHFetchResult *memoriesFetchResult; // @synthesize memoriesFetchResult=_memoriesFetchResult;
@property(nonatomic, getter=_isGeneratingAdditionalEntries, setter=_setGeneratingAdditionalEntries:) _Bool _generatingAdditionalEntries; // @synthesize _generatingAdditionalEntries=__generatingAdditionalEntries;
@property(readonly, nonatomic) PHFetchOptions *baseFetchOptions; // @synthesize baseFetchOptions=_baseFetchOptions;
- (void).cxx_destruct;
- (void)updateCurrentMemoriesNonPendingAndNotificationStatus;
- (void)_clearPendingNotificationForMemory:(id)arg1;
- (void)handleChangedKeyAssetsForMemories:(id)arg1;
- (void)handleNonIncrementalFetchResultChange:(id)arg1;
- (void)handleIncrementalFetchResultChange:(id)arg1 updatedFetchResultsForMemoriesWithChangedKeyAssets:(id)arg2;
- (void)reloadMemories:(_Bool)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)pauseLibraryUpdates;
- (void)resumeLibraryUpdates;
- (void)generateAdditionalEntriesIfPossible;
- (void)startGeneratingMemories;
- (void)resetMemoriesFetchResult;
- (id)fetchOptions;
@property(readonly, nonatomic) _Bool hasAnyMemories;
- (id)createInitialDataSource;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) PXMemoriesFeedDataSource *dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

