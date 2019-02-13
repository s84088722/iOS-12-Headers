//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXRunNode.h>

#import <PhotosEditUI/PUImageDataNode-Protocol.h>
#import <PhotosEditUI/PUImageInfoNode-Protocol.h>

@class NSArray, NSData, NSString, NSURL, PHAsset;
@protocol PXRunNodeDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotoKitImageDataNode : PXRunNode <PUImageDataNode, PUImageInfoNode>
{
    int _requestID;
    _Bool _useEmbeddedPreview;
    NSData *_imageData;
    NSURL *_imageDataURL;
    NSString *_imageDataUTI;
    long long _imageExifOrientation;
    long long _version;
    PHAsset *_asset;
}

@property(readonly, nonatomic) _Bool useEmbeddedPreview; // @synthesize useEmbeddedPreview=_useEmbeddedPreview;
@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
@property(readonly, nonatomic) long long imageExifOrientation; // @synthesize imageExifOrientation=_imageExifOrientation;
@property(readonly, nonatomic) NSString *imageDataUTI; // @synthesize imageDataUTI=_imageDataUTI;
@property(readonly, nonatomic) NSURL *imageDataURL; // @synthesize imageDataURL=_imageDataURL;
@property(readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (void).cxx_destruct;
- (void)_handleLoadedImageData:(id)arg1 imageUTI:(id)arg2 imageOrientation:(long long)arg3 info:(id)arg4;
- (void)run;
- (void)didCancel;
- (id)initWithAsset:(id)arg1 version:(long long)arg2 useEmbeddedPreview:(_Bool)arg3;

// Remaining properties
@property(readonly, getter=isCanceled) _Bool canceled;
@property(readonly, getter=isComplete) _Bool complete;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <PXRunNodeDelegate> delegate;
@property(readonly, copy, nonatomic) NSArray *dependencies;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, getter=isRunning) _Bool running;
@property(readonly) unsigned long long state;
@property(readonly) Class superclass;
@property(readonly, getter=isWaiting) _Bool waiting;

@end
