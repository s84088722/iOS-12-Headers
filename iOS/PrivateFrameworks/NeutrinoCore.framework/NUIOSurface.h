//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NUGLBuffer, NUGLTexture, NUPixelFormat;

@interface NUIOSurface : NSObject
{
    NSString *_name;
    NUPixelFormat *_format;
    NUPixelFormat *_internalFormat;
    NUGLBuffer *_buffer;
    NUGLTexture *_texture;
    CDStruct_d58201db _size;
}

+ (id)_internalFormatForPixelFormat:(id)arg1;
@property(readonly, nonatomic) NUGLTexture *texture; // @synthesize texture=_texture;
@property(readonly, nonatomic) NUGLBuffer *buffer; // @synthesize buffer=_buffer;
@property(readonly, nonatomic) NUPixelFormat *internalFormat; // @synthesize internalFormat=_internalFormat;
@property(readonly, nonatomic) NUPixelFormat *format; // @synthesize format=_format;
@property(readonly, nonatomic) CDStruct_912cb5d2 size; // @synthesize size=_size;
- (void).cxx_destruct;
- (id)newRenderDestination;
- (_Bool)write:(CDUnknownBlockType)arg1;
- (_Bool)read:(CDUnknownBlockType)arg1;
- (id)description;
- (id)_purgeStateDescription;
- (_Bool)isPurged;
- (_Bool)makeNonPurgeable;
- (void)makePurgeable:(long long)arg1;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) long long sizeInBytes;
@property(readonly, nonatomic) long long rowBytes;
- (void)_allocateSurface;
- (id)initWithSize:(CDStruct_912cb5d2)arg1 format:(id)arg2;
- (id)init;

@end

