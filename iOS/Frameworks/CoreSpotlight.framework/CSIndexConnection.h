//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSpotlight/CSXPCConnection.h>

@class NSMutableDictionary;

@interface CSIndexConnection : CSXPCConnection
{
    _Bool _previouslyInitialized;
    NSMutableDictionary *_indexMap;
}

+ (id)sharedConnection;
@property(readonly, nonatomic) _Bool previouslyInitialized; // @synthesize previouslyInitialized=_previouslyInitialized;
@property(readonly, nonatomic) NSMutableDictionary *indexMap; // @synthesize indexMap=_indexMap;
- (void).cxx_destruct;
- (void)sendMessageAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)indexForID:(unsigned int)arg1;
- (void)addIndex:(id)arg1 forID:(unsigned int)arg2;
- (void)dropIndexID:(unsigned int)arg1;
- (void)handleReply:(id)arg1;
- (void)handleError:(id)arg1;

@end

