/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:34:33 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFTilePoolPrivate;

@interface PDFTilePool : NSObject {

	PDFTilePoolPrivate* _private;

}
+(id)sharedPool;
-(int)tileRenderType;
-(void)_reclaimRecyclePool;
-(void)_releaseTiles;
-(void)renderIOTileForRequest:(id)arg1 ;
-(void)setTileRenderType:(int)arg1 ;
-(void)setDrawTileEdges:(BOOL)arg1 ;
-(BOOL)drawTileEdges;
-(void)setSaveBitmapFiles;
-(void)requestPDFTileSurfaceForTarget:(id)arg1 forPage:(id)arg2 withRenderingProperties:(id)arg3 atZoomFactor:(double)arg4 frame:(CGRect)arg5 transform:(CGAffineTransform)arg6 shouldAntiAlias:(BOOL)arg7 ;
-(void)releasePDFTileSurface:(id)arg1 shouldRecycle:(BOOL)arg2 ;
-(void)queryUsedTiles:(int*)arg1 andFreeTiles:(int*)arg2 ;
-(id)init;
-(void)dealloc;
@end
