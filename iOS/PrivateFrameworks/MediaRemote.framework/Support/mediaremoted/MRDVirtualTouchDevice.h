//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MRVirtualTouchDeviceDescriptor, NSDictionary, NSMutableDictionary;

@interface MRDVirtualTouchDevice : NSObject
{
    NSDictionary *_deviceProperties;
    NSMutableDictionary *_activeTouchEventsForFingerIndices;
    MRVirtualTouchDeviceDescriptor *_deviceDescriptor;
    unsigned long long _uniqueIdentifier;
    struct __IOHIDUserDevice *_ioDevice;
}

@property(readonly, nonatomic) struct __IOHIDUserDevice *ioDevice; // @synthesize ioDevice=_ioDevice;
@property(readonly, nonatomic) unsigned long long uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, copy, nonatomic) MRVirtualTouchDeviceDescriptor *deviceDescriptor; // @synthesize deviceDescriptor=_deviceDescriptor;
- (void).cxx_destruct;
- (id)_newIOKitDeviceProperties;
- (_Bool)handleTouchEvent:(struct _MRHIDTouchEvent)arg1;
- (_Bool)handleHIDReport:(id)arg1;
- (id)deviceProperties;
- (void)dealloc;
- (id)initWithDeviceDescriptor:(id)arg1;

@end

