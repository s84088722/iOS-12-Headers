//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenReaderOutput/SCROIOElement.h>

#import <ScreenReaderOutput/SCROIOBluetoothElementProtocol-Protocol.h>
#import <ScreenReaderOutput/SCROIOHIDElementProtocol-Protocol.h>

@class NSString;

@interface SCROIOHIDElement : SCROIOElement <SCROIOBluetoothElementProtocol, SCROIOHIDElementProtocol>
{
    struct __IOHIDDevice *_hidDevice;
}

- (id)bluetoothAddress;
- (int)transport;
- (struct __IOHIDDevice *)hidDevice;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithIOObject:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

