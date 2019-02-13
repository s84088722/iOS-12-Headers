//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DocumentCamera/CAAnimationDelegate-Protocol.h>

@class ICDocCamImageQuad, NSString, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface ICDocCamViewControllerMeshTransform : NSObject <CAAnimationDelegate>
{
    UIImageView *_animationImageView;
    UIView *_scrimView;
    ICDocCamImageQuad *_imageQuad;
    CDUnknownBlockType _imageMeshAnimationCompletionBlock;
    struct CGSize _imageSize;
    struct CGRect _imageViewFrame;
    struct CGRect _previewViewFrame;
}

@property(copy, nonatomic) CDUnknownBlockType imageMeshAnimationCompletionBlock; // @synthesize imageMeshAnimationCompletionBlock=_imageMeshAnimationCompletionBlock;
@property(retain, nonatomic) ICDocCamImageQuad *imageQuad; // @synthesize imageQuad=_imageQuad;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) struct CGRect previewViewFrame; // @synthesize previewViewFrame=_previewViewFrame;
@property(nonatomic) struct CGRect imageViewFrame; // @synthesize imageViewFrame=_imageViewFrame;
@property(retain, nonatomic) UIView *scrimView; // @synthesize scrimView=_scrimView;
@property(retain, nonatomic) UIImageView *animationImageView; // @synthesize animationImageView=_animationImageView;
- (void).cxx_destruct;
- (id)imageMeshTransformWithImageQuad:(id)arg1 imageViewFrame:(struct CGRect)arg2 previewBounds:(struct CGRect)arg3 finalTransform:(_Bool)arg4;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (struct CGRect)frameForImageInImageViewFrame:(struct CGRect)arg1;
- (void)hide;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)initWithImage:(id)arg1 backgroundImage:(id)arg2 imageViewFrame:(struct CGRect)arg3 view:(id)arg4 imageQuad:(id)arg5 previewView:(id)arg6 previewBounds:(struct CGRect)arg7 scrimView:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

