//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BLImagePatch : NSObject
{
    struct CGImage *_imageRef;
    struct CGImage *_maskRef;
    struct CGRect _rect;
}

+ (id)patchFromRect:(struct CGRect)arg1 inImage:(struct CGImage *)arg2 withMask:(struct CGImage *)arg3;
+ (id)patchFromRect:(struct CGRect)arg1 inImage:(struct CGImage *)arg2;
- (id)description;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)translateOriginByPoint:(struct CGPoint)arg1;
- (struct CGImage *)image;
- (struct CGPoint)origin;
- (struct CGSize)size;
- (struct CGRect)rect;
- (void)dealloc;
- (id)initWithImageRef:(struct CGImage *)arg1 andRect:(struct CGRect)arg2 andMask:(struct CGImage *)arg3;
- (id)initWithImageRef:(struct CGImage *)arg1 andRect:(struct CGRect)arg2;

@end

