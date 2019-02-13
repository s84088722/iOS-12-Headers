//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSArray, NSString, PXGadgetSpec, UIViewController;
@protocol PXGadgetDelegate;

@protocol PXGadget <NSObject>
@property(readonly, nonatomic) _Bool hasContentToDisplay;
@property(nonatomic) __weak id <PXGadgetDelegate> delegate;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property(readonly, nonatomic) unsigned long long gadgetType;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@optional
@property(nonatomic) struct CGRect visibleContentRect;
@property(readonly, nonatomic) _Bool supportsAssetsDrop;
@property(readonly, nonatomic) _Bool supportsSelection;
@property(readonly, nonatomic) _Bool supportsHighlighting;
@property(nonatomic) long long priority;
@property(readonly, nonatomic) unsigned long long headerStyle;
@property(readonly, nonatomic) const struct __CFString *accessoryButtonEventTrackerKey;
@property(readonly, nonatomic) NSString *accessoryButtonTitle;
@property(readonly, nonatomic) unsigned long long accessoryButtonType;
@property(readonly, nonatomic) NSString *localizedTitle;
- (void)commitPreviewViewController:(UIViewController *)arg1;
- (void)didDismissPreviewViewController:(UIViewController *)arg1 committing:(_Bool)arg2;
- (struct NSObject *)previewViewControllerAtLocation:(struct CGPoint)arg1 fromSourceView:(struct NSObject *)arg2 outSourceRect:(out struct CGRect *)arg3;
- (void)gadgetControllerHasDisappeared;
- (void)gadgetControllerHasAppeared;
- (void)contentHasBeenSeen;
- (NSString *)uniqueGadgetIdentifier;
- (NSArray *)debugURLsForDiagnostics;
- (struct NSObject *)contentViewController;
- (struct NSObject *)contentView;
- (void)contentViewDidDisappear;
- (void)contentViewWillAppear;
- (void)unloadContentData;
- (_Bool)hasLoadedContentData;
- (void)loadContentData;
- (void)preloadResources;
- (void)userDidSelectAccessoryButton:(id)arg1;
- (void)userDidSelectGadget;
@end

