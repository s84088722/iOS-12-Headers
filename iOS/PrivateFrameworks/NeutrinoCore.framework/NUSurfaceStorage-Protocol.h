//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUImageStorage-Protocol.h>

@class NURegion;

@protocol NUSurfaceStorage <NUImageStorage>
- (long long)writeTextureInRegion:(NURegion *)arg1 block:(_Bool (^)(NUGLTexture *))arg2;
- (long long)readTextureInRegion:(NURegion *)arg1 block:(_Bool (^)(NUGLTexture *))arg2;
- (long long)writeSurfaceInRegion:(NURegion *)arg1 block:(_Bool (^)(NUIOSurface *))arg2;
- (long long)readSurfaceInRegion:(NURegion *)arg1 block:(_Bool (^)(NUIOSurface *))arg2;
@end

