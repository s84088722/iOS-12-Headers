//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuickLookThumbnailing/NSSecureCoding-Protocol.h>

@interface QLTBitmapFormat : NSObject <NSSecureCoding>
{
    unsigned int _bitmapInfo;
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _bitsPerComponent;
    unsigned long long _bitsPerPixel;
    unsigned long long _bytesPerRow;
    struct CGColorSpace *_colorSpace;
}

+ (id)bitmapFormatWithBitmapImage:(struct CGImage *)arg1;
+ (_Bool)supportsSecureCoding;
@property(retain) struct CGColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property unsigned int bitmapInfo; // @synthesize bitmapInfo=_bitmapInfo;
@property unsigned long long bytesPerRow; // @synthesize bytesPerRow=_bytesPerRow;
@property unsigned long long bitsPerPixel; // @synthesize bitsPerPixel=_bitsPerPixel;
@property unsigned long long bitsPerComponent; // @synthesize bitsPerComponent=_bitsPerComponent;
@property unsigned long long height; // @synthesize height=_height;
@property unsigned long long width; // @synthesize width=_width;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

