//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/CAMNebulaDaemonTimelapseProtocolLimited-Protocol.h>

@class NSString;

@protocol CAMNebulaDaemonTimelapseProtocol <CAMNebulaDaemonTimelapseProtocolLimited>
- (void)stopTimelapseWithUUID:(NSString *)arg1;
- (void)finishCaptureForTimelapseWithUUID:(NSString *)arg1;
- (void)updateTimelapseWithUUID:(NSString *)arg1;
- (void)resumeTimelapseWithUUID:(NSString *)arg1;
- (void)startTimelapseWithUUID:(NSString *)arg1;
@end

