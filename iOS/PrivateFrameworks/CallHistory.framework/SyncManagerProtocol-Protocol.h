//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CallHistory/NSObject-Protocol.h>

@class CHRecentCall, NSArray, NSDictionary, NSPredicate, NSString;

@protocol SyncManagerProtocol <NSObject>
- (void)resetTimers;
- (double)timerLifetime;
- (double)timerOutgoing;
- (double)timerIncoming;
- (void)updateAllObjects:(NSDictionary *)arg1;
- (void)updateObjects:(NSDictionary *)arg1;
- (void)deleteObjectsWithLimits:(NSDictionary *)arg1;
- (void)deleteAllObjects;
- (void)deleteObjectsWithUniqueIds:(NSArray *)arg1;
- (void)deleteObjectWithUniqueId:(NSString *)arg1;
- (NSArray *)fetchObjectsWithLimits:(NSDictionary *)arg1;
- (CHRecentCall *)fetchObjectWithUniqueId:(NSString *)arg1;
- (NSArray *)fetchAllObjects;
- (void)insertRecordsWithoutTransactions:(NSArray *)arg1;
- (void)insertWithoutTransaction:(CHRecentCall *)arg1;
- (void)insert:(CHRecentCall *)arg1;
- (NSArray *)fetchCallsWithPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 limit:(unsigned long long)arg3;
@end

