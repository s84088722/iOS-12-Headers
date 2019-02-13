//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString, NWEndpoint, NWParameters;
@protocol NWTCPListenerDelegate, OS_nw_listener;

@interface NWTCPListener : NSObject
{
    NWEndpoint *_localEndpoint;
    NSError *_error;
    NSObject<OS_nw_listener> *_internalListener;
    NWParameters *_parameters;
    NWEndpoint *_endpoint;
    NSString *_launchdKey;
    id <NWTCPListenerDelegate> _delegate;
}

@property __weak id <NWTCPListenerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSString *launchdKey; // @synthesize launchdKey=_launchdKey;
@property(retain) NWEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(retain) NWParameters *parameters; // @synthesize parameters=_parameters;
@property(retain) NSObject<OS_nw_listener> *internalListener; // @synthesize internalListener=_internalListener;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) NWEndpoint *localEndpoint; // @synthesize localEndpoint=_localEndpoint;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithBonjourServiceEndpoint:(id)arg1 parameters:(id)arg2 delegate:(id)arg3;
- (id)initWithParameters:(id)arg1 delegate:(id)arg2;
- (id)initWithLaunchdKey:(id)arg1 parameters:(id)arg2 delegate:(id)arg3;
- (id)initWithParameters:(id)arg1 delegate:(id)arg2 launchdKey:(id)arg3 bonjourEndpoint:(id)arg4;
- (void)startInternal;
- (void)handleError:(id)arg1;
- (void)handleNewConnection:(id)arg1;

@end

