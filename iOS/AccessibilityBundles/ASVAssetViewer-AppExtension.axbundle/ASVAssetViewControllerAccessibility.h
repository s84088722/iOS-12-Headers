//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "__ASVAssetViewControllerAccessibility_super.h"

@interface ASVAssetViewControllerAccessibility : __ASVAssetViewControllerAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)assetView:(id)arg1 didReceiveTrackingStateChange:(long long)arg2 status:(id)arg3;
- (void)assetView:(id)arg1 didFinishLoadingAssetWithError:(id)arg2;
- (void)updateOverlayVisibility:(_Bool)arg1 shouldUpdateFullScreen:(_Bool)arg2 animated:(_Bool)arg3;
- (void)assetViewDidBeginWorldGesture:(id)arg1;
- (void)_axSetIsBeginningWorldGesture:(_Bool)arg1;
- (_Bool)_axIsBeginningWorldGesture;
- (void)_stopHidingControlsAndRestartTimer:(_Bool)arg1;
- (void)_enableWorldModeControl:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_axSetUpAccessibility;
- (void)_axSetDidRegisterForNotifications:(_Bool)arg1;
- (_Bool)_axDidRegisterForNotifications;
- (void)_axDidToggleAXSetting:(id)arg1;
- (_Bool)_axShouldDisableAutoHidingControls;

@end

