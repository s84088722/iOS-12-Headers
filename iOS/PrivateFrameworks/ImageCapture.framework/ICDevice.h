//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DeviceManager, NSString;
@protocol ICDeviceDelegate;

@interface ICDevice : NSObject
{
    void *_deviceProperties;
}

- (void)handleImageCaptureEventNotification:(id)arg1;
- (void)handleCommandCompletionNotification:(id)arg1;
@property(readonly) struct CGImage *icon;
- (id)valueForUndefinedKey:(id)arg1;
- (void)requestCloseSession;
- (void)requestOpenSession;
@property(readonly) _Bool isAppleDevice; // @dynamic isAppleDevice;
@property _Bool closeSessionPending;
@property _Bool openSessionPending;
@property _Bool autoOpenSession;
@property _Bool hasOpenSession;
@property(copy) NSString *UUIDString;
@property int usbVendorID;
@property int usbProductID;
@property int usbLocationID;
@property(copy) NSString *transportType;
@property(copy) NSString *productKind;
@property(copy) NSString *name;
@property DeviceManager *deviceManager;
@property id <ICDeviceDelegate> delegate;
- (void)dealloc;
- (id)description;
- (id)init;

@end

