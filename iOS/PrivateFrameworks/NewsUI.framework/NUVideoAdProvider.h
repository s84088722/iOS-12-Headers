//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/ADBannerViewInternalDelegate-Protocol.h>
#import <NewsUI/NUAdContextProvider-Protocol.h>
#import <NewsUI/SVVideo-Protocol.h>
#import <NewsUI/SVVideoAdProviding-Protocol.h>

@class NSArray, NSString, NSURL, NUAdBannerView, SVKeyValueObserver, SXVideoAdStateManager;
@protocol NUAdContextProvider, NUAdProvider, NUVideoAdEventTracker, NUVideoPlaybackCounter, SVModalPresentationViewControllerProviding, SVVideoMetadata, SVVisibilityMonitoring, SXVASTAnalyticsEventInfoFactory;

@interface NUVideoAdProvider : NSObject <NUAdContextProvider, ADBannerViewInternalDelegate, SVVideo, SVVideoAdProviding>
{
    _Bool _appeared;
    NSString *_identifier;
    NSArray *_contextProviders;
    id <NUAdContextProvider> _contextProviderForVideoBefore;
    id <NUAdContextProvider> _contextProviderForVideoAfter;
    NUAdBannerView *_bannerView;
    unsigned long long _skipThreshold;
    NSURL *_URL;
    SVKeyValueObserver *_playbackStartedObserver;
    id <NUVideoAdEventTracker> _eventTracker;
    id <SVVideoMetadata> _metadata;
    SXVideoAdStateManager *_stateManager;
    id <NUAdProvider> _adProvider;
    id <SVVisibilityMonitoring> _videoPlayerVisibilityMonitor;
    id <SXVASTAnalyticsEventInfoFactory> _analyticsEventInfoFactory;
    id <NUVideoPlaybackCounter> _playbackCounter;
    id <SVModalPresentationViewControllerProviding> _modalPresentationViewControllerProvider;
}

@property(nonatomic) _Bool appeared; // @synthesize appeared=_appeared;
@property(readonly, nonatomic) id <SVModalPresentationViewControllerProviding> modalPresentationViewControllerProvider; // @synthesize modalPresentationViewControllerProvider=_modalPresentationViewControllerProvider;
@property(readonly, nonatomic) id <NUVideoPlaybackCounter> playbackCounter; // @synthesize playbackCounter=_playbackCounter;
@property(readonly, nonatomic) id <SXVASTAnalyticsEventInfoFactory> analyticsEventInfoFactory; // @synthesize analyticsEventInfoFactory=_analyticsEventInfoFactory;
@property(readonly, nonatomic) __weak id <SVVisibilityMonitoring> videoPlayerVisibilityMonitor; // @synthesize videoPlayerVisibilityMonitor=_videoPlayerVisibilityMonitor;
@property(readonly, nonatomic) id <NUAdProvider> adProvider; // @synthesize adProvider=_adProvider;
@property(readonly, nonatomic) SXVideoAdStateManager *stateManager; // @synthesize stateManager=_stateManager;
@property(retain, nonatomic) id <SVVideoMetadata> metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) id <NUVideoAdEventTracker> eventTracker; // @synthesize eventTracker=_eventTracker;
@property(retain, nonatomic) SVKeyValueObserver *playbackStartedObserver; // @synthesize playbackStartedObserver=_playbackStartedObserver;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) unsigned long long skipThreshold; // @synthesize skipThreshold=_skipThreshold;
@property(retain, nonatomic) NUAdBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) id <NUAdContextProvider> contextProviderForVideoAfter; // @synthesize contextProviderForVideoAfter=_contextProviderForVideoAfter;
@property(retain, nonatomic) id <NUAdContextProvider> contextProviderForVideoBefore; // @synthesize contextProviderForVideoBefore=_contextProviderForVideoBefore;
@property(copy, nonatomic) NSArray *contextProviders; // @synthesize contextProviders=_contextProviders;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)viewControllerForStoryboardPresentationFromBannerView:(id)arg1;
- (id)metadataForCurrentState;
@property(readonly, nonatomic) double threshold;
- (id)contextProvidersForKeyPath:(id)arg1;
- (id)adContextValueForKeyPath:(id)arg1;
- (void)presentPrivacyStatement;
- (void)presentAction;
- (void)skipped;
@property(readonly, nonatomic) _Bool hasAction;
- (void)impressionThresholdPassed:(double)arg1;
- (void)impressionQuartilePassed:(unsigned long long)arg1;
- (void)muteStateChanged:(_Bool)arg1;
- (void)tappedToToggleControls;
- (void)tappedAdvance;
- (void)playbackFailedWithError:(id)arg1;
- (void)playbackFinished;
- (void)playbackResumed;
- (void)playbackPaused;
- (void)playbackStarted;
- (void)playbackInitiated;
- (void)didDisappear;
- (void)didAppear;
@property(readonly, nonatomic) _Bool allowsCallToActionBar;
@property(readonly, nonatomic) unsigned long long videoType;
- (CDUnknownBlockType)loadWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithContextProviders:(id)arg1 adProvider:(id)arg2 contextProviderForVideoBefore:(id)arg3 contextProviderForVideoAfter:(id)arg4 eventTracker:(id)arg5 videoPlayerVisibilityMonitor:(id)arg6 analyticsEventInfoFactory:(id)arg7 playbackCounter:(id)arg8 modalPresentationViewControllerProvider:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

