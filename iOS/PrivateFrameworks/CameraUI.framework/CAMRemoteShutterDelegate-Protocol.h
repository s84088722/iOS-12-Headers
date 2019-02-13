//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@class CAMRemoteShutterController;

@protocol CAMRemoteShutterDelegate <NSObject>
- (void)remoteShutter:(CAMRemoteShutterController *)arg1 setCaptureDevice:(long long)arg2;
- (void)remoteShutter:(CAMRemoteShutterController *)arg1 setZoomAmount:(double)arg2;
- (void)remoteShutter:(CAMRemoteShutterController *)arg1 setIrisMode:(long long)arg2;
- (void)remoteShutter:(CAMRemoteShutterController *)arg1 setHDRMode:(long long)arg2;
- (void)remoteShutter:(CAMRemoteShutterController *)arg1 setFlashMode:(long long)arg2;
- (_Bool)remoteShutterStopCapture:(CAMRemoteShutterController *)arg1;
- (_Bool)remoteShutterStartCapture:(CAMRemoteShutterController *)arg1;
- (void)remoteShutter:(CAMRemoteShutterController *)arg1 focusOn:(struct CGPoint)arg2;
- (void)remoteShutter:(CAMRemoteShutterController *)arg1 setMode:(long long)arg2;
- (_Bool)remoteShutterEndBurstCapture:(CAMRemoteShutterController *)arg1;
- (_Bool)remoteShutterBeginBurstCapture:(CAMRemoteShutterController *)arg1;
- (void)remoteShutterCancelCountdown:(CAMRemoteShutterController *)arg1;
- (void)remoteShutter:(CAMRemoteShutterController *)arg1 takePhotoWithCountdown:(unsigned long long)arg2;
@end

