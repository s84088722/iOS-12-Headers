//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface TransactionStore : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    unsigned long long _handle;
    long long _holdTime;
    NSCountedSet *_transactionCount;
    NSMutableDictionary *_transactionStore;
}

+ (void)releaseKeepAliveTransaction:(id)arg1;
+ (void)takeKeepAliveTransaction:(id)arg1;
+ (void)holdKeepAliveTransaction:(id)arg1 whilePerformingBlock:(CDUnknownBlockType)arg2;
+ (id)globalStore;
- (void).cxx_destruct;
- (void)releaseKeepAliveTransaction:(id)arg1;
- (void)takeKeepAliveTransaction:(id)arg1;
- (void)holdKeepAliveTransaction:(id)arg1 whilePerformingBlock:(CDUnknownBlockType)arg2;
@property(readonly) unsigned long long transactionCount;
@property(readonly, copy) NSCountedSet *activeTransactions;
- (void)dealloc;
- (id)initWithHoldTime:(double)arg1;
- (id)init;

@end

