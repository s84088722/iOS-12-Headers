//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSUbiquitousKeyValueStore;

@interface StockManager : NSObject
{
    NSMutableArray *_defaultListStockSymbols;
    _Bool _shouldPostSyncNotifications;
    NSMutableArray *_stocksList;
    NSMutableArray *_chartDataLRUCache;
    double _lastModifiedTime;
    _Bool _needRemoteAddNotification;
    _Bool _needRemoteDeleteNotification;
    _Bool _needRemoteMoveNotification;
    NSUbiquitousKeyValueStore *_syncedKVStore;
}

+ (void)clearSharedManager;
+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_checkForMovedStocks;
- (void)_checkForDeletedStocks;
- (void)_checkForAddedStocks;
- (void)purgeTransientData;
- (void)saveDataChanges;
- (void)saveListChanges;
- (void)_saveDataChangesWithStockDictionaries:(id)arg1;
- (_Bool)anyMarketOpen;
- (void)clearCachedChartDataImageSets;
- (void)clearCachedChartData;
- (void)UpdateChartDataInLRU:(id)arg1;
- (void)DeleteChartData:(id)arg1;
- (void)RemoveChartDataFromLRU:(id)arg1;
- (void)moveStockFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)_removeStock:(id)arg1 withRemoteNotification:(_Bool)arg2;
- (void)removeStock:(id)arg1;
- (void)_addStock:(id)arg1 withRemoteNotification:(_Bool)arg2;
- (void)addStock:(id)arg1;
- (id)stockWithSymbol:(id)arg1;
- (id)stocksList;
- (_Bool)setLocalStockListFromSyncableStockList:(id)arg1;
- (id)makeSyncableStockListFromList:(id)arg1;
- (void)handleSyncedDataChanged:(id)arg1;
- (void)reloadStocksFromDefaults;
- (id)_defaultStockDictionaries;
- (id)stockForURL:(id)arg1;
- (void)dealloc;
- (id)init;

@end

