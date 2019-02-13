//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDGradient.h>

#import <iWorkImport/TSDMixing-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSDTransformGradient : TSDGradient <TSDMixing>
{
    struct CGPoint mStart;
    struct CGPoint mEnd;
    struct CGSize mBaseNaturalSize;
    struct CGAffineTransform mTransformBeforeUpgrade;
}

@property(readonly, nonatomic) struct CGSize baseNaturalSize; // @synthesize baseNaturalSize=mBaseNaturalSize;
@property(readonly, nonatomic) struct CGPoint endPoint; // @synthesize endPoint=mEnd;
@property(readonly, nonatomic) struct CGPoint startPoint; // @synthesize startPoint=mStart;
- (void)p_drawQuartzShadingInContext:(struct CGContext *)arg1 withGradientNaturalSize:(struct CGSize)arg2 baseNaturalSize:(struct CGSize)arg3 start:(struct CGPoint)arg4 end:(struct CGPoint)arg5;
- (struct CGPoint)p_scalePoint:(struct CGPoint)arg1 fromShapeWithNaturalSize:(struct CGSize)arg2;
- (struct CGPoint)p_scalePoint:(struct CGPoint)arg1 toShapeWithNaturalSize:(struct CGSize)arg2;
- (void)p_setDefaultValues;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (double)gradientAngleInDegrees;
- (struct CGSize)baseNaturalSizeForBounds:(struct CGRect)arg1;
- (struct CGPoint)endPointForPath:(id)arg1 andBounds:(struct CGRect)arg2;
- (struct CGPoint)startPointForPath:(id)arg1 andBounds:(struct CGRect)arg2;
- (struct CGAffineTransform)transformForSize:(struct CGSize)arg1;
- (void)paintPath:(struct CGPath *)arg1 naturalBounds:(struct CGRect)arg2 inContext:(struct CGContext *)arg3 isPDF:(_Bool)arg4;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 atAngle:(double)arg3;
- (void)p_setBaseNaturalSize:(struct CGSize)arg1;
- (void)p_setEndPoint:(struct CGPoint)arg1;
- (void)p_setStartPoint:(struct CGPoint)arg1;
- (struct CGPoint)normalizedPointForSize:(struct CGSize)arg1 endPoint:(_Bool)arg2;
- (_Bool)isAdvancedGradientIgnoringFlag;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualIgnoringTransform:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithGradient:(id)arg1 inPath:(id)arg2 andBounds:(struct CGRect)arg3;
- (id)initWithGradientStops:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithStartColor:(id)arg1 endColor:(id)arg2 type:(unsigned long long)arg3;
- (void)saveToArchive:(struct FillArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct FillArchive *)arg1 unarchiver:(id)arg2;

@end

