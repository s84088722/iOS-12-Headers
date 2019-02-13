//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/INIntent.h>

#import <FMIPSiriActions/FMIPIdentifiable-Protocol.h>

@class INObject;

@interface FMIPPlaySoundIntent : INIntent <FMIPIdentifiable>
{
}

+ (long long)playSoundDeviceClassForDeviceType:(long long)arg1;
+ (id)identityTag;
+ (id)playSoundIntentWithDeviceId:(id)arg1 deviceType:(long long)arg2 deviceDisplayName:(id)arg3;
- (id)rootAggregateKey;

// Remaining properties
@property(copy, nonatomic) INObject *deviceId; // @dynamic deviceId;
@property(nonatomic) long long playSoundDeviceClass; // @dynamic playSoundDeviceClass;

@end

