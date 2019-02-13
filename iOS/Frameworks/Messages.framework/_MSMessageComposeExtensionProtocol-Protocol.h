//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Messages/NSObject-Protocol.h>

@class MSMessage, NSDictionary, NSNumber, NSString, NSValue, _MSConversationState, _MSPresentationState;

@protocol _MSMessageComposeExtensionProtocol <NSObject>
- (void)_volumeButtonPressed:(_Bool)arg1;
- (void)_didRemoveAssetArchiveWithIdentifier:(NSString *)arg1;
- (void)_prepareForPresentationWithCompletionHandler:(void (^)(_Bool))arg1;
- (void)_handleTextInputPayload:(NSDictionary *)arg1 withPayloadID:(NSString *)arg2 completion:(void (^)(_Bool))arg3;
- (void)endDisablingUserInteraction;
- (void)beginDisablingUserInteraction;
- (void)_hostDidBeginDeferredTeardown;
- (void)_requestSnapshotWithCompletion:(void (^)(NSData *))arg1;
- (void)_didCancelSendingMessage:(MSMessage *)arg1 conversationState:(_MSConversationState *)arg2;
- (void)_didStartSendingMessage:(MSMessage *)arg1 conversationState:(_MSConversationState *)arg2;
- (void)_didReceiveMessage:(MSMessage *)arg1 conversationState:(_MSConversationState *)arg2;
- (void)_presentationDidChangeToPresentationState:(_MSPresentationState *)arg1;
- (void)_presentationWillChangeToPresentationState:(_MSPresentationState *)arg1;
- (void)_conversationDidChangeWithConversationState:(_MSConversationState *)arg1;
- (void)_requestContentSizeThatFits:(NSValue *)arg1 presentationStyle:(NSNumber *)arg2 completionHandler:(void (^)(struct CGSize))arg3;
- (void)_canSendMessage:(MSMessage *)arg1 conversationState:(_MSConversationState *)arg2 associatedText:(NSString *)arg3 completion:(void (^)(_Bool, MSMessage *, NSString *))arg4;
- (void)_resignActive;
- (void)_becomeActiveWithConversationState:(_MSConversationState *)arg1 presentationState:(_MSPresentationState *)arg2;
@end

