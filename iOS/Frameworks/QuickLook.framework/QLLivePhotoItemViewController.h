//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLook/QLScrollableContentItemViewController.h>

#import <QuickLook/PHLivePhotoViewDelegate-Protocol.h>
#import <QuickLook/UIGestureRecognizerDelegate-Protocol.h>

@class NSLayoutConstraint, NSString, PHLivePhotoView, UIImageView;

__attribute__((visibility("hidden")))
@interface QLLivePhotoItemViewController : QLScrollableContentItemViewController <PHLivePhotoViewDelegate, UIGestureRecognizerDelegate>
{
    struct CGSize _imageSize;
    PHLivePhotoView *_livePhotoView;
    UIImageView *_livePhotoBadge;
    NSLayoutConstraint *_livePhotoBadgeLeftConstraint;
    NSLayoutConstraint *_livePhotoBadgeTopConstraint;
    _Bool _isPlaying;
    _Bool _livePhotoBadgeVisible;
    _Bool _isFullScreen;
    _Bool _fullyZoomedOut;
    _Bool _transitionInProgress;
    _Bool _shouldPlayHint;
}

+ (_Bool)shouldBeRemoteForContentType:(id)arg1;
+ (id)supportedContentTypes;
+ (Class)transformerClass;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(long long)arg2;
- (void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2;
- (long long)preferredWhitePointAdaptivityStyle;
- (_Bool)canEnterFullScreen;
- (struct CGSize)imageSize;
- (void)willBeginZooming;
- (void)didEndZoomingAtScale:(double)arg1;
- (void)transitionDidFinish:(_Bool)arg1 didComplete:(_Bool)arg2;
- (void)transitionDidStart:(_Bool)arg1;
- (void)previewBecameFullScreen:(_Bool)arg1 animated:(_Bool)arg2;
- (void)previewDidDisappear:(_Bool)arg1;
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;
- (void)previewDidAppear:(_Bool)arg1;
- (void)previewWillFinishAppearing;
- (void)previewWillAppear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_updateLivePhotoBadgeAnimated:(_Bool)arg1;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

