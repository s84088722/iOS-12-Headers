//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDCameraGetSnapshotProtocol-Protocol.h>
#import <HomeKitDaemon/HMDCameraStreamSnapshotCaptureDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDCameraStreamSnapshotHandler : HMFObject <HMFLogging, HMDCameraStreamSnapshotCaptureDelegate, HMDCameraGetSnapshotProtocol>
{
    _Bool _streamAvailable;
    _Bool _streamSetupInProgress;
    NSMutableSet *_streamSnapshotCaptures;
    NSMutableSet *_retiredStreamSnapshotCaptures;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSString *_logID;
    NSMutableDictionary *_serviceInstanceStreamStatus;
    NSMapTable *_delegateTable;
}

+ (id)logCategory;
@property(readonly, nonatomic) NSMapTable *delegateTable; // @synthesize delegateTable=_delegateTable;
@property(readonly, nonatomic) NSMutableDictionary *serviceInstanceStreamStatus; // @synthesize serviceInstanceStreamStatus=_serviceInstanceStreamStatus;
@property(readonly, nonatomic) NSString *logID; // @synthesize logID=_logID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSMutableSet *retiredStreamSnapshotCaptures; // @synthesize retiredStreamSnapshotCaptures=_retiredStreamSnapshotCaptures;
@property(readonly, nonatomic) NSMutableSet *streamSnapshotCaptures; // @synthesize streamSnapshotCaptures=_streamSnapshotCaptures;
- (void).cxx_destruct;
- (void)_callStreamSetupInProgress:(_Bool)arg1;
- (void)callStreamSetupInProgress:(_Bool)arg1;
- (void)_callDidGetLastSnapshot:(id)arg1;
- (void)streamSnapshotCapture:(id)arg1 didGetLastSnapshot:(id)arg2;
- (void)_callDidGetNewSnapshot:(id)arg1;
- (void)streamSnapshotCapture:(id)arg1 didGetNewSnapshot:(id)arg2;
- (void)getSnapshot:(unsigned long long)arg1;
- (void)removeVideoStreamInterface:(id)arg1;
- (void)addVideoStreamInterface:(id)arg1;
- (void)setStreamSetupStatusForService:(id)arg1 inProgress:(_Bool)arg2;
- (void)setStreamSetupInProgress:(_Bool)arg1;
@property(readonly, nonatomic, getter=isStreamSetupInProgress) _Bool streamSetupInProgress; // @synthesize streamSetupInProgress=_streamSetupInProgress;
- (void)setStreamAvailable:(_Bool)arg1;
@property(readonly, nonatomic, getter=isStreamAvailable) _Bool streamAvailable; // @synthesize streamAvailable=_streamAvailable;
- (id)logIdentifier;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 delegateQueue:(id)arg2;
- (id)initWithWorkQueue:(id)arg1 services:(id)arg2 logID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

