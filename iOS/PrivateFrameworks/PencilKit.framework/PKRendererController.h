//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/PKRendererControllerProtocol-Protocol.h>

@class CAEAGLLayer, NSMutableArray, NSString, PKLinedPaper, PKRenderer, PKStrokeGenerator;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PKRendererController : NSObject <PKRendererControllerProtocol>
{
    NSObject<OS_dispatch_queue> *_renderQueue;
    NSObject<OS_dispatch_semaphore> *_canBeginRenderSemaphore;
    // Error parsing type: {atomic_flag="_Value"AB}, name: _readyToBeginRender
    // Error parsing type: Ad, name: _lastFrameDuration
    // Error parsing type: Ai, name: _cancelAllRendering
    // Error parsing type: Ai, name: _cancelLongRunningRenderingCount
    // Error parsing type: Ai, name: _queuedRenders
    NSMutableArray *_postPresentCallbacks;
    _Bool _isTorndown;
    unsigned int _resolveFramebuffer;
    unsigned int _resolveColorRenderbuffer;
    int renderbufferWidth;
    int renderbufferHeight;
    CAEAGLLayer *_presentationLayer;
    PKStrokeGenerator *_inputController;
    PKLinedPaper *_linedPaper;
    PKRenderer *_renderer;
    double _inputScale;
    struct CGSize _actualSize;
    struct CGSize _pixelSize;
    struct CGRect _viewScissor;
    struct CGAffineTransform _strokeTransform;
    struct CGAffineTransform _paperTransform;
    struct CGAffineTransform _renderTransform;
}

@property double inputScale; // @synthesize inputScale=_inputScale;
@property struct CGAffineTransform renderTransform; // @synthesize renderTransform=_renderTransform;
@property(retain, nonatomic) PKRenderer *renderer; // @synthesize renderer=_renderer;
@property(readonly, nonatomic) struct CGSize pixelSize; // @synthesize pixelSize=_pixelSize;
@property(readonly, nonatomic) struct CGSize actualSize; // @synthesize actualSize=_actualSize;
@property(nonatomic) struct CGAffineTransform paperTransform; // @synthesize paperTransform=_paperTransform;
@property(nonatomic) struct CGRect viewScissor; // @synthesize viewScissor=_viewScissor;
@property(retain, nonatomic) PKLinedPaper *linedPaper; // @synthesize linedPaper=_linedPaper;
@property(readonly, nonatomic) PKStrokeGenerator *inputController; // @synthesize inputController=_inputController;
@property(nonatomic) struct CGAffineTransform strokeTransform; // @synthesize strokeTransform=_strokeTransform;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *renderQueue; // @synthesize renderQueue=_renderQueue;
- (void).cxx_destruct;
- (void)buildRenderCacheForStrokes:(id)arg1;
- (void)drawingCancelledWithCompletion:(CDUnknownBlockType)arg1;
- (void)drawingCancelled;
- (void)drawingEnded:(id)arg1 finishStrokeBlock:(CDUnknownBlockType)arg2;
- (void)drawingBeganWithStroke:(id)arg1;
- (void)_drawStrokesAfterClear:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 strokeTransform:(struct CGAffineTransform)arg3 useLayerContext:(_Bool)arg4 renderCompletion:(CDUnknownBlockType)arg5;
- (void)drawStrokesAfterClear:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 strokeTransform:(struct CGAffineTransform)arg3 useLayerContext:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)drawStrokesAfterClear:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;
- (void)renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 strokeTransform:(struct CGAffineTransform)arg3 imageClipRect:(struct CGRect)arg4 completion:(CDUnknownBlockType)arg5;
- (void)drawStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;
- (void)drawStrokes:(id)arg1 renderIntermediateSteps:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)drawImage:(struct CGImage *)arg1 andMask:(struct CGImage *)arg2 clippedToStrokeSpaceRect:(struct CGRect)arg3;
- (void)drawImage:(struct CGImage *)arg1 andMask:(struct CGImage *)arg2;
- (void)setBackgroundColor:(struct CGColor *)arg1;
- (void)setBackgroundImage:(struct CGImage *)arg1;
@property(nonatomic) double backboardPaperMultiply;
- (_Bool)solidColorBackboard;
- (void)setSolidColorBackboard:(_Bool)arg1;
- (void)_renderDrawPoints;
- (void)callBlockAfterPresenting:(CDUnknownBlockType)arg1;
- (void)didFinishRendering:(CDUnknownBlockType)arg1;
- (_Bool)prerenderWithTransform:(struct CGAffineTransform)arg1 inputScale:(double)arg2 at:(double)arg3;
- (void)purgeOriginalBackFramebuffer;
- (void)flushMemoryIfPossible;
- (void)clear;
- (void)_renderLiveStrokeAndPresentWithTransform:(struct CGAffineTransform)arg1 at:(double)arg2;
- (void)_renderAheadWithTransform:(struct CGAffineTransform)arg1 at:(double)arg2;
- (void)_renderAndPresent:(_Bool)arg1 withTransform:(struct CGAffineTransform)arg2;
- (void)_discard;
- (void)_createFramebuffer;
- (void)_present:(double)arg1;
- (void)setPresentationLayer:(id)arg1;
- (struct CGImage *)newCGImageWithClipRect:(struct CGRect)arg1;
- (struct CGImage *)newCGImage;
- (void)renderTilesIntoTiles:(id)arg1;
- (void)renderTiles:(id)arg1 tileTransform:(struct CGAffineTransform)arg2;
- (void)_copyIntoTilesFromRenderQueue:(id)arg1 tileTransform:(struct CGAffineTransform)arg2;
- (void)copyIntoTiles:(id)arg1;
- (_Bool)drawStrokes:(id)arg1 intoTile:(id)arg2 renderCount:(long long)arg3;
- (void)didTeardownTile;
- (void)changeRenderSize;
- (void)setPixelSize:(struct CGSize)arg1 actualSize:(struct CGSize)arg2;
- (void)_deleteFramebuffer;
- (void)cancelVSyncTimeoutBlock;
- (_Bool)isAllRenderingCancelled;
- (_Bool)isLongRunningRenderingCancelled;
- (void)enableRendering;
- (void)disableRendering;
- (void)resumeLongRunningRendersAfterAllWorkIsDone;
- (void)resumeLongRunningRenders;
- (void)cancelLongRunningRenders;
- (void)cancelAllRendering;
- (void)setup;
- (void)dealloc;
- (void)teardown;
- (id)initWithPixelSize:(struct CGSize)arg1 actualSize:(struct CGSize)arg2 renderQueue:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

