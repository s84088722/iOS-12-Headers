//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MCMContainerMigrator : NSObject
{
}

+ (id)sharedInstance;
- (_Bool)performPerUserDataMigrationForClientConnection:(id)arg1 withError:(id *)arg2;
- (id)_bundleContainerForDataContainer:(id)arg1 withError:(id *)arg2;
- (_Bool)performDataMigratorMigrationWithError:(id *)arg1;
- (_Bool)performSynchronousBuildUpgradeMigration:(id)arg1 withError:(id *)arg2;
- (_Bool)_performInternalACLMigrationWithError:(id *)arg1;
- (void)_checkIfDeviceMayNeedSystemContainerACLMigration:(id)arg1;
- (_Bool)_performWhitelistMigrationWithError:(id *)arg1;
- (_Bool)_performBundleContainerOwnershipMigrationWithError:(id *)arg1;

@end
