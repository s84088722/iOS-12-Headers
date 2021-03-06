//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NURenderNode.h>

@class NSObject, NUColorSpace, NUImageLayout, NUPixelFormat;
@protocol NUMutablePurgeableImage, OS_dispatch_queue;

@interface NUImageAccumulationNode : NURenderNode
{
    id <NUMutablePurgeableImage> _image;
    NSObject<OS_dispatch_queue> *_queue;
    NUPixelFormat *_pixelFormat;
    NUColorSpace *_colorSpace;
    NUImageLayout *_layout;
    CDStruct_d58201db _imageSize;
}

@property(readonly, nonatomic) NUImageLayout *layout; // @synthesize layout=_layout;
@property(readonly, nonatomic) NUColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(readonly, nonatomic) NUPixelFormat *pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(readonly, nonatomic) CDStruct_912cb5d2 imageSize; // @synthesize imageSize=_imageSize;
- (void).cxx_destruct;
- (id)_newImage;
- (id)_image;
@property(readonly, nonatomic) id <NUMutablePurgeableImage> image;
- (id)initWithImageSize:(CDStruct_912cb5d2)arg1 tileSize:(CDStruct_912cb5d2)arg2 pixelFormat:(id)arg3 colorSpace:(id)arg4 input:(id)arg5;
- (id)initWithSettings:(id)arg1 inputs:(struct NSDictionary *)arg2;

@end

