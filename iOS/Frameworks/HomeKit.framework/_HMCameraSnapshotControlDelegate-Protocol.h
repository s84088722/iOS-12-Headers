//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKit/NSObject-Protocol.h>

@class HMCameraSnapshot, NSError, _HMCameraSnapshotControl;

@protocol _HMCameraSnapshotControlDelegate <NSObject>
- (void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(_HMCameraSnapshotControl *)arg1;
- (void)cameraSnapshotControl:(_HMCameraSnapshotControl *)arg1 didTakeSnapshot:(HMCameraSnapshot *)arg2 error:(NSError *)arg3;
@end

