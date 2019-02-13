//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/WebDeviceOrientationProvider-Protocol.h>

@class NSString, WebDeviceOrientationProviderMockInternal;

@interface WebDeviceOrientationProviderMock : NSObject <WebDeviceOrientationProvider>
{
    WebDeviceOrientationProviderMockInternal *m_internal;
}

+ (id)shared;
- (id)lastOrientation;
- (void)stopUpdating;
- (void)startUpdating;
- (void)setOrientation:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setController:(struct DeviceOrientationController *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

