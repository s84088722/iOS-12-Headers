//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotoLibrary/PLPhotoTileCloudPlaceholderViewDelegate-Protocol.h>
#import <PhotoLibrary/UIGestureRecognizerDelegate-Protocol.h>
#import <PhotoLibrary/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSObject, NSString, PHAsset, PHCachingImageManager, PLExpandableImageView, PLImageScrollView, PLTileContainerView, PLVideoView, UIGestureRecognizer, UIImage, UIImageView, UIView;
@protocol OS_dispatch_source, PLPhotoTileViewControllerDelegate, PLTilePlaceholderView;

@interface PLPhotoTileViewController : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate, PLPhotoTileCloudPlaceholderViewDelegate>
{
    UIImage *_image;
    UIImage *_pendingImage;
    UIImage *_unscaledImage;
    PHAsset *_modelPhoto;
    PLImageScrollView *_scrollView;
    PLExpandableImageView *_imageView;
    PLVideoView *_videoView;
    UIImageView *_gradientView;
    UIImageView *_reviewCheckmarkImageView;
    UIView<PLTilePlaceholderView> *_placeholderView;
    _Bool _currentTileDownloadFinished;
    UIGestureRecognizer *_singleTapGestureRecognizer;
    UIGestureRecognizer *_doubleTapGestureRecognizer;
    id <PLPhotoTileViewControllerDelegate> _tileDelegate;
    int _imageOrientation;
    struct CGSize _imageSize;
    struct CGRect _tileFrame;
    _Bool _zoomToFillInsteadOfToFit;
    _Bool _useLessThanMinZoomForZoomedOutTest;
    _Bool _allowZoomToFill;
    id _orientationDelegate;
    float _cropRectZoomScale;
    struct CGRect _cropOverlayRect;
    struct CGRect _cropRect;
    double _doubleTapZoomScale;
    double _minZoomScale;
    double _zoomToFillScale;
    int _mode;
    _Bool _clientIsTemporarilyWallpaper;
    _Bool _userDidAdjustWallpaper;
    float _wallpaperPortraitZoomScale;
    float _wallpaperLandscapeZoomScale;
    float _zoomScaleBeforeZooming;
    struct CGRect _cropRectBeforeDragging;
    _Bool _force1XCroppedImage;
    _Bool _forceNativeScreenScale;
    _Bool _centerContentVertically;
    CDUnknownBlockType _didEndZoomingBlock;
    NSObject<OS_dispatch_source> *_dispatchTimer;
    double _dispatchStartTime;
    double _dispatchTimeElapsed;
    _Bool _hasNotedZoom;
    unsigned int _imageIsThumbnail:1;
    unsigned int _isTVOut:1;
    unsigned int _zooming:1;
    unsigned int _autoZooming:1;
    unsigned int _zoomGesturesEnabled:1;
    unsigned int _userDidZoom:1;
    unsigned int _ignoreZoomChange:1;
    unsigned int _tileParentIsPageController:1;
    unsigned int _lockedUnderCropOverlay:1;
    unsigned int _viewDidAppear:1;
    unsigned int _viewWillAppear:1;
    unsigned int _didRequestFullSizeImage:1;
    unsigned int _useZoomScaleForCropRect:1;
    unsigned int _avalancheBadgeShouldBeHidden:1;
    unsigned int _badgeShouldBeVisible:1;
    PLTileContainerView *_containerView;
    PHCachingImageManager *__cachingImageManager;
    int _fullSizeImageRequestID;
    NSArray *_customCenterOverlayConstraints;
    _Bool _shouldUpdateBadgeViewOptimalLayout;
    double _badgeViewOptimalLayoutLowestTop;
    _Bool _isLoadingFullSizeImage;
    _Bool _wantsCompactLayout;
    _Bool _reviewing;
    _Bool _picked;
    _Bool _shouldHideProgressIndicator;
    _Bool _shouldSupressViewWillTransitionToSize;
    UIView *__customCenterOverlay;
    struct UIEdgeInsets _overlayInsets;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
+ (id)newPhotoTileViewControllerWithFrame:(struct CGRect)arg1 modelPhoto:(id)arg2 mode:(int)arg3;
+ (id)newPhotoTileViewControllerWithFrame:(struct CGRect)arg1 image:(id)arg2 allowZoomToFill:(_Bool)arg3 mode:(int)arg4;
+ (id)newPhotoTileViewControllerWithFrame:(struct CGRect)arg1 imageRef:(struct CGImage *)arg2 imageOrientation:(long long)arg3 allowZoomToFill:(_Bool)arg4 mode:(int)arg5;
+ (struct CGSize)tvOutTileSize;
+ (struct CGSize)tileSize;
+ (_Bool)shouldShowPlaceholderForAsset:(id)arg1;
@property(retain, nonatomic, setter=_setCustomCenterOverlay:) UIView *_customCenterOverlay; // @synthesize _customCenterOverlay=__customCenterOverlay;
@property(nonatomic) _Bool shouldSupressViewWillTransitionToSize; // @synthesize shouldSupressViewWillTransitionToSize=_shouldSupressViewWillTransitionToSize;
@property(nonatomic) _Bool shouldHideProgressIndicator; // @synthesize shouldHideProgressIndicator=_shouldHideProgressIndicator;
@property(nonatomic) _Bool picked; // @synthesize picked=_picked;
@property(nonatomic) _Bool reviewing; // @synthesize reviewing=_reviewing;
@property(nonatomic) _Bool wantsCompactLayout; // @synthesize wantsCompactLayout=_wantsCompactLayout;
@property(nonatomic) struct UIEdgeInsets overlayInsets; // @synthesize overlayInsets=_overlayInsets;
@property(nonatomic) _Bool force1XCroppedImage; // @synthesize force1XCroppedImage=_force1XCroppedImage;
@property(nonatomic) _Bool forceNativeScreenScale; // @synthesize forceNativeScreenScale=_forceNativeScreenScale;
@property(retain, nonatomic) UIImage *unscaledImage; // @synthesize unscaledImage=_unscaledImage;
@property(nonatomic) _Bool centerContentVertically; // @synthesize centerContentVertically=_centerContentVertically;
- (void)_updateReviewCheckmark;
- (void)setReviewing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setupReviewCheckmark;
- (void)setLockedUnderCropOverlay:(_Bool)arg1;
- (void)_adjustZoomForEnteringMode:(_Bool)arg1;
- (void)updateAfterCollapse;
- (int)imageOrientation;
- (void)setAllowsZoomToFill:(_Bool)arg1;
- (void)updateZoomScales;
- (void)_setDefaultZoomScale;
- (void)setOrientationDelegate:(id)arg1;
- (_Bool)isZoomedOut;
- (double)currentToDefaultZoomRatio;
- (double)currentToMinZoomRatio;
- (double)defaultZoomScale;
- (double)zoomToFitScale;
- (double)zoomToFillScale;
- (double)minZoomScale;
- (float)_calculateZoomScale:(_Bool)arg1 inView:(id)arg2;
- (double)minRotatedScale;
- (void)_performDidEndZoomBlock;
- (void)_setDidEndZoomingBlock:(CDUnknownBlockType)arg1;
- (void)zoomToScale:(double)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)dictionaryWithCroppedImageForRect:(struct CGRect)arg1 minimalCropDimension:(double)arg2 withOptions:(int)arg3;
- (id)newImageWithCropRect:(struct CGRect)arg1 minimalCropDimension:(double)arg2 croppedImageData:(id *)arg3 fullScreenImageData:(id *)arg4 fullScreenImage:(struct CGImage **)arg5 imageCropRect:(struct CGRect *)arg6 intersectCropWithFullRect:(_Bool)arg7;
- (void)_handleDoubleTap:(id)arg1;
- (void)_handleFullSizeImageRequestResult:(id)arg1 dataUTI:(id)arg2 orientation:(long long)arg3;
- (void)_requestFullSizeImage;
- (void)_handleSingleTap:(id)arg1;
- (void)ensureFullSizeImageLoaded;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)resetZoom;
- (void)updateViewConstraints;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)_viewWillMoveToSuperView:(id)arg1;
- (void)_resetZoomCommon;
- (void)_performRotationUpdatesWithDuration:(double)arg1 size:(struct CGSize)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (struct CGSize)scrollView:(id)arg1 contentSizeForZoomScale:(double)arg2 withProposedSize:(struct CGSize)arg3;
- (void)noteParentViewControllerDidDisappear;
- (void)updateForVisibleOverlays:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)loadView;
- (void)cancelFullSizeImageRequest;
- (_Bool)hasFullSizeImage;
- (void)setFullSizeImage:(id)arg1;
- (void)showErrorPlaceholderView;
- (void)_removePlaceholderView;
- (void)didLoadImage;
- (void)refreshTileWithFullScreenImage:(id)arg1 modelPhoto:(id)arg2;
- (void)_setImage:(id)arg1 isThumbnail:(_Bool)arg2 preserveFrame:(_Bool)arg3;
- (void)_updateAggdKeys;
- (void)_updateModelPhotoWithImage:(id)arg1;
- (void)_updatePlaceholderVisibility;
- (void)_updatePlaceholderImageRect;
- (void)_updateContentInset;
- (void)_adjustScrollViewContentOffsetForInsets;
- (void)_centerImageInScrollView;
- (void)retryDownload;
- (void)_updatePlaceholderViewAnimated:(_Bool)arg1;
- (void)updateCloudDownloadProgress:(double)arg1;
- (void)_updateSubviewOrdering;
- (void)_installSubview:(id)arg1;
- (void)installVideoOverlay:(id)arg1;
- (void)_configureViews;
- (void)setBadgeVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setBadgeVisible:(_Bool)arg1;
- (void)_showBadgeViewIfAppropriate;
- (void)_setupBadgeView;
- (void)setAvalancheBadgesHidden:(_Bool)arg1;
- (_Bool)photoShouldHaveAvalancheBadge;
- (_Bool)photoShouldHaveHDRBadge;
- (void)_repositionBadgeView;
- (void)setGesturesEnabled:(_Bool)arg1;
- (_Bool)gesturesEnabled;
- (_Bool)allowsEditing;
- (void)setClientIsWallpaper:(_Bool)arg1;
- (_Bool)_clientIsWallpaper;
- (_Bool)userDidAdjustWallpaper;
- (void)setTVOut:(_Bool)arg1;
- (_Bool)isTVOut;
- (void)setTileDelegate:(id)arg1;
- (id)tileDelegate;
- (void)showContentView;
- (void)hideContentView;
- (void)updateCenterOverlay;
- (void)setVideoView:(id)arg1;
- (id)videoView;
- (id)scrollView;
- (id)newCGImageBackedUIImage;
- (id)image;
- (id)imageView;
- (id)expandableImageView;
- (void)forceZoomingGesturesEnabled;
- (void)setZoomingGesturesEnabled:(_Bool)arg1;
- (void)setCropOverlayRect:(struct CGRect)arg1 forCropRect:(struct CGRect)arg2;
- (void)setZoomScale:(float)arg1;
@property(readonly, copy) NSString *description;
@property(nonatomic) struct CGRect tileFrame;
@property(retain, nonatomic) UIImage *thumbnailImage;
@property(readonly, nonatomic) PHAsset *photo;
- (void)_updateVideoViewForModelPhoto;
- (void)_setPhoto:(id)arg1;
- (_Bool)tileIsOnScreen;
- (void)dealloc;
- (void)_teardownDispatchTimer;
- (id)cachingImageManager;
- (id)initWithModelPhoto:(id)arg1 thumbnailImage:(id)arg2 size:(struct CGSize)arg3;
- (id)initForPageController;
- (id)initWithModelPhoto:(id)arg1 image:(id)arg2 frame:(struct CGRect)arg3 isThumbnail:(_Bool)arg4 imageOrientation:(int)arg5 allowZoomToFill:(_Bool)arg6 mode:(int)arg7;
- (id)init;
- (long long)_imageOrientation;
- (id)_newOriginalImageForPickerFromCachedData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

