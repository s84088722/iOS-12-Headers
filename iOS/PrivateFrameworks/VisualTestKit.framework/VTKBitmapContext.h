//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface VTKBitmapContext : NSObject
{
    struct CGColorSpace *_colorSpace;
    struct CGContext *_CGContext;
    void *_CGContextDataBytes;
    unsigned long long _CGContextDataBytesLength;
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _bytesPerPixel;
}

+ (id)contextType:(unsigned long long)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3;
@property(readonly) unsigned long long bytesPerPixel; // @synthesize bytesPerPixel=_bytesPerPixel;
@property(readonly) unsigned long long height; // @synthesize height=_height;
@property(readonly) unsigned long long width; // @synthesize width=_width;
@property(readonly) unsigned long long CGContextDataBytesLength; // @synthesize CGContextDataBytesLength=_CGContextDataBytesLength;
@property(readonly) void *CGContextDataBytes; // @synthesize CGContextDataBytes=_CGContextDataBytes;
@property(readonly) struct CGContext *CGContext; // @synthesize CGContext=_CGContext;
@property(readonly, nonatomic) UIImage *image;
- (void)dealloc;
- (id)initWithColorSpaceName:(struct __CFString *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bitsPerComponent:(unsigned long long)arg4 bytesPerPixel:(unsigned long long)arg5 bitmapInfo:(unsigned int)arg6;

@end

