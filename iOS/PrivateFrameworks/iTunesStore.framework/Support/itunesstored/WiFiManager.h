//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface WiFiManager : NSObject
{
    int _clientType;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)sharedWiFiManager;
- (id)_wifiInterfaceName;
- (long long)_wifiClientTypeForManagerType:(int)arg1;
- (void *)_wifiClient;
@property int clientType;
@property(readonly) NSString *IPAddress;
- (void)dealloc;
- (id)init;

@end
