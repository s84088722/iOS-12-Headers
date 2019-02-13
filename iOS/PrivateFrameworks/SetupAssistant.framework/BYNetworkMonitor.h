//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface BYNetworkMonitor : NSObject
{
    struct __SCNetworkReachability *_reachability;
    NSHashTable *_observers;
    int _currentNetworkType;
    NSMutableDictionary *_networkTypeBlocks;
    NSObject<OS_dispatch_queue> *_networkTypeQueue;
}

+ (void)setHoldsWiFiAssertion:(_Bool)arg1;
+ (_Bool)holdsWiFiAssertion;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (int)_networkTypeFromFlags:(unsigned int)arg1;
- (void)_initNetworkObservation;
- (void)setCurrentNetworkType:(int)arg1;
- (void)withMinimumNetworkType:(int)arg1 timeout:(double)arg2 runBlock:(CDUnknownBlockType)arg3;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (int)currentNetworkType;
- (void)dealloc;
- (id)init;

@end
