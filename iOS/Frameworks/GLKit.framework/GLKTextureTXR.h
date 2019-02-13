//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TXRTexture;

@interface GLKTextureTXR : NSObject
{
    unsigned int _loadTarget;
    TXRTexture *_texture;
    unsigned long long _API;
    _Bool _hasAlpha;
    _Bool _lossyCompressedSource;
    unsigned int _GLTextureName;
    unsigned int _target;
    unsigned int _mipmapLevelCount;
    unsigned int _arrayLength;
    unsigned int _width;
    unsigned int _height;
    unsigned int _depth;
    NSString *_label;
}

@property(nonatomic) _Bool lossyCompressedSource; // @synthesize lossyCompressedSource=_lossyCompressedSource;
@property(nonatomic) _Bool hasAlpha; // @synthesize hasAlpha=_hasAlpha;
@property(nonatomic) unsigned int depth; // @synthesize depth=_depth;
@property(nonatomic) unsigned int height; // @synthesize height=_height;
@property(nonatomic) unsigned int width; // @synthesize width=_width;
@property(nonatomic) unsigned int arrayLength; // @synthesize arrayLength=_arrayLength;
@property(nonatomic) unsigned int mipmapLevelCount; // @synthesize mipmapLevelCount=_mipmapLevelCount;
@property(nonatomic) unsigned int target; // @synthesize target=_target;
@property(nonatomic) unsigned int GLTextureName; // @synthesize GLTextureName=_GLTextureName;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (_Bool)uploadToGLTexture:(unsigned int)arg1 error:(id *)arg2;
- (id)initWithTexture:(id)arg1 API:(unsigned long long)arg2 options:(id)arg3 error:(id *)arg4;
- (void)dealloc;

@end

