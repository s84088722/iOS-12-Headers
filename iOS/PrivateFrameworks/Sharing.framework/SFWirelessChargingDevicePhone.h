//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Sharing/SFWirelessChargingDevice.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class SFPowerSource;

@interface SFWirelessChargingDevicePhone : SFWirelessChargingDevice <NSSecureCoding>
{
    SFPowerSource *_phonePowerSource;
    SFPowerSource *_casePowerSource;
}

@property(retain, nonatomic) SFPowerSource *casePowerSource; // @synthesize casePowerSource=_casePowerSource;
@property(retain, nonatomic) SFPowerSource *phonePowerSource; // @synthesize phonePowerSource=_phonePowerSource;
- (void).cxx_destruct;

@end

