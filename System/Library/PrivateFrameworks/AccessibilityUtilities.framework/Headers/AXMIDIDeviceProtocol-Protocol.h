//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AccessibilityUtilities/NSObject-Protocol.h>

@class AXMIDIDevice, AXMIDIDeviceEntity, AXMIDIDeviceEntityEndpoint;

@protocol AXMIDIDeviceProtocol <NSObject>
- (void)device:(AXMIDIDevice *)arg1 entity:(AXMIDIDeviceEntity *)arg2 didRemoveDestination:(AXMIDIDeviceEntityEndpoint *)arg3;
- (void)device:(AXMIDIDevice *)arg1 entity:(AXMIDIDeviceEntity *)arg2 didAddDestination:(AXMIDIDeviceEntityEndpoint *)arg3;
- (void)device:(AXMIDIDevice *)arg1 entity:(AXMIDIDeviceEntity *)arg2 didRemoveSource:(AXMIDIDeviceEntityEndpoint *)arg3;
- (void)device:(AXMIDIDevice *)arg1 entity:(AXMIDIDeviceEntity *)arg2 didAddSource:(AXMIDIDeviceEntityEndpoint *)arg3;
- (void)device:(AXMIDIDevice *)arg1 didRemoveEntity:(AXMIDIDeviceEntity *)arg2;
- (void)device:(AXMIDIDevice *)arg1 didAddEntity:(AXMIDIDeviceEntity *)arg2;
@end
