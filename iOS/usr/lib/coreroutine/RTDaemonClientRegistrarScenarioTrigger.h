//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <coreroutine/RTDaemonClientRegistrar.h>

#import <coreroutine/NSSecureCoding-Protocol.h>
#import <coreroutine/RTDaemonClientRegistrarProtocol-Protocol.h>

@class NSMutableDictionary, NSObject, NSString, RTInvocationDispatcher, RTScenarioTriggerManager;
@protocol OS_dispatch_queue, RTDaemonClientRegistrarScenarioTriggerProtocol;

@interface RTDaemonClientRegistrarScenarioTrigger : RTDaemonClientRegistrar <NSSecureCoding, RTDaemonClientRegistrarProtocol>
{
    unsigned long long _monitoredScenarioTriggerTypes;
    id <RTDaemonClientRegistrarScenarioTriggerProtocol> _delegate;
    NSMutableDictionary *_pendingScenarioInvocations;
    RTScenarioTriggerManager *_scenarioTriggerManager;
    RTInvocationDispatcher *_dispatcher;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) RTInvocationDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(retain, nonatomic) RTScenarioTriggerManager *scenarioTriggerManager; // @synthesize scenarioTriggerManager=_scenarioTriggerManager;
@property(retain, nonatomic) NSMutableDictionary *pendingScenarioInvocations; // @synthesize pendingScenarioInvocations=_pendingScenarioInvocations;
@property(nonatomic) __weak id <RTDaemonClientRegistrarScenarioTriggerProtocol> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long monitoredScenarioTriggerTypes; // @synthesize monitoredScenarioTriggerTypes=_monitoredScenarioTriggerTypes;
- (void).cxx_destruct;
- (_Bool)registered;
- (_Bool)invocationsPending;
- (long long)countOfPendingInvocations;
- (void)addPendingScenarioTriggerBlock:(CDUnknownBlockType)arg1 failBlock:(CDUnknownBlockType)arg2 description:(id)arg3;
- (void)_logMonitoredScenarioTriggers:(unsigned long long)arg1;
- (void)stopMonitoringForScenarioTriggerType:(unsigned long long)arg1;
- (void)_onScenarioTriggerManagerNotification:(id)arg1;
- (void)onScenarioTriggerManagerNotification:(id)arg1;
- (void)startMonitoringForScenarioTriggerType:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithScenarioTriggerManager:(id)arg1 queue:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

