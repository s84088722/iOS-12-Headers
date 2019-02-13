//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPUBorderDrawingCache, NSCache, NSHashTable, NSMapTable, NSMutableDictionary, NSMutableSet, NSString, SKUIBadgeTextAttachmentLoader, SKUIClientContext, SKUIItemOfferButton, SKUIResourceLoader, SKUIViewElementTextLayoutCache, UIColor, UIViewController;
@protocol SKUIArtworkRequestDelegate;

@interface SKUIViewElementLayoutContext : NSObject
{
    NSMutableDictionary *_aggregateValues;
    SKUIBadgeTextAttachmentLoader *_badgeImageLoader;
    MPUBorderDrawingCache *_borderDrawingCache;
    NSMapTable *_editorialLayouts;
    NSHashTable *_expandedEditorialLayouts;
    SKUIItemOfferButton *_itemOfferButton;
    NSMutableDictionary *_itemOfferButtonSizes;
    struct UIEdgeInsets _largeScreenElementPadding;
    NSMutableSet *_observedArtworkRequestIDs;
    NSMapTable *_blurColors;
    double _activePageWidth;
    id <SKUIArtworkRequestDelegate> _artworkRequestDelegate;
    SKUIClientContext *_clientContext;
    unsigned long long _containerViewElementType;
    SKUIViewElementTextLayoutCache *_labelLayoutCache;
    UIViewController *_parentViewController;
    SKUIResourceLoader *_resourceLoader;
    UIColor *_placeholderColor;
    UIColor *_tintColor;
    NSString *_backdropGroupName;
    double _displayScale;
}

+ (double)_calculateValueFromString:(id)arg1 withDefault:(double)arg2 coefficent:(double)arg3;
+ (double)itemWidthForElement:(id)arg1 withDefaultWidth:(double)arg2 fitWidth:(double)arg3;
@property(nonatomic) double displayScale; // @synthesize displayScale=_displayScale;
@property(copy, nonatomic) NSString *backdropGroupName; // @synthesize backdropGroupName=_backdropGroupName;
@property(readonly, nonatomic) struct UIEdgeInsets largeScreenElementPadding; // @synthesize largeScreenElementPadding=_largeScreenElementPadding;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property(retain, nonatomic) SKUIResourceLoader *resourceLoader; // @synthesize resourceLoader=_resourceLoader;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(retain, nonatomic) SKUIViewElementTextLayoutCache *labelLayoutCache; // @synthesize labelLayoutCache=_labelLayoutCache;
@property(nonatomic) unsigned long long containerViewElementType; // @synthesize containerViewElementType=_containerViewElementType;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(nonatomic) __weak id <SKUIArtworkRequestDelegate> artworkRequestDelegate; // @synthesize artworkRequestDelegate=_artworkRequestDelegate;
@property(nonatomic) double activePageWidth; // @synthesize activePageWidth=_activePageWidth;
- (void).cxx_destruct;
- (struct CGSize)_sizeForImageElement:(id)arg1 applyTransform:(_Bool)arg2;
- (_Bool)_loadImageForURL:(id)arg1 cacheKey:(id)arg2 dataConsumer:(id)arg3 reason:(long long)arg4;
- (void)_artworkRequestDidLoadImageNotification:(id)arg1;
- (id)transientRequestIdentifierForViewElement:(id)arg1;
- (id)textPropertiesForViewElement:(id)arg1 width:(double)arg2;
- (struct CGSize)sizeForViewElement:(id)arg1 width:(double)arg2;
- (struct CGSize)sizeForItemOfferButton:(id)arg1;
- (struct CGSize)sizeForImageElement:(id)arg1;
- (struct CGSize)sizeForBadgeElement:(id)arg1;
- (void)setLargeScreenElementPaddingFromContext:(id)arg1;
- (void)setBlurColor:(id)arg1 cacheKey:(id)arg2;
- (void)setAggregateValue:(id)arg1 forKey:(id)arg2;
- (id)requestIdentifierForViewElement:(id)arg1;
- (id)requestIdentifierForResourceCacheKey:(id)arg1;
- (id)requestIdentifierForArtwork:(id)arg1;
- (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2;
- (id)placeholderImageForSize:(struct CGSize)arg1;
- (long long)maxWidthForElement:(id)arg1 withDefaultWidth:(long long)arg2;
- (id)placeholderImageForImageElement:(id)arg1 dataConsumer:(id)arg2;
- (id)dataConsumerForImageElement:(id)arg1;
- (_Bool)loadImageForImageElement:(id)arg1 reason:(long long)arg2 dataConsumer:(id)arg3;
- (_Bool)loadImageForImageElement:(id)arg1 reason:(long long)arg2;
- (_Bool)loadTemplatedImageForBadgeElement:(id)arg1 reason:(long long)arg2;
- (_Bool)loadImageForBadgeElement:(id)arg1 reason:(long long)arg2;
- (_Bool)loadImageForArtwork:(id)arg1 dataConsumer:(id)arg2 reason:(long long)arg3;
- (_Bool)loadImageForArtwork:(id)arg1 reason:(long long)arg2;
- (_Bool)isEditorialLayoutExpanded:(id)arg1;
- (void)invalidateAllEditorialLayouts;
- (id)imageResourceCacheKeyForViewElement:(id)arg1;
- (id)imageResourceCacheKeyForArtwork:(id)arg1;
- (void)expandEditorialForLabelElement:(id)arg1;
- (id)editorialLayoutForLabelElement:(id)arg1 width:(double)arg2;
- (double)defaultItemWidthForViewElement:(id)arg1;
@property(readonly, nonatomic) MPUBorderDrawingCache *borderDrawingCache;
- (id)blurColorForCacheKey:(id)arg1;
@property(readonly, nonatomic) SKUIBadgeTextAttachmentLoader *badgeImageLoader;
- (id)aggregateValueForKey:(id)arg1;
@property(readonly, nonatomic) NSCache *placeholderImageCache;
- (void)dealloc;
- (id)initWithStorePageSectionContext:(id)arg1 previousLayoutContext:(id)arg2;
- (id)initWithStorePageSectionContext:(id)arg1;
- (id)init;
- (id)_initSKUIViewElementLayoutContext;

@end

