//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreBookkeeper/SBKRequestHandler.h>

#import <StoreBookkeeper/SBKSyncTransactionProcessing-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSObject, NSString, SBKSyncResponseData, SBKTransactionController;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SBKSyncRequestHandler : SBKRequestHandler <SBKSyncTransactionProcessing>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_overrideResponseDomainVersion;
    SBKSyncResponseData *_responseData;
    NSMutableArray *_responseUpdatedKeys;
    NSMutableArray *_responseDeletedKeys;
    NSMutableArray *_responseConflictedKeys;
    NSMutableDictionary *_responseDataByKey;
    SBKTransactionController *_transactionController;
}

+ (long long)conflictDetectionType;
@property(readonly) SBKTransactionController *transactionController; // @synthesize transactionController=_transactionController;
@property(readonly) SBKSyncResponseData *responseData; // @synthesize responseData=_responseData;
- (void).cxx_destruct;
- (id)transaction:(id)arg1 keyValuePairForUpdatedKey:(id)arg2;
- (void)transaction:(id)arg1 processDeletedKey:(id)arg2 isDirty:(_Bool *)arg3;
- (void)transaction:(id)arg1 processUpdatedKey:(id)arg2 data:(id)arg3 conflict:(_Bool)arg4 isDirty:(_Bool *)arg5;
- (void)transaction:(id)arg1 didProcessResponseData:(id)arg2;
- (void)transaction:(id)arg1 willProcessResponseData:(id)arg2;
- (void)startTransactionWithSyncAnchor:(id)arg1 keysToUpdate:(id)arg2 keysToDelete:(id)arg3 finishedBlock:(CDUnknownBlockType)arg4;
- (void)clearTransactionResponseData;
- (void)_onQueue_clearTransactionResponseData;
- (id)responseDataForResponseKey:(id)arg1;
@property(readonly) NSArray *responseConflictedKeys; // @synthesize responseConflictedKeys=_responseConflictedKeys;
@property(readonly) NSArray *responseDeletedKeys; // @synthesize responseDeletedKeys=_responseDeletedKeys;
@property(readonly) NSArray *responseUpdatedKeys; // @synthesize responseUpdatedKeys=_responseUpdatedKeys;
@property(copy) NSString *responseDomainVersion;
- (id)initWithBagContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

