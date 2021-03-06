//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKit/PKPaymentSetupProduct.h>

@class UIImage;

@interface PKPaymentSetupProduct (PKUIUtilities)
+ (id)_sharedDownloader;
- (id)_generateThumbnailMask;
- (id)_processThumbnailImage:(id)arg1 forSize:(struct CGSize)arg2;
- (id)_processDigitalCardImage:(id)arg1;
@property(copy, nonatomic) UIImage *thumbnailMask;
- (void)resetCache;
- (id)logoCachedImage:(CDUnknownBlockType)arg1;
- (id)thumbnailCachedImageForSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (id)plasticCardCachedImage:(CDUnknownBlockType)arg1;
- (id)_getCardImageUrlFromMetadata:(id)arg1 forScale:(double)arg2;
- (id)digitalCardCachedImage:(CDUnknownBlockType)arg1;
- (void)_commonCachedImageFromURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
@end

