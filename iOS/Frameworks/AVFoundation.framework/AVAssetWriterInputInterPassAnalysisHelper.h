//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVAssetWriterInputHelper.h>

@class AVAssetWriterInputPassDescription, AVAssetWriterInputWritingHelper;

__attribute__((visibility("hidden")))
@interface AVAssetWriterInputInterPassAnalysisHelper : AVAssetWriterInputHelper
{
    AVAssetWriterInputWritingHelper *_writingHelper;
    AVAssetWriterInputPassDescription *_initialPassDescription;
}

- (void)markCurrentPassAsFinished;
- (void)markAsFinished;
- (struct __CVPixelBufferPool *)pixelBufferPool;
- (_Bool)appendPixelBuffer:(struct __CVBuffer *)arg1 withPresentationTime:(CDStruct_1b6d18a9)arg2;
- (long long)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 error:(id *)arg2;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)shouldRespondToInitialPassDescription;
- (_Bool)isReadyForMoreMediaData;
- (id)currentPassDescription;
- (_Bool)canPerformMultiplePasses;
- (long long)status;
- (void)startPassAnalysis;
- (void)dealloc;
- (id)initWithWritingHelper:(id)arg1;
- (id)initWithConfigurationState:(id)arg1;

@end

