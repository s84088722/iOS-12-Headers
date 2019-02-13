//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/BLTObjectCacheDelegate-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface BLTObjectStore : NSObject <BLTObjectCacheDelegate>
{
    NSString *_path;
    NSObject<OS_dispatch_queue> *_queue;
    Class _elementClass;
}

- (void).cxx_destruct;
- (void)objectCache:(id)arg1 storeObject:(id)arg2 withKey:(id)arg3 withBlock:(CDUnknownBlockType)arg4;
- (void)objectCache:(id)arg1 removeObjectForKey:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)objectCache:(id)arg1 objectForKey:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)objectCache:(id)arg1 keysWithBlock:(CDUnknownBlockType)arg2;
- (id)initWithPath:(id)arg1 elementClass:(Class)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

