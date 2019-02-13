//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class AVAsset, AVVideoComposition, NSDictionary, NSError, NSNumber, NSProgress, NSURL, PLPhotoEditModel, UIImage;

@interface PXAssetVariationRenderingOperation : NSOperation
{
    _Bool _renderAllResources;
    _Bool _succeeded;
    long long _variationType;
    NSURL *_inputImageURL;
    NSURL *_inputVideoURL;
    NSDictionary *_analysisResult;
    PLPhotoEditModel *_baseEditModel;
    CDUnknownBlockType _startHandler;
    NSURL *_outputImageURL;
    UIImage *_outputImage;
    NSURL *_outputVideoURL;
    PLPhotoEditModel *_adjustedEditModel;
    AVAsset *_outputAVAsset;
    AVVideoComposition *_outputVideoComposition;
    NSProgress *_progress;
    NSError *_error;
    NSNumber *_duration;
    struct CGSize _targetSize;
}

@property(readonly, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) _Bool succeeded; // @synthesize succeeded=_succeeded;
@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) AVVideoComposition *outputVideoComposition; // @synthesize outputVideoComposition=_outputVideoComposition;
@property(readonly, nonatomic) AVAsset *outputAVAsset; // @synthesize outputAVAsset=_outputAVAsset;
@property(readonly, copy, nonatomic) PLPhotoEditModel *adjustedEditModel; // @synthesize adjustedEditModel=_adjustedEditModel;
@property(readonly, nonatomic) NSURL *outputVideoURL; // @synthesize outputVideoURL=_outputVideoURL;
@property(readonly, nonatomic) UIImage *outputImage; // @synthesize outputImage=_outputImage;
@property(readonly, nonatomic) NSURL *outputImageURL; // @synthesize outputImageURL=_outputImageURL;
@property(copy, nonatomic) CDUnknownBlockType startHandler; // @synthesize startHandler=_startHandler;
@property(readonly, nonatomic) _Bool renderAllResources; // @synthesize renderAllResources=_renderAllResources;
@property(readonly, nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(readonly, copy, nonatomic) PLPhotoEditModel *baseEditModel; // @synthesize baseEditModel=_baseEditModel;
@property(readonly, copy, nonatomic) NSDictionary *analysisResult; // @synthesize analysisResult=_analysisResult;
@property(readonly, nonatomic) NSURL *inputVideoURL; // @synthesize inputVideoURL=_inputVideoURL;
@property(readonly, nonatomic) NSURL *inputImageURL; // @synthesize inputImageURL=_inputImageURL;
@property(readonly, nonatomic) long long variationType; // @synthesize variationType=_variationType;
- (void).cxx_destruct;
- (void)_incrementProgressWithStartDate:(id)arg1;
- (void)main;
- (void)cancel;
- (void)_timeout;
- (id)initWithInputImageURL:(id)arg1 inputVideoURL:(id)arg2 variationType:(long long)arg3 analysisResult:(id)arg4 baseEditModel:(id)arg5 outputImageURL:(id)arg6 outputVideoURL:(id)arg7 targetSize:(struct CGSize)arg8 renderAllResources:(_Bool)arg9;
- (id)init;

@end

