//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXWebContentMessageHandler-Protocol.h>
#import <Silex/SXWebContentTimeoutManager-Protocol.h>

@class NFStateMachine, NSMutableArray, NSString, NSTimer;

@interface SXWebContentTimeoutManager : NSObject <SXWebContentMessageHandler, SXWebContentTimeoutManager>
{
    NSMutableArray *_timeoutBlocks;
    NFStateMachine *_stateMachine;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) NFStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(readonly, nonatomic) NSMutableArray *timeoutBlocks; // @synthesize timeoutBlocks=_timeoutBlocks;
- (void).cxx_destruct;
- (void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2;
- (void)onTimeout:(CDUnknownBlockType)arg1;
- (id)initWithTimeout:(double)arg1 messageHandlerManager:(id)arg2 documentStateProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

