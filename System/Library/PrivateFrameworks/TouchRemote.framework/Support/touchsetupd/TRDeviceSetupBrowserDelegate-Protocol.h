//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TRDeviceSetupBrowser, TRDeviceSetupPeripheral;

@protocol TRDeviceSetupBrowserDelegate <NSObject>

@optional
- (void)deviceSetupBrowser:(TRDeviceSetupBrowser *)arg1 didRemovePeripheral:(TRDeviceSetupPeripheral *)arg2;
- (void)deviceSetupBrowser:(TRDeviceSetupBrowser *)arg1 didFindPeripheral:(TRDeviceSetupPeripheral *)arg2;
- (void)deviceSetupBrowserDidChangeState:(TRDeviceSetupBrowser *)arg1;
@end
