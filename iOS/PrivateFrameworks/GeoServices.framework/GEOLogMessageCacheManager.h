//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOLogMsgCacheDBInfo, NSDate, NSMutableArray, NSString;

@interface GEOLogMessageCacheManager : NSObject
{
    NSString *_logMessageCacheFilePath;
    GEOLogMsgCacheDBInfo *_logMsgCacheDBInfo;
    long long _numberOfLogMessagesInCache;
    NSString *_policyIdentifier;
    NSString *_adaptorId;
    int _supportedLogMessageType;
    _Bool _fromLogFrameworkAdaptor;
    long long _logMessageCacheIterator;
    long long _logMessageCacheEndIterator;
    NSMutableArray *_retrivedLogMessageCacheIds;
    long long _maxNumberOfLogMessagesAllowedInCache;
    long long _logMessagesOverflowPurgeSize;
    unsigned long long _encryptionType;
    _Bool _realtimeAdaptor;
    long long _cacheCountFlushThreshold;
    NSDate *_oldestLogMessageInCache;
}

+ (id)logMsgCacheDatabaseObjectForPolicyIdentity:(id)arg1;
@property(nonatomic) unsigned long long encryptionType; // @synthesize encryptionType=_encryptionType;
- (void).cxx_destruct;
- (void)_stopLogMessageCacheTransactionTimer;
- (void)_startLogMessageCacheTransactionTimer;
- (void)_rollbackLogMessageCacheTransaction;
- (void)_commitLogMessageCacheTransaction;
- (void)_beginLogMessageCacheTransaction;
- (void)_setLogMessageCacheDBJournalMode;
- (void)_updateLogMessageCacheDBUserVersion;
- (long long)_queryLogMessageCacheDBUserVersion;
- (void)_cleanupLogMessageCacheDatabase;
- (long long)_getNumberOfLogMessagesInCache;
- (long long)_retrieveEndLogMessageCacheIterator;
- (id)_groupIDOfNextPendingLogMessage;
- (id)_retrieveBatchOfLogMessagesLimitCount:(long long)arg1 limitSize:(long long)arg2;
- (int)_deleteFixedNumberOfOlderLogMessages:(long long)arg1;
- (int)_deleteAllExpiredLogMessages:(double)arg1;
- (void)_deleteExpiredLogMessageCacheDBFile:(double)arg1;
- (void)_addRetryCountColumnToTable;
- (void)_migrateDatabaseIfNeeded;
- (void)_migrateLogMessageCacheTableFromOldDatabase:(id)arg1;
- (void)_createTables;
- (_Bool)_executeSQL:(id)arg1;
- (void)_openCreateLogMessageCacheDBFile;
- (void)_openLogMessageCacheDBFile;
- (void)_cleanupPartiallyCreatedLogMessageCacheDBFile;
- (_Bool)_logMessageCacheFileExists;
- (int)_sqlite3_open_protection_flag;
- (_Bool)_encryptionEnabled;
- (_Bool)_usingInMemoryLogMessageCacheFile;
- (id)_updatedSQLQueryFromQuery:(id)arg1;
- (void)rollbackLogMessageCacheTransaction;
- (void)commitLogMessageCacheTransaction;
- (void)beginLogMessageCacheTransaction;
- (_Bool)shouldFlushLogMessageCache;
- (_Bool)isLogMessageCacheEmpty;
- (void)updateCurrentlyRetrievedLogMessagesRetryCount;
- (void)purgeAllLogMessagesFromCache;
- (void)purgeCurrentlyRetrievedLogMessagesFromCache;
- (void)purgeExpiredLogMessagesFromCache:(double)arg1;
- (void)closeLogMessageCache;
- (id)retrieveNextBatchOfLogMessagesWithLimitCount:(long long)arg1 limitSize:(long long)arg2;
- (id)retrieveFirstBatchOfLogMessagesWithLimitCount:(long long)arg1 limitSize:(long long)arg2;
- (void)resetLogMessageCacheIterator;
- (void)insertLogMessageIntoCache:(id)arg1;
- (void)openCreateLogMessageCache;
- (void)openLogMessageCache;
- (void)_setupWithLogMsgCacheFilePath:(id)arg1 policyIdentifier:(id)arg2 maxNumberOfLogMessagesAllowedInCache:(long long)arg3 logMessagesOverflowPurgeSize:(long long)arg4 encryptionType:(unsigned long long)arg5 realtimeAdaptor:(_Bool)arg6 cacheCountFlushThreshold:(long long)arg7 adaptorId:(id)arg8 supportedLogMessageType:(int)arg9 fromLogFrameworkAdaptor:(_Bool)arg10;
- (void)dealloc;
- (id)initWithLogMessageCacheFilePath:(id)arg1 policyIdentifier:(id)arg2 maxNumberOfLogMessagesAllowedInCache:(long long)arg3 logMessagesOverflowPurgeSize:(long long)arg4 encryptionType:(unsigned long long)arg5 realtimeAdaptor:(_Bool)arg6 cacheCountFlushThreshold:(long long)arg7 adaptorId:(id)arg8 supportedLogMessageType:(int)arg9 fromLogFrameworkAdaptor:(_Bool)arg10;
- (id)initWithLogMessageCacheDBInfo:(id)arg1 logMessageCacheFilePath:(id)arg2 policyIdentifier:(id)arg3 maxNumberOfLogMessagesAllowedInCache:(long long)arg4 logMessagesOverflowPurgeSize:(long long)arg5 encryptionType:(unsigned long long)arg6 realtimeAdaptor:(_Bool)arg7 cacheCountFlushThreshold:(long long)arg8 adaptorId:(id)arg9 supportedLogMessageType:(int)arg10 fromLogFrameworkAdaptor:(_Bool)arg11;
@property(nonatomic) NSDate *oldestLogMessageInCache;

@end

