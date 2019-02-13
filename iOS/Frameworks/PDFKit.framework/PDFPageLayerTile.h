//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import <PDFKit/PDFTilePoolDelegate-Protocol.h>

@class PDFPageLayer, PDFTileSurface;

__attribute__((visibility("hidden")))
@interface PDFPageLayerTile : CALayer <PDFTilePoolDelegate>
{
    PDFPageLayer *pageLayer;
    struct CGAffineTransform renderingTransform;
    double tileContentsScale;
    PDFTileSurface *pageSurface;
    int generationID;
    // Error parsing type: AB, name: isWorking
    struct CGRect originalFrame;
}

- (void).cxx_destruct;
- (void)recievePDFTileSurface:(id)arg1;
- (_Bool)isWorking;
- (void)hasStartedWork;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 forPageLayer:(id)arg2 withRenderingTransform:(struct CGAffineTransform)arg3 tileContentsScale:(double)arg4 generationID:(int)arg5;

@end
