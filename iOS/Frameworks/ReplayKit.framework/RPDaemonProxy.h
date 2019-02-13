//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReplayKit/NSXPCConnectionDelegate-Protocol.h>
#import <ReplayKit/RPClientProtocol-Protocol.h>
#import <ReplayKit/RPDaemonProtocol-Protocol.h>

@class NSString, NSURL, NSXPCConnection;

@interface RPDaemonProxy : NSObject <NSXPCConnectionDelegate, RPDaemonProtocol, RPClientProtocol>
{
    NSURL *_broadcastURL;
    NSXPCConnection *_connection;
}

+ (id)daemonProxy;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSURL *broadcastURL; // @synthesize broadcastURL=_broadcastURL;
- (void).cxx_destruct;
- (oneway void)setMicrophoneEnabledPersistent:(_Bool)arg1;
- (oneway void)setHasUserConsentForMicrophone:(_Bool)arg1;
- (oneway void)setHasUserConsentForCamera:(_Bool)arg1;
- (oneway void)synchronousIsBroadcastingWithPreferredExtension:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (oneway void)synchronousGetCurrentState:(CDUnknownBlockType)arg1;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;
- (oneway void)recordingTimerDidUpdate:(id)arg1;
- (oneway void)recordingLockInterrupted:(id)arg1;
- (oneway void)captureHandlerWithAudioSample:(id)arg1 absdData:(id)arg2 itemCount:(long long)arg3 bufferType:(long long)arg4 timingData:(id)arg5;
- (oneway void)captureHandlerWithSample:(id)arg1 timingData:(id)arg2;
- (oneway void)updateBroadcastURL:(id)arg1;
- (oneway void)updateBroadcastServiceInfo:(id)arg1;
- (oneway void)recordingDidStopWithError:(id)arg1 movieURL:(id)arg2;
- (oneway void)updateScreenRecordingState;
- (oneway void)reportCameraUsage:(int)arg1;
- (oneway void)updateProcessIDForAudioCaptureWithPID:(int)arg1;
- (oneway void)setMicrophoneEnabled:(_Bool)arg1;
- (oneway void)discardRecordingWithHandler:(CDUnknownBlockType)arg1;
- (oneway void)clientDidResignActive;
- (oneway void)clientDidBecomeActive;
- (oneway void)resumeRecordingWithWindowLayerContextID:(unsigned int)arg1;
- (oneway void)pauseRecording;
- (oneway void)getCurrentBroadcastImages:(CDUnknownBlockType)arg1;
- (oneway void)getSystemBroadcastExtensionInfo:(CDUnknownBlockType)arg1;
- (oneway void)setupBroadcastWithHostBundleID:(id)arg1 broadcastExtensionBundleID:(id)arg2 broadcastConfigurationData:(id)arg3 userInfo:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (oneway void)saveVideoToCameraRoll:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (oneway void)stopRecordingWithStartClipDuration:(double)arg1 endClipDuration:(double)arg2 handler:(CDUnknownBlockType)arg3;
- (oneway void)stopRecordingWithHandler:(CDUnknownBlockType)arg1;
- (oneway void)startRecordingWindowLayerContextIDs:(id)arg1 windowSize:(struct CGSize)arg2 microphoneEnabled:(_Bool)arg3 cameraEnabled:(_Bool)arg4 broadcast:(_Bool)arg5 systemRecording:(_Bool)arg6 captureEnabled:(_Bool)arg7 listenerEndpoint:(id)arg8 withHandler:(CDUnknownBlockType)arg9;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

