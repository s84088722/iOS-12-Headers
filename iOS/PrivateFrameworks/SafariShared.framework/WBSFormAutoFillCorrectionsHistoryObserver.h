//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, WBSCrowdsourcedFeedbackDomainNormalizer;
@protocol OS_dispatch_queue, OS_dispatch_source, WBSFormAutoFillCorrectionsStore;

@interface WBSFormAutoFillCorrectionsHistoryObserver : NSObject
{
    NSMutableArray *_pendingRemovedHistoryItemsToProcess;
    NSMutableArray *_pendingRemovedHistoryVisitsToProcess;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSObject<OS_dispatch_source> *_coalescingTimerSource;
    WBSCrowdsourcedFeedbackDomainNormalizer *_domainNormalizer;
    id <WBSFormAutoFillCorrectionsStore> _correctionsStore;
}

- (void).cxx_destruct;
- (void)_updateCorrectionsStoreNow;
- (id)_normalizeURL:(id)arg1;
- (void)_updateCorrectionsStoreSoon;
- (void)_invalidateUpdateCoalescingTimer;
- (void)_historyWasCleared:(id)arg1;
- (void)_historyVisitsWereRemoved:(id)arg1;
- (void)_historyItemsWereRemoved:(id)arg1;
- (void)flushPendingChangesAndDisconnectFromStoreAndHistory;
- (void)dealloc;
- (id)initWithCorrectionsStore:(id)arg1;

@end

