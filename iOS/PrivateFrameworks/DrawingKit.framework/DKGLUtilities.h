//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface DKGLUtilities : NSObject
{
}

+ (_Bool)gpuAvailable;
+ (void)_postGLInactiveNotification;
+ (void)_postGLActiveNotification;
+ (_Bool)setCurrentGLContext:(id)arg1;
+ (id)createPlatformGLContext;
+ (id)snapshotImageOfFrameBufferWithID:(unsigned int)arg1 bufferSize:(struct CGSize)arg2 displayScale:(double)arg3;
+     // Error parsing type: v40@0:8^{?=[4]}16f24f28^{?=[4]}32, name: translateMatrix:byX:Y:result:
+     // Error parsing type: v36@0:8f16f20B24^{?=[4]}28, name: setProjectionMatrixForWidth:height:flipped:matrix:
+ (void)drawQuadAtX:(float)arg1 Y:(float)arg2 width:(float)arg3 height:(float)arg4;
+ (void)deleteTexture:(unsigned int *)arg1;
+ (void)createRepeatableTexture:(unsigned int *)arg1 withImageName:(id)arg2 ofType:(id)arg3;
+ (void)createTexture:(unsigned int *)arg1 withImageName:(id)arg2 ofType:(id)arg3;
+ (void)deleteVBO:(unsigned int *)arg1;
+ (void)createVBO:(unsigned int *)arg1 size:(long long)arg2 data:(void *)arg3 usage:(unsigned int)arg4;
+ (void)deleteFBO:(unsigned int *)arg1 depthRB:(unsigned int *)arg2 texture:(unsigned int *)arg3;
+ (void)createFBO:(unsigned int *)arg1 depthRB:(unsigned int *)arg2 texture:(unsigned int *)arg3 width:(int)arg4 height:(int)arg5 format:(unsigned int)arg6;
+ (unsigned int)compileShader:(id)arg1 ofType:(id)arg2;
+ (id)pathForResource:(id)arg1 ofType:(id)arg2;
+ (void)initialize;

@end

