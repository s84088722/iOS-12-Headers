//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MRDTaskAssertion, MRPlaybackQueueClient, MRXPCConnection, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSString;
@protocol MRDMediaRemoteClientDelegate, MRDXPCMessageHandling, OS_dispatch_queue, OS_dispatch_source;

@interface MRDMediaRemoteClient : NSObject
{
    NSObject<OS_dispatch_source> *_source;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_registeredCustomOrigins;
    NSArray *_applicationPickedRoutes;
    NSString *_bundleIdentifier;
    NSMutableArray *_assertions;
    _Bool _canBeNowPlayingApplication;
    _Bool _keepAlive;
    _Bool _hasRequestedLegacyNowPlayingInfo;
    unsigned int _hardwareRemoteBehavior;
    unsigned int _routeDiscoveryMode;
    unsigned int _outputDeviceDiscoveryMode;
    id <MRDXPCMessageHandling> _messageHandler;
    id <MRDMediaRemoteClientDelegate> _delegate;
    MRXPCConnection *_connection;
    MRDTaskAssertion *_currentTaskAssertion;
    NSDate *_canBeNowPlayingTimestamp;
    unsigned long long _routeDiscoveryCount;
    unsigned long long _entitlements;
    MRPlaybackQueueClient *_playbackQueueRequests;
}

@property(readonly, nonatomic) MRPlaybackQueueClient *playbackQueueRequests; // @synthesize playbackQueueRequests=_playbackQueueRequests;
@property(readonly, nonatomic) unsigned long long entitlements; // @synthesize entitlements=_entitlements;
@property(nonatomic) _Bool hasRequestedLegacyNowPlayingInfo; // @synthesize hasRequestedLegacyNowPlayingInfo=_hasRequestedLegacyNowPlayingInfo;
@property(nonatomic) _Bool keepAlive; // @synthesize keepAlive=_keepAlive;
@property(nonatomic) unsigned int outputDeviceDiscoveryMode; // @synthesize outputDeviceDiscoveryMode=_outputDeviceDiscoveryMode;
@property(nonatomic) unsigned int routeDiscoveryMode; // @synthesize routeDiscoveryMode=_routeDiscoveryMode;
@property(readonly, nonatomic) unsigned long long routeDiscoveryCount; // @synthesize routeDiscoveryCount=_routeDiscoveryCount;
@property(retain, nonatomic) NSDate *canBeNowPlayingTimestamp; // @synthesize canBeNowPlayingTimestamp=_canBeNowPlayingTimestamp;
@property(nonatomic) unsigned int hardwareRemoteBehavior; // @synthesize hardwareRemoteBehavior=_hardwareRemoteBehavior;
@property(nonatomic) _Bool canBeNowPlayingApplication; // @synthesize canBeNowPlayingApplication=_canBeNowPlayingApplication;
@property(retain, nonatomic) MRDTaskAssertion *currentTaskAssertion; // @synthesize currentTaskAssertion=_currentTaskAssertion;
@property(readonly, nonatomic) MRXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) __weak id <MRDMediaRemoteClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MRDXPCMessageHandling> messageHandler; // @synthesize messageHandler=_messageHandler;
- (void).cxx_destruct;
- (id)_createNotificationMessage:(id)arg1 userInfo:(id)arg2;
- (id)_runAssertionName;
- (void)_invalidate;
- (void)_handleXPCMessage:(id)arg1;
- (id)createNowPlayingClient;
- (_Bool)hasRegisteredCustomOrigin:(id)arg1;
- (void)removeRegisteredCustomOrigin:(id)arg1;
- (void)addRegisteredCustomOrigin:(id)arg1;
- (id)registeredCustomOrigins;
- (void)relayXPCMessage:(id)arg1 andReply:(_Bool)arg2 resultCallback:(CDUnknownBlockType)arg3;
- (void)relayXPCMessage:(id)arg1 andReply:(_Bool)arg2;
- (void)sendRemoteControlCommand:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)postNotification:(id)arg1;
@property(copy, nonatomic) NSArray *applicationPickedRoutes;
@property(readonly, nonatomic) _Bool isActive;
- (_Bool)isEqual:(id)arg1;
- (id)debugDescription;
- (id)description;
@property(readonly, nonatomic) NSString *displayName;
- (id)processName;
@property(readonly, nonatomic) NSString *bundleIdentifier;
@property(readonly, nonatomic) int pid;
- (id)initWithConnection:(id)arg1;

@end

