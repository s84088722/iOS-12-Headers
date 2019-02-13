//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface CSIBitmapWrapper : NSObject
{
    struct CGContext *_bitmapContext;
    NSData *_pixelData;
    unsigned int _pixelFormat;
    unsigned int _width;
    unsigned int _height;
    unsigned long long _rowbytes;
    _Bool _allowsMultiPassEncoding;
    _Bool _allowsOptimalRowbytesPacking;
    _Bool _allowsCompactCompression;
    _Bool _allowsPaletteImageCompression;
    _Bool _allowsHevcCompression;
    _Bool _allowsDeepmapImageCompression;
    _Bool _flipped;
    struct CGImage *_sourceImage;
    long long _texturePixelFormat;
    unsigned int _imageAlpha;
    double _compressionQuality;
    long long _compressionType;
    unsigned long long _colorSpaceID;
    long long _textureInterpretation;
    int _exifOrientation;
}

@property _Bool allowsDeepmapImageCompression; // @synthesize allowsDeepmapImageCompression=_allowsDeepmapImageCompression;
@property(nonatomic) int exifOrientation; // @synthesize exifOrientation=_exifOrientation;
@property(nonatomic) long long textureInterpretation; // @synthesize textureInterpretation=_textureInterpretation;
@property(nonatomic) unsigned long long colorSpaceID; // @synthesize colorSpaceID=_colorSpaceID;
@property long long compressionType; // @synthesize compressionType=_compressionType;
@property(nonatomic) double compressionQuality; // @synthesize compressionQuality=_compressionQuality;
@property(nonatomic) _Bool flipped; // @synthesize flipped=_flipped;
@property _Bool allowsHevcCompression; // @synthesize allowsHevcCompression=_allowsHevcCompression;
@property _Bool allowsPaletteImageCompression; // @synthesize allowsPaletteImageCompression=_allowsPaletteImageCompression;
@property(nonatomic) unsigned int pixelFormat; // @synthesize pixelFormat=_pixelFormat;
- (id)compressedData:(_Bool)arg1 usedEncoding:(int *)arg2 andRowChunkSize:(unsigned int *)arg3;
@property _Bool allowsCompactCompression;
@property _Bool allowsOptimalRowbytesPacking; // @synthesize allowsOptimalRowbytesPacking=_allowsOptimalRowbytesPacking;
@property _Bool allowsMultiPassEncoding; // @synthesize allowsMultiPassEncoding=_allowsMultiPassEncoding;
- (id)pixelData;
- (void)setPixelData:(id)arg1;
- (unsigned int)sourceAlphaInfo;
- (void)setSourceAlphaInfo:(unsigned int)arg1;
- (struct CGContext *)bitmapContext;
- (unsigned long long)rowbytes;
- (unsigned int)width;
- (unsigned int)height;
- (void)dealloc;
- (id)initWithCGImage:(struct CGImage *)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 texturePixelFormat:(long long)arg4;
- (id)initWithPixelWidth:(unsigned int)arg1 pixelHeight:(unsigned int)arg2;

@end

