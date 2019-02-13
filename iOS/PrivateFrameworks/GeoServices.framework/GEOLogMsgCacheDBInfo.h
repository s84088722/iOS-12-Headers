//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface GEOLogMsgCacheDBInfo : NSObject
{
    NSString *_databaseFilePath;
    struct sqlite3 *_databaseHandle;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    void *_databaseQueueIdentityKey;
    void *_databaseQueueIdentityValue;
    NSObject<OS_dispatch_source> *_logMessageCacheTransactionTimer;
    _Bool _logMessageCacheTransactionPending;
    long long _pendingLogMessageCount;
}

- (void).cxx_destruct;
- (id)initWithQueueName:(const char *)arg1 queueId:(const char *)arg2;

@end

