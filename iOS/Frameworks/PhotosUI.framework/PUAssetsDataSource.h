//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUTilingDataSource.h>

@class NSIndexPath;

@interface PUAssetsDataSource : PUTilingDataSource
{
}

+ (id)emptyDataSource;
- (_Bool)couldAssetReferenceAppear:(id)arg1;
- (id)containedAssetsDataSourceAtIndexPath:(id)arg1;
- (long long)numberOfAssetsWithMaximum:(long long)arg1;
@property(readonly, nonatomic) NSIndexPath *lastItemIndexPath;
@property(readonly, nonatomic) NSIndexPath *firstItemIndexPath;
@property(readonly, nonatomic) _Bool containsMultipleAssets;
- (_Bool)isEmpty;
- (id)startingAssetReference;
- (id)convertIndexPath:(id)arg1 fromAssetsDataSource:(id)arg2;
- (id)assetAtIndexPath:(id)arg1;
- (id)assetReferenceForAssetReference:(id)arg1;
- (id)badgeInfoPromiseForAssetAtIndexPath:(id)arg1;
- (id)indexPathForAssetCollection:(id)arg1;
- (id)assetCollectionAtIndexPath:(id)arg1;
- (id)indexPathForAssetReference:(id)arg1;
- (id)assetReferenceAtIndexPath:(id)arg1;

@end

