//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class PXImageModulationManager;

@interface UIViewController (PXImageModulationManager)
- (void)_px_viewAppearanceDidChange;
- (void)_pxswizzled_imageModulation_viewDidDisappear:(_Bool)arg1;
- (void)_pxswizzled_imageModulation_viewWillDisappear:(_Bool)arg1;
- (void)_pxswizzled_imageModulation_viewWillAppear:(_Bool)arg1;
- (void)px_setNeedsImageModulationIntensityUpdate;
@property(readonly, nonatomic) double px_imageModulationIntensity;
- (void)px_setNeedsHDRFocusUpdate;
@property(readonly, nonatomic) double px_HDRFocus;
- (_Bool)_px_windowMatchesImageModulationManager:(id)arg1;
@property(readonly, nonatomic) PXImageModulationManager *px_imageModulationManager;
- (void)px_enableImageModulation;
@end

