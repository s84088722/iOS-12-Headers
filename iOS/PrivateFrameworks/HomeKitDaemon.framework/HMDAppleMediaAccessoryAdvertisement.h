//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDMediaAccessoryAdvertisement.h>

@class HMDDevice;

@interface HMDAppleMediaAccessoryAdvertisement : HMDMediaAccessoryAdvertisement
{
    HMDDevice *_device;
}

@property(readonly) HMDDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 device:(id)arg4;
- (id)initWithOutputDevice:(id)arg1 device:(id)arg2;

@end

