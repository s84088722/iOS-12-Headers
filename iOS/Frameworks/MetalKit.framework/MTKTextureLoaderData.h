//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MTKTextureLoaderData : NSObject
{
    NSString *_imageOrigin;
    unsigned long long _numArrayElements;
    unsigned long long _numFaces;
    unsigned long long _numMipmapLevels;
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _depth;
    unsigned long long _textureType;
    unsigned long long _pixelFormat;
}

@property(nonatomic) unsigned long long pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(nonatomic) unsigned long long textureType; // @synthesize textureType=_textureType;
@property(nonatomic) unsigned long long depth; // @synthesize depth=_depth;
@property(nonatomic) unsigned long long height; // @synthesize height=_height;
@property(nonatomic) unsigned long long width; // @synthesize width=_width;
@property(nonatomic) unsigned long long numMipmapLevels; // @synthesize numMipmapLevels=_numMipmapLevels;
@property(nonatomic) unsigned long long numFaces; // @synthesize numFaces=_numFaces;
@property(nonatomic) unsigned long long numArrayElements; // @synthesize numArrayElements=_numArrayElements;
@property(retain, nonatomic) NSString *imageOrigin; // @synthesize imageOrigin=_imageOrigin;
- (id)getDataForArrayElement:(unsigned long long)arg1 face:(unsigned long long)arg2 level:(unsigned long long)arg3 depthPlane:(unsigned long long)arg4 bytesPerRow:(unsigned long long *)arg5 bytesPerImage:(unsigned long long *)arg6;
- (void)dealloc;
- (id)init;

@end

