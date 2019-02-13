//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSDGLDataBuffer, TSDGLFrameBuffer, TSDGLFrameBufferTextureConfig, TSDGLShader;

@interface TSDGLEdgeDistanceField : NSObject
{
    unsigned int _inputTexture;
    struct CGSize _textureSize;
    struct CGSize _squareSize;
    TSDGLFrameBufferTextureConfig *_framebufferTextureConfig;
    TSDGLFrameBuffer *_exteriorFramebuffer;
    TSDGLFrameBuffer *_interiorFramebuffer;
    TSDGLDataBuffer *_rectDataBuffer;
    TSDGLDataBuffer *_squareDataBuffer;
    TSDGLShader *_drawShader;
    TSDGLShader *_combineShader;
    TSDGLShader *_seedShader;
    TSDGLShader *_floodShader;
    TSDGLShader *_gradientShader;
    int _oldViewport[4];
}

+ (unsigned int)distanceFieldTextureWithTexture:(unsigned int)arg1 textureSize:(struct CGSize)arg2 maxDistance:(double)arg3;
- (unsigned int)p_gradientTextureFromCombinedTexture:(unsigned int)arg1 withCurrentGLFramebuffer:(int)arg2;
- (unsigned int)p_combinedTextureWithCurrentGLFramebuffer:(int)arg1;
- (void)p_floodTextureInFramebuffer:(id)arg1 maxDistance:(double)arg2;
- (void)p_seedTextureFromTexture:(unsigned int)arg1 invertSeed:(_Bool)arg2;
- (void)p_writeIntoSquareTexture;
- (void)p_setupShaders;
- (void)p_setupBuffers;
- (void)dealloc;
- (id)initWithTexture:(unsigned int)arg1 textureSize:(struct CGSize)arg2;
- (void)teardown;

@end

