//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <HomeUI/HFItemManagerDelegate-Protocol.h>
#import <HomeUI/PGPictureInPictureViewController-Protocol.h>

@class HFCameraAudioManager, HFItemManager, HUCameraView, NSString, UIView;

@interface HUCameraStreamContentViewController : UIViewController <HFItemManagerDelegate, PGPictureInPictureViewController>
{
    _Bool _displayInterrupted;
    _Bool _showActivityIndicatorWhenLoading;
    _Bool _streaming;
    unsigned long long _viewAppearanceState;
    unsigned long long _displayMode;
    HFCameraAudioManager *_cameraAudioManager;
    HUCameraView *_cameraView;
    HFItemManager *_itemManager;
    unsigned long long _visibilityState;
    struct UIOffset _defaultCameraBadgeOffset;
}

@property(nonatomic, getter=isStreaming) _Bool streaming; // @synthesize streaming=_streaming;
@property(nonatomic) unsigned long long visibilityState; // @synthesize visibilityState=_visibilityState;
@property(retain, nonatomic) HFItemManager *itemManager; // @synthesize itemManager=_itemManager;
@property(readonly, nonatomic) HUCameraView *cameraView; // @synthesize cameraView=_cameraView;
@property(nonatomic) _Bool showActivityIndicatorWhenLoading; // @synthesize showActivityIndicatorWhenLoading=_showActivityIndicatorWhenLoading;
@property(nonatomic) struct UIOffset defaultCameraBadgeOffset; // @synthesize defaultCameraBadgeOffset=_defaultCameraBadgeOffset;
@property(retain, nonatomic) HFCameraAudioManager *cameraAudioManager; // @synthesize cameraAudioManager=_cameraAudioManager;
@property(nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
@property(nonatomic, getter=isDisplayInterrupted) _Bool displayInterrupted; // @synthesize displayInterrupted=_displayInterrupted;
@property(nonatomic) unsigned long long viewAppearanceState; // @synthesize viewAppearanceState=_viewAppearanceState;
- (void).cxx_destruct;
- (void)_updateIdleTimer;
- (void)_updateCameraViewsIncludingOverlayContent:(_Bool)arg1;
- (unsigned long long)_streamState;
- (_Bool)_isStreaming;
- (id)_preferredCameraSource;
- (id)_cameraManager;
- (id)_cameraItem;
- (void)_updateDigitalZoomState;
- (void)_updateStreamingState;
- (void)_updatePreferredContentSize;
- (void)viewWillLayoutSubviews;
@property(readonly, nonatomic) _Bool shouldShowAlternateActionButtonImage;
- (void)actionButtonTapped;
- (void)didAnimatePictureInPictureStop;
- (void)willAnimatePictureInPictureStop;
- (void)didAnimatePictureInPictureStart;
- (void)willAnimatePictureInPictureStart;
- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;
@property(nonatomic) struct UIOffset cameraBadgeOffset;
@property(readonly, nonatomic) UIView *cameraOverlaySnapshot;
@property(readonly, nonatomic) UIView *cameraViewSnapshot;
@property(readonly, nonatomic) struct CGRect derivedCameraViewFrame;
@property(readonly, nonatomic) struct CGRect cameraViewFrame;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithCameraItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool shouldShowLoadingIndicator;
@property(readonly) Class superclass;

@end

