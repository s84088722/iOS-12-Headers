//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class TSDImageDrawingHelper, TSPData;

@protocol TSDImageDrawingDataSource <NSObject>
- (TSPData *)imageDrawingHelperThumbnailAdjustedImageData:(TSDImageDrawingHelper *)arg1;
- (TSPData *)imageDrawingHelperAdjustedImageData:(TSDImageDrawingHelper *)arg1;
- (_Bool)imageDrawingHelperImageHasAlpha:(TSDImageDrawingHelper *)arg1;
- (struct CGAffineTransform)imageDrawingHelperImageTransformInRootForAntialiasingDefeat:(TSDImageDrawingHelper *)arg1;
- (struct CGRect)imageDrawingHelperImageRect:(TSDImageDrawingHelper *)arg1;
- (TSPData *)imageDrawingHelperThumbnailImageData:(TSDImageDrawingHelper *)arg1;
- (TSPData *)imageDrawingHelperImageData:(TSDImageDrawingHelper *)arg1;
@end

