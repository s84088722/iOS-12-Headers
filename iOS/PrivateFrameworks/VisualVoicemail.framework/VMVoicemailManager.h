//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VisualVoicemail/VMClientXPCProtocol-Protocol.h>

@class NSArray, NSMutableSet, NSOrderedSet, NSProgress, NSString, VMClientWrapper, VMVoicemailCapabilities;
@protocol OS_dispatch_queue, VMServerXPCProtocol;

@interface VMVoicemailManager : NSObject <VMClientXPCProtocol>
{
    _Bool _messageWaiting;
    _Bool _online;
    _Bool _subscribed;
    _Bool _syncInProgress;
    _Bool _transcribing;
    _Bool _canChangePassword;
    _Bool _canChangeGreeting;
    _Bool _mailboxRequiresSetup;
    _Bool _transcriptionEnabled;
    struct os_unfair_lock_s _accessorLock;
    int _token;
    NSArray *_accounts;
    NSObject<OS_dispatch_queue> *_completionQueue;
    unsigned long long _storageUsage;
    NSProgress *_transcriptionProgress;
    NSOrderedSet *_voicemails;
    NSMutableSet *_trashedMessages;
    NSObject<OS_dispatch_queue> *_serialDispatchQueue;
    VMVoicemailCapabilities *_capabilities;
    VMClientWrapper *_client;
}

@property(retain, nonatomic) VMClientWrapper *client; // @synthesize client=_client;
@property(retain, nonatomic) VMVoicemailCapabilities *capabilities; // @synthesize capabilities=_capabilities;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialDispatchQueue; // @synthesize serialDispatchQueue=_serialDispatchQueue;
@property(nonatomic) int token; // @synthesize token=_token;
@property(retain, nonatomic) NSMutableSet *trashedMessages; // @synthesize trashedMessages=_trashedMessages;
@property(copy, nonatomic) NSOrderedSet *voicemails; // @synthesize voicemails=_voicemails;
@property(readonly, nonatomic) struct os_unfair_lock_s accessorLock; // @synthesize accessorLock=_accessorLock;
@property(readonly, nonatomic) NSProgress *transcriptionProgress; // @synthesize transcriptionProgress=_transcriptionProgress;
@property(nonatomic) unsigned long long storageUsage; // @synthesize storageUsage=_storageUsage;
@property(readonly, nonatomic, getter=isTranscriptionEnabled) _Bool transcriptionEnabled; // @synthesize transcriptionEnabled=_transcriptionEnabled;
@property(readonly, nonatomic) _Bool mailboxRequiresSetup; // @synthesize mailboxRequiresSetup=_mailboxRequiresSetup;
@property(readonly, nonatomic) _Bool canChangeGreeting; // @synthesize canChangeGreeting=_canChangeGreeting;
@property(readonly, nonatomic) _Bool canChangePassword; // @synthesize canChangePassword=_canChangePassword;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
- (void).cxx_destruct;
- (void)saveGreeting:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)changePassword:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setGreeting:(id)arg1 forAccountUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)greetingForAccountUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (double)maximumGreetingDurationForAccountUUID:(id)arg1;
- (_Bool)isGreetingChangeSupportedForAccountUUID:(id)arg1;
- (oneway void)updateAccounts:(id)arg1;
- (void)setPasscode:(id)arg1 forAccountUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)maximumPasscodeLengthForAccountUUID:(id)arg1;
- (long long)minimumPasscodeLengthForAccountUUID:(id)arg1;
- (_Bool)isPasscodeChangeSupportedForAccountUUID:(id)arg1;
@property(copy, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
- (void)performAtomicAccessorBlock:(CDUnknownBlockType)arg1;
- (void)performSynchronousBlock:(CDUnknownBlockType)arg1;
- (void)obliterate;
@property(nonatomic, getter=isSyncInProgress) _Bool syncInProgress; // @synthesize syncInProgress=_syncInProgress;
@property(nonatomic, getter=isMessageWaiting) _Bool messageWaiting; // @synthesize messageWaiting=_messageWaiting;
@property(nonatomic, getter=isSubscribed) _Bool subscribed; // @synthesize subscribed=_subscribed;
@property(nonatomic, getter=isTranscribing) _Bool transcribing; // @synthesize transcribing=_transcribing;
@property(nonatomic, getter=isOnline) _Bool online; // @synthesize online=_online;
- (void)voicemailsUpdated:(id)arg1;
- (id)removeVoicemailsFromTrash:(id)arg1;
- (id)removeVoicemailFromTrash:(id)arg1;
- (id)trashVoicemails:(id)arg1;
- (id)trashVoicemail:(id)arg1;
- (id)markVoicemailsAsRead:(id)arg1;
- (id)markVoicemailAsRead:(id)arg1;
- (id)deleteVoicemails:(id)arg1;
- (id)deleteVoicemail:(id)arg1;
- (id)uniqueIdentifierForVoiceMail:(id)arg1;
- (unsigned long long)countOfVoicemailsPassingTest:(CDUnknownBlockType)arg1;
- (id)voicemailsPassingTest:(CDUnknownBlockType)arg1;
- (id)dataForVoicemailWithIdentifier:(unsigned long long)arg1;
- (id)voicemailWithIdentifier:(unsigned long long)arg1;
@property(readonly, nonatomic) long long unreadCount;
@property(readonly, nonatomic) NSArray *allVoicemails;
- (void)retrieveDataForVoicemail:(id)arg1;
- (void)synchronize;
- (void)_requestInitialStateIfNecessaryAndSendNotifications:(_Bool)arg1;
- (void)requestInitialStateIfNecessaryAndSendNotifications:(_Bool)arg1;
@property(readonly, nonatomic) id <VMServerXPCProtocol> serverConnection;
- (id)synchronousServerConnectionWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)serverConnectionWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithClient:(id)arg1;
- (id)init;
- (void)reportTranscriptionRatedAccurate:(_Bool)arg1 forVoicemail:(id)arg2;
- (void)reportTranscriptionProblemForVoicemail:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

