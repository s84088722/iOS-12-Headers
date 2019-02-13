//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _CSDBThreadObject;
@protocol OS_dispatch_queue;

@interface CSDBThreadedRecordStore : NSObject
{
    struct CSDBRecordStore *_recordStore;
    NSObject<OS_dispatch_queue> *_recordStoreQueue;
    NSString *_identifier;
    _CSDBThreadObject *_thread;
    _Bool _wantsRegister;
}

- (void)performBlock:(CDUnknownBlockType)arg1 afterDelay:(double)arg2;
- (void)performBlock:(CDUnknownBlockType)arg1 waitUntilDone:(_Bool)arg2;
- (_Bool)ownsCurrentThreadOtherwiseAssert:(_Bool)arg1;
- (void)registerClass:(const CDStruct_47876580 *)arg1;
- (void)teardownDatabase;
- (void)_teardownDatabaseOnQueue;
- (void)setupDatabaseWithAllowLocalMigration:(_Bool)arg1 pathBlock:(CDUnknownBlockType)arg2 setupStoreHandler:(CDUnknownFunctionPointerType)arg3 connectionInitializer:(CDUnknownFunctionPointerType)arg4 versionChecker:(CDUnknownFunctionPointerType)arg5 migrationHandler:(CDUnknownFunctionPointerType)arg6 schemaVersion:(int)arg7 dataProtectionClass:(unsigned int)arg8 registerBlock:(CDUnknownBlockType)arg9;
- (void)setupDatabaseWithAllowLocalMigration:(_Bool)arg1 pathBlock:(CDUnknownBlockType)arg2 setupStoreHandler:(CDUnknownFunctionPointerType)arg3 connectionInitializer:(CDUnknownFunctionPointerType)arg4 versionChecker:(CDUnknownFunctionPointerType)arg5 migrationHandler:(CDUnknownFunctionPointerType)arg6 schemaVersion:(int)arg7 dataProtectionClass:(unsigned int)arg8 registerBlock:(CDUnknownBlockType)arg9 exclusiveOwnership:(_Bool)arg10;
- (void)dealloc;
- (id)initWithIdentifier:(struct __CFString *)arg1 qosClass:(unsigned short)arg2;

@end

