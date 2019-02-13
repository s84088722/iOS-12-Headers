//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoard/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol FBSApplicationDataStoreRepositoryClientObserver;

@protocol FBSApplicationDataStoreRepositoryClient <NSObject>
- (void)removeObserver:(id <FBSApplicationDataStoreRepositoryClientObserver>)arg1;
- (void)addObserver:(id <FBSApplicationDataStoreRepositoryClientObserver>)arg1;
- (_Bool)prefetchedObjectIfAvailableForKey:(NSString *)arg1 application:(NSString *)arg2 outObject:(id *)arg3;
- (void)removeAllObjectsForApplication:(NSString *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)removeObjectForKey:(NSString *)arg1 forApplication:(NSString *)arg2 withCompletion:(void (^)(NSError *))arg3;
- (void)setObject:(id)arg1 forKey:(NSString *)arg2 forApplication:(NSString *)arg3 withCompletion:(void (^)(NSError *))arg4;
- (id)objectForKey:(NSString *)arg1 forApplication:(NSString *)arg2;
- (NSArray *)availableDataStores;
- (void)synchronizeWithCompletion:(void (^)(NSError *))arg1;
- (void)invalidate;
- (void)removePrefetchedKeys:(NSArray *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)addPrefetchedKeys:(NSArray *)arg1;
@end

