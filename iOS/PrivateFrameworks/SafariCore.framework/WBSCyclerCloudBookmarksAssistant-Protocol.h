//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariCore/NSObject-Protocol.h>

@protocol WBSCyclerCloudBookmarksAssistant <NSObject>
- (void)migrateToCloudKitWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)generateDAVServerIDsForExistingBookmarksWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)clearLocalDataIncludingMigrationState:(_Bool)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)resetToDAVDatabaseWithCompletionHandler:(void (^)(NSError *))arg1;
@end

