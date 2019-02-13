//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVAssetWriterInputHelper.h>

#import <AVFoundation/AVAssetWriterInputMediaDataRequesterDelegate-Protocol.h>
#import <AVFoundation/AVKeyPathDependencyHost-Protocol.h>
#import <AVFoundation/AVWeakObservable-Protocol.h>

@class AVAssetWriterInputMediaDataRequester, AVAssetWriterInputPassDescription, AVFigAssetWriterTrack, AVKeyPathDependencyManager, NSString;

__attribute__((visibility("hidden")))
@interface AVAssetWriterInputWritingHelper : AVAssetWriterInputHelper <AVAssetWriterInputMediaDataRequesterDelegate, AVWeakObservable, AVKeyPathDependencyHost>
{
    AVFigAssetWriterTrack *_assetWriterTrack;
    AVAssetWriterInputMediaDataRequester *_mediaDataRequester;
    _Bool _observingSelf;
    struct __CVPixelBufferPool *_pixelBufferPool;
    AVAssetWriterInputPassDescription *_currentPassDescription;
    AVKeyPathDependencyManager *_keyPathDependencyManager;
}

@property(retain, nonatomic) AVAssetWriterInputPassDescription *currentPassDescription; // @synthesize currentPassDescription=_currentPassDescription;
@property(readonly, nonatomic, getter=_assetWriterTrack) AVFigAssetWriterTrack *assetWriterTrack; // @synthesize assetWriterTrack=_assetWriterTrack;
- (struct __CVPixelBufferPool *)pixelBufferPool;
- (id)transitionToAndReturnTerminalHelperWithTerminalStatus:(long long)arg1;
- (void)markAsFinishedAndTransitionCurrentHelper:(id)arg1;
- (void)markAsFinished;
- (void)markCurrentPassAsFinished;
- (_Bool)prepareToFinishWritingReturningError:(id *)arg1;
- (void)prepareToEndSession;
- (_Bool)appendPixelBuffer:(struct __CVBuffer *)arg1 withPresentationTime:(CDStruct_1b6d18a9)arg2;
- (long long)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 error:(id *)arg2;
- (void)beginPassIfAppropriate;
- (void)didStartInitialSession;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_detachFromMediaDataRequester:(id)arg1;
- (void)_attachToMediaDataRequester:(id)arg1;
- (_Bool)mediaDataRequesterShouldRequestMediaData:(id)arg1;
- (void)_nudgeMediaDataRequesterIfAppropriate;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)isReadyForMoreMediaData;
- (void)declareKeyPathDependenciesWithRegistry:(id)arg1;
- (_Bool)canPerformMultiplePasses;
- (long long)status;
- (void)finalize;
- (void)dealloc;
- (void)addCallbackToCancelDuringDeallocation:(id)arg1;
- (id)initWithConfigurationState:(id)arg1 assetWriterTrack:(id)arg2 error:(id *)arg3;
- (id)initWithConfigurationState:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

