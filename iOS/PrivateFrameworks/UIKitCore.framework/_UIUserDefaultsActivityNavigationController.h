//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UINavigationController.h>

#import <UIKitCore/_UIAppearanceRestriction-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIUserDefaultsActivityNavigationController : UINavigationController <_UIAppearanceRestriction>
{
}

+ (_Bool)_preventsAppearanceProxyCustomization;
- (_Bool)_viewControllerUnderlapsStatusBar;
- (double)_statusBarHeightAdjustmentForCurrentOrientation;
- (_Bool)_shouldUseContentOverlayInsetsAsStatusBarUnderlapHeight;
- (void)setPreferredContentSize:(struct CGSize)arg1;
- (struct CGSize)preferredContentSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
