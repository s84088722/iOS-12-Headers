//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HMFoundation/HMFLogging-Protocol.h>

@class HMFNetAddress, HMFUnfairLock, NSObject, NSString;
@protocol HMFNetMonitorDelegate, OS_dispatch_queue;

@interface HMFNetMonitor : HMFObject <HMFLogging>
{
    HMFUnfairLock *_lock;
    _Bool _reachable;
    unsigned int _currentNetworkFlags;
    id <HMFNetMonitorDelegate> _delegate;
    HMFNetAddress *_netAddress;
    NSObject<OS_dispatch_queue> *_queue;
    struct __SCNetworkReachability *_networkReachabilityRef;
}

+ (id)logCategory;
@property(nonatomic) unsigned int currentNetworkFlags; // @synthesize currentNetworkFlags=_currentNetworkFlags;
@property(readonly, nonatomic) struct __SCNetworkReachability *networkReachabilityRef; // @synthesize networkReachabilityRef=_networkReachabilityRef;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, copy, nonatomic) HMFNetAddress *netAddress; // @synthesize netAddress=_netAddress;
@property __weak id <HMFNetMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)handleNetworkReachabilityChange:(unsigned int)arg1;
@property(readonly) unsigned long long reachabilityPath;
- (void)setReachable:(_Bool)arg1;
@property(readonly, getter=isReachable) _Bool reachable; // @synthesize reachable=_reachable;
- (id)attributeDescriptions;
- (id)shortDescription;
- (void)dealloc;
- (id)initWithNetAddress:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

