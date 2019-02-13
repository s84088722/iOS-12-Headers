//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, UpdateMigratorConfigurationStore;
@protocol OS_dispatch_queue;

@interface UpdateMigrator : NSObject
{
    UpdateMigratorConfigurationStore *_configurationStore;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    unsigned long long _updateType;
    NSMutableArray *_migrations;
}

+ (_Bool)needsMigration;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_queueMigrationWithConfiguration:(id)arg1;
- (void)_queueMigration:(id)arg1 persist:(_Bool)arg2;
- (void)_queueMigration:(id)arg1;
- (void)_performMigration;
- (void)_loadBagAndPerformMigration;
- (void)_networkTypeChangedNotification:(id)arg1;
- (void)restoreDemotedBundleIdentifiers:(id)arg1 options:(id)arg2;
- (_Bool)performMigration:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

@end

