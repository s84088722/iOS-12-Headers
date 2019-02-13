//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeSharing/ICEnvironmentMonitorObserver-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface HSWiFiManager : NSObject <ICEnvironmentMonitorObserver>
{
    struct __SCPreferences *_wifiPreferences;
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _wiFiEnabled;
    _Bool _wiFiAssociated;
}

+ (id)sharedWiFiManager;
@property(nonatomic, getter=isWiFiAssociated) _Bool wiFiAssociated; // @synthesize wiFiAssociated=_wiFiAssociated;
@property(nonatomic, getter=isWiFiEnabled) _Bool wiFiEnabled; // @synthesize wiFiEnabled=_wiFiEnabled;
- (void).cxx_destruct;
- (void)_wifiCallBack:(unsigned int)arg1;
- (_Bool)_getWiFiAssociated;
- (_Bool)_getWiFiEnabledFromPrefs;
- (id)_processIdentifier;
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

