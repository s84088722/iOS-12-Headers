//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapsSupport/NSObject-Protocol.h>

@class NSArray, NSError, NSSet, SYSession;

@protocol SYSessionDelegate <NSObject>
- (_Bool)syncSession:(SYSession *)arg1 resetDataStoreWithError:(id *)arg2;
- (void)syncSession:(SYSession *)arg1 didEndWithError:(NSError *)arg2;
- (void)syncSession:(SYSession *)arg1 applyChanges:(NSArray *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (long long)syncSession:(SYSession *)arg1 enqueueChanges:(_Bool (^)(id <SYChange>))arg2 error:(id *)arg3;

@optional
- (void)syncSession:(SYSession *)arg1 successfullySynced:(NSSet *)arg2;
- (_Bool)syncSession:(SYSession *)arg1 restartChanges:(id *)arg2;
- (_Bool)syncSession:(SYSession *)arg1 rollbackChangesWithError:(id *)arg2;
- (void)resetDataStoreForSyncSession:(SYSession *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end

