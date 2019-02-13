//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUISwooshArtworkLoader.h>

@class SKUIItemArtworkContext, SKUILockupSwooshViewController, SKUIVideoImageDataConsumer, UIImage;

@interface SKUILockupSwooshArtworkLoader : SKUISwooshArtworkLoader
{
    SKUIItemArtworkContext *_context;
    SKUIVideoImageDataConsumer *_videoImageConsumer;
    UIImage *_videoPlaceholderImage;
}

- (void).cxx_destruct;
- (void)setImage:(id)arg1 forRequest:(id)arg2;
- (void)loadImagesForNextPageWithReason:(long long)arg1;
- (id)placeholderImageForVideo:(id)arg1;
- (id)placeholderImageForItem:(id)arg1;
- (_Bool)loadImageForVideo:(id)arg1 reason:(long long)arg2;
- (_Bool)loadImageForItem:(id)arg1 reason:(long long)arg2;
- (id)cachedImageForVideo:(id)arg1;
- (id)cachedImageForItem:(id)arg1;
- (id)initWithArtworkLoader:(id)arg1 swoosh:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) SKUILockupSwooshViewController *swooshViewController; // @dynamic swooshViewController;

@end

