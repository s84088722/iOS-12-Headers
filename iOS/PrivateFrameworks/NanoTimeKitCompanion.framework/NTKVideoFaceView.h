//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKAVListingFaceBaseView.h>

@class NTKDigitialUtilitarianFaceViewComplicationFactory, UITapGestureRecognizer;

@interface NTKVideoFaceView : NTKAVListingFaceBaseView
{
    NTKDigitialUtilitarianFaceViewComplicationFactory *_faceViewComplicationFactory;
    unsigned long long _theme;
    UITapGestureRecognizer *_tapToPlayGesture;
    unsigned int _isUsingDefaultListing:1;
    unsigned int _isComplicationColorApplied:1;
    unsigned int _isComplicationColorGray:1;
}

- (void).cxx_destruct;
- (void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(id)arg1;
- (void)videoPlayerViewDidBeginPlaying:(id)arg1;
- (_Bool)_shouldDelayBeforePlayingNextVideo;
- (void)_handleTapToPlayVideoGesture:(id)arg1;
- (id)_nextListing;
- (id)_defaultListing;
- (void)_selectDefaultListing;
- (void)didAddSubview:(id)arg1;
- (id)_onDeckPosterImageView;
- (id)_posterImageView;
- (id)_posterImageViewWithTheme:(unsigned long long)arg1;
- (void)_updatePaused;
- (id)_complicationForegroundColor;
- (double)_timeTravelYAdjustment;
- (double)_rightSideMarginForDigitalTimeHeroPosition;
- (id)_viewForEditOption:(id)arg1;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (_Bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (long long)_complicationPickerStyleForSlot:(id)arg1;
- (void)_cleanupAfterEditing;
- (void)_prepareForEditing;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_unloadSnapshotContentViews;
- (void)_loadSnapshotContentViews;
- (void)_performPreloadVideoTask;
- (double)_minimumBreathingScaleForComplicationSlot:(id)arg1;
- (_Bool)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (double)keylineStyleForComplicationSlot:(id)arg1;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (void)_loadLayoutRules;
- (id)_detachedComplicationDisplays;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)dealloc;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;

@end
