//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessory, NSArray;

@interface HMDAccessorySettingTarget : HMFObject
{
    HMDAccessory *_systemOwnerAccessory;
    HMDAccessory *_settingOwnerAccessory;
    NSArray *_others;
}

@property(readonly, nonatomic) NSArray *others; // @synthesize others=_others;
@property(readonly, nonatomic) HMDAccessory *settingOwnerAccessory; // @synthesize settingOwnerAccessory=_settingOwnerAccessory;
@property(readonly, nonatomic) HMDAccessory *systemOwnerAccessory; // @synthesize systemOwnerAccessory=_systemOwnerAccessory;
- (void).cxx_destruct;
- (id)initWithMediaSystem:(id)arg1;
- (id)initWithMediaSystem:(id)arg1 accessory:(id)arg2;

@end

