//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUViewModelChange.h>

@class NSDictionary, NSMapTable, NSMutableDictionary;

@interface PUBrowsingViewModelChange : PUViewModelChange
{
    NSMutableDictionary *_mutableViewModelChangesByAssetReference;
    NSMapTable *_mutableSharedViewModelChangesByAsset;
    _Bool _assetsDataSourceDidChange;
    _Bool _currentAssetDidChange;
    _Bool _currentAssetTransitionProgressDidChange;
    _Bool _transitionDriverIdentifierDidChange;
    _Bool _browsingSpeedRegimeDidChange;
    _Bool _isScrubbingDidChange;
    _Bool _isScrollingDidChange;
    _Bool _isAnimatingAnyTransitionDidChange;
    _Bool _secondScreenSizeDidChange;
    _Bool _chromeVisibilityDidChange;
    _Bool _presentingOverOneUpDidChange;
    _Bool _reviewScreenBarsModelDidChange;
}

@property(nonatomic, setter=_setReviewScreenBarsModelDidChange:) _Bool reviewScreenBarsModelDidChange; // @synthesize reviewScreenBarsModelDidChange=_reviewScreenBarsModelDidChange;
@property(nonatomic, setter=_setPresentingOverOneUpDidChange:) _Bool presentingOverOneUpDidChange; // @synthesize presentingOverOneUpDidChange=_presentingOverOneUpDidChange;
@property(nonatomic, setter=_setChromeVisibilityDidChange:) _Bool chromeVisibilityDidChange; // @synthesize chromeVisibilityDidChange=_chromeVisibilityDidChange;
@property(nonatomic, setter=_setSecondScreenSizeDidChange:) _Bool secondScreenSizeDidChange; // @synthesize secondScreenSizeDidChange=_secondScreenSizeDidChange;
@property(nonatomic, setter=_setAnimatingAnyTransitionDidChange:) _Bool isAnimatingAnyTransitionDidChange; // @synthesize isAnimatingAnyTransitionDidChange=_isAnimatingAnyTransitionDidChange;
@property(nonatomic, setter=_setIsScrollingDidChange:) _Bool isScrollingDidChange; // @synthesize isScrollingDidChange=_isScrollingDidChange;
@property(nonatomic, setter=_setIsScrubbingDidChange:) _Bool isScrubbingDidChange; // @synthesize isScrubbingDidChange=_isScrubbingDidChange;
@property(nonatomic, setter=_setBrowsingSpeedRegimeDidChange:) _Bool browsingSpeedRegimeDidChange; // @synthesize browsingSpeedRegimeDidChange=_browsingSpeedRegimeDidChange;
@property(nonatomic, setter=_setTransitionDriverIdentifierDidChange:) _Bool transitionDriverIdentifierDidChange; // @synthesize transitionDriverIdentifierDidChange=_transitionDriverIdentifierDidChange;
@property(nonatomic, setter=_setCurrentAssetTransitionProgressDidChange:) _Bool currentAssetTransitionProgressDidChange; // @synthesize currentAssetTransitionProgressDidChange=_currentAssetTransitionProgressDidChange;
@property(nonatomic, setter=_setCurrentAssetDidChange:) _Bool currentAssetDidChange; // @synthesize currentAssetDidChange=_currentAssetDidChange;
@property(nonatomic, setter=_setAssetsDataSourceDidChange:) _Bool assetsDataSourceDidChange; // @synthesize assetsDataSourceDidChange=_assetsDataSourceDidChange;
- (void).cxx_destruct;
- (_Bool)hasChanges;
@property(readonly, nonatomic) NSMapTable *assetSharedViewModelChangesByAsset;
@property(readonly, nonatomic) NSMapTable *_mutableSharedViewModelChangesByAsset;
@property(readonly, nonatomic) NSDictionary *assetViewModelChangesByAssetReference;
@property(readonly, nonatomic) NSMutableDictionary *_mutableViewModelChangesByAssetReference;

@end

