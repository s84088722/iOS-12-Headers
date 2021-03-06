//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class AVPlayerController, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface WebAVPlayerLayer : CALayer
{
    struct RefPtr<WebCore::VideoFullscreenInterfaceAVKit, WTF::DumbPtrTraits<WebCore::VideoFullscreenInterfaceAVKit>> _fullscreenInterface;
    struct RetainPtr<WebAVPlayerController> _avPlayerController;
    struct RetainPtr<CALayer> _videoSublayer;
    struct RetainPtr<NSString> _videoGravity;
    _Bool _readyForDisplay;
    NSDictionary *_pixelBufferAttributes;
    struct CGSize _videoDimensions;
    struct CGRect _modelVideoLayerFrame;
}

+ (id)keyPathsForValuesAffectingVideoRect;
@property struct CGRect modelVideoLayerFrame; // @synthesize modelVideoLayerFrame=_modelVideoLayerFrame;
@property struct CGSize videoDimensions; // @synthesize videoDimensions=_videoDimensions;
@property(copy, nonatomic) NSDictionary *pixelBufferAttributes; // @synthesize pixelBufferAttributes=_pixelBufferAttributes;
@property(nonatomic, getter=isReadyForDisplay) _Bool readyForDisplay; // @synthesize readyForDisplay=_readyForDisplay;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGRect)videoRect;
@property(retain, nonatomic) NSString *videoGravity;
- (void)resolveBounds;
- (void)layoutSublayers;
@property(retain, nonatomic) CALayer *videoSublayer;
@property(retain, nonatomic) AVPlayerController *playerController;
// Error parsing type for property fullscreenInterface:
// Property attributes: T^{VideoFullscreenInterfaceAVKit=^^?^^?{atomic<unsigned int>=AI}{Mode=I}{Mode=I}{Ref<WebCore::PlaybackSessionInterfaceAVKit, WTF::DumbPtrTraits<WebCore::PlaybackSessionInterfaceAVKit> >=^{PlaybackSessionInterfaceAVKit}}{RetainPtr<WebAVPlayerViewControllerDelegate>=^v}{RetainPtr<WebAVPlayerViewController>=^v}^{VideoFullscreenModel}^{VideoFullscreenChangeObserver}{RetainPtr<UIWindow>=^v}{RetainPtr<UIViewController>=^v}{RetainPtr<UIView>=^v}{RetainPtr<UIView>=^v}{RetainPtr<UIWindow>=^v}{RetainPtr<WebAVPlayerLayerView>=^v}{Function<void (bool)>={unique_ptr<WTF::Function<void (bool)>::CallableWrapperBase, std::__1::default_delete<WTF::Function<void (bool)>::CallableWrapperBase> >={__compressed_pair<WTF::Function<void (bool)>::CallableWrapperBase *, std::__1::default_delete<WTF::Function<void (bool)>::CallableWrapperBase> >=^{CallableWrapperBase}}}}{Timer<WebCore::VideoFullscreenInterfaceAVKit>=^^?{Ref<WTF::RunLoop, WTF::DumbPtrTraits<WTF::RunLoop> >=^{RunLoop}}{RetainPtr<__CFRunLoopTimer *>=^v}^{VideoFullscreenInterfaceAVKit}}{FloatRect={FloatPoint=ff}{FloatSize=ff}}BBBBBBBBBBBBBBBBBBBBBB},N

- (void)dealloc;
- (id)init;

@end

