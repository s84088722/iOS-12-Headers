//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@class CAMCaptureRequest, CAMStillImageCaptureResult, CAMVideoCaptureResult, CUCaptureController;

@protocol CAMCaptureResultDelegate <NSObject>

@optional
- (void)captureController:(CUCaptureController *)arg1 didGenerateVideoCaptureResult:(CAMVideoCaptureResult *)arg2 fromRequest:(CAMCaptureRequest *)arg3;
- (void)captureController:(CUCaptureController *)arg1 didGenerateStillImageCaptureResult:(CAMStillImageCaptureResult *)arg2 fromRequest:(CAMCaptureRequest *)arg3;
@end

