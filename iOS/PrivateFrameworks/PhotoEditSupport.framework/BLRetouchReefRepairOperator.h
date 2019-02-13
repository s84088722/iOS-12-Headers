//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BLRetouchReefRepairOperator : NSObject
{
    void *_buffer;
    int _rowBytes;
    int _width;
    int _height;
    void *_maskBuffer;
    int _maskRowBytes;
    int _maskWidth;
    int _maskHeight;
    int _brushSize;
    struct CGRect _maskRect;
}

+ (int)borderWithBrushSize:(int)arg1;
- (void)repairWithOffset:(struct CGPoint)arg1;
- (struct CGPoint)analyzeOffset;
- (void)repair;
- (void)setBrushSize:(int)arg1;
- (void)setMaskData:(void *)arg1 rowBytes:(int)arg2 width:(int)arg3 height:(int)arg4;
- (void)setMaskRect:(struct CGRect)arg1;
- (id)initWithRepairSourceData:(void *)arg1 rowBytes:(int)arg2 width:(int)arg3 height:(int)arg4;

@end

