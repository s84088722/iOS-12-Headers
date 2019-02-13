//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUIArtworkRequestDelegate-Protocol.h>
#import <StoreKitUI/SKUIItemStateCenterObserver-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, SKUIClientContext, SKUIItemArtworkContext, SKUIResourceLoader, SKUIScreenshotDataConsumer, SKUIStyledImageDataConsumer, UIImage;
@protocol SKUIItemCollectionDelegate;

@interface SKUIItemCollectionController : NSObject <SKUIArtworkRequestDelegate, SKUIItemStateCenterObserver>
{
    NSMutableDictionary *_itemIDsToArtworkRequestIDs;
    UIImage *_placeholderImage;
    NSMutableDictionary *_itemIDsToScreenshotRequestIDs;
    _Bool _delegateProvidesScreenshots;
    UIImage *_landscapeScreenshotPlaceholderImage;
    UIImage *_portraitScreenshotPlaceholderImage;
    id <SKUIItemCollectionDelegate> _delegate;
    SKUIResourceLoader *_artworkLoader;
    SKUIClientContext *_clientContext;
    SKUIItemArtworkContext *_artworkContext;
    SKUIStyledImageDataConsumer *_iconDataConsumer;
    SKUIScreenshotDataConsumer *_landscapeScreenshotDataConsumer;
    SKUIScreenshotDataConsumer *_portraitScreenshotDataConsumer;
    NSArray *_items;
    long long _numberOfItemsPerPage;
    double _numberOfPagesToCacheAhead;
}

@property(nonatomic) double numberOfPagesToCacheAhead; // @synthesize numberOfPagesToCacheAhead=_numberOfPagesToCacheAhead;
@property(nonatomic) long long numberOfItemsPerPage; // @synthesize numberOfItemsPerPage=_numberOfItemsPerPage;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) SKUIScreenshotDataConsumer *portraitScreenshotDataConsumer; // @synthesize portraitScreenshotDataConsumer=_portraitScreenshotDataConsumer;
@property(retain, nonatomic) SKUIScreenshotDataConsumer *landscapeScreenshotDataConsumer; // @synthesize landscapeScreenshotDataConsumer=_landscapeScreenshotDataConsumer;
@property(retain, nonatomic) SKUIStyledImageDataConsumer *iconDataConsumer; // @synthesize iconDataConsumer=_iconDataConsumer;
@property(retain, nonatomic) SKUIItemArtworkContext *artworkContext; // @synthesize artworkContext=_artworkContext;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(retain, nonatomic) SKUIResourceLoader *artworkLoader; // @synthesize artworkLoader=_artworkLoader;
@property(nonatomic) __weak id <SKUIItemCollectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct _NSRange)_visibleItemRange;
- (id)_screenshotForItem:(id)arg1;
- (id)_screenshotArtworkRequestWithItem:(id)arg1;
- (void)_reloadScreenshotForCellLayout:(id)arg1 item:(id)arg2 isRestricted:(_Bool)arg3;
- (void)_reloadForRestrictionsChange;
- (void)_reloadForItemStateChange:(id)arg1;
- (id)_placeholderImageForScreenshot:(id)arg1;
- (id)_placeholderImageForItem:(id)arg1;
- (_Bool)_loadArtworkForItem:(id)arg1 reason:(long long)arg2;
- (id)_iconArtworkRequestWithItem:(id)arg1;
- (void)_enumerateVisibleCellLayoutsWithBlock:(CDUnknownBlockType)arg1;
- (id)_artworkLoader;
- (void)_memoryWarningNotification:(id)arg1;
- (void)itemStateCenterRestrictionsChanged:(id)arg1;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)enterForeground;
- (void)enterBackground;
- (void)removeAllCachedResources;
- (id)performActionForItemAtIndex:(long long)arg1;
- (void)precacheNextPageArtworkForOffset:(struct CGPoint)arg1 direction:(double)arg2;
- (void)loadNextPageOfArtworkWithReason:(long long)arg1;
- (void)configureCellLayout:(id)arg1 forIndex:(long long)arg2;
- (void)didEndDisplayingItemAtIndex:(long long)arg1;
- (void)cancelArtworkLoadForItemIndex:(long long)arg1;
- (void)dealloc;
- (id)initWithClientContext:(id)arg1;
- (id)init;
- (id)_initSKUIItemCollectionController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

