//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HearingCore/HCServer.h>

@class NSLock, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface RTTServer : HCServer
{
    NSLock *_dataResponseBlocksLock;
    NSMutableDictionary *_databaseResponseBlocks;
    NSObject<OS_dispatch_queue> *_commonRequestQueue;
    CDUnknownBlockType _actionCompletionBlock;
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType actionCompletionBlock; // @synthesize actionCompletionBlock=_actionCompletionBlock;
- (void).cxx_destruct;
- (void)setTTYDictionaryAvailability:(_Bool)arg1;
- (id)valueForTTYSetting:(id)arg1;
- (_Bool)contactIsTTYContact:(id)arg1;
- (_Bool)deleteConversationWithCallUID:(id)arg1;
- (void)registerForUpdates:(CDUnknownBlockType)arg1 forCallUID:(id)arg2;
- (void)sendString:(id)arg1 forCallUID:(id)arg2;
- (void)findConversationForCallUID:(id)arg1 andResult:(CDUnknownBlockType)arg2;
- (void)registerResponseBlock:(CDUnknownBlockType)arg1 forUUID:(id)arg2;
- (void)setShouldSuppressIncomingNotification:(_Bool)arg1;
- (void)cancelCallPromptDisplay;
- (void)displayCallPromptForContact:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)handleMessageError:(id)arg1 destructive:(_Bool)arg2;
- (void)handleMessageWithPayload:(id)arg1 forIdentifier:(unsigned long long)arg2;
- (void)_managerAXPIDState:(_Bool)arg1;
- (void)resetConnection;
- (void)dealloc;
- (id)init;

@end

