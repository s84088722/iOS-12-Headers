//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HMFUnfairLock, NSMutableArray;

@interface HMPendingRequests : NSObject
{
    HMFUnfairLock *_lock;
    NSMutableArray *_contextLists;
}

@property(retain, nonatomic) NSMutableArray *contextLists; // @synthesize contextLists=_contextLists;
- (void).cxx_destruct;
- (id)removeMediaSystemBuilderForIdentifier:(id)arg1;
- (void)addMediaSystemBuilder:(id)arg1 andCompletionBlock:(id)arg2 forIdentifier:(id)arg3;
- (void)addProgressHandler:(id)arg1 forAccessoryIdentifier:(id)arg2;
- (id)removeTriggerForIdentifier:(id)arg1;
- (void)addTrigger:(id)arg1 andCompletionBlock:(id)arg2 forIdentifier:(id)arg3;
- (id)removeProgressBlockForIdentifier:(id)arg1;
- (id)removeAccessoryDescriptionForIdentifier:(id)arg1;
- (void)addAccessoryDescription:(id)arg1 progressBlock:(id)arg2 andCompletionBlock:(id)arg3 forIdentifier:(id)arg4;
- (id)removeAccessoryForIdentifier:(id)arg1;
- (void)addAccessory:(id)arg1 andCompletionBlock:(id)arg2 forIdentifier:(id)arg3;
- (id)removeApplicationDataForIdentifier:(id)arg1;
- (void)addApplicationData:(id)arg1 andCompletionBlock:(id)arg2 forIdentifier:(id)arg3;
- (id)removeEventsForIdentifier:(id)arg1;
- (void)addEvents:(id)arg1 andCompletionBlock:(id)arg2 forIdentifier:(id)arg3;
- (id)removeEventForIdentifier:(id)arg1;
- (void)addEvent:(id)arg1 andCompletionBlock:(id)arg2 forIdentifier:(id)arg3;
- (id)removeActionForIdentifier:(id)arg1;
- (void)addAction:(id)arg1 andCompletionBlock:(id)arg2 forIdentifier:(id)arg3;
- (id)retrieveAccessoryDescriptionForIdentifier:(id)arg1;
- (id)retrieveProgressBlockForIdentifier:(id)arg1;
- (id)retrieveCompletionBlockForIdentifier:(id)arg1;
- (id)removeCompletionBlockForIdentifier:(id)arg1;
- (void)addCompletionBlock:(id)arg1 forIdentifier:(id)arg2;
- (id)retrieveRequestOfType:(long long)arg1 forIdentifier:(id)arg2;
- (id)removeRequestOfType:(long long)arg1 forIdentifier:(id)arg2;
- (void)addRequest:(id)arg1 ofType:(long long)arg2 forIdentifier:(id)arg3;
- (id)_retrieveRequestOfType:(long long)arg1 forIdentifier:(id)arg2 remove:(_Bool)arg3;
- (void)_addRequest:(id)arg1 ofType:(long long)arg2 forIdentifier:(id)arg3;
- (id)init;

@end

