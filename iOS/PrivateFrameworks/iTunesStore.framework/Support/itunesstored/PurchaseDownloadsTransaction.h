//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DownloadsTransaction.h"

@interface PurchaseDownloadsTransaction : DownloadsTransaction
{
}

- (long long)_nextBatchIdentifier;
- (double)_maxOrderIdentifier;
- (_Bool)_insertPurchases:(id)arg1 forClient:(id)arg2 orderIdentifier:(double)arg3 orderSpacing:(double)arg4;
- (void)_getInsertOrderID:(double *)arg1 nextOrderID:(double *)arg2 afterPurchaseID:(long long)arg3;
- (_Bool)_cancelDownloadForPurchaseIdentifier:(long long)arg1;
- (_Bool)_addPlaceholderDownloadForPurchase:(id)arg1 clientIdentifier:(id)arg2;
- (id)_addEntityForPurchase:(id)arg1 managerIdentifier:(long long)arg2 orderIdentifier:(double)arg3;
- (id)replacePurchase:(id)arg1 withDownloadQueueResponse:(id)arg2 withClientIdentifier:(id)arg3;
- (id)replacePurchase:(id)arg1 withDownloadQueueResponse:(id)arg2;
- (_Bool)replaceDownloadsInQuery:(id)arg1 withStoreDownloads:(id)arg2 accountID:(id)arg3;
- (_Bool)resetPurchasedAutoUpdateForStoreItemID:(id)arg1;
- (_Bool)movePurchasesWithIdentifiers:(id)arg1 afterPurchaseWithIdentifier:(long long)arg2;
- (_Bool)insertPurchases:(id)arg1 afterPurchaseWithIdentifier:(long long)arg2 forClient:(id)arg3;
- (id)existingDownloadForPurchase:(id)arg1;
- (_Bool)deletePurchaseWithIdentifier:(long long)arg1;
- (_Bool)cancelPurchaseWithIdentifier:(long long)arg1 applyingProperties:(id)arg2;
- (_Bool)addPurchases:(id)arg1 forClient:(id)arg2;

@end

