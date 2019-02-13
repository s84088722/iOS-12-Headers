//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SpringBoardFoundation/SBFLegibilitySettingsProvider-Protocol.h>
#import <SpringBoardFoundation/_UISettingsKeyObserver-Protocol.h>

@class NSString, NSTimer, SBFWallpaperParallaxSettings, SBFWallpaperSettings, UIColor, UIImage, _UILegibilitySettings, _UILegibilitySettingsProvider;
@protocol SBFLegibilitySettingsProviderDelegate, SBFWallpaperViewInternalObserver, SBFWallpaperViewSettingsProvider;

@interface SBFWallpaperView : UIView <_UISettingsKeyObserver, SBFLegibilitySettingsProvider>
{
    SBFWallpaperSettings *_wallpaperSettings;
    UIView *_parallaxView;
    double _zoomFactor;
    double _contentScaleFactor;
    long long _variant;
    unsigned long long _transformOptions;
    _UILegibilitySettingsProvider *_legibilitySettingsProvider;
    _UILegibilitySettings *_legibilitySettings;
    UIColor *_lastAverageColor;
    NSTimer *_colorSampleTimer;
    _Bool _shouldGenerateBlurredImagesWhenVisible;
    _Bool _generatingBlurredImages;
    SBFWallpaperParallaxSettings *_parallaxSettings;
    _Bool _wantsRasterization;
    long long _disallowRasterizationBlockCount;
    _Bool _parallaxEnabled;
    _Bool _continuousColorSamplingEnabled;
    _Bool _wallpaperAnimationEnabled;
    _Bool _rotating;
    _Bool _sharesContentsAcrossVariants;
    id <SBFLegibilitySettingsProviderDelegate> _delegate;
    UIView *_contentView;
    double _parallaxFactor;
    NSString *_wallpaperName;
    long long _logicalContentOrientation;
    id <SBFWallpaperViewInternalObserver> _internalObserver;
    id <SBFWallpaperViewSettingsProvider> _wallpaperSettingsProvider;
}

+ (_Bool)_allowsRasterization;
+ (_Bool)_shouldScaleForParallax;
+ (_Bool)_allowsParallax;
@property(nonatomic) __weak id <SBFWallpaperViewSettingsProvider> wallpaperSettingsProvider; // @synthesize wallpaperSettingsProvider=_wallpaperSettingsProvider;
@property(nonatomic) __weak id <SBFWallpaperViewInternalObserver> internalObserver; // @synthesize internalObserver=_internalObserver;
@property(nonatomic) long long logicalContentOrientation; // @synthesize logicalContentOrientation=_logicalContentOrientation;
@property(nonatomic) unsigned long long transformOptions; // @synthesize transformOptions=_transformOptions;
@property(nonatomic) _Bool sharesContentsAcrossVariants; // @synthesize sharesContentsAcrossVariants=_sharesContentsAcrossVariants;
@property(copy, nonatomic) NSString *wallpaperName; // @synthesize wallpaperName=_wallpaperName;
@property(nonatomic, getter=isRotating) _Bool rotating; // @synthesize rotating=_rotating;
@property(nonatomic) _Bool wallpaperAnimationEnabled; // @synthesize wallpaperAnimationEnabled=_wallpaperAnimationEnabled;
@property(nonatomic) _Bool continuousColorSamplingEnabled; // @synthesize continuousColorSamplingEnabled=_continuousColorSamplingEnabled;
@property(nonatomic) double parallaxFactor; // @synthesize parallaxFactor=_parallaxFactor;
@property(nonatomic) _Bool parallaxEnabled; // @synthesize parallaxEnabled=_parallaxEnabled;
@property(nonatomic) double zoomFactor; // @synthesize zoomFactor=_zoomFactor;
@property(nonatomic) long long variant; // @synthesize variant=_variant;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <SBFLegibilitySettingsProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)legibilitySettingsDidChange;
- (void)_updateContentViewScale;
- (void)_updateScaleFactor;
- (void)_removeParallax;
- (void)_addParallax;
- (void)_applyParallaxSettings;
- (void)_updateParallaxSettings;
- (void)_updateGeneratingBlurs;
- (void)_updateRasterizationState;
- (void)_endDisallowRasterizationBlock;
- (void)_beginDisallowRasterizationBlock;
- (void)_notifyGeometryInvalidated;
- (void)_notifyBlursInvalidated;
- (_Bool)_isVisible;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
@property(readonly, nonatomic) _Bool hasContentOutsideVisibleBounds;
@property(readonly, nonatomic) _Bool needsImmediateLayoutBeforeRotation;
- (_Bool)wantsRasterization;
@property(readonly, nonatomic) UIImage *wallpaperImage;
- (double)contentScaleFactor;
- (void)setContentsRect:(struct CGRect)arg1;
- (id)_displayedImage;
- (id)_fallbackImageWithOriginalSize:(struct CGSize)arg1;
- (_Bool)_needsFallbackImageForBackdropGeneratedImage:(id)arg1;
@property(readonly, copy, nonatomic) NSString *variantCacheIdentifier;
@property(readonly, copy, nonatomic) NSString *cacheGroup;
- (id)_cacheKeyForParameters:(CDStruct_83077358)arg1 includingTint:(_Bool)arg2 downsampleFactor:(double)arg3;
- (id)_imageForBackdropParameters:(CDStruct_83077358)arg1 includeTint:(_Bool)arg2;
- (id)_blurredImage;
- (void)preheatImageData;
- (void)_stopGeneratingBlurredImages;
- (void)_startGeneratingBlurredImages;
- (double)_contrastInContentViewRect:(struct CGRect)arg1 contrastWithinBoxes:(double *)arg2 contrastBetweenBoxes:(double *)arg3;
- (id)_averageColorInContentViewRect:(struct CGRect)arg1 smudgeRadius:(double)arg2;
- (id)_computeAverageColor;
- (void)_handleVariantChange;
- (void)_handleVisibilityChange;
- (_Bool)isDisplayingWallpaperWithConfiguration:(id)arg1 forVariant:(long long)arg2;
- (void)didMoveToWindow;
- (void)setHidden:(_Bool)arg1;
- (void)layoutSubviews;
- (void)invalidate;
- (id)_blurReplacementImage;
- (id)imageForBackdropParameters:(CDStruct_83077358)arg1 includeTint:(_Bool)arg2;
- (id)blurredImage;
- (id)snapshotImage;
- (void)setGeneratesBlurredImages:(_Bool)arg1;
- (double)contrastInRect:(struct CGRect)arg1 contrastWithinBoxes:(double *)arg2 contrastBetweenBoxes:(double *)arg3;
- (double)contrastInRect:(struct CGRect)arg1;
- (double)contrast;
- (id)averageColorInRect:(struct CGRect)arg1 withSmudgeRadius:(double)arg2;
- (void)_updateLegibilitySettingsForAverageColor:(id)arg1 force:(_Bool)arg2 notify:(_Bool)arg3;
- (void)resetLegibilitySettingsForAverageColor:(id)arg1;
- (void)updateLegibilitySettingsForAverageColor:(id)arg1;
- (void)_setLegibilitySettings:(id)arg1 notify:(_Bool)arg2;
- (id)_primaryColorOverride;
- (void)setLegibilitySettings:(id)arg1;
- (void)setVariant:(long long)arg1 withAnimationFactory:(id)arg2 forced:(_Bool)arg3;
- (void)setVariant:(long long)arg1 withAnimationFactory:(id)arg2;
- (void)setZoomFactor:(double)arg1 withAnimationFactory:(id)arg2;
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(readonly, nonatomic) double cropZoomScale;
@property(readonly, nonatomic) _Bool supportsCropping;
- (void)prepareToDisappear;
- (void)prepareToAppear;
- (void)setCropRect:(struct CGRect)arg1 zoomScale:(double)arg2;
@property(readonly, nonatomic) struct CGRect cropRect;
@property(readonly, nonatomic) long long wallpaperType;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 variant:(long long)arg2 wallpaperSettingsProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

