//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraSnapshotSender.h>

#import <HomeKitDaemon/HMDCameraGetSnapshotProtocol-Protocol.h>
#import <HomeKitDaemon/HMDCameraSnapshotIDSStreamInitiatorDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCameraSnapshotLocalDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCameraSnapshotSenderProtocol-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDCameraSnapshotIDSStreamInitiator, HMDCameraSnapshotLocal, NSString;
@protocol HMDCameraSnapshotRemoteStreamSenderDelegate;

@interface HMDCameraSnapshotRemoteStreamSender : HMDCameraSnapshotSender <HMDCameraGetSnapshotProtocol, HMDCameraSnapshotSenderProtocol, HMDCameraSnapshotLocalDelegate, HMDCameraSnapshotIDSStreamInitiatorDelegate, HMFLogging>
{
    HMDCameraSnapshotLocal *_snapshotLocal;
    id <HMDCameraSnapshotRemoteStreamSenderDelegate> _delegate;
    HMDCameraSnapshotIDSStreamInitiator *_streamInitiator;
}

+ (id)logCategory;
@property(readonly, nonatomic) HMDCameraSnapshotIDSStreamInitiator *streamInitiator; // @synthesize streamInitiator=_streamInitiator;
@property(readonly, nonatomic) __weak id <HMDCameraSnapshotRemoteStreamSenderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) HMDCameraSnapshotLocal *snapshotLocal; // @synthesize snapshotLocal=_snapshotLocal;
- (void).cxx_destruct;
- (void)streamInitiator:(id)arg1 didFailToSendFile:(id)arg2;
- (void)snapshotLocal:(id)arg1 didSaveSnapshotFile:(id)arg2 error:(id)arg3 sessionID:(id)arg4;
- (void)_callDidCompleteSendImageDelegate:(id)arg1;
- (void)_callDidStartCaptureImageDelegate:(id)arg1;
- (void)snapShotTransferComplete;
- (void)sendSnapshotAtPath:(id)arg1;
- (void)getSnapshot:(unsigned long long)arg1;
- (id)logIdentifier;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 options:(id)arg3 device:(id)arg4 accessory:(id)arg5 delegate:(id)arg6 delegateQueue:(id)arg7 uniqueIdentifier:(id)arg8 snapshotRequestHandler:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

