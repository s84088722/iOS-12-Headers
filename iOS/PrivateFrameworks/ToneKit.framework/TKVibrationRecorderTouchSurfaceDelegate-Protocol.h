//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ToneKit/NSObject-Protocol.h>

@class TKVibrationRecorderTouchSurface;

@protocol TKVibrationRecorderTouchSurfaceDelegate <NSObject>
- (void)vibrationRecorderTouchSurfaceDidFinishReplayingVibration:(TKVibrationRecorderTouchSurface *)arg1;
- (void)vibrationRecorderTouchSurface:(TKVibrationRecorderTouchSurface *)arg1 didExitRecordingModeWithContextObject:(id)arg2;
- (void)vibrationComponentDidEndForVibrationRecorderTouchSurface:(TKVibrationRecorderTouchSurface *)arg1;
- (void)vibrationComponentDidStartForVibrationRecorderTouchSurface:(TKVibrationRecorderTouchSurface *)arg1;
- (_Bool)vibrationRecorderTouchSurfaceDidEnterRecordingMode:(TKVibrationRecorderTouchSurface *)arg1;
@end

