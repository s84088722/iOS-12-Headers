//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DGLFramebuffer.h>

@class TSCH3DFBOLoader, TSCH3DResource;

__attribute__((visibility("hidden")))
@interface TSCH3DGLFBO : TSCH3DGLFramebuffer
{
    TSCH3DFBOLoader *mLoader;
    TSCH3DResource *mResource;
    _Bool mPreserveProtectedResourceAfterDestroy;
}

+ (id)FBOFromContext:(id)arg1 size:(tvec2_3b141483 *)arg2 attributes:(const struct FramebufferAttributes *)arg3 colorAllocator:(id)arg4 depthAllocator:(id)arg5 resource:(id)arg6;
+ (id)FBOFromContext:(id)arg1 size:(const tvec2_3b141483 *)arg2 attributes:(const struct FramebufferAttributes *)arg3 textureAttributes:(const struct FramebufferAttributes *)arg4 resource:(id)arg5 FBOClass:(Class)arg6 RTTRenderbufferAllocatorBlock:(CDUnknownBlockType)arg7;
+ (id)FBOFromContext:(id)arg1 size:(const tvec2_3b141483 *)arg2 attributes:(const struct FramebufferAttributes *)arg3 textureAttributes:(const struct FramebufferAttributes *)arg4 resource:(id)arg5;
@property(nonatomic) _Bool preserveProtectedResourceAfterDestroy; // @synthesize preserveProtectedResourceAfterDestroy=mPreserveProtectedResourceAfterDestroy;
- (unsigned long long)estimatedMemroyInBytes;
- (tvec2_3b141483)size;
- (void)discardBuffers;
- (void)discardDepthBuffer;
- (void)discardColorBuffer;
- (_Bool)activateInsideSession:(id)arg1;
- (_Bool)bindInSession:(id)arg1;
- (struct SessionLoadResourceResult)loadInsideSession:(id)arg1;
- (unsigned int)type;
- (void)bindColorbufferInSession:(id)arg1;
- (void)disableSamplingInSession:(id)arg1;
- (_Bool)validForSession:(id)arg1;
- (id)FBOHandleForSession:(id)arg1;
- (id)GLHandleForSession:(id)arg1;
- (_Bool)isProtectedInSession:(id)arg1;
- (void)unprotectInSession:(id)arg1 clearOnFailProtection:(_Bool)arg2;
- (void)protectInSession:(id)arg1 unprotectOnFail:(_Bool)arg2;
- (void)destroyResourcesInSession:(id)arg1;
- (id)loader;
- (_Bool)isTexturable;
- (id)description;
- (void)dealloc;
- (id)initFromContext:(id)arg1 size:(tvec2_3b141483 *)arg2 attributes:(const struct FramebufferAttributes *)arg3 colorAllocator:(id)arg4 depthAllocator:(id)arg5 resource:(id)arg6;

@end

