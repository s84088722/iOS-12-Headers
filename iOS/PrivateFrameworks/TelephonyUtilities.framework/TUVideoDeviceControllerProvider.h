//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/AVConferencePreviewClientDelegate-Protocol.h>
#import <TelephonyUtilities/TUVideoDeviceControllerProvider-Protocol.h>
#import <TelephonyUtilities/TUVideoEffectsProvider-Protocol.h>

@class AVConferencePreview, NSArray, NSString, TUVideoEffect, VideoAttributes;
@protocol TUVideoDeviceControllerProviderDelegate;

__attribute__((visibility("hidden")))
@interface TUVideoDeviceControllerProvider : NSObject <AVConferencePreviewClientDelegate, TUVideoDeviceControllerProvider, TUVideoEffectsProvider>
{
    id <TUVideoDeviceControllerProviderDelegate> _delegate;
    TUVideoEffect *_currentVideoEffect;
    AVConferencePreview *_preview;
}

@property(readonly, nonatomic) AVConferencePreview *preview; // @synthesize preview=_preview;
@property(retain, nonatomic) TUVideoEffect *currentVideoEffect; // @synthesize currentVideoEffect=_currentVideoEffect;
@property(nonatomic) __weak id <TUVideoDeviceControllerProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)captureDevicesChanged:(id)arg1;
- (id)thumbnailImageForVideoEffectName:(id)arg1;
@property(readonly, nonatomic) NSArray *availableVideoEffects;
- (void)didStopPreview;
- (void)didChangeLocalVideoAttributes:(id)arg1;
- (void)didReceiveFirstPreviewFrameFromCameraUniqueID:(id)arg1;
- (void)didStartPreview;
- (void)cameraDidBecomeAvailableForUniqueID:(id)arg1;
- (void)didReceiveErrorFromCameraUniqueID:(id)arg1 error:(id)arg2;
- (void)endPIPToPreviewAnimation;
- (void)beginPIPToPreviewAnimation;
- (void)endPreviewToPIPAnimation;
- (void)beginPreviewToPIPAnimation;
- (void)setLocalScreenAttributes:(id)arg1;
- (id)localScreenAttributesForVideoAttributes:(id)arg1;
- (void)stopPreview;
- (void)pausePreview;
- (void)startPreview;
- (void)setLocalVideoLayer:(id)arg1 front:(_Bool)arg2;
- (id)localVideoLayer:(_Bool)arg1;
- (void)setLocalCameraWithUID:(id)arg1;
@property(copy, nonatomic) VideoAttributes *localVideoAttributes;
@property(readonly, copy, nonatomic) NSArray *inputDevices;
@property(readonly, copy, nonatomic) NSString *localCameraUID;
@property(readonly, nonatomic, getter=isPreviewRunning) _Bool previewRunning;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

