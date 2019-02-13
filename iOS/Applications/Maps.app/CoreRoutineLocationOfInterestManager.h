//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableSet;
@protocol NSObject, OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CoreRoutineLocationOfInterestManager : NSObject
{
    NSMutableDictionary *_loisByType;
    NSMutableSet *_retrievingLOIsOfTypes;
    NSMutableSet *_invalidatedLOIsOfTypes;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_group> *_initialRetrievalDispatchGroup;
    id <NSObject> _notificationObserver;
}

+ (id)sharedManager;
@property(retain, nonatomic) id <NSObject> notificationObserver; // @synthesize notificationObserver=_notificationObserver;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *initialRetrievalDispatchGroup; // @synthesize initialRetrievalDispatchGroup=_initialRetrievalDispatchGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) NSMutableSet *invalidatedLOIsOfTypes; // @synthesize invalidatedLOIsOfTypes=_invalidatedLOIsOfTypes;
@property(readonly, nonatomic) NSMutableSet *retrievingLOIsOfTypes; // @synthesize retrievingLOIsOfTypes=_retrievingLOIsOfTypes;
@property(readonly, nonatomic) NSMutableDictionary *loisByType; // @synthesize loisByType=_loisByType;
- (void).cxx_destruct;
- (void)retrieveLOIsOfType:(long long)arg1;
- (id)monitoredLOITypes;
- (_Bool)monitoringLOIsOfType:(long long)arg1;
- (void)addNotificationObserverIfNeeded;
- (void)invalidateLOIsOfType:(long long)arg1;
- (void)invalidateLOIs;
- (void)afterInitialRetrievalOfLOIsOfTypes:(id)arg1 perform:(CDUnknownBlockType)arg2;
- (void)monitorLOIsOfTypes:(id)arg1 initialRetrievalComplete:(CDUnknownBlockType)arg2;
- (void)monitorLOIsOfTypes:(id)arg1;
- (void)locationsOfInterestWithType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)locationsOfInterestWithType:(long long)arg1;
@property(readonly, nonatomic) NSArray *gymLOIs;
@property(readonly, nonatomic) NSArray *schoolLOIs;
@property(readonly, nonatomic) NSArray *workLOIs;
@property(readonly, nonatomic) NSArray *homeLOIs;
- (void)dealloc;
- (id)init;

@end

