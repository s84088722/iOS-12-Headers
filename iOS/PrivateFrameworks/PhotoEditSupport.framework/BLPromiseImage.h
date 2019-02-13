//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoEditSupport/BLImage.h>

@class BLAdjustmentModel, BLCropModel, BLImagePatchList, BLPhotoEffectsModel, BLPixelImageBuffer, BLRepairModel, BLRetouchModel, NSDictionary, NSLock;

@interface BLPromiseImage : BLImage
{
    struct CGImage *_sourceCGImage;
    BLImagePatchList *_imagePatchList;
    BLImagePatchList *_repairImagePatchList;
    BLPixelImageBuffer *_flattenedImageBuffer;
    long long _backOrientation;
    long long _initialOrientation;
    long long _actualOrientation;
    struct CGSize _sourceSize;
    BLCropModel *_userCropModel;
    BLCropModel *_cropModel;
    BLAdjustmentModel *_adjustmentModel;
    BLPhotoEffectsModel *_photoEffectsModel;
    BLRetouchModel *_retouchModel;
    BLRepairModel *_repairModel;
    NSLock *_drawLock;
    NSDictionary *_adjustments;
    NSDictionary *_analysis;
}

+ (void)convertXMP:(id)arg1 toAdjustments:(id)arg2 andAnalysis:(id)arg3 size:(struct CGSize)arg4 image:(id)arg5 needsHistogram:(_Bool *)arg6;
+ (struct CGSize)maximumSizeForFlattening;
+ (id)imageWithImage:(id)arg1;
@property(readonly, nonatomic) struct CGSize sourceSize; // @synthesize sourceSize=_sourceSize;
- (void).cxx_destruct;
- (id)flattenedImageInBoundingSize:(struct CGSize)arg1;
- (id)flattenedImageInBoundingSize:(struct CGSize)arg1 shouldScaleForScreen:(_Bool)arg2;
- (id)flattenedPixelImageBufferInBoundingSize:(struct CGSize)arg1 shouldScaleForScreen:(_Bool)arg2;
- (id)flattenedImageInBoundingSize:(struct CGSize)arg1 shouldScaleForScreen:(_Bool)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (_Bool)_flattenInContext:(struct CGContext *)arg1 targetSize:(struct CGSize)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (struct CGSize)_targetSizeForBoundingSize:(struct CGSize)arg1 shouldScaleForScreen:(_Bool)arg2;
- (id)CIImage;
- (id)UIImage;
- (struct CGImage *)CGImage;
- (struct CGSize)maximumSize;
- (void)_drawImagePatchListInContext:(struct CGContext *)arg1 imagePatchList:(id)arg2 size:(struct CGSize)arg3 drawScaleX:(double)arg4 drawScaleY:(double)arg5 totalPadding:(double)arg6;
- (void)drawInContext:(struct CGContext *)arg1 forRect:(struct CGRect)arg2 andSize:(struct CGSize)arg3;
- (void)prepareForDrawing;
- (id)flattenedImageFromRect:(struct CGRect)arg1 forSize:(struct CGSize)arg2;
- (id)repairLayerStack;
- (void)setRepairLayerStack:(id)arg1;
- (id)retouchLayerStack;
- (void)setRetouchLayerStack:(id)arg1;
- (_Bool)hasRotation;
- (_Bool)hasRedeye;
- (_Bool)hasRepair;
- (_Bool)hasRepairOrRedeye;
- (_Bool)hasRetouch;
- (_Bool)hasFastDownstreamEffects;
- (_Bool)hasEdgeEffects;
- (_Bool)hasInkEffects;
- (_Bool)hasPhotoEffects;
- (_Bool)hasColor;
- (_Bool)hasExposure;
- (_Bool)hasCrop;
- (_Bool)hasEdits;
- (void)dealloc;
- (id)initWithCGImage:(struct CGImage *)arg1 orImagePatchList:(id)arg2 flattenedImageBuffer:(id)arg3 backOrientation:(long long)arg4 orientation:(long long)arg5 userCrop:(struct CGRect)arg6 adjustmentData:(id)arg7 andAnalysisData:(id)arg8 andOptionFlags:(int)arg9;
- (id)initWithCGImage:(struct CGImage *)arg1 flattenedImageBuffer:(id)arg2 orientation:(long long)arg3 adjustmentData:(id)arg4 andAnalysisData:(id)arg5 andOptionFlags:(int)arg6;
- (id)initWithImagePatchList:(id)arg1 backOrientation:(long long)arg2 orientation:(long long)arg3 adjustmentData:(id)arg4 andAnalysisData:(id)arg5 andOptionFlags:(int)arg6;
- (id)initWithPromiseImage:(id)arg1 userCrop:(struct CGRect)arg2 andOptionFlags:(int)arg3;
- (id)initWithPromiseImage:(id)arg1 andOptionFlags:(int)arg2;
- (id)initWithCGImage:(struct CGImage *)arg1 backOrientation:(long long)arg2 orientation:(long long)arg3 adjustmentData:(id)arg4 andAnalysisData:(id)arg5 andOptionFlags:(int)arg6;
- (id)initWithCGImage:(struct CGImage *)arg1 orientation:(long long)arg2 adjustmentData:(id)arg3 andAnalysisData:(id)arg4 andOptionFlags:(int)arg5;
- (id)initWithCGImage:(struct CGImage *)arg1 orientation:(long long)arg2 adjustmentData:(id)arg3 andAnalysisData:(id)arg4;

@end

