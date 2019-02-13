//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraKit/__CMKCameraViewAccessibility_super.h>

@interface CMKCameraViewAccessibility : __CMKCameraViewAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)_axShowFocusInCenterIfNotShowing;
- (void)_axPostAnnoucement:(id)arg1;
- (_Bool)_axSetExposureValue:(float)arg1;
- (_Bool)_accessibilityDecreaseExposure;
- (_Bool)_accessibilityIncreaseExposure;
- (_Bool)_accessibilityLockFocus;
- (void)_axSetAccessibilityCustomActions;
- (void)_axSetNoCustomActions;
- (void)_setReviewingImagePickerCapture:(_Bool)arg1 updateUI:(_Bool)arg2;
- (_Bool)accessibilityPerformMagicTap;
- (void)_filterButtonTapped:(id)arg1;
- (void)_stopCapturingPanorama;
- (void)dealloc;
- (void)_accessibilityLoadAccessibilityInformation;
- (_Bool)_shouldHideZoomSliderForMode:(long long)arg1;
- (void)_resetZoom;
- (void)showZoomSlider;
- (_Bool)_zoomIsAllowed;
- (void)hideZoomSlider;
- (void)_toggleCameraButtonWasPressed:(id)arg1;
- (void)_updateOverlayControlsAccessibility;
- (void)_reallyToggleCamera;

@end

