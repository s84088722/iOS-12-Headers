//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PXChangeObserver-Protocol.h>

@class NSString, PHCachingImageManager, PHImageRequestOptions, PUAlbumListCellContentViewHelperConfiguration, PUFontManager, PXAssetBadgeManager, PXCollectionTileLayoutTemplate, PXExtendedTraitCollection, PXFeatureSpec, PXFeatureSpecManager, PXPhotoKitCollectionsDataSourceManager, UIImage;

__attribute__((visibility("hidden")))
@interface PUAlbumListCellContentViewHelper : NSObject <PXChangeObserver>
{
    _Bool _didInitializeMemoriesTitleSupport;
    PXExtendedTraitCollection *_traitCollection;
    PUAlbumListCellContentViewHelperConfiguration *_configuration;
    PXPhotoKitCollectionsDataSourceManager *_dataSourceManager;
    PUFontManager *_fontManager;
    UIImage *_emptyAlbumPlaceholderImage;
    UIImage *_emptySharedAlbumPlaceholderImage;
    UIImage *_addSharedAlbumPlaceholderImage;
    UIImage *_hiddenAlbumPlaceholderImage;
    UIImage *_recentlyDeletedAlbumPlaceholderImage;
    PHImageRequestOptions *_imageRequestOptions;
    PHCachingImageManager *_cachingImageManager;
    PXFeatureSpecManager *_featureSpecManager;
    PXFeatureSpec *_featureSpec;
    PXAssetBadgeManager *_badgeManager;
    PXCollectionTileLayoutTemplate *_collectionTileLayoutTemplate;
    struct CGSize _albumCellSize;
}

+ (id)_placeholderImageWithSize:(struct CGSize)arg1 backgroundColor:(id)arg2 glyphImageName:(id)arg3 glyphAlpha:(double)arg4;
@property(nonatomic) _Bool didInitializeMemoriesTitleSupport; // @synthesize didInitializeMemoriesTitleSupport=_didInitializeMemoriesTitleSupport;
@property(retain, nonatomic) PXCollectionTileLayoutTemplate *collectionTileLayoutTemplate; // @synthesize collectionTileLayoutTemplate=_collectionTileLayoutTemplate;
@property(retain, nonatomic) PXAssetBadgeManager *badgeManager; // @synthesize badgeManager=_badgeManager;
@property(retain, nonatomic) PXFeatureSpec *featureSpec; // @synthesize featureSpec=_featureSpec;
@property(retain, nonatomic) PXFeatureSpecManager *featureSpecManager; // @synthesize featureSpecManager=_featureSpecManager;
@property(retain, nonatomic) PHCachingImageManager *cachingImageManager; // @synthesize cachingImageManager=_cachingImageManager;
@property(retain, nonatomic) PHImageRequestOptions *imageRequestOptions; // @synthesize imageRequestOptions=_imageRequestOptions;
@property(retain, nonatomic) UIImage *recentlyDeletedAlbumPlaceholderImage; // @synthesize recentlyDeletedAlbumPlaceholderImage=_recentlyDeletedAlbumPlaceholderImage;
@property(retain, nonatomic) UIImage *hiddenAlbumPlaceholderImage; // @synthesize hiddenAlbumPlaceholderImage=_hiddenAlbumPlaceholderImage;
@property(retain, nonatomic) UIImage *addSharedAlbumPlaceholderImage; // @synthesize addSharedAlbumPlaceholderImage=_addSharedAlbumPlaceholderImage;
@property(retain, nonatomic) UIImage *emptySharedAlbumPlaceholderImage; // @synthesize emptySharedAlbumPlaceholderImage=_emptySharedAlbumPlaceholderImage;
@property(retain, nonatomic) UIImage *emptyAlbumPlaceholderImage; // @synthesize emptyAlbumPlaceholderImage=_emptyAlbumPlaceholderImage;
@property(nonatomic) struct CGSize albumCellSize; // @synthesize albumCellSize=_albumCellSize;
@property(retain, nonatomic) PUFontManager *fontManager; // @synthesize fontManager=_fontManager;
@property(readonly, nonatomic) PXPhotoKitCollectionsDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property(readonly, nonatomic) PUAlbumListCellContentViewHelperConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) PXExtendedTraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
- (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_initializeMemoriesTitleSupportIfNeeded;
- (id)_getDisplayableAssetsForStandInCollectionList:(id)arg1 maximumCount:(long long)arg2 useCache:(_Bool)arg3 correspondingCollections:(out id *)arg4;
- (void)_getDisplayableAssets:(id *)arg1 indexes:(id *)arg2 forCollection:(id)arg3 maximumCount:(long long)arg4 useCache:(_Bool)arg5;
- (id)_getDisplayableFacesForCollectionList:(id)arg1 maximumCount:(long long)arg2;
- (id)subtitleForCollection:(id)arg1;
- (void)_prepareStackView:(id)arg1 forCollection:(id)arg2 withStackCount:(long long)arg3 withCustomEmptyPlaceHolderImage:(id)arg4;
- (void)_updateAlbumListCellContentViewForPeopleAlbum:(id)arg1;
- (void)_updateStackView:(id)arg1 forAssets:(id)arg2 collection:(id)arg3 withCustomEmptyPlaceholderImage:(id)arg4;
- (void)_updateStackView:(id)arg1 forAssets:(id)arg2 memoriesCollection:(id)arg3 memories:(id)arg4 withCustomEmptyPlaceholderImage:(id)arg5;
- (void)_updateStackView:(id)arg1 forFaces:(id)arg2 inCollection:(id)arg3 withCustomEmptyPlaceholderImage:(id)arg4;
- (id)_visibleAssetsForCollection:(id)arg1 maximumNumberOfVisibleAssets:(long long)arg2 correspondingCollections:(out id *)arg3;
- (id)_visibleAssetsForCollection:(id)arg1 correspondingCollections:(out id *)arg2;
- (unsigned long long)_editCapabilitiesForAlbum:(id)arg1;
- (void)_recalculateAlbumCellSize;
- (void)_invalidateAlbumCellSize;
- (void)reconfigureImageInAlbumListCellContentView:(id)arg1 withPlaceholderImage:(id)arg2;
- (long long)estimatedIndexOfAssetForStackItemAtIndex:(long long)arg1 inCollection:(id)arg2 albumListCellContentView:(id)arg3;
- (void)configureAlbumListCellContentView:(id)arg1 forCollection:(id)arg2 title:(id)arg3 animated:(_Bool)arg4 enabled:(_Bool)arg5 editing:(_Bool)arg6;
- (id)initWithConfiguration:(id)arg1 dataSourceManager:(id)arg2 extendedTraitCollection:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

