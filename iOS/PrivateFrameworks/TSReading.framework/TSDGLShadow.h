//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSDGLShadow : NSObject
{
}

+ (id)sharedContext;
+ (id)renderQueue;
- (void)createOffscreenRenderBuffer:(struct CGSize)arg1 framebuffer:(id)arg2 requiresDepth:(_Bool)arg3 colorRenderBuffer:(unsigned int *)arg4 depthRenderBuffer:(unsigned int *)arg5;
- (struct CGImage *)newCGImageFromGLBuffer:(char **)arg1;
- (void)setupGLTextureParameters;

@end
