//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, PLPhotoLibrary;

@interface PLDupeManager : NSObject
{
    NSMutableArray *_normalAssetsObjectIDsToAnalyze;
    NSMutableDictionary *_cloudAssetsToAnalyze;
    NSMutableArray *_assetsWithUpdatedVisibility;
    _Bool _doneWithCloudAssets;
    _Bool _isRebuilding;
    NSMutableSet *_normalInserts;
    NSMutableSet *_cloudInserts;
    PLPhotoLibrary *_photoLibrary;
    NSCountedSet *_pauseReasons;
    NSSet *_softPauseReasons;
    double _rebuildStartTime;
}

+ (_Bool)_computeHashForAsset:(id)arg1;
+ (id)hashForAsset:(id)arg1;
+ (void)_setPlaceHolderHashOnAsset:(id)arg1;
+ (id)placeholderHash;
+ (id)_hashForFileAtPath:(id)arg1 utiType:(id)arg2;
+ (_Bool)resetDupesAnalysisForOfflineStore:(id)arg1;
+ (_Bool)_resetDupesAnalysisInManagedObjectContext:(id)arg1;
+ (id)sharedInstance;
@property(readonly, nonatomic) PLPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
- (void)resumeAnalysisWithReason:(id)arg1;
- (void)pauseAnalysisWithReason:(id)arg1;
- (void)_resetSoftPauseReasons;
- (void)persistPublicGlobalUUIDsForAssets:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)launchDupeAnalysisIfNeeded;
- (void)analyzeDupesWithNormalInserts:(id)arg1 cloudInserts:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_analyzeDupes;
- (void)_continueAnalysis;
- (short)_analyzeDupesForCloudInsertsForManagedObjectContext:(id)arg1;
- (_Bool)_analyzeDupeForCloudAssetsAndHashes:(id)arg1 andPublicGlobalUUIDs:(id)arg2 forManagedObjectContext:(id)arg3;
- (short)_analyzeDupesForNormalInsertsForManagedObjectContext:(id)arg1;
- (void)resetDupesAnalysis;
- (void)_analyzeDupesForRebuild;
- (void)_continueAnalysisForRebuildOrPause;
- (void)_continueAnalysisForRebuild;
- (void)_performAnalysisTransaction:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (short)_adjustCloudAssetVisibilityStateForManagedObjectContext:(id)arg1;
- (short)_computeAssetHashesForManagedObjectContext:(id)arg1;
- (short)_analyzeNormalAssetsForManagedObjectContext:(id)arg1;
- (void)_analyzeDupeForNormalAsset:(id)arg1;
- (void)_removeCloudAssetFromAnalysis:(id)arg1;
- (id)_duplicateCloudAssetForHash:(id)arg1 orPublicGlobalUUID:(id)arg2;
- (_Bool)_prepareCloudAssetsToAnalyzeForManagedObjectContext:(id)arg1;
- (void)_updateVisibilityState:(short)arg1 forAsset:(id)arg2;
- (void)_noteAssetVisibilityDidChange:(id)arg1;
- (short)_computeCloudAssetHashesForManagedObjectContext:(id)arg1;
- (void)dealloc;
- (id)init;

@end

