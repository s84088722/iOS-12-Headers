//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSObject, NSString, PXPhotosDetailsContext, PXSectionedSelectionManager, PXTilingController, PXWidgetSpec;
@protocol PXAnonymousView, PXWidgetContentViewTransitionCoordinator, PXWidgetDelegate, PXWidgetUnlockDelegate;

@protocol PXWidget <NSObject>

@optional
+ (void)preloadResources;
@property(readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property(nonatomic, getter=isFaceModeEnabled) _Bool faceModeEnabled;
@property(readonly, nonatomic) _Bool supportsFaceMode;
@property(nonatomic, getter=isSelecting) _Bool selecting;
@property(readonly, nonatomic) _Bool supportsSelection;
@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled;
@property(readonly, nonatomic) _Bool allowUserInteractionWithSubtitle;
@property(readonly, nonatomic) NSString *localizedDisclosureTitle;
@property(readonly, nonatomic) NSString *localizedCaption;
@property(readonly, nonatomic) NSString *localizedSubtitle;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) long long contentLayoutStyle;
@property(readonly, nonatomic) PXTilingController *contentTilingController;
@property(readonly, nonatomic) long long contentViewAnchoringType;
@property(readonly, nonatomic) NSObject<PXAnonymousView> *contentView;
@property(readonly, nonatomic) _Bool hasLoadedContentData;
@property(readonly, nonatomic) _Bool hasContentForCurrentInput;
@property(retain, nonatomic) PXWidgetSpec *spec;
@property(retain, nonatomic) PXPhotosDetailsContext *context;
@property(nonatomic) __weak id <PXWidgetUnlockDelegate> widgetUnlockDelegate;
@property(nonatomic) __weak id <PXWidgetDelegate> widgetDelegate;
- (void)deviceDidBecomeUnlocked;
- (void)userDidSelectDisclosureControl;
- (void)userDidSelectSubtitle;
- (void)contentViewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id <PXWidgetContentViewTransitionCoordinator>)arg2;
- (void)contentViewDidDisappear;
- (void)contentViewWillAppear;
- (void)unloadContentData;
- (void)loadContentData;
- (void)setContentSize:(struct CGSize)arg1;
- (double)preferredContentHeightForWidth:(double)arg1;
@end

