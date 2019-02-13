//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AKPeripheralAvailabilityManager_iOS : NSObject
{
    struct __IOHIDManager *stylusHidManager;
    unsigned long long _currentAvailability;
}

@property unsigned long long currentAvailability; // @synthesize currentAvailability=_currentAvailability;
- (void)stopMonitoringForPeripheralConnection;
- (void)startMonitoringForPeripheralConnection;
- (void)postConnectionStatusNotification;
- (void)teardown;
- (void)dealloc;
- (id)init;

@end

