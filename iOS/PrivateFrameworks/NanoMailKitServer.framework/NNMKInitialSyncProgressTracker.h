//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol NNMKInitialSyncProgressTrackerDelegate, NNMKSyncStateManager, OS_dispatch_queue;

@interface NNMKInitialSyncProgressTracker : NSObject
{
    _Bool _trackingInitialSync;
    _Bool _isWaitingForAccounts;
    _Bool _isWaitingForMessageHeaders;
    _Bool _isWaitingForMessageContent;
    _Bool _timeoutCanceledForAccounts;
    _Bool _timeoutCanceledForMessageHeaders;
    _Bool _timeoutCanceledForMessageContent;
    id <NNMKInitialSyncProgressTrackerDelegate> _delegate;
    id <NNMKSyncStateManager> _syncStateManager;
    NSObject<OS_dispatch_queue> *_executionQueue;
    double _initialSyncProgress;
    unsigned long long _initialSyncMessagesCount;
    NSMutableSet *_initialSyncMessageIdsToSyncContent;
    NSMutableSet *_initialSyncMessageIdsOfContentToAck;
}

+ (double)syncTimeout;
@property(nonatomic) _Bool timeoutCanceledForMessageContent; // @synthesize timeoutCanceledForMessageContent=_timeoutCanceledForMessageContent;
@property(nonatomic) _Bool timeoutCanceledForMessageHeaders; // @synthesize timeoutCanceledForMessageHeaders=_timeoutCanceledForMessageHeaders;
@property(nonatomic) _Bool timeoutCanceledForAccounts; // @synthesize timeoutCanceledForAccounts=_timeoutCanceledForAccounts;
@property(nonatomic) _Bool isWaitingForMessageContent; // @synthesize isWaitingForMessageContent=_isWaitingForMessageContent;
@property(nonatomic) _Bool isWaitingForMessageHeaders; // @synthesize isWaitingForMessageHeaders=_isWaitingForMessageHeaders;
@property(nonatomic) _Bool isWaitingForAccounts; // @synthesize isWaitingForAccounts=_isWaitingForAccounts;
@property(retain, nonatomic) NSMutableSet *initialSyncMessageIdsOfContentToAck; // @synthesize initialSyncMessageIdsOfContentToAck=_initialSyncMessageIdsOfContentToAck;
@property(retain, nonatomic) NSMutableSet *initialSyncMessageIdsToSyncContent; // @synthesize initialSyncMessageIdsToSyncContent=_initialSyncMessageIdsToSyncContent;
@property(nonatomic) unsigned long long initialSyncMessagesCount; // @synthesize initialSyncMessagesCount=_initialSyncMessagesCount;
@property(nonatomic) double initialSyncProgress; // @synthesize initialSyncProgress=_initialSyncProgress;
@property(nonatomic) _Bool trackingInitialSync; // @synthesize trackingInitialSync=_trackingInitialSync;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *executionQueue; // @synthesize executionQueue=_executionQueue;
@property(retain, nonatomic) id <NNMKSyncStateManager> syncStateManager; // @synthesize syncStateManager=_syncStateManager;
@property(nonatomic) __weak id <NNMKInitialSyncProgressTrackerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)initialSyncTimedOut;
- (void)resetFlags;
- (void)cancelTimeout;
- (void)startSyncTimeoutForMessageContent;
- (void)startSyncTimeoutForMessageHeaders;
- (void)startSyncTimeoutForAccounts;
@property(readonly, nonatomic) _Bool isTrackingInitialSync;
- (void)_handleInitialSyncCompleted;
- (void)incrementProgressBy:(double)arg1;
- (void)syncFailedWithError:(id)arg1;
- (void)syncCompleted;
- (void)finishedSendingInitialSyncContentToPairedDevice;
- (void)updateProgressWithContentCompletelySyncedForMessageId:(id)arg1;
- (void)updateProgressWithMessageContentDownloadFailed:(id)arg1;
- (void)updateProgressWithMessageContentArrivedInPairedDevice:(id)arg1;
- (void)updateProgressWithMessageHeadersArrivedInPairedDevice;
- (void)updateProgressWithMessageHeadersSent:(id)arg1;
- (void)updateProgressWithAccountsArrivedInPairedDevice;
- (void)updateProgressWithAccountsSent;
- (void)startTrackingInitialSync;

@end

