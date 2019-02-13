//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MTKView, NSMutableArray;
@protocol MTLCommandQueue, MTLComputePipelineState, MTLDevice, MTLLibrary, MTLRenderPipelineState;

@interface MTLSplineRenderer : NSObject
{
    float _edgeFactor;
    float _insideFactor;
    MTKView *_view;
    id <MTLDevice> _device;
    id <MTLLibrary> _library;
    id <MTLCommandQueue> _commandQueue;
    id <MTLComputePipelineState> _computeTessellationFactorsPipeline;
    id <MTLRenderPipelineState> _renderPostTessellationPipelineState;
    NSMutableArray *_dataCollection;
    unsigned long long _triangleFillMode;
    // Error parsing type: {?="columns"[4]}, name: _projectionMatrix
}

@property unsigned long long triangleFillMode; // @synthesize triangleFillMode=_triangleFillMode;
// Error parsing type for property projectionMatrix:
// Property attributes: T{?=[4]},V_projectionMatrix

@property(retain) NSMutableArray *dataCollection; // @synthesize dataCollection=_dataCollection;
- (void).cxx_destruct;
- (void)renderPostTessellation:(id)arg1 data:(id)arg2;
- (void)computeTessellationFactors:(id)arg1 data:(id)arg2;
- (void)renderToTextureWithCommandBuffer:(id)arg1 texture:(id)arg2;
- (void)renderWithCommandBuffer:(id)arg1;
- (void)createPipelineStates;
- (id)initWithMTKView:(id)arg1 dataCollection:(id)arg2;
- (id)init;

@end

