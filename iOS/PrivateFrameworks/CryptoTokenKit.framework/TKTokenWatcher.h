//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CryptoTokenKit/TKProtocolTokenWatcher-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSXPCConnection, NSXPCListenerEndpoint;

@interface TKTokenWatcher : NSObject <TKProtocolTokenWatcher>
{
    NSXPCConnection *_connection;
    NSMutableArray *_tokenIDs;
    NSMutableDictionary *_removalHandlers;
    CDUnknownBlockType _insertionHandler;
}

- (void).cxx_destruct;
@property(readonly) NSXPCListenerEndpoint *endpoint;
@property(readonly) NSArray *tokenIDs;
- (void)removedToken:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)insertedToken:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)addRemovalHandler:(CDUnknownBlockType)arg1 forTokenID:(id)arg2;
- (void)setInsertionHandler:(CDUnknownBlockType)arg1;
- (void)setupWithConnection:(id)arg1;
- (id)initWithInsertionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithEndpoint:(id)arg1;
- (id)init;
- (id)initWithConnection:(id)arg1;

@end

