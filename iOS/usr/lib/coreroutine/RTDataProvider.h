//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <coreroutine/RTService.h>

#import <coreroutine/RTDataProviderProtocol-Protocol.h>

@class NSArray, NSError, NSMutableArray, NSString, RTInvocationDispatcher, RTPurgeManager;

@interface RTDataProvider : RTService <RTDataProviderProtocol>
{
    NSMutableArray *_cachedData;
    _Bool _cachedDataNeedsCopyOnWrite;
    _Bool _populating;
    long long _state;
    RTPurgeManager *_purgeManager;
    RTInvocationDispatcher *_dispatcher;
    NSError *_invalidationError;
}

+ (id)providerName;
@property(retain, nonatomic) NSError *invalidationError; // @synthesize invalidationError=_invalidationError;
@property(nonatomic) _Bool populating; // @synthesize populating=_populating;
@property(retain, nonatomic) RTInvocationDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(retain, nonatomic) RTPurgeManager *purgeManager; // @synthesize purgeManager=_purgeManager;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)fetchDataProviderStatus:(CDUnknownBlockType)arg1;
- (void)onMemoryWarningNotification:(id)arg1;
- (void)_shutdown;
- (void)addObserverInternal:(id)arg1 notificationName:(id)arg2;
- (void)removeObserverInternal:(id)arg1 notificationName:(id)arg2;
- (void)__fetchDataWithFilterPredicates:(id)arg1 sortDescriptors:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_fetchDataWithFilterPredicates:(id)arg1 sortDescriptors:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)fetchDataWithFilterPredicates:(id)arg1 sortDescriptors:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)fetchAllDataWithHandler:(CDUnknownBlockType)arg1;
- (void)populateDataProviderWithHandler:(CDUnknownBlockType)arg1;
- (void)addObjectToCachedData:(id)arg1;
@property(retain, nonatomic) NSArray *cachedData;
- (void)_refresh;
- (void)refreshWithHandler:(CDUnknownBlockType)arg1;
- (void)refresh;
- (void)purgeWithHandler:(CDUnknownBlockType)arg1;
- (void)_purge;
- (void)purge;
- (void)_removeAllEvents;
- (void)_didReceiveMemoryWarning:(long long)arg1;
@property(readonly, nonatomic) NSString *name;
- (id)initWithPurgeManager:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

