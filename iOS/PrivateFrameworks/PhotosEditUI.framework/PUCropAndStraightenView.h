//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosEditUI/NUMediaViewDelegate-Protocol.h>
#import <PhotosEditUI/UIGestureRecognizerDelegate-Protocol.h>
#import <PhotosEditUI/UIScrollViewDelegate-Protocol.h>

@class NSString, NUComposition, NUMediaView, PHLivePhoto, PHLivePhotoView, PLImageGeometry, PXImageLayerModulator, PXImageModulationManager, UIImage, UIImageView, UIScrollView;
@protocol PUCropAndStraightenViewDelegate;

__attribute__((visibility("hidden")))
@interface PUCropAndStraightenView : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate, NUMediaViewDelegate>
{
    _Bool _tracking;
    _Bool __scrollViewTracking;
    UIImage *_image;
    PHLivePhoto *_livePhoto;
    NUComposition *_autoloopComposition;
    id <PUCropAndStraightenViewDelegate> _delegate;
    double _straightenAngle;
    long long _orientation;
    UIScrollView *__scrollView;
    UIView *__scrollViewReference;
    UIView *__contentView;
    UIImageView *__imageView;
    PHLivePhotoView *__livePhotoView;
    double __preferredZoomScale;
    long long __updateReason;
    PLImageGeometry *__imageGeometry;
    NUMediaView *__mediaView;
    PXImageModulationManager *__imageModulationManager;
    PXImageLayerModulator *__imageLayerModulator;
    CDStruct_910f5d27 _imageModulationOptions;
    struct CGRect _cropRect;
    struct CGRect _canvasFrame;
    struct CGRect __fittingRegion;
}

@property(retain, nonatomic, setter=_setImageLayerModulator:) PXImageLayerModulator *_imageLayerModulator; // @synthesize _imageLayerModulator=__imageLayerModulator;
@property(retain, nonatomic, setter=_setImageModulationManager:) PXImageModulationManager *_imageModulationManager; // @synthesize _imageModulationManager=__imageModulationManager;
@property(retain, nonatomic, setter=_setMediaView:) NUMediaView *_mediaView; // @synthesize _mediaView=__mediaView;
@property(retain, nonatomic, setter=_setImageGeometry:) PLImageGeometry *_imageGeometry; // @synthesize _imageGeometry=__imageGeometry;
@property(nonatomic, getter=_isScrollViewTracking, setter=_setScrollViewTracking:) _Bool _scrollViewTracking; // @synthesize _scrollViewTracking=__scrollViewTracking;
@property(nonatomic, setter=_setUpdateReason:) long long _updateReason; // @synthesize _updateReason=__updateReason;
@property(nonatomic, setter=_setFittingRegion:) struct CGRect _fittingRegion; // @synthesize _fittingRegion=__fittingRegion;
@property(nonatomic, setter=_setPreferredZoomScale:) double _preferredZoomScale; // @synthesize _preferredZoomScale=__preferredZoomScale;
@property(retain, nonatomic, setter=_setLivePhotoView:) PHLivePhotoView *_livePhotoView; // @synthesize _livePhotoView=__livePhotoView;
@property(retain, nonatomic, setter=_setImageView:) UIImageView *_imageView; // @synthesize _imageView=__imageView;
@property(retain, nonatomic, setter=_setContentView:) UIView *_contentView; // @synthesize _contentView=__contentView;
@property(retain, nonatomic, setter=_setScrollViewReference:) UIView *_scrollViewReference; // @synthesize _scrollViewReference=__scrollViewReference;
@property(retain, nonatomic, setter=_setScrollView:) UIScrollView *_scrollView; // @synthesize _scrollView=__scrollView;
@property(nonatomic, getter=isTracking, setter=_setTracking:) _Bool tracking; // @synthesize tracking=_tracking;
@property(nonatomic) struct CGRect canvasFrame; // @synthesize canvasFrame=_canvasFrame;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) double straightenAngle; // @synthesize straightenAngle=_straightenAngle;
@property(nonatomic) __weak id <PUCropAndStraightenViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) CDStruct_910f5d27 imageModulationOptions; // @synthesize imageModulationOptions=_imageModulationOptions;
@property(retain, nonatomic) NUComposition *autoloopComposition; // @synthesize autoloopComposition=_autoloopComposition;
@property(retain, nonatomic) PHLivePhoto *livePhoto; // @synthesize livePhoto=_livePhoto;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_handleTouchingRecognizer:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_updateLivePhotoScaleOffset;
- (double)_zoomScaleToFillStraightenedCropRect;
- (double)_zoomScaleToFillCropRect;
- (double)_zoomScaleToFitCanvas;
- (double)_zoomScaleForImageToFit:(_Bool)arg1 viewBounds:(struct CGRect)arg2;
- (double)_zoomScaleForImageRegion:(struct CGRect)arg1 toFit:(_Bool)arg2 viewBounds:(struct CGRect)arg3;
- (void)_updateScrollOffset;
- (void)_updateScrollInsets;
- (void)_updateZoomScale;
- (void)_updateScrollView;
- (void)_updateImageModulation;
- (void)_invalidateImageLayerModulator;
- (void)_invalidateImageModulationManager;
- (struct CGSize)_sizeRotatedIfNeeded:(struct CGSize)arg1;
- (struct CGSize)_boundingSizeOfStraightenedRectWithSize:(struct CGSize)arg1;
- (struct CGRect)_imageBounds;
- (struct CGRect)_croppingRect;
- (void)fitImageRegion:(struct CGRect)arg1 inCropRectAnimated:(_Bool)arg2;
@property(readonly, nonatomic, getter=_isRotationSideways) _Bool _rotationSideways;
- (struct CGAffineTransform)_straightenTransform;
@property(readonly, nonatomic) struct CGAffineTransform _rotationTransform;
@property(readonly, nonatomic, getter=isDecelerating) _Bool decelerating;
- (struct CGRect)denormalizedImageRectForModelRect:(struct CGRect)arg1;
- (struct CGRect)normalizedCropRectForViewRect:(struct CGRect)arg1;
- (struct CGRect)imageCropRectForViewRect:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGRect imageCropRect;
- (struct CGRect)_fullCropRect;
- (void)mediaViewDidFinishRendering:(id)arg1;
- (id)resizableSnapshotViewFromRect:(struct CGRect)arg1 afterScreenUpdates:(_Bool)arg2 withCapInsets:(struct UIEdgeInsets)arg3;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

