//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class AVCRemoteVideoClient, VideoAttributes;

@protocol AVCRemoteVideoClientDelegate <NSObject>

@optional
- (void)remoteVideoClient:(AVCRemoteVideoClient *)arg1 remoteVideoAttributesDidChange:(VideoAttributes *)arg2;
- (void)remoteVideoClient:(AVCRemoteVideoClient *)arg1 remoteScreenAttributesDidChange:(VideoAttributes *)arg2;
- (void)remoteVideoServerDidDie:(AVCRemoteVideoClient *)arg1;
- (void)remoteVideoClientDidReceiveLastFrame:(AVCRemoteVideoClient *)arg1;
- (void)remoteVideoClient:(AVCRemoteVideoClient *)arg1 videoDidSuspend:(_Bool)arg2;
- (void)remoteVideoClient:(AVCRemoteVideoClient *)arg1 videoDidDegrade:(_Bool)arg2;
- (void)remoteVideoClient:(AVCRemoteVideoClient *)arg1 remoteMediaDidStall:(_Bool)arg2;
- (void)remoteVideoClient:(AVCRemoteVideoClient *)arg1 remoteVideoDidPause:(_Bool)arg2;
- (void)remoteVideoClientDidReceiveFirstFrame:(AVCRemoteVideoClient *)arg1;
@end

