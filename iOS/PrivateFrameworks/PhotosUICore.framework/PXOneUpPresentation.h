//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PXAssetActionManager, PXAssetReference, PXAssetsDataSourceManager, PXGestureProvider, PXPhotosDetailsContext, PXUIMediaProvider, UIViewController;
@protocol PXImportStatusManager, PXOneUpPresentationDelegate, PXOneUpPresentationImplementationDelegate;

@interface PXOneUpPresentation : NSObject
{
    struct {
        _Bool respondsToPhotosDetailsContext;
        _Bool respondsToInitialAssetReference;
        _Bool respondsToCurrentImageForAssetReference;
        _Bool respondsToRegionOfInterestForAssetReferenceInCoordinateSpace;
        _Bool respondsToScrollAssetReferenceToVisible;
        _Bool respondsToSetHiddenAssetReferences;
        _Bool respondsToShouldAutoPlay;
        _Bool respondsToActionManager;
        _Bool respondsToActionManagerForPreviewing;
        _Bool respondsToActionContext;
        _Bool respondsToGestureProvider;
        _Bool respondsToImportStatusManager;
    } _delegateFlags;
    struct {
        _Bool respondsToPresentingViewControllerViewWillAppear;
        _Bool respondsToPresentingViewControllerViewDidAppear;
        _Bool respondsToPresentingViewControllerViewWillDisappear;
        _Bool respondsToPresentingViewControllerViewDidDisappear;
        _Bool respondsToCanStart;
        _Bool respondsToCanStop;
        _Bool respondsToInvalidatePresentingGeometry;
        _Bool respondsToHandlePresentingPinchGestureRecognizer;
    } _implementationDelegateFlags;
    _Bool _enabled;
    id <PXOneUpPresentationImplementationDelegate> __implementationDelegate;
    id <PXOneUpPresentationDelegate> _delegate;
    UIViewController *_presentingViewController;
    UIViewController *_originalPresentingViewController;
    id <PXOneUpPresentationImplementationDelegate> _implementationDelegate;
}

@property(nonatomic) __weak id <PXOneUpPresentationImplementationDelegate> implementationDelegate; // @synthesize implementationDelegate=_implementationDelegate;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak UIViewController *originalPresentingViewController; // @synthesize originalPresentingViewController=_originalPresentingViewController;
@property(readonly, nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) __weak id <PXOneUpPresentationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, setter=_setImplementationDelegate:) __weak id <PXOneUpPresentationImplementationDelegate> _implementationDelegate; // @synthesize _implementationDelegate=__implementationDelegate;
- (void).cxx_destruct;
- (void)_updateImplementationDelegate;
- (void)setHiddenAssetReferences:(id)arg1;
- (void)scrollAssetReferenceToVisible:(id)arg1;
- (id)regionOfInterestForAssetReference:(id)arg1;
- (id)currentImageForAssetReference:(id)arg1;
@property(readonly, nonatomic) _Bool shouldAutoPlay;
@property(readonly, nonatomic) id <PXImportStatusManager> importStatusManager;
@property(readonly, nonatomic) long long actionContext;
@property(readonly, nonatomic) PXAssetActionManager *actionManagerForPreviewing;
@property(readonly, nonatomic) PXAssetActionManager *actionManager;
@property(readonly, nonatomic) PXAssetReference *initialAssetReference;
@property(readonly, nonatomic) PXPhotosDetailsContext *photosDetailsContext;
@property(readonly, nonatomic) PXGestureProvider *gestureProvider;
@property(readonly, nonatomic) PXUIMediaProvider *mediaProvider;
@property(readonly, nonatomic) PXAssetsDataSourceManager *dataSourceManager;
- (_Bool)handlePresentingPinchGestureRecognizer:(id)arg1;
- (void)invalidatePresentingGeometry;
- (void)stopAnimated:(_Bool)arg1;
@property(readonly, nonatomic) _Bool canStop;
- (void)commitPreviewViewController:(id)arg1;
- (void)didDismissPreviewViewController:(id)arg1 committing:(_Bool)arg2;
- (id)previewViewControllerAllowingActions:(_Bool)arg1;
- (_Bool)startAnimated:(_Bool)arg1 interactiveMode:(long long)arg2;
@property(readonly, nonatomic) _Bool canStart;
- (void)presentingViewControllerViewDidDisappear:(_Bool)arg1;
- (void)presentingViewControllerViewWillDisappear:(_Bool)arg1;
- (void)presentingViewControllerViewDidAppear:(_Bool)arg1;
- (void)presentingViewControllerViewWillAppear:(_Bool)arg1;
- (id)initWithPresentingViewController:(id)arg1;
- (id)init;

@end

