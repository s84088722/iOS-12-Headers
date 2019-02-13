//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FMCore/APSConnectionDelegate-Protocol.h>

@class APSConnection, NSMutableArray, NSString;

@interface FMAPSHandler : NSObject <APSConnectionDelegate>
{
    _Bool _registerForDarkWake;
    _Bool _registrationsSuspended;
    APSConnection *_apsConnection;
    NSMutableArray *_registeredDelegates;
    NSMutableArray *_pendingPushes;
    NSString *_environmentName;
}

+ (id)constantForEnvironmentString:(id)arg1;
@property(nonatomic) _Bool registrationsSuspended; // @synthesize registrationsSuspended=_registrationsSuspended;
@property(retain, nonatomic) NSString *environmentName; // @synthesize environmentName=_environmentName;
@property(retain, nonatomic) NSMutableArray *pendingPushes; // @synthesize pendingPushes=_pendingPushes;
@property(retain, nonatomic) NSMutableArray *registeredDelegates; // @synthesize registeredDelegates=_registeredDelegates;
@property(retain, nonatomic) APSConnection *apsConnection; // @synthesize apsConnection=_apsConnection;
@property(nonatomic) _Bool registerForDarkWake; // @synthesize registerForDarkWake=_registerForDarkWake;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)_setEnabledTopics:(id)arg1;
- (void)_handleMessage:(id)arg1 onTopic:(id)arg2;
- (void)_registrationsWereResumed;
@property(readonly, nonatomic) NSString *apsToken;
- (void)deregisterDelegate:(id)arg1;
- (void)registerDelegate:(id)arg1 forTopic:(id)arg2;
- (void)resumeRegistrations;
- (void)suspendRegistrations;
- (void)invalidate;
- (void)dealloc;
- (id)initWithEnvironmentName:(id)arg1 launchOnDemandPort:(id)arg2;
- (id)initWithEnvironmentName:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

