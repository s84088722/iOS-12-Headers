//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CIContext;

@interface BLImageBuffer : NSObject
{
    CIContext *_ciContext;
    struct CGColorSpace *_colorSpace;
    int _colorManagement;
    struct CGSize _size;
}

@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (void).cxx_destruct;
- (id)image;
- (void)readPixelsByAddressInBlock:(CDUnknownBlockType)arg1;
- (void)renderCIImage:(id)arg1;
- (id)ciImage;
- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1 colorManagement:(int)arg2;
- (id)initWithSize:(struct CGSize)arg1 colorManagement:(int)arg2 ciContext:(id)arg3 colorSpace:(struct CGColorSpace *)arg4;

@end

