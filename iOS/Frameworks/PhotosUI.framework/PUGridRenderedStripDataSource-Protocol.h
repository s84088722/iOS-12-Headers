//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSData, PHAsset, PUGridRenderedStrip;

@protocol PUGridRenderedStripDataSource <NSObject>
- (NSData *)renderedStrip:(PUGridRenderedStrip *)arg1 imageDataForAsset:(PHAsset *)arg2 imageWidth:(int *)arg3 imageHeight:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 imageDataOffset:(int *)arg8;
- (void)renderedStrip:(PUGridRenderedStrip *)arg1 enumerateAssetsForVisualSection:(long long)arg2 inVisualItemRange:(struct _NSRange)arg3 usingBlock:(void (^)(long long, PHAsset *, _Bool *))arg4;
@end
