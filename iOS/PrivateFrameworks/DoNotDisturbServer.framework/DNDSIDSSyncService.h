//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSSyncService-Protocol.h>
#import <DoNotDisturbServer/IDSServiceDelegate-Protocol.h>

@class IDSDevice, IDSService, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface DNDSIDSSyncService : NSObject <IDSServiceDelegate, DNDSSyncService>
{
    Class _recordClass;
    unsigned long long _versionNumber;
    NSObject<OS_dispatch_queue> *_queue;
    IDSService *_syncService;
    IDSDevice *_activePairedDevice;
    NSHashTable *_updateListeners;
}

- (void).cxx_destruct;
- (void)_queue_handleIncomingMessage:(id)arg1 sourceIdentifier:(id)arg2;
- (_Bool)_queue_sendRecordToRemotes:(id)arg1 error:(id *)arg2;
- (void)_queue_resume;
- (void)service:(id)arg1 didSwitchActivePairedDevice:(id)arg2 acknowledgementBlock:(CDUnknownBlockType)arg3;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)removeUpdateListener:(id)arg1;
- (void)addUpdateListener:(id)arg1;
- (void)sendRecordToRemotes:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)resume;
- (id)initWithRecordClass:(Class)arg1 versionNumber:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

