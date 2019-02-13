//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUViewModel.h>

#import <PhotosUI/PUAssetSharedViewModelChangeObserver-Protocol.h>
#import <PhotosUI/PUBrowsingAnimatedImagePlayerChangeObserver-Protocol.h>
#import <PhotosUI/PUBrowsingIrisPlayerChangeObserver-Protocol.h>
#import <PhotosUI/PUBrowsingVideoPlayerChangeObserver-Protocol.h>

@class NSNumber, NSObject, NSProgress, NSString, PUAssetReference, PUAssetSharedViewModel, PUAssetViewModelChange, PUBadgeInfoPromise, PUBrowsingAnimatedImagePlayer, PUBrowsingIrisPlayer, PUBrowsingVideoPlayer, PUMediaProvider, PUModelTileTransform, PUOperationStatus;
@protocol OS_dispatch_group, PUDisplayAsset;

@interface PUAssetViewModel : PUViewModel <PUBrowsingIrisPlayerChangeObserver, PUAssetSharedViewModelChangeObserver, PUBrowsingVideoPlayerChangeObserver, PUBrowsingAnimatedImagePlayerChangeObserver>
{
    PUBrowsingVideoPlayer *_videoPlayer;
    PUBrowsingIrisPlayer *_irisPlayer;
    PUBrowsingAnimatedImagePlayer *_animatedImagePlayer;
    struct {
        _Bool videoPlayersLoadingAllowed;
    } _isValid;
    _Bool _isUserTransformingTile;
    _Bool _forceBadgesVisible;
    _Bool _isUpdatingDisplayedContent;
    _Bool _isFavorite;
    _Bool _accessoryViewVisible;
    _Bool _isInEditMode;
    _Bool __needsUpdateVideoPlayers;
    id <PUDisplayAsset> _asset;
    PUModelTileTransform *_modelTileTransform;
    double _focusValue;
    PUOperationStatus *_loadingStatus;
    NSProgress *_saveProgress;
    long long _saveState;
    long long _importState;
    NSObject<OS_dispatch_group> *_displayedContentUpdateGroup;
    PUBadgeInfoPromise *_badgeInfoPromise;
    long long _lastAccessoryViewVisibilityChangeReason;
    long long _lastContentOffsetChangeReason;
    double _contentOffsetOverrideFactor;
    long long __currentFavoriteOverrideRequest;
    long long _displayedContentUpdateCount;
    PUMediaProvider *_mediaProvider;
    NSNumber *_isFavoriteOverride;
    PUAssetReference *_assetReference;
    PUAssetSharedViewModel *_assetSharedViewModel;
    struct CGPoint _preferredContentOffset;
    struct CGPoint _overridingContentOffset;
}

@property(retain, nonatomic) PUAssetSharedViewModel *assetSharedViewModel; // @synthesize assetSharedViewModel=_assetSharedViewModel;
@property(retain, nonatomic) PUAssetReference *assetReference; // @synthesize assetReference=_assetReference;
@property(copy, nonatomic) NSNumber *isFavoriteOverride; // @synthesize isFavoriteOverride=_isFavoriteOverride;
@property(retain, nonatomic) PUMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(nonatomic) long long displayedContentUpdateCount; // @synthesize displayedContentUpdateCount=_displayedContentUpdateCount;
@property(nonatomic, setter=_setCurrentFavoriteOverrideRequest:) long long _currentFavoriteOverrideRequest; // @synthesize _currentFavoriteOverrideRequest=__currentFavoriteOverrideRequest;
@property(nonatomic, setter=_setNeedsUpdateVideoPlayers:) _Bool _needsUpdateVideoPlayers; // @synthesize _needsUpdateVideoPlayers=__needsUpdateVideoPlayers;
@property(nonatomic) _Bool isInEditMode; // @synthesize isInEditMode=_isInEditMode;
@property(nonatomic) double contentOffsetOverrideFactor; // @synthesize contentOffsetOverrideFactor=_contentOffsetOverrideFactor;
@property(nonatomic) struct CGPoint overridingContentOffset; // @synthesize overridingContentOffset=_overridingContentOffset;
@property(nonatomic) struct CGPoint preferredContentOffset; // @synthesize preferredContentOffset=_preferredContentOffset;
@property(nonatomic, setter=_setLastContentOffsetChangeReason:) long long lastContentOffsetChangeReason; // @synthesize lastContentOffsetChangeReason=_lastContentOffsetChangeReason;
@property(nonatomic, setter=_setLastAccessoryViewVisibilityChangeReason:) long long lastAccessoryViewVisibilityChangeReason; // @synthesize lastAccessoryViewVisibilityChangeReason=_lastAccessoryViewVisibilityChangeReason;
@property(nonatomic, getter=isAccessoryViewVisible) _Bool accessoryViewVisible; // @synthesize accessoryViewVisible=_accessoryViewVisible;
@property(nonatomic, setter=_setFavorite:) _Bool isFavorite; // @synthesize isFavorite=_isFavorite;
@property(copy, nonatomic) PUBadgeInfoPromise *badgeInfoPromise; // @synthesize badgeInfoPromise=_badgeInfoPromise;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *displayedContentUpdateGroup; // @synthesize displayedContentUpdateGroup=_displayedContentUpdateGroup;
@property(nonatomic) _Bool isUpdatingDisplayedContent; // @synthesize isUpdatingDisplayedContent=_isUpdatingDisplayedContent;
@property(nonatomic) long long importState; // @synthesize importState=_importState;
@property(readonly, nonatomic) long long saveState; // @synthesize saveState=_saveState;
@property(retain, nonatomic) NSProgress *saveProgress; // @synthesize saveProgress=_saveProgress;
@property(copy, nonatomic) PUOperationStatus *loadingStatus; // @synthesize loadingStatus=_loadingStatus;
@property(nonatomic) _Bool forceBadgesVisible; // @synthesize forceBadgesVisible=_forceBadgesVisible;
@property(nonatomic) double focusValue; // @synthesize focusValue=_focusValue;
@property(nonatomic, setter=setUserTransformingTile:) _Bool isUserTransformingTile; // @synthesize isUserTransformingTile=_isUserTransformingTile;
@property(copy, nonatomic) PUModelTileTransform *modelTileTransform; // @synthesize modelTileTransform=_modelTileTransform;
@property(retain, nonatomic) id <PUDisplayAsset> asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (id)debugDetailedDescription;
- (void)_handleBrowsingAnimatedImage:(id)arg1 didChange:(id)arg2;
- (void)_handleBrowsingIrisPlayer:(id)arg1 didChange:(id)arg2;
- (void)_handleBrowsingVideoPlayer:(id)arg1 didChange:(id)arg2;
- (void)_handleAssetSharedViewModel:(id)arg1 didChange:(id)arg2;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)_updateFavoriteState;
- (void)didUpdateDisplayedContent;
- (void)willUpdateDisplayedContent;
- (void)_updatePropertiesFromAssetSharedViewModel;
- (void)setPreferredContentOffset:(struct CGPoint)arg1 changeReason:(long long)arg2;
- (void)resetContentOffset;
@property(readonly, nonatomic) struct CGPoint contentOffset;
- (void)setAccessoryViewVisible:(_Bool)arg1 changeReason:(long long)arg2;
@property(readonly, nonatomic) PUBrowsingAnimatedImagePlayer *animatedImagePlayer;
@property(readonly, nonatomic) PUBrowsingIrisPlayer *irisPlayer;
@property(readonly, nonatomic) PUBrowsingVideoPlayer *videoPlayer;
- (void)_updateVideoPlayersIfNeeded;
- (void)_invalidateVideoPlayers;
- (void)_updateVideoPlayersLoadingAllowedIfNeeded;
- (void)setSaveState:(long long)arg1;
- (void)_pauseAndRewindVideoIfNeeded;
- (_Bool)_shouldPauseAndRewindVideo;
- (void)unregisterChangeObserver:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (void)didPerformChanges;
@property(readonly, nonatomic) PUAssetViewModelChange *currentChangeIfExists;
@property(readonly, nonatomic) PUAssetViewModelChange *currentChange;
- (id)newViewModelChange;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

