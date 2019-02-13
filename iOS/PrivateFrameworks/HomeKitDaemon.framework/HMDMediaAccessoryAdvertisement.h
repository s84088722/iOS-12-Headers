//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDAccessoryAdvertisement.h>

#import <HomeKitDaemon/HMDWACAccessoryAssociation-Protocol.h>

@class HMDMediaOutputDevice, NSObject;
@protocol OS_dispatch_queue;

@interface HMDMediaAccessoryAdvertisement : HMDAccessoryAdvertisement <HMDWACAccessoryAssociation>
{
    _Bool _associated;
    HMDMediaOutputDevice *_outputDevice;
    NSObject<OS_dispatch_queue> *_propertyQueue;
}

+ (_Bool)canAirPortExpressSupportMediaAccessory:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
- (void).cxx_destruct;
- (long long)associationOptions;
@property(getter=isAssociated) _Bool associated; // @synthesize associated=_associated;
@property(retain) HMDMediaOutputDevice *outputDevice; // @synthesize outputDevice=_outputDevice;
- (id)description;
- (_Bool)matchesWACDeviceID:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3;
- (id)initWithOutputDevice:(id)arg1;

@end

