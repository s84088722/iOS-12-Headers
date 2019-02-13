//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ODRDeveloperToolsProtocol-Protocol.h"

@class NSString;

@interface ODRDeveloperToolsClient : NSObject <ODRDeveloperToolsProtocol>
{
}

- (void)setSimulatedBandwidth:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)getSimulatedBandwidthWithReply:(CDUnknownBlockType)arg1;
- (void)registerManifest:(id)arg1 forBundleID:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (void)purgeTagWithName:(id)arg1 inBundleWithID:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (void)purgeAllTagsInBundleWithID:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)tagStatusForBundle:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (id)initWithConnection:(id)arg1;
- (id)interface;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

