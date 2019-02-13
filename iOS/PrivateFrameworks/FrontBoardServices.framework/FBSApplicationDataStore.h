//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol FBSApplicationDataStoreRepositoryClient;

@interface FBSApplicationDataStore : NSObject
{
    NSString *_bundleId;
    id <FBSApplicationDataStoreRepositoryClient> _client;
    _Bool _clientNeedsCheckin;
}

+ (void)_setClassClient:(id)arg1;
+ (void)setPrefetchedKeys:(id)arg1;
+ (void)synchronizeWithCompletion:(CDUnknownBlockType)arg1;
+ (void)synchronize;
+ (id)applicationsWithAvailableStores;
+ (void)_doWithClassClient:(CDUnknownBlockType)arg1;
+ (id)storeForApplication:(id)arg1;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleId;
- (void).cxx_destruct;
- (id)_makeSafe:(id)arg1 forType:(Class)arg2;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setArchivedObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(CDUnknownBlockType)arg3;
- (id)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2;
- (void)archivedObjectForKey:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (id)archivedObjectForKey:(id)arg1;
- (void)safeObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(CDUnknownBlockType)arg3;
- (id)safeObjectForKey:(id)arg1 ofType:(Class)arg2;
- (void)objectForKey:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (id)objectForKey:(id)arg1;
- (void)dealloc;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)_initWithBundleId:(id)arg1 client:(id)arg2;
- (id)init;

@end

