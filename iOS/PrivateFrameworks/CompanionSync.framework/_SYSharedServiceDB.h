//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _SYSharedServiceDB : NSObject
{
    struct os_unfair_lock_s _lock;
    struct sqlite3 *_db;
    NSString *_name;
    struct NSMutableDictionary *_schemaSetupCallbacks;
}

+ (id)sharedInstanceForServiceName:(id)arg1;
+ (void)pairingStorePathWasReset;
+ (void)initialize;
+ (void)_releaseSharedInstanceForServiceName:(id)arg1;
- (void).cxx_destruct;
- (_Bool)inExclusiveTransaction:(CDUnknownBlockType)arg1;
- (_Bool)inTransaction:(CDUnknownBlockType)arg1;
- (_Bool)_runTransactionBlock:(CDUnknownBlockType)arg1 exclusive:(_Bool)arg2;
- (void)withDBRef:(CDUnknownBlockType)arg1;
- (void)updateSchemaForClient:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_LOCKED_runSchemaUpdate:(CDUnknownBlockType)arg1 forClientNamed:(id)arg2;
- (void)setSchemaVersion:(long long)arg1 forClient:(id)arg2;
- (long long)schemaVersionForClient:(id)arg1;
- (_Bool)_LOCKED_ensureDBExists;
- (_Bool)_LOCKED_createOrOpenDBForServiceName:(id)arg1 error:(id *)arg2;
- (void)_ensureSchemaVersionsTable;
- (void)_LOCKED_ensureSchemaVersionsTableInDB:(struct sqlite3 *)arg1;
- (void)_LOCKED_setVersion:(long long)arg1 forClient:(id)arg2;
- (long long)_LOCKED_getClientVersion:(id)arg1;
- (_Bool)_LOCKED_hasSchemaVersionForClient:(id)arg1;
- (_Bool)_ensureParentExists:(id)arg1 error:(id *)arg2;
- (_Bool)_addSkipBackupAttributeToItemAtPath:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithServiceName:(id)arg1;
@property(readonly, nonatomic, getter=_dbPath) NSString *dbPath;

@end

