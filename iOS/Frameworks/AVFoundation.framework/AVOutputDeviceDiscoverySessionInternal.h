//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol AVOutputDeviceDiscoverySessionImpl, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVOutputDeviceDiscoverySessionInternal : NSObject
{
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    id <AVOutputDeviceDiscoverySessionImpl> impl;
    long long discoveryMode;
}

@end

