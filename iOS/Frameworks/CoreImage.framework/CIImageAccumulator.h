//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CIImageAccumulator : NSObject
{
    void *_state;
}

+ (id)imageAccumulatorWithExtent:(struct CGRect)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace *)arg3;
+ (id)imageAccumulatorWithExtent:(struct CGRect)arg1 format:(int)arg2;
+ (id)imageAccumulatorWithExtent:(struct CGRect)arg1 format:(int)arg2 options:(id)arg3;
- (id)description;
- (void)commitUpdates:(id)arg1;
- (void)clear;
- (void)setImage:(id)arg1 dirtyRect:(struct CGRect)arg2;
- (void)setImage:(id)arg1;
- (id)image;
- (struct CGColorSpace *)colorSpace;
@property(readonly) int format;
@property(readonly) struct CGRect extent;
- (void)dealloc;
- (id)initWithExtent:(struct CGRect)arg1 format:(int)arg2 options:(id)arg3;
- (id)initWithExtent:(struct CGRect)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace *)arg3;
- (id)initWithExtent:(struct CGRect)arg1 format:(int)arg2;
- (id)init;

@end

