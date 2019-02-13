//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSDStroke.h>

@class NSString, TSDFrameSpec;

@interface TSDFrame : TSDStroke
{
    TSDFrameSpec *mSpec;
    NSString *mFrameName;
    double mAssetScale;
    _Bool mScaledSizesValid;
    double mLeftWidth;
    double mRightWidth;
    double mTopHeight;
    double mBottomHeight;
    struct CGSize mAdornmentSize;
}

+ (Class)mutableClass;
@property(readonly, nonatomic) TSDFrameSpec *frameSpec; // @synthesize frameSpec=mSpec;
@property(readonly, nonatomic) double assetScale; // @synthesize assetScale=mAssetScale;
- (struct CGSize)p_minimumRenderedSize;
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)paintPath:(struct CGPath *)arg1 wantsInteriorStroke:(_Bool)arg2 inContext:(struct CGContext *)arg3 useFastDrawing:(_Bool)arg4;
- (_Bool)drawsInOneStep;
- (_Bool)prefersToApplyToCAShapeLayerDuringManipulation;
- (_Bool)canApplyToCAShapeLayer;
- (_Bool)canApplyDirectlyToRepCALayer;
- (_Bool)isNullStroke;
- (struct _TSDStrokeOutsets)outsets;
- (_Bool)shouldRenderForSizeIncludingCoverage:(struct CGSize)arg1;
- (_Bool)shouldRender;
- (_Bool)supportsLineOptions;
- (_Bool)supportsColor;
- (_Bool)supportsPattern;
- (_Bool)isFrame;
- (struct CGRect)coverageRectWithoutAdornment:(struct CGRect)arg1;
- (struct CGRect)coverageRect:(struct CGRect)arg1;
- (struct CGRect)p_coverageRectWithAdornment:(struct CGRect)arg1;
- (struct CGRect)p_coverageRectWithoutAdornment:(struct CGRect)arg1;
- (_Bool)hasMask;
- (double)minimumAssetScale;
- (id)archivableFrameName;
- (id)frameName;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithFrameName:(id)arg1;
- (id)initWithFrameSpec:(id)arg1;
- (id)initWithFrameSpec:(id)arg1 assetScale:(double)arg2;
- (id)initWithFrameSpec:(id)arg1 assetScale:(double)arg2 archivableFrameName:(id)arg3;
- (id)strokeByTransformingByTransform:(struct CGAffineTransform)arg1;
- (_Bool)i_willRenderForRect:(struct CGRect)arg1;
- (struct CGRect)i_adornmentRectForRect:(struct CGRect)arg1;
- (double)i_bottomHeight;
- (double)i_topHeight;
- (double)i_rightWidth;
- (double)i_leftWidth;

@end

