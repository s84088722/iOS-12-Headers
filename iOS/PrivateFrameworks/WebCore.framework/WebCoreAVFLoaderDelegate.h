//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebCore/AVAssetResourceLoaderDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebCoreAVFLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate>
{
    // Error parsing type: ^{MediaPlayerPrivateAVFoundationObjC=^^?{WeakPtrFactory<WebCore::MediaPlayerPrivateAVFoundation>={RefPtr<WTF::WeakReference<WebCore::MediaPlayerPrivateAVFoundation>, WTF::DumbPtrTraits<WTF::WeakReference<WebCore::MediaPlayerPrivateAVFoundation> > >=^{WeakReference<WebCore::MediaPlayerPrivateAVFoundation>}}}^^?^^?{Vector<WTF::RefPtr<WebCore::InbandTextTrackPrivateAVF, WTF::DumbPtrTraits<WebCore::InbandTextTrackPrivateAVF> >, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<WebCore::InbandTextTrackPrivateAVF, WTF::DumbPtrTraits<WebCore::InbandTextTrackPrivateAVF> >}II}^{MediaPlayer}{Function<void ()>={unique_ptr<WTF::Function<void ()>::CallableWrapperBase, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >={__compressed_pair<WTF::Function<void ()>::CallableWrapperBase *, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >=^{CallableWrapperBase}}}}{Deque<WebCore::MediaPlayerPrivateAVFoundation::Notification, 0>=QQ{VectorBuffer<WebCore::MediaPlayerPrivateAVFoundation::Notification, 0>=^{Notification}II}}{Lock={Atomic<unsigned char>={atomic<unsigned char>=AC}}}{unique_ptr<WebCore::PlatformTimeRanges, std::__1::default_delete<WebCore::PlatformTimeRanges> >={__compressed_pair<WebCore::PlatformTimeRanges *, std::__1::default_delete<WebCore::PlatformTimeRanges> >=^{PlatformTimeRanges}}}ii{URL={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}b1b1b1b3b26IIIIIII}{URL={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}b1b1b1b3b26IIIIIII}{RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> >=^{SecurityOrigin}}{RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> >=^{SecurityOrigin}}i{Ref<const WTF::Logger, WTF::DumbPtrTraits<const WTF::Logger> >=^{Logger}}^v{FloatSize=ff}{MediaTime=(?=qd)IC}{MediaTime=(?=qd)IC}{MediaTime=(?=qd)IC}{MediaTime=(?=qd)IC}{MediaTime=(?=qd)IC}{MediaTime=(?=qd)IC}iiBBBBBBBBBBBBBBB{RetainPtr<AVURLAsset>=^v}{RetainPtr<AVPlayer>=^v}{RetainPtr<AVPlayerItem>=^v}{RetainPtr<AVPlayerLayer>=^v}{unique_ptr<WebCore::VideoFullscreenLayerManagerObjC, std::__1::default_delete<WebCore::VideoFullscreenLayerManagerObjC> >={__compressed_pair<WebCore::VideoFullscreenLayerManagerObjC *, std::__1::default_delete<WebCore::VideoFullscreenLayerManagerObjC> >=^{VideoFullscreenLayerManagerObjC}}}i{RetainPtr<WebCoreAVFMovieObserver>=^v}{RetainPtr<id>=^v}{String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}BB{RefPtr<WebCore::AudioSourceProviderAVFObjC, WTF::DumbPtrTraits<WebCore::AudioSourceProviderAVFObjC> >=^{AudioSourceProviderAVFObjC}}{RetainPtr<AVAssetImageGenerator>=^v}{RetainPtr<AVPlayerItemVideoOutput>=^v}{RetainPtr<WebCoreAVFPullDelegate>=^v}{RetainPtr<__CVBuffer *>=^v}{RetainPtr<CGImage *>=^v}@{unique_ptr<WebCore::VideoTextureCopierCV, std::__1::default_delete<WebCore::VideoTextureCopierCV> >={__compressed_pair<WebCore::VideoTextureCopierCV *, std::__1::default_delete<WebCore::VideoTextureCopierCV> >=^{VideoTextureCopierCV}}}{unique_ptr<WebCore::PixelBufferConformerCV, std::__1::default_delete<WebCore::PixelBufferConformerCV> >={__compressed_pair<WebCore::PixelBufferConformerCV *, std::__1::default_delete<WebCore::PixelBufferConformerCV> >=^{PixelBufferConformerCV}}}{HashMap<WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::RefPtr<WebCore::WebCoreAVFResourceLoader, WTF::DumbPtrTraits<WebCore::WebCoreAVFResourceLoader> >, WTF::PtrHash<WTF::RetainPtr<AVAssetResourceLoadingRequest> >, WTF::HashTraits<WTF::RetainPtr<AVAssetResourceLoadingRequest> >, WTF::HashTraits<WTF::RefPtr<WebCore::WebCoreAVFResourceLoader, WTF::DumbPtrTraits<WebCore::WebCoreAVFResourceLoader> > > >={HashTable<WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::KeyValuePair<WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::RefPtr<WebCore::WebCoreAVFResourceLoader, WTF::DumbPtrTraits<WebCore::WebCoreAVFResourceLoader> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::RefPtr<WebCore::WebCoreAVFResourceLoader, WTF::DumbPtrTraits<WebCore::WebCoreAVFResourceLoader> > > >, WTF::PtrHash<WTF::RetainPtr<AVAssetResourceLoadingRequest> >, WTF::HashMap<WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::RefPtr<WebCore::WebCoreAVFResourceLoader, WTF::DumbPtrTraits<WebCore::WebCoreAVFResourceLoader> >, WTF::PtrHash<WTF::RetainPtr<AVAssetResourceLoadingRequest> >, WTF::HashTraits<WTF::RetainPtr<AVAssetResourceLoadingRequest> >, WTF::HashTraits<WTF::RefPtr<WebCore::WebCoreAVFResourceLoader, WTF::DumbPtrTraits<WebCore::WebCoreAVFResourceLoader> > > >::KeyValuePairTraits, WTF::HashTraits<WTF::RetainPtr<AVAssetResourceLoadingRequest> > >=^{KeyValuePair<WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::RefPtr<WebCore::WebCoreAVFResourceLoader, WTF::DumbPtrTraits<WebCore::WebCoreAVFResourceLoader> > >}IIII}}{RetainPtr<WebCoreAVFLoaderDelegate>=^v}{HashMap<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RetainPtr<AVAssetResourceLoadingRequest> > >={HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest> > >, WTF::StringHash, WTF::HashMap<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RetainPtr<AVAssetResourceLoadingRequest> > >::KeyValuePairTraits, WTF::HashTraits<WTF::String> >=^{KeyValuePair<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest> >}IIII}}{HashMap<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RetainPtr<AVAssetResourceLoadingRequest> > >={HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest> > >, WTF::StringHash, WTF::HashMap<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RetainPtr<AVAssetResourceLoadingRequest> > >::KeyValuePairTraits, WTF::HashTraits<WTF::String> >=^{KeyValuePair<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest> >}IIII}}{RetainPtr<AVPlayerItemLegibleOutput>=^v}{Vector<WTF::RefPtr<WebCore::AudioTrackPrivateAVFObjC, WTF::DumbPtrTraits<WebCore::AudioTrackPrivateAVFObjC> >, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<WebCore::AudioTrackPrivateAVFObjC, WTF::DumbPtrTraits<WebCore::AudioTrackPrivateAVFObjC> >}II}{Vector<WTF::RefPtr<WebCore::VideoTrackPrivateAVFObjC, WTF::DumbPtrTraits<WebCore::VideoTrackPrivateAVFObjC> >, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<WebCore::VideoTrackPrivateAVFObjC, WTF::DumbPtrTraits<WebCore::VideoTrackPrivateAVFObjC> >}II}{RefPtr<WebCore::MediaSelectionGroupAVFObjC, WTF::DumbPtrTraits<WebCore::MediaSelectionGroupAVFObjC> >=^{MediaSelectionGroupAVFObjC}}{RefPtr<WebCore::MediaSelectionGroupAVFObjC, WTF::DumbPtrTraits<WebCore::MediaSelectionGroupAVFObjC> >=^{MediaSelectionGroupAVFObjC}}^{InbandTextTrackPrivateAVF}{RefPtr<WebCore::InbandMetadataTextTrackPrivateAVF, WTF::DumbPtrTraits<WebCore::InbandMetadataTextTrackPrivateAVF> >=^{InbandMetadataTextTrackPrivateAVF}}{WeakPtr<WebCore::CDMSessionAVFoundationObjC>={RefPtr<WTF::WeakReference<WebCore::CDMSessionAVFoundationObjC>, WTF::DumbPtrTraits<WTF::WeakReference<WebCore::CDMSessionAVFoundationObjC> > >=^{WeakReference<WebCore::CDMSessionAVFoundationObjC>}}}{RefPtr<WebCore::CDMInstanceFairPlayStreamingAVFObjC, WTF::DumbPtrTraits<WebCore::CDMInstanceFairPlayStreamingAVFObjC> >=^{CDMInstanceFairPlayStreamingAVFObjC}}{RetainPtr<NSArray>=^v}{RetainPtr<NSArray>=^v}{RetainPtr<NSArray>=^v}{RetainPtr<NSArray>=^v}{FloatSize=ff}{MediaTime=(?=qd)IC}dqIiBBBBBBBBBB{optional<bool>=B(constexpr_storage_t<bool>=CB)}BB}, name: m_callback
}

-     // Error parsing type: v24@0:8^{MediaPlayerPrivateAVFoundationObjC=^^?{WeakPtrFactory<WebCore::MediaPlayerPrivateAVFoundation>={RefPtr<WTF::WeakReference<WebCore::MediaPlayerPrivateAVFoundation>, WTF::DumbPtrTraits<WTF::WeakReference<WebCore::MediaPlayerPrivateAVFoundation> > >=^{WeakReference<WebCore::MediaPlayerPrivateAVFoundation>}}}^^?^^?{Vector<WTF::RefPtr<WebCore::InbandTextTrackPrivateAVF, WTF::DumbPtrTraits<WebCore::InbandTextTrackPrivateAVF> >, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<WebCore::InbandTextTrackPrivateAVF, WTF::DumbPtrTraits<WebCore::InbandTextTrackPrivateAVF> >}II}^{MediaPlayer}{Function<void ()>={unique_ptr<WTF::Function<void ()>::CallableWrapperBase, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >={__compressed_pair<WTF::Function<void ()>::CallableWrapperBase *, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >=^{CallableWrapperBase}}}}{Deque<WebCore::MediaPlayerPrivateAVFoundation::Notification, 0>=QQ{VectorBuffer<WebCore::MediaPlayerPrivateAVFoundation::Notification, 0>=^{Notification}II}}{Lock={Atomic<unsigned char>={atomic<unsigned char>=AC}}}{unique_ptr<WebCore::PlatformTimeRanges, std::__1::default_delete<WebCore::PlatformTimeRanges> >={__compressed_pair<WebCore::PlatformTimeRanges *, std::__1::default_delete<WebCore::PlatformTimeRanges> >=^{PlatformTimeRanges}}}ii{URL={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}b1b1b1b3b26IIIIIII}{URL={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}b1b1b1b3b26IIIIIII}{RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> >=^{SecurityOrigin}}{RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> >=^{SecurityOrigin}}i{Ref<const WTF::Logger, WTF::DumbPtrTraits<const WTF::Logger> >=^{Logger}}^v{FloatSize=ff}{MediaTime=(?=qd)IC}{MediaTime=(?=qd)IC}{MediaTime=(?=qd)IC}{MediaTime=(?=qd)IC}{MediaTime=(?=qd)IC}{MediaTime=(?=qd)IC}iiBBBBBBBBBBBBBBB{RetainPtr<AVURLAsset>=^v}{RetainPtr<AVPlayer>=^v}{RetainPtr<AVPlayerItem>=^v}{RetainPtr<AVPlayerLayer>=^v}{unique_ptr<WebCore::VideoFullscreenLayerManagerObjC, std::__1::default_delete<WebCore::VideoFullscreenLayerManagerObjC> >={__compressed_pair<WebCore::VideoFullscreenLayerManagerObjC *, std::__1::default_delete<WebCore::VideoFullscreenLayerManagerObjC> >=^{VideoFullscreenLayerManagerObjC}}}i{RetainPtr<WebCoreAVFMovieObserver>=^v}{RetainPtr<id>=^v}{String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}BB{RefPtr<WebCore::AudioSourceProviderAVFObjC, WTF::DumbPtrTraits<WebCore::AudioSourceProviderAVFObjC> >=^{AudioSourceProviderAVFObjC}}{RetainPtr<AVAssetImageGenerator>=^v}{RetainPtr<AVPlayerItemVideoOutput>=^v}{RetainPtr<WebCoreAVFPullDelegate>=^v}{RetainPtr<__CVBuffer *>=^v}{RetainPtr<CGImage *>=^v}@{unique_ptr<WebCore::VideoTextureCopierCV, std::__1::default_delete<WebCore::VideoTextureCopierCV> >={__compressed_pair<WebCore::VideoTextureCopierCV *, std::__1::default_delete<WebCore::VideoTextureCopierCV> >=^{VideoTextureCopierCV}}}{unique_ptr<WebCore::PixelBufferConformerCV, std::__1::default_delete<WebCore::PixelBufferConformerCV> >={__compressed_pair<WebCore::PixelBufferConformerCV *, std::__1::default_delete<WebCore::PixelBufferConformerCV> >=^{PixelBufferConformerCV}}}{HashMap<WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::RefPtr<WebCore::WebCoreAVFResourceLoader, WTF::DumbPtrTraits<WebCore::WebCoreAVFResourceLoader> >, WTF::PtrHash<WTF::RetainPtr<AVAssetResourceLoadingRequest> >, WTF::HashTraits<WTF::RetainPtr<AVAssetResourceLoadingRequest> >, WTF::HashTraits<WTF::RefPtr<WebCore::WebCoreAVFResourceLoader, WTF::DumbPtrTraits<WebCore::WebCoreAVFResourceLoader> > > >={HashTable<WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::KeyValuePair<WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::RefPtr<WebCore::WebCoreAVFResourceLoader, WTF::DumbPtrTraits<WebCore::WebCoreAVFResourceLoader> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::RefPtr<WebCore::WebCoreAVFResourceLoader, WTF::DumbPtrTraits<WebCore::WebCoreAVFResourceLoader> > > >, WTF::PtrHash<WTF::RetainPtr<AVAssetResourceLoadingRequest> >, WTF::HashMap<WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::RefPtr<WebCore::WebCoreAVFResourceLoader, WTF::DumbPtrTraits<WebCore::WebCoreAVFResourceLoader> >, WTF::PtrHash<WTF::RetainPtr<AVAssetResourceLoadingRequest> >, WTF::HashTraits<WTF::RetainPtr<AVAssetResourceLoadingRequest> >, WTF::HashTraits<WTF::RefPtr<WebCore::WebCoreAVFResourceLoader, WTF::DumbPtrTraits<WebCore::WebCoreAVFResourceLoader> > > >::KeyValuePairTraits, WTF::HashTraits<WTF::RetainPtr<AVAssetResourceLoadingRequest> > >=^{KeyValuePair<WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::RefPtr<WebCore::WebCoreAVFResourceLoader, WTF::DumbPtrTraits<WebCore::WebCoreAVFResourceLoader> > >}IIII}}{RetainPtr<WebCoreAVFLoaderDelegate>=^v}{HashMap<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RetainPtr<AVAssetResourceLoadingRequest> > >={HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest> > >, WTF::StringHash, WTF::HashMap<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RetainPtr<AVAssetResourceLoadingRequest> > >::KeyValuePairTraits, WTF::HashTraits<WTF::String> >=^{KeyValuePair<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest> >}IIII}}{HashMap<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RetainPtr<AVAssetResourceLoadingRequest> > >={HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest> > >, WTF::StringHash, WTF::HashMap<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RetainPtr<AVAssetResourceLoadingRequest> > >::KeyValuePairTraits, WTF::HashTraits<WTF::String> >=^{KeyValuePair<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest> >}IIII}}{RetainPtr<AVPlayerItemLegibleOutput>=^v}{Vector<WTF::RefPtr<WebCore::AudioTrackPrivateAVFObjC, WTF::DumbPtrTraits<WebCore::AudioTrackPrivateAVFObjC> >, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<WebCore::AudioTrackPrivateAVFObjC, WTF::DumbPtrTraits<WebCore::AudioTrackPrivateAVFObjC> >}II}{Vector<WTF::RefPtr<WebCore::VideoTrackPrivateAVFObjC, WTF::DumbPtrTraits<WebCore::VideoTrackPrivateAVFObjC> >, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<WebCore::VideoTrackPrivateAVFObjC, WTF::DumbPtrTraits<WebCore::VideoTrackPrivateAVFObjC> >}II}{RefPtr<WebCore::MediaSelectionGroupAVFObjC, WTF::DumbPtrTraits<WebCore::MediaSelectionGroupAVFObjC> >=^{MediaSelectionGroupAVFObjC}}{RefPtr<WebCore::MediaSelectionGroupAVFObjC, WTF::DumbPtrTraits<WebCore::MediaSelectionGroupAVFObjC> >=^{MediaSelectionGroupAVFObjC}}^{InbandTextTrackPrivateAVF}{RefPtr<WebCore::InbandMetadataTextTrackPrivateAVF, WTF::DumbPtrTraits<WebCore::InbandMetadataTextTrackPrivateAVF> >=^{InbandMetadataTextTrackPrivateAVF}}{WeakPtr<WebCore::CDMSessionAVFoundationObjC>={RefPtr<WTF::WeakReference<WebCore::CDMSessionAVFoundationObjC>, WTF::DumbPtrTraits<WTF::WeakReference<WebCore::CDMSessionAVFoundationObjC> > >=^{WeakReference<WebCore::CDMSessionAVFoundationObjC>}}}{RefPtr<WebCore::CDMInstanceFairPlayStreamingAVFObjC, WTF::DumbPtrTraits<WebCore::CDMInstanceFairPlayStreamingAVFObjC> >=^{CDMInstanceFairPlayStreamingAVFObjC}}{RetainPtr<NSArray>=^v}{RetainPtr<NSArray>=^v}{RetainPtr<NSArray>=^v}{RetainPtr<NSArray>=^v}{FloatSize=ff}{MediaTime=(?=qd)IC}dqIiBBBBBBBBBB{optional<bool>=B(constexpr_storage_t<bool>=CB)}BB}16, name: setCallback:
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForResponseToAuthenticationChallenge:(id)arg2;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
-     // Error parsing type: @24@0:8^{MediaPlayerPrivateAVFoundationObjC=^^?{WeakPtrFactory<WebCore::MediaPlayerPrivateAVFoundation>={RefPtr<WTF::WeakReference<WebCore::MediaPlayerPrivateAVFoundation>, WTF::DumbPtrTraits<WTF::WeakReference<WebCore::MediaPlayerPrivateAVFoundation> > >=^{WeakReference<WebCore::MediaPlayerPrivateAVFoundation>}}}^^?^^?{Vector<WTF::RefPtr<WebCore::InbandTextTrackPrivateAVF, WTF::DumbPtrTraits<WebCore::InbandTextTrackPrivateAVF> >, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<WebCore::InbandTextTrackPrivateAVF, WTF::DumbPtrTraits<WebCore::InbandTextTrackPrivateAVF> >}II}^{MediaPlayer}{Function<void ()>={unique_ptr<WTF::Function<void ()>::CallableWrapperBase, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >={__compressed_pair<WTF::Function<void ()>::CallableWrapperBase *, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >=^{CallableWrapperBase}}}}{Deque<WebCore::MediaPlayerPrivateAVFoundation::Notification, 0>=QQ{VectorBuffer<WebCore::MediaPlayerPrivateAVFoundation::Notification, 0>=^{Notification}II}}{Lock={Atomic<unsigned char>={atomic<unsigned char>=AC}}}{unique_ptr<WebCore::PlatformTimeRanges, std::__1::default_delete<WebCore::PlatformTimeRanges> >={__compressed_pair<WebCore::PlatformTimeRanges *, std::__1::default_delete<WebCore::PlatformTimeRanges> >=^{PlatformTimeRanges}}}ii{URL={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}b1b1b1b3b26IIIIIII}{URL={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}b1b1b1b3b26IIIIIII}{RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> >=^{SecurityOrigin}}{RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> >=^{SecurityOrigin}}i{Ref<const WTF::Logger, WTF::DumbPtrTraits<const WTF::Logger> >=^{Logger}}^v{FloatSize=ff}{MediaTime=(?=qd)IC}{MediaTime=(?=qd)IC}{MediaTime=(?=qd)IC}{MediaTime=(?=qd)IC}{MediaTime=(?=qd)IC}{MediaTime=(?=qd)IC}iiBBBBBBBBBBBBBBB{RetainPtr<AVURLAsset>=^v}{RetainPtr<AVPlayer>=^v}{RetainPtr<AVPlayerItem>=^v}{RetainPtr<AVPlayerLayer>=^v}{unique_ptr<WebCore::VideoFullscreenLayerManagerObjC, std::__1::default_delete<WebCore::VideoFullscreenLayerManagerObjC> >={__compressed_pair<WebCore::VideoFullscreenLayerManagerObjC *, std::__1::default_delete<WebCore::VideoFullscreenLayerManagerObjC> >=^{VideoFullscreenLayerManagerObjC}}}i{RetainPtr<WebCoreAVFMovieObserver>=^v}{RetainPtr<id>=^v}{String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}BB{RefPtr<WebCore::AudioSourceProviderAVFObjC, WTF::DumbPtrTraits<WebCore::AudioSourceProviderAVFObjC> >=^{AudioSourceProviderAVFObjC}}{RetainPtr<AVAssetImageGenerator>=^v}{RetainPtr<AVPlayerItemVideoOutput>=^v}{RetainPtr<WebCoreAVFPullDelegate>=^v}{RetainPtr<__CVBuffer *>=^v}{RetainPtr<CGImage *>=^v}@{unique_ptr<WebCore::VideoTextureCopierCV, std::__1::default_delete<WebCore::VideoTextureCopierCV> >={__compressed_pair<WebCore::VideoTextureCopierCV *, std::__1::default_delete<WebCore::VideoTextureCopierCV> >=^{VideoTextureCopierCV}}}{unique_ptr<WebCore::PixelBufferConformerCV, std::__1::default_delete<WebCore::PixelBufferConformerCV> >={__compressed_pair<WebCore::PixelBufferConformerCV *, std::__1::default_delete<WebCore::PixelBufferConformerCV> >=^{PixelBufferConformerCV}}}{HashMap<WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::RefPtr<WebCore::WebCoreAVFResourceLoader, WTF::DumbPtrTraits<WebCore::WebCoreAVFResourceLoader> >, WTF::PtrHash<WTF::RetainPtr<AVAssetResourceLoadingRequest> >, WTF::HashTraits<WTF::RetainPtr<AVAssetResourceLoadingRequest> >, WTF::HashTraits<WTF::RefPtr<WebCore::WebCoreAVFResourceLoader, WTF::DumbPtrTraits<WebCore::WebCoreAVFResourceLoader> > > >={HashTable<WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::KeyValuePair<WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::RefPtr<WebCore::WebCoreAVFResourceLoader, WTF::DumbPtrTraits<WebCore::WebCoreAVFResourceLoader> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::RefPtr<WebCore::WebCoreAVFResourceLoader, WTF::DumbPtrTraits<WebCore::WebCoreAVFResourceLoader> > > >, WTF::PtrHash<WTF::RetainPtr<AVAssetResourceLoadingRequest> >, WTF::HashMap<WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::RefPtr<WebCore::WebCoreAVFResourceLoader, WTF::DumbPtrTraits<WebCore::WebCoreAVFResourceLoader> >, WTF::PtrHash<WTF::RetainPtr<AVAssetResourceLoadingRequest> >, WTF::HashTraits<WTF::RetainPtr<AVAssetResourceLoadingRequest> >, WTF::HashTraits<WTF::RefPtr<WebCore::WebCoreAVFResourceLoader, WTF::DumbPtrTraits<WebCore::WebCoreAVFResourceLoader> > > >::KeyValuePairTraits, WTF::HashTraits<WTF::RetainPtr<AVAssetResourceLoadingRequest> > >=^{KeyValuePair<WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::RefPtr<WebCore::WebCoreAVFResourceLoader, WTF::DumbPtrTraits<WebCore::WebCoreAVFResourceLoader> > >}IIII}}{RetainPtr<WebCoreAVFLoaderDelegate>=^v}{HashMap<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RetainPtr<AVAssetResourceLoadingRequest> > >={HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest> > >, WTF::StringHash, WTF::HashMap<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RetainPtr<AVAssetResourceLoadingRequest> > >::KeyValuePairTraits, WTF::HashTraits<WTF::String> >=^{KeyValuePair<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest> >}IIII}}{HashMap<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RetainPtr<AVAssetResourceLoadingRequest> > >={HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest> > >, WTF::StringHash, WTF::HashMap<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RetainPtr<AVAssetResourceLoadingRequest> > >::KeyValuePairTraits, WTF::HashTraits<WTF::String> >=^{KeyValuePair<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest> >}IIII}}{RetainPtr<AVPlayerItemLegibleOutput>=^v}{Vector<WTF::RefPtr<WebCore::AudioTrackPrivateAVFObjC, WTF::DumbPtrTraits<WebCore::AudioTrackPrivateAVFObjC> >, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<WebCore::AudioTrackPrivateAVFObjC, WTF::DumbPtrTraits<WebCore::AudioTrackPrivateAVFObjC> >}II}{Vector<WTF::RefPtr<WebCore::VideoTrackPrivateAVFObjC, WTF::DumbPtrTraits<WebCore::VideoTrackPrivateAVFObjC> >, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<WebCore::VideoTrackPrivateAVFObjC, WTF::DumbPtrTraits<WebCore::VideoTrackPrivateAVFObjC> >}II}{RefPtr<WebCore::MediaSelectionGroupAVFObjC, WTF::DumbPtrTraits<WebCore::MediaSelectionGroupAVFObjC> >=^{MediaSelectionGroupAVFObjC}}{RefPtr<WebCore::MediaSelectionGroupAVFObjC, WTF::DumbPtrTraits<WebCore::MediaSelectionGroupAVFObjC> >=^{MediaSelectionGroupAVFObjC}}^{InbandTextTrackPrivateAVF}{RefPtr<WebCore::InbandMetadataTextTrackPrivateAVF, WTF::DumbPtrTraits<WebCore::InbandMetadataTextTrackPrivateAVF> >=^{InbandMetadataTextTrackPrivateAVF}}{WeakPtr<WebCore::CDMSessionAVFoundationObjC>={RefPtr<WTF::WeakReference<WebCore::CDMSessionAVFoundationObjC>, WTF::DumbPtrTraits<WTF::WeakReference<WebCore::CDMSessionAVFoundationObjC> > >=^{WeakReference<WebCore::CDMSessionAVFoundationObjC>}}}{RefPtr<WebCore::CDMInstanceFairPlayStreamingAVFObjC, WTF::DumbPtrTraits<WebCore::CDMInstanceFairPlayStreamingAVFObjC> >=^{CDMInstanceFairPlayStreamingAVFObjC}}{RetainPtr<NSArray>=^v}{RetainPtr<NSArray>=^v}{RetainPtr<NSArray>=^v}{RetainPtr<NSArray>=^v}{FloatSize=ff}{MediaTime=(?=qd)IC}dqIiBBBBBBBBBB{optional<bool>=B(constexpr_storage_t<bool>=CB)}BB}16, name: initWithCallback:

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

