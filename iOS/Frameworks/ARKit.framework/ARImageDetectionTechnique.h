//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ARKit/ARImageBasedTechnique.h>

@class ARImageDetectionResultData, ARODTHandleManager, NSArray, NSDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ARImageDetectionTechnique : ARImageBasedTechnique
{
    NSArray *_referenceImages;
    NSObject<OS_dispatch_queue> *_processDataQueue;
    NSObject<OS_dispatch_semaphore> *_loadingSemaphore;
    NSObject<OS_dispatch_semaphore> *_dataSemaphore;
    NSObject<OS_dispatch_semaphore> *_detectionSemaphore;
    ARImageDetectionResultData *_referenceImageData;
    _Bool _finishedLoadingImages;
    _Bool _tracking;
    _Bool _deterministicMode;
    struct shared_ptr<arkit::KeyMapBuffer<const void *, std::__1::vector<unsigned char, std::__1::allocator<unsigned char>>>> _poseBuffer;
    _Bool _needsWorldTrackingPoseData;
    ARODTHandleManager *_odtTHandleManger;
    NSDictionary *_referenceImageMap;
}

@property(readonly) NSDictionary *referenceImageMap; // @synthesize referenceImageMap=_referenceImageMap;
@property(readonly) ARODTHandleManager *odtTHandleManger; // @synthesize odtTHandleManger=_odtTHandleManger;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)_loadReferenceImages;
@property(readonly, nonatomic) _Bool finishedLoadingImages;
- (_Bool)deterministicMode;
- (long long)captureBehavior;
- (double)requiredTimeInterval;
- (_Bool)syncWithProcessedImage;
- (unsigned long long)requiredSensorDataTypes;
- (id)initWithReferenceImages:(id)arg1 maximumNumberOfTrackedImages:(long long)arg2 continuousDetection:(_Bool)arg3 deterministicMode:(_Bool)arg4 processingQueue:(id)arg5;
- (id)initWithReferenceImages:(id)arg1 maximumNumberOfTrackedImages:(long long)arg2 processingQueue:(id)arg3;
- (id)initWithReferenceImages:(id)arg1 maximumNumberOfTrackedImages:(long long)arg2;
- (id)initWithReferenceImages:(id)arg1;

@end

