//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, NSString, NSURL;

@protocol MobileInstallationHelperServiceProtocol
- (void)dieForTesting;
- (void)createAppSnapshotWithBundleID:(NSString *)arg1 snapshotToURL:(NSURL *)arg2 onlyV1AppIfPresent:(_Bool)arg3 placeholderOnly:(_Bool)arg4 completion:(void (^)(NSDictionary *, NSError *))arg5;
- (void)createSafeHarborWithIdentifier:(NSString *)arg1 containerType:(long long)arg2 andMigrateDataFrom:(NSURL *)arg3 completion:(void (^)(NSError *))arg4;
- (void)makeSymlinkFromAppDataContainerToBundleForIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)stageItemAtURL:(NSURL *)arg1 options:(NSDictionary *)arg2 completion:(void (^)(NSURL *, _Bool, NSError *))arg3;
- (void)wipeStagingRootWithCompletion:(void (^)(NSError *))arg1;
- (void)migrateSystemAppDataWithCompletion:(void (^)(NSError *))arg1;
- (void)migrateMobileContentWithCompletion:(void (^)(NSError *))arg1;
@end

