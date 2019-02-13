//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DResourceLoader.h>

@protocol TSCH3DRenderBufferAllocator;

__attribute__((visibility("hidden")))
@interface TSCH3DFBOLoader : TSCH3DResourceLoader
{
    tvec2_3b141483 mSize;
    struct FramebufferAttributes mFramebufferAttributes;
    id <TSCH3DRenderBufferAllocator> mColorAllocator;
    id <TSCH3DRenderBufferAllocator> mDepthAllocator;
}

+ (id)loaderWithFramebufferAttributes:(const struct FramebufferAttributes *)arg1 size:(const tvec2_3b141483 *)arg2 colorAllocator:(id)arg3 depthAllocator:(id)arg4;
+ (unsigned long long)estimatedMemoryInBytesForSize:(tvec2_3b141483)arg1 samples:(unsigned long long)arg2 hasColorbuffer:(_Bool)arg3 hasDepthbuffer:(_Bool)arg4;
@property(readonly, nonatomic) struct FramebufferAttributes framebufferAttributes; // @synthesize framebufferAttributes=mFramebufferAttributes;
@property(readonly, nonatomic) tvec2_3b141483 size; // @synthesize size=mSize;
@property(readonly, nonatomic) id <TSCH3DRenderBufferAllocator> depthAllocator; // @synthesize depthAllocator=mDepthAllocator;
@property(readonly, nonatomic) id <TSCH3DRenderBufferAllocator> colorAllocator; // @synthesize colorAllocator=mColorAllocator;
- (id).cxx_construct;
- (struct SessionLoadResourceResult)loadResource:(id)arg1 insideSession:(id)arg2;
- (void)deactivateHandle:(id)arg1 insideContext:(id)arg2;
- (unsigned long long)uploadDataBuffer:(id)arg1 handle:(id)arg2 insideSession:(id)arg3 config:(void *)arg4;
- (void)bindHandle:(id)arg1 config:(void *)arg2;
- (id)generateHandleWithConfig:(void *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithFramebufferAttributes:(const struct FramebufferAttributes *)arg1 size:(const tvec2_3b141483 *)arg2 colorAllocator:(id)arg3 depthAllocator:(id)arg4;

@end

