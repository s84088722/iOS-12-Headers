//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DResourceLoader.h>

__attribute__((visibility("hidden")))
@interface TSCH3DGLTextureLoader : TSCH3DResourceLoader
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)loader;
+ (id)_singletonAlloc;
- (void)deactivateHandle:(id)arg1 insideContext:(id)arg2;
- (_Bool)activateResource:(id)arg1 insideSession:(id)arg2 unit:(long long)arg3 type:(int)arg4 attributes:(const struct TextureAttributes *)arg5;
- (void)postbindHandle:(id)arg1 config:(void *)arg2;
- (void)bindHandle:(id)arg1 config:(void *)arg2;
- (unsigned long long)uploadDataBuffer:(id)arg1 handle:(id)arg2 insideSession:(id)arg3 config:(void *)arg4;
- (id)p_convertDataBuffer:(id)arg1 format:(struct TSCH3DGLTextureFormat)arg2 returningConvertedFormat:(struct TSCH3DGLTextureFormat *)arg3;
- (unsigned long long)uploadResource:(id)arg1 handle:(id)arg2 insideSession:(id)arg3 config:(void *)arg4;
- (_Bool)shouldReuploadHandle:(id)arg1 config:(void *)arg2;
- (id)generateHandleWithConfig:(void *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

