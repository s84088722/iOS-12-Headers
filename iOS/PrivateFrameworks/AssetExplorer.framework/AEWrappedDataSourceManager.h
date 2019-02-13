//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXAssetsDataSourceManager.h>

#import <AssetExplorer/PUAssetsDataSourceManagerDelegate-Protocol.h>
#import <AssetExplorer/PUReviewAssetsDataSourceManagerDelegate-Protocol.h>

@class NSString, PUReviewAssetsDataSourceManager;

@interface AEWrappedDataSourceManager : PXAssetsDataSourceManager <PUAssetsDataSourceManagerDelegate, PUReviewAssetsDataSourceManagerDelegate>
{
    PUReviewAssetsDataSourceManager *__attachedDataSourceManager;
}

@property(retain, nonatomic, setter=_setAttachedDataSourceManager:) PUReviewAssetsDataSourceManager *_attachedDataSourceManager; // @synthesize _attachedDataSourceManager=__attachedDataSourceManager;
- (void).cxx_destruct;
- (id)assetsDataSourceManagerInterestingAssetReferences:(id)arg1;
- (void)assetsDataSourceManager:(id)arg1 didChangeAssetsDataSource:(id)arg2 changeDetails:(id)arg3;
- (void)assetsDataSourceManager:(id)arg1 didChangeAssetsDataSource:(id)arg2;
- (id)createInitialDataSource;
- (void)_createDataSourceFromAssetsDataSource:(id)arg1 changeDetails:(id)arg2;
- (void)detachCurrentDataSourceManager;
- (void)attachDataSourceManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

