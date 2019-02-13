//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCapturePhotoSettings, AVCaptureResolvedPhotoSettings, AVWeakReferencingDelegateStorage, NSArray;

@interface AVCapturePhotoRequest : NSObject
{
    AVWeakReferencingDelegateStorage *_delegateStorage;
    unsigned int _photoCallbackFlavor;
    AVCapturePhotoSettings *_unresolvedSettings;
    AVCaptureResolvedPhotoSettings *_resolvedSettings;
    NSArray *_expectedPhotoManifest;
    unsigned int _firedCallbackFlags;
    unsigned long long _firedPhotoCallbacksCount;
    void *_previewSurface;
    struct opaqueCMSampleBuffer *_previewSampleBuffer;
    void *_thumbnailSurface;
    _Bool _delegateSupportsDebugMetadataSidecarFile;
    _Bool _lensStabilizationSupported;
}

+ (id)requestWithDelegate:(id)arg1 settings:(id)arg2 lensStabilizationSupported:(_Bool)arg3;
@property(readonly) _Bool lensStabilizationSupported; // @synthesize lensStabilizationSupported=_lensStabilizationSupported;
@property(readonly) _Bool delegateSupportsDebugMetadataSidecarFile; // @synthesize delegateSupportsDebugMetadataSidecarFile=_delegateSupportsDebugMetadataSidecarFile;
@property(retain, nonatomic) void *thumbnailSurface; // @synthesize thumbnailSurface=_thumbnailSurface;
@property(retain, nonatomic) struct opaqueCMSampleBuffer *previewSampleBuffer; // @synthesize previewSampleBuffer=_previewSampleBuffer;
@property(retain, nonatomic) void *previewSurface; // @synthesize previewSurface=_previewSurface;
@property(nonatomic) unsigned long long firedPhotoCallbacksCount; // @synthesize firedPhotoCallbacksCount=_firedPhotoCallbacksCount;
@property(nonatomic) unsigned int firedCallbackFlags; // @synthesize firedCallbackFlags=_firedCallbackFlags;
@property(readonly, nonatomic) NSArray *expectedPhotoManifest; // @synthesize expectedPhotoManifest=_expectedPhotoManifest;
@property(readonly) AVCapturePhotoSettings *unresolvedSettings; // @synthesize unresolvedSettings=_unresolvedSettings;
@property(readonly) unsigned int photoCallbackFlavor; // @synthesize photoCallbackFlavor=_photoCallbackFlavor;
@property(readonly) AVWeakReferencingDelegateStorage *delegateStorage; // @synthesize delegateStorage=_delegateStorage;
- (void)_resolveExpectedPhotoManifest;
@property(retain, nonatomic) AVCaptureResolvedPhotoSettings *resolvedSettings;
@property(readonly, nonatomic) unsigned long long expectedPhotoCount;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 settings:(id)arg2 lensStabilizationSupported:(_Bool)arg3;

@end

