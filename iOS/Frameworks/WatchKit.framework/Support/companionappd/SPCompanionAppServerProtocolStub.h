//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPRemoteInterfaceProtocol-Protocol.h"

@class NSString;

@interface SPCompanionAppServerProtocolStub : NSObject <SPRemoteInterfaceProtocol>
{
}

- (void)replyTimingData:(id)arg1;
- (void)layoutDirection:(long long)arg1;
- (void)preferredContentSizeCategory:(id)arg1;
- (void)dataInterfaceWillResignActive:(id)arg1;
- (void)dataInterfaceDidBecomeActive:(id)arg1;
- (void)applicationDidReceiveNotification:(id)arg1 clientIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)applicationHandleWatchTaskKeys:(id)arg1 reasonForSnapshot:(unsigned long long)arg2 visibleVCID:(id)arg3 barTaskUUID:(id)arg4 clientIdentifier:(id)arg5;
- (void)applicationIsStillActive;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidFinishConnecting:(id)arg1;
- (void)applicationContentsDidReset:(id)arg1;
- (void)applicationDidTerminate:(id)arg1;
- (void)receiveProtoData:(id)arg1 fromIdentifier:(id)arg2;
- (void)receiveData:(id)arg1 fromIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

