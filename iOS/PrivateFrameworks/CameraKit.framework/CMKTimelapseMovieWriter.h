//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CameraKit/CMKTimelapseMovieWriterProtocol-Protocol.h>

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, NSArray, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface CMKTimelapseMovieWriter : NSObject <CMKTimelapseMovieWriterProtocol>
{
    NSArray *__frameFilePaths;
    long long __nextReadFileIndex;
    long long __residentImageDataCount;
    long long __residentPixelBufferCount;
    NSMutableDictionary *__availableImageData;
    NSMutableDictionary *__availablePixelBuffers;
    NSMutableSet *__inFlightReadFrameIndexes;
    NSObject<OS_dispatch_queue> *__synchronizationQueue;
    NSOperationQueue *__imageReadQueue;
    NSOperationQueue *__imageDecodeQueue;
    NSObject<OS_dispatch_queue> *__movieWritingQueue;
    AVAssetWriter *__writer;
    AVAssetWriterInput *__videoInput;
    AVAssetWriterInputPixelBufferAdaptor *__pixelBufferAdaptor;
    long long __framesPerSecond;
    long long __nextWriteFileIndex;
    long long __currentOutputFrameIndex;
    CDUnknownBlockType __completion;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType _completion; // @synthesize _completion=__completion;
@property(readonly, nonatomic) long long _currentOutputFrameIndex; // @synthesize _currentOutputFrameIndex=__currentOutputFrameIndex;
@property(readonly, nonatomic) long long _nextWriteFileIndex; // @synthesize _nextWriteFileIndex=__nextWriteFileIndex;
@property(readonly, nonatomic) long long _framesPerSecond; // @synthesize _framesPerSecond=__framesPerSecond;
@property(readonly, nonatomic) AVAssetWriterInputPixelBufferAdaptor *_pixelBufferAdaptor; // @synthesize _pixelBufferAdaptor=__pixelBufferAdaptor;
@property(readonly, nonatomic) AVAssetWriterInput *_videoInput; // @synthesize _videoInput=__videoInput;
@property(readonly, nonatomic) AVAssetWriter *_writer; // @synthesize _writer=__writer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_movieWritingQueue; // @synthesize _movieWritingQueue=__movieWritingQueue;
@property(readonly, nonatomic) NSOperationQueue *_imageDecodeQueue; // @synthesize _imageDecodeQueue=__imageDecodeQueue;
@property(readonly, nonatomic) NSOperationQueue *_imageReadQueue; // @synthesize _imageReadQueue=__imageReadQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_synchronizationQueue; // @synthesize _synchronizationQueue=__synchronizationQueue;
@property(readonly, nonatomic) NSMutableSet *_inFlightReadFrameIndexes; // @synthesize _inFlightReadFrameIndexes=__inFlightReadFrameIndexes;
@property(readonly, nonatomic) NSMutableDictionary *_availablePixelBuffers; // @synthesize _availablePixelBuffers=__availablePixelBuffers;
@property(readonly, nonatomic) NSMutableDictionary *_availableImageData; // @synthesize _availableImageData=__availableImageData;
@property(readonly, nonatomic) long long _residentPixelBufferCount; // @synthesize _residentPixelBufferCount=__residentPixelBufferCount;
@property(readonly, nonatomic) long long _residentImageDataCount; // @synthesize _residentImageDataCount=__residentImageDataCount;
@property(readonly, nonatomic) long long _nextReadFileIndex; // @synthesize _nextReadFileIndex=__nextReadFileIndex;
@property(readonly, nonatomic) NSArray *_frameFilePaths; // @synthesize _frameFilePaths=__frameFilePaths;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_finishMovieWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)_appendPixelBuffer:(struct __CVBuffer *)arg1;
- (void)_setMetadataOnVideoTrackAssetWriterInput:(id)arg1;
- (_Bool)_startWritingWithOutputPath:(id)arg1 width:(long long)arg2 height:(long long)arg3 videoFormatDescription:(struct opaqueCMFormatDescription *)arg4 transform:(struct CGAffineTransform)arg5 framesPerSecond:(long long)arg6 frameCount:(long long)arg7 videoMetadata:(id)arg8;
- (struct CGSize)_desiredOutputSizeForFrameSize:(struct CGSize)arg1;
- (void)_enqueueNextWrite;
- (void)_enqueueNextDecode;
- (void)_enqueueNextRead;
- (void)writeMovieFromImageFiles:(id)arg1 visMetadataFiles:(id)arg2 startDate:(id)arg3 location:(id)arg4 outputPath:(id)arg5 transform:(struct CGAffineTransform)arg6 framesPerSecond:(long long)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)_reset;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

