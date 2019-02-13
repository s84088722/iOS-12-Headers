//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSpotlight/CSXPCConnection.h>

@class NSMutableDictionary;
@protocol MDIndexer;

@interface CSSearchAgent : CSXPCConnection
{
    id <MDIndexer> _indexer;
    NSMutableDictionary *_searchConnections;
}

+ (id)searchAgent;
+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *searchConnections; // @synthesize searchConnections=_searchConnections;
@property(retain, nonatomic) id <MDIndexer> indexer; // @synthesize indexer=_indexer;
- (void).cxx_destruct;
- (_Bool)handleCommand:(const char *)arg1 info:(id)arg2 connection:(id)arg3;
- (void)handleEngagement:(id)arg1 forConnection:(id)arg2;
- (void)startSimpleQuery:(id)arg1;
- (void)cancelSimpleQuery:(id)arg1;
- (void)startQuery:(id)arg1;
- (void)cancelQuery:(id)arg1;
- (id)searchConnection:(id)arg1;
- (_Bool)lostClientConnection:(id)arg1 error:(id)arg2;
- (_Bool)addClientConnectionIfAllowedForConnection:(id)arg1;
- (_Bool)addClientConnectionIfAllowedForConfiguration:(id)arg1;

@end
