//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreUI/CUIThemeRendition.h>

@class CUIRenditionKey, CUIRenditionMetrics, CUIRenditionSliceInformation, CUIStructuredThemeStore;

__attribute__((visibility("hidden")))
@interface _CUIInternalLinkRendition : CUIThemeRendition
{
    unsigned int _nimages;
    struct CGRect _imageRect[16];
    struct CGImage *_image[16];
    struct CGImage *_unslicedImage;
    CUIRenditionMetrics *_renditionMetrics;
    CUIRenditionSliceInformation *_sliceInformation;
    struct CGRect _frame;
    CUIStructuredThemeStore *_sourceProvider;
    CUIRenditionKey *_referenceKey;
    struct CGSize _originalUncroppedSize;
    struct CGRect _alphaCroppedFrame;
}

- (struct CGRect)alphaCroppedRect;
- (struct CGSize)originalUncroppedSize;
- (_Bool)edgesOnly;
- (_Bool)isTiled;
- (id)maskForSliceIndex:(long long)arg1;
- (id)imageForSliceIndex:(long long)arg1;
- (void)_fillOutImageSlices;
- (struct CGImage *)unslicedImage;
- (struct CGImage *)_sourceImage;
- (_Bool)isScaled;
- (id)metrics;
- (id)sliceInformation;
- (struct CGSize)unslicedSize;
- (struct CGRect)_destinationFrame;
- (id)linkingToRendition;
- (_Bool)isInternalLink;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;
- (void)_setStructuredThemeStore:(id)arg1;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(long long)arg3;
- (void)dealloc;

@end

