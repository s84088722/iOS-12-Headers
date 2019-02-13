//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <CameraUI/CAMCVCStillImageResultCoordinatorDelegate-Protocol.h>
#import <CameraUI/CAMCaptureResultDelegate-Protocol.h>
#import <CameraUI/CAMIrisVideoControllerDelegate-Protocol.h>
#import <CameraUI/CAMPersistenceResultDelegate-Protocol.h>
#import <CameraUI/CAMViewfinderReviewButtonSource-Protocol.h>
#import <CameraUI/NSCoding-Protocol.h>
#import <CameraUI/NSSecureCoding-Protocol.h>

@class CAMBurstController, CAMIrisVideoController, CAMKeepAliveController, CAMLocationController, CAMMotionController, CAMNebulaDaemonProxyManager, CAMPersistenceController, CAMPowerController, CAMProtectionController, CAMRemoteShutterController, CAMReviewButton, CAMThumbnailGenerator, CAMTimelapseController, CAMViewfinderViewController, CUCaptureController, NSMutableDictionary, NSObject, NSString;
@protocol CAMCameraCaptureDelegate, CAMCameraConfigurationDelegate, CAMCameraViewControllerCameraSessionDelegate, CAMCameraViewControllerPresentationDelegate, CAMCreativeCameraDelegate, OS_dispatch_queue;

@interface CAMCameraViewController : UIViewController <CAMCaptureResultDelegate, CAMPersistenceResultDelegate, CAMCVCStillImageResultCoordinatorDelegate, CAMIrisVideoControllerDelegate, CAMViewfinderReviewButtonSource, NSCoding, NSSecureCoding>
{
    _Bool _automaticallyManagesCameraSession;
    id <CAMCameraCaptureDelegate> _captureDelegate;
    CUCaptureController *_captureController;
    CAMTimelapseController *_timelapseController;
    CAMPersistenceController *_persistenceController;
    CAMMotionController *_motionController;
    CAMLocationController *_locationController;
    CAMPowerController *_powerController;
    CAMBurstController *_burstController;
    CAMKeepAliveController *_keepAliveController;
    CAMProtectionController *_protectionController;
    CAMRemoteShutterController *_remoteShutterController;
    CAMNebulaDaemonProxyManager *_nebulaDaemonProxyManager;
    CAMIrisVideoController *_irisVideoController;
    CAMReviewButton *__reviewButton;
    NSObject<OS_dispatch_queue> *__resultProcessingQueue;
    NSMutableDictionary *__resultQueueStillImageResultCoordinators;
    CAMThumbnailGenerator *__resultQueueThumbnailGenerator;
    CAMViewfinderViewController *_viewfinderViewController;
    id <CAMCameraViewControllerPresentationDelegate> _presentationDelegate;
    id <CAMCameraViewControllerCameraSessionDelegate> _cameraSessionDelegate;
}

+ (_Bool)isEmulatingImagePicker;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) __weak id <CAMCameraViewControllerCameraSessionDelegate> cameraSessionDelegate; // @synthesize cameraSessionDelegate=_cameraSessionDelegate;
@property(nonatomic) _Bool automaticallyManagesCameraSession; // @synthesize automaticallyManagesCameraSession=_automaticallyManagesCameraSession;
@property(nonatomic) __weak id <CAMCameraViewControllerPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
@property(readonly, nonatomic) CAMViewfinderViewController *viewfinderViewController; // @synthesize viewfinderViewController=_viewfinderViewController;
@property(readonly, nonatomic) CAMThumbnailGenerator *_resultQueueThumbnailGenerator; // @synthesize _resultQueueThumbnailGenerator=__resultQueueThumbnailGenerator;
@property(readonly, nonatomic) NSMutableDictionary *_resultQueueStillImageResultCoordinators; // @synthesize _resultQueueStillImageResultCoordinators=__resultQueueStillImageResultCoordinators;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_resultProcessingQueue; // @synthesize _resultProcessingQueue=__resultProcessingQueue;
@property(readonly, nonatomic) CAMReviewButton *_reviewButton; // @synthesize _reviewButton=__reviewButton;
@property(readonly, nonatomic) CAMIrisVideoController *irisVideoController; // @synthesize irisVideoController=_irisVideoController;
@property(readonly, nonatomic) CAMNebulaDaemonProxyManager *nebulaDaemonProxyManager; // @synthesize nebulaDaemonProxyManager=_nebulaDaemonProxyManager;
@property(readonly, nonatomic) CAMRemoteShutterController *remoteShutterController; // @synthesize remoteShutterController=_remoteShutterController;
@property(readonly, nonatomic) CAMProtectionController *protectionController; // @synthesize protectionController=_protectionController;
@property(readonly, nonatomic) CAMKeepAliveController *keepAliveController; // @synthesize keepAliveController=_keepAliveController;
@property(readonly, nonatomic) CAMBurstController *burstController; // @synthesize burstController=_burstController;
@property(readonly, nonatomic) CAMPowerController *powerController; // @synthesize powerController=_powerController;
@property(readonly, nonatomic) CAMLocationController *locationController; // @synthesize locationController=_locationController;
@property(readonly, nonatomic) CAMMotionController *motionController; // @synthesize motionController=_motionController;
@property(readonly, nonatomic) CAMPersistenceController *persistenceController; // @synthesize persistenceController=_persistenceController;
@property(readonly, nonatomic) CAMTimelapseController *timelapseController; // @synthesize timelapseController=_timelapseController;
@property(readonly, nonatomic) CUCaptureController *captureController; // @synthesize captureController=_captureController;
@property(nonatomic) __weak id <CAMCameraCaptureDelegate> captureDelegate; // @synthesize captureDelegate=_captureDelegate;
- (void).cxx_destruct;
@property(nonatomic, getter=creativeCameraDelegate) __weak id <CAMCreativeCameraDelegate> creativeCameraDelegate;
- (id)reviewButton;
- (void)handleReviewButtonReleased:(id)arg1;
- (void)stillImagePersistenceCoordinator:(id)arg1 requestsDispatchForResultSpecifiers:(unsigned long long)arg2 photoProperties:(id)arg3 videoProperties:(id)arg4 unfilteredPhotoProperties:(id)arg5 unfilteredVideoProperties:(id)arg6 assetAdjustments:(id)arg7 error:(id)arg8;
- (void)_resultQueue_removeStillImageResultCoordinatorForRequest:(id)arg1;
- (id)_resultQueue_getStillImageResultCoordinatorForRequest:(id)arg1;
- (id)_resultQueue_getOrCreateStillImageResultCoordinatorForRequest:(id)arg1 allExpectedResultSpecifiers:(id)arg2 isExpectingPairedVideo:(_Bool)arg3 isDisablingMultipleCaptures:(_Bool)arg4;
- (void)irisVideoController:(id)arg1 didPersistVideoCaptureResult:(id)arg2 forCaptureResult:(id)arg3 request:(id)arg4;
- (double)irisVideoController:(id)arg1 willPersistVideoCaptureResult:(id)arg2 forRequest:(id)arg3;
- (void)_resultQueue_forceCompletionIfPossibleForRequest:(id)arg1;
- (void)persistenceController:(id)arg1 didCompleteAllLocalPersistenceForRequest:(id)arg2;
- (void)_handleVideoLocalPersistenceResult:(id)arg1 forCaptureResult:(id)arg2 fromRequest:(id)arg3;
- (void)_handleLivePhotoVideoLocalPersistenceResult:(id)arg1 forCaptureResult:(id)arg2 fromRequest:(id)arg3;
- (void)persistenceController:(id)arg1 didGenerateVideoLocalPersistenceResult:(id)arg2 forCaptureResult:(id)arg3 fromRequest:(id)arg4;
- (void)persistenceController:(id)arg1 didGenerateStillImageLocalPersistenceResult:(id)arg2 forCaptureResult:(id)arg3 fromRequest:(id)arg4;
- (id)_behaviorDefinedDestinationURLForRequest:(id)arg1 withLocalDestinationURL:(id)arg2 linkedDestinationURL:(id)arg3;
- (void)captureController:(id)arg1 didGenerateStillImageCaptureResult:(id)arg2 fromRequest:(id)arg3;
- (id)_clientPropertiesForVideoURL:(id)arg1 duration:(CDStruct_1b6d18a9)arg2 size:(struct CGSize)arg3 creationDate:(id)arg4 captureOrientation:(long long)arg5 previewSurface:(void *)arg6 previewOrientation:(long long)arg7 adjustments:(id)arg8 uniqueIdentifier:(id)arg9 savedToPhotoLibrary:(_Bool)arg10;
- (id)_clientPropertiesForLivePhotoVideoURL:(id)arg1 duration:(CDStruct_1b6d18a9)arg2;
- (id)_clientPropertiesForStillImageWithURL:(id)arg1 captureMode:(long long)arg2 captureOrientation:(long long)arg3 previewSurface:(void *)arg4 previewOrientation:(long long)arg5 uniqueIdentifier:(id)arg6 savedToPhotoLibrary:(_Bool)arg7 captureResult:(id)arg8;
- (id)_assetAdjustmentsFromFilters:(id)arg1 portraitMetadata:(id)arg2 properties:(id)arg3;
- (void)_notifyCaptureDelegateOfCompletedCaptureOfLivePhoto:(id)arg1 withProperties:(id)arg2 error:(id)arg3;
- (void)_notifyCaptureDelegateOfCompletedCaptureOfPhoto:(id)arg1 withProperties:(id)arg2 error:(id)arg3;
- (id)_previewImageFromVideoURL:(id)arg1;
- (id)_resultQueueSafeImageFromSurface:(void *)arg1 imageOrientation:(long long)arg2;
@property(nonatomic) __weak id <CAMCameraConfigurationDelegate> configurationDelegate;
- (struct CGSize)viewSystemLayoutSizeFittingSize:(struct CGSize)arg1 forCaptureMode:(long long)arg2;
- (unsigned long long)_capturePersistenceBehaviorForViewfinderPersistenceBehavior:(unsigned long long)arg1;
- (unsigned long long)_viewfinderPersistenceBehaviorForCapturePersistenceBehavior:(unsigned long long)arg1;
@property(nonatomic, getter=isPerformingTileTransition) _Bool performingTileTransition;
@property(nonatomic) _Bool automaticallyAdjustsApplicationIdleTimer;
@property(nonatomic) unsigned long long persistenceBehavior;
@property(readonly, nonatomic, getter=isPreventingAdditionalCaptures) _Bool preventingAdditionalCaptures;
@property(nonatomic, getter=isDisablingAdditionalCaptures) _Bool disablingAdditionalCaptures;
@property(nonatomic, getter=isDisablingMultipleCaptureFeatures) _Bool disablingMultipleCaptureFeatures;
- (void)handleVolumeButtonReleased;
- (void)handleVolumeButtonPressed;
- (void)setMessagesTransitionState:(long long)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) long long messagesTransitionState;
- (void)resumeCameraSession;
- (void)suspendCameraSession;
- (_Bool)stopRecording;
- (_Bool)startRecording;
- (_Bool)capturePhoto;
@property(readonly, nonatomic, getter=isRecording) _Bool recording;
@property(readonly, nonatomic, getter=isCapturingLivePhoto) _Bool capturingLivePhoto;
@property(readonly, nonatomic, getter=isCapturingPhoto) _Bool capturingPhoto;
@property(nonatomic) long long livePhotoMode;
@property(nonatomic) long long timerDuration;
@property(nonatomic, setter=setHDRMode:) long long hdrMode;
@property(nonatomic) long long torchMode;
@property(nonatomic) long long flashMode;
- (void)configureForCaptureMode:(long long)arg1 captureDevice:(long long)arg2;
@property(readonly, nonatomic) long long captureDevice;
@property(readonly, nonatomic) long long captureMode;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForStatusBarHidden;
- (long long)preferredStatusBarUpdateAnimation;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithOverrides:(id)arg1 initialLayoutStyle:(long long)arg2 privateOptions:(long long)arg3;
- (id)initWithOverrides:(id)arg1 usingEmulationMode:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_commonCAMCameraViewControllerInitializationWithOverrides:(id)arg1 usingEmulationMode:(long long)arg2 initialLayoutStyle:(long long)arg3 privateOptions:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

