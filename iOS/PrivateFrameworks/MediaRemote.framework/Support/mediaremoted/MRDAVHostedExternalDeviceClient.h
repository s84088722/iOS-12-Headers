//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MRAVDistantExternalDeviceClientProtocol-Protocol.h"

@class NSString, NSXPCConnection;

@interface MRDAVHostedExternalDeviceClient : NSObject <MRAVDistantExternalDeviceClientProtocol>
{
    unsigned int _connectionState;
    NSXPCConnection *_connection;
    unsigned long long _registeredCallbacks;
    unsigned long long _notifications;
    NSString *_processName;
}

@property(readonly, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(nonatomic) unsigned int connectionState; // @synthesize connectionState=_connectionState;
@property(nonatomic) unsigned long long notifications; // @synthesize notifications=_notifications;
@property(nonatomic) unsigned long long registeredCallbacks; // @synthesize registeredCallbacks=_registeredCallbacks;
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)hostedExternalDeviceEndpointDidChange:(id)arg1;
- (void)hostedExternalDeviceVolumeDidChange:(float)arg1 forEndpointWithIdentifier:(id)arg2 forOutputDeviceWithIdentifier:(id)arg3;
- (void)hostedExternalDeviceDidReceiveCustomData:(id)arg1 withName:(id)arg2;
- (void)hostedExternalDeviceNameDidChange:(id)arg1;
- (void)hostedExternalDeviceConnectionStateDidChange:(unsigned int)arg1 withError:(id)arg2;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

