//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFoundation/AVOutputDeviceDiscoverySessionFactory-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AVFigEndpointPickerOutputDeviceDiscoverySessionFactory : NSObject <AVOutputDeviceDiscoverySessionFactory>
{
}

+ (void)initialize;
- (id)outputDeviceDiscoverySessionOfClass:(Class)arg1 withDeviceFeatures:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

