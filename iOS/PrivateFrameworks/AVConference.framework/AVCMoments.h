//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVConferenceXPCClient, NSMutableDictionary, NSString;
@protocol AVCMomentsDelegate, OS_dispatch_queue;

@interface AVCMoments : NSObject
{
    AVConferenceXPCClient *_connection;
    long long _streamToken;
    id _delegate;
    unsigned int _capabilities;
    NSString *_deviceID;
    NSMutableDictionary *_requests;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    int _currentActiveRequestsCount;
    int _currentPendingRequestsCount;
}

@property(readonly, nonatomic) int pendingRequestCount; // @synthesize pendingRequestCount=_currentPendingRequestsCount;
@property(readonly, nonatomic) int activeRequestCount; // @synthesize activeRequestCount=_currentActiveRequestsCount;
@property(readonly, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(readonly, nonatomic) unsigned int capabilities; // @synthesize capabilities=_capabilities;
@property(readonly, nonatomic) long long streamToken; // @synthesize streamToken=_streamToken;
- (_Bool)avcMomentsRequestDidRejectRequest:(id)arg1 withError:(id *)arg2;
- (_Bool)avcMomentsRequestDidEndRequest:(id)arg1 withError:(id *)arg2;
- (_Bool)avcMomentsRequestDidStartRequest:(id)arg1 withError:(id *)arg2;
- (id)newRequestWithMediaType:(unsigned char)arg1;
@property(readonly, nonatomic) id <AVCMomentsDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFinishRequestHelperWithResult:(id)arg1;
- (void)didEndProcessingRequestHelperWithResult:(id)arg1;
- (void)didStartProcessingRequestHelperWithResult:(id)arg1;
- (void)deregisterBlocksForNotifications;
- (void)registerBlocksForNotifications;
- (void)disconnect;
- (_Bool)connect;
- (id)description;
- (void)dealloc;
- (id)initWithStreamToken:(long long)arg1 deviceID:(id)arg2 delegate:(id)arg3 dispatchQueue:(id)arg4;

@end

