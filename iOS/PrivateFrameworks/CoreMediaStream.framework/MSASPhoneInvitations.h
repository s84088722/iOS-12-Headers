//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMediaStream/IDSServiceDelegate-Protocol.h>

@class IDSService, MSASAlbum, MSASStateMachine, NSMutableDictionary, NSString;

@interface MSASPhoneInvitations : NSObject <IDSServiceDelegate>
{
    MSASStateMachine *_stateMachine;
    MSASAlbum *_album;
    IDSService *_idsService;
    NSMutableDictionary *_sendMessageIdentifierToPhone;
}

@property(retain, nonatomic) NSMutableDictionary *sendMessageIdentifierToPhone; // @synthesize sendMessageIdentifierToPhone=_sendMessageIdentifierToPhone;
@property(retain, nonatomic) IDSService *idsService; // @synthesize idsService=_idsService;
@property(retain, nonatomic) MSASAlbum *album; // @synthesize album=_album;
@property(retain, nonatomic) MSASStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
- (void).cxx_destruct;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (void)removeSharingRelationships:(id)arg1 forAlbum:(id)arg2;
- (void)addPendingPhoneInvitations:(id)arg1 toOwnedAlbum:(id)arg2 inStateMachin:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

