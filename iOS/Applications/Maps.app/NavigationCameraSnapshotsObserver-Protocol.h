//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NavigationCameraSnapshotManager;

@protocol NavigationCameraSnapshotsObserver <NSObject>
- (void)cameraSnapshotsManager:(NavigationCameraSnapshotManager *)arg1 didRemoveAtIndex:(unsigned long long)arg2 fromTraceFile:(NSString *)arg3;
- (void)cameraSnapshotsManager:(NavigationCameraSnapshotManager *)arg1 didInsertAtIndex:(unsigned long long)arg2 toTraceFile:(NSString *)arg3;
@end

