//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Social/NSXPCListenerDelegate-Protocol.h>

@class NSArray, NSString, NSXPCInterface, NSXPCListener, Protocol;

@interface SLServiceListener : NSObject <NSXPCListenerDelegate>
{
    Class _sessionClass;
    Protocol *_serviceProtocol;
    NSXPCInterface *_clientInterface;
    NSXPCListener *_listener;
    NSString *_persistentStoreName;
    NSString *_managedObjectModelPath;
    NSArray *_allowedEntitlements;
    NSString *_serviceName;
}

@property(retain) NSString *managedObjectModelPath; // @synthesize managedObjectModelPath=_managedObjectModelPath;
@property(retain) NSString *persistentStoreName; // @synthesize persistentStoreName=_persistentStoreName;
@property(retain) NSXPCInterface *clientInterface; // @synthesize clientInterface=_clientInterface;
@property(retain) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void).cxx_destruct;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (_Bool)_verifyAuthorizationForConnection:(id)arg1;
- (void)beginAcceptingConnections;
- (void)restrictToClientsWithEntitlements:(id)arg1;
- (id)initWithExportedSessionClass:(Class)arg1 serviceProtocol:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

