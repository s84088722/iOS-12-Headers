//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraSnapshotIDSStream.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/IDSServiceDelegate-Protocol.h>

@class HMDSnapshotFile, NSObject, NSString;
@protocol HMDCameraSnapshotIDSStreamInitiatorDelegate, OS_dispatch_queue;

@interface HMDCameraSnapshotIDSStreamInitiator : HMDCameraSnapshotIDSStream <IDSServiceDelegate, HMFLogging>
{
    HMDSnapshotFile *_snapshotFile;
    NSString *_destinationID;
    NSString *_sendFileIdentifier;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id <HMDCameraSnapshotIDSStreamInitiatorDelegate> _delegate;
}

+ (id)logCategory;
@property(readonly, nonatomic) __weak id <HMDCameraSnapshotIDSStreamInitiatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain, nonatomic) NSString *sendFileIdentifier; // @synthesize sendFileIdentifier=_sendFileIdentifier;
@property(retain, nonatomic) NSString *destinationID; // @synthesize destinationID=_destinationID;
@property(retain, nonatomic) HMDSnapshotFile *snapshotFile; // @synthesize snapshotFile=_snapshotFile;
- (void).cxx_destruct;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (void)_callFileTransferFailed:(id)arg1;
- (void)dealloc;
- (void)_sendFile:(id)arg1;
- (void)sendFile:(id)arg1;
- (id)logIdentifier;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 destinationID:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

