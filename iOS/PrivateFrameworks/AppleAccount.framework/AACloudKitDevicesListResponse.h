//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleAccount/AAResponse.h>

@class NSArray;

@interface AACloudKitDevicesListResponse : AAResponse
{
    NSArray *_incompatibleDevices;
    NSArray *_needUpgradeDevices;
    NSArray *_incompatibleDeviceNames;
    NSArray *_needUpgradeDeviceNames;
}

@property(readonly, nonatomic) NSArray *needUpgradeDeviceNames; // @synthesize needUpgradeDeviceNames=_needUpgradeDeviceNames;
@property(readonly, nonatomic) NSArray *incompatibleDeviceNames; // @synthesize incompatibleDeviceNames=_incompatibleDeviceNames;
@property(readonly, nonatomic) NSArray *needUpgradeDevices; // @synthesize needUpgradeDevices=_needUpgradeDevices;
@property(readonly, nonatomic) NSArray *incompatibleDevices; // @synthesize incompatibleDevices=_incompatibleDevices;
- (void).cxx_destruct;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end

