//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_os_transaction;

__attribute__((visibility("hidden")))
@interface MNXPCTransactionManager : NSObject
{
    NSObject<OS_os_transaction> *_xpcTransaction;
    NSHashTable *_requesters;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)removeHighMemoryThresholdRequest:(id)arg1 afterDelay:(double)arg2;
- (void)addHighMemoryThresholdRequest:(id)arg1;

@end

