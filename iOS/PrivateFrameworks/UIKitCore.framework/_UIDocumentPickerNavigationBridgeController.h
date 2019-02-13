//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UINavigationController.h>

#import <UIKitCore/_UIDocumentPickerExtensionViewController-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerNavigationBridgeController : UINavigationController <_UIDocumentPickerExtensionViewController>
{
    _Bool _hasSetInitialNavigationItem;
}

+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (id)popToRootViewControllerAnimated:(_Bool)arg1;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_updateNavigationItem;
- (void)_locationsMenu:(id)arg1;
- (void)_doneButton:(id)arg1;
- (id)hostingViewController;
- (void)_setTintColor:(id)arg1;
- (void)_documentPickerDidDismiss;
- (void)_prepareWithExtensionInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_setUploadURLWrapper:(id)arg1;
- (void)_setPickerMode:(unsigned long long)arg1;
- (void)_setPickableTypes:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

