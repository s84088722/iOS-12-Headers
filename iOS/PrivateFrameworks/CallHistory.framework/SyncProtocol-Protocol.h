//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CallHistory/NSObject-Protocol.h>

@class NSArray;

@protocol SyncProtocol <NSObject>
- (void)moveCallsFromTempDatabase;
- (void)bootUp:(void (^)(unsigned char))arg1;
- (void)migrateCallDB:(NSArray *)arg1 withReply:(void (^)(_Bool))arg2;
- (void)clearSyncToken:(void (^)(NSString *))arg1;
- (void)sync:(void (^)(NSString *))arg1;
- (void)appendTransactions:(NSArray *)arg1;
- (void)resetCallTimers:(void (^)(_Bool))arg1;
@end

