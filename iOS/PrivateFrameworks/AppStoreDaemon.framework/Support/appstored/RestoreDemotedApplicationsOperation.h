//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import "RestoreItemsOperationDelegate-Protocol.h"

@class AccountCacheDBClient, NSOrderedSet, NSString;

@interface RestoreDemotedApplicationsOperation : ISOperation <RestoreItemsOperationDelegate>
{
    NSOrderedSet *_jobIDs;
    AccountCacheDBClient *_accountsCacheDB;
}

+ (_Bool)supportsMultipleEntities;
- (void).cxx_destruct;
- (id)_newRestoreItemsWithJobIDs:(id)arg1;
- (id)_newDownloadWithStoreDownload:(id)arg1;
- (_Bool)_createDownloadForJob:(id)arg1 withTransaction:(id)arg2 storeDownload:(id)arg3 accountID:(id)arg4;
- (id)_accountIdForAppleID:(id)arg1;
- (void)restoreItemsOperation:(id)arg1 didReceiveResponse:(id)arg2;
- (void)run;
- (id)initWithEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

