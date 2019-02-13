//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CATAddress;
@protocol CATNetworkReachabilityDelegate;

@interface CATNetworkReachability : NSObject
{
    struct __SCNetworkReachability *mReachabilityRef;
    unsigned int _flags;
    CATAddress *_address;
    id <CATNetworkReachabilityDelegate> _delegate;
}

+ (_Bool)isReachableForNetworkWithFlags:(unsigned int)arg1;
+ (_Bool)isReachableForLocalWiFiWithFlags:(unsigned int)arg1;
+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithAddress:(id)arg1;
+ (id)keyPathsForValuesAffectingReachable;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(nonatomic) __weak id <CATNetworkReachabilityDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) CATAddress *address; // @synthesize address=_address;
- (void).cxx_destruct;
- (void)configureCallback;
- (void)delegateDidChange;
- (void)reachabilityDidChangeWithFlags:(unsigned int)arg1;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithAddress:(id)arg1;
@property(readonly, nonatomic, getter=isReachable) _Bool reachable;

@end

