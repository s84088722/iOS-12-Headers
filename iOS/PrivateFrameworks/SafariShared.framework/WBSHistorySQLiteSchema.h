//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WBSHistoryCrypto, WBSSQLiteDatabase;

@interface WBSHistorySQLiteSchema : NSObject
{
    WBSSQLiteDatabase *_database;
    WBSHistoryCrypto *_crypto;
}

- (void).cxx_destruct;
- (int)_migrateToSchemaVersion_13;
- (int)_migrateToSchemaVersion_12;
- (int)_migrateToSchemaVersion_11;
- (int)_migrateToSchemaVersion_10;
- (int)_migrateToSchemaVersion_9;
- (int)_migrateToSchemaVersion_8;
- (int)_migrateToSchemaVersion_7;
- (int)_migrateToSchemaVersion_6;
- (int)_migrateToSchemaVersion_5;
- (int)_migrateToSchemaVersion_4;
- (int)_migrateToSchemaVersion_3;
- (int)_migrateToSchemaVersion_2;
- (int)_migrateToSchemaVersion:(int)arg1;
- (int)_setDatabaseSchemaVersion:(int)arg1;
- (int)migrateToCurrentSchemaVersionIfNeeded;
- (id)initWithDatabase:(id)arg1 crypto:(id)arg2;
- (id)init;

@end

