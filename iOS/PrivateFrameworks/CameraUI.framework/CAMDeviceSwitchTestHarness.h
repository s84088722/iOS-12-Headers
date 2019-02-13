//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/CAMModeAndDeviceConfigurationTestHarness.h>

@class CAMViewfinderViewController;

@interface CAMDeviceSwitchTestHarness : CAMModeAndDeviceConfigurationTestHarness
{
    _Bool _testingAnimation;
    CAMViewfinderViewController *_viewfinderViewController;
    long long _desiredDevicePosition;
    long long _startingCaptureMode;
}

@property(readonly, nonatomic, getter=isTestingAnimation) _Bool testingAnimation; // @synthesize testingAnimation=_testingAnimation;
@property(readonly, nonatomic) long long startingCaptureMode; // @synthesize startingCaptureMode=_startingCaptureMode;
@property(readonly, nonatomic) long long desiredDevicePosition; // @synthesize desiredDevicePosition=_desiredDevicePosition;
@property(readonly, nonatomic) CAMViewfinderViewController *viewfinderViewController; // @synthesize viewfinderViewController=_viewfinderViewController;
- (void).cxx_destruct;
- (void)ensureCaptureDevicePosition:(long long)arg1 mode:(long long)arg2 thenPerform:(CDUnknownBlockType)arg3;
- (void)handleDidOpenViewfinderForReason:(long long)arg1;
- (void)startTesting;
- (id)initWithTestName:(id)arg1 viewfinderViewController:(id)arg2 devicePosition:(long long)arg3 testingAnimation:(_Bool)arg4 startingCaptureMode:(long long)arg5;

@end

