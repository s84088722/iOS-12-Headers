//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMAVCore/AVConferencePreviewClientDelegate-Protocol.h>
#import <IMAVCore/IMSystemMonitorListener-Protocol.h>

@class AVConferencePreview, IMAVCamera;

@interface IMAVLocalPreviewClient : NSObject <AVConferencePreviewClientDelegate, IMSystemMonitorListener>
{
    _Bool _shouldAlterPreviewState;
    _Bool _wantsPreview;
    _Bool _wantsPausedPreview;
    _Bool _wantsUnpausedPreview;
    AVConferencePreview *_conferencePreview;
}

+ (struct CGSize)localPortraitAspectRatio;
+ (id)sharedInstance;
@property(retain, nonatomic) AVConferencePreview *conferencePreview; // @synthesize conferencePreview=_conferencePreview;
- (void)cameraDidBecomeAvailableForUniqueID:(id)arg1;
- (void)didReceiveErrorFromCameraUniqueID:(id)arg1 error:(id)arg2;
- (void)didChangeLocalScreenAttributes:(id)arg1;
- (void)didChangeLocalVideoAttributes:(id)arg1;
- (void)didReceiveFirstPreviewFrameFromCameraUniqueID:(id)arg1;
- (void)didPausePreview;
- (void)didStopPreview;
- (void)didStartPreview;
- (void)systemScreenDidPowerDown;
- (void)systemScreenDidPowerUp;
- (void)systemApplicationWillEnterForeground;
- (void)systemApplicationDidEnterBackground;
- (void)endAnimationToPreview;
- (void)beginAnimationToPreview;
- (void)endAnimationToPIP;
- (void)beginAnimationToPIP;
@property(readonly, nonatomic) _Bool isPreviewRunning;
- (void)unpausePreview;
- (void)pausePreview;
- (void)stopPreview;
- (void)startPreview;
- (void)_avDaemonConnected;
- (void)_updatePreviewState;
- (_Bool)_shouldPreviewBeRunning;
- (void)updateLocalScreenAtrributes;
- (void)avChat:(id)arg1 setLocalPortraitRatio:(struct CGSize)arg2 localLandscapeRatio:(struct CGSize)arg3;
- (void)setLocalScreenAttributes:(id)arg1;
- (id)localScreenAttributesForVideoAttributes:(id)arg1;
@property(nonatomic) void *localVideoBackLayer;
@property(nonatomic) void *localVideoLayer;
@property(nonatomic) IMAVCamera *localCamera;
@property(nonatomic) unsigned int cameraOrientation;
@property(nonatomic) unsigned int cameraType;
- (void)dealloc;
- (id)init;

@end

