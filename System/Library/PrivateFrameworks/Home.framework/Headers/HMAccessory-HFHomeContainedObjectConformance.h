//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKit/HMAccessory.h>

#import <Home/HFHomeContainedObject-Protocol.h>
#import <Home/HFRoomContextProviding-Protocol.h>

@class HMHome, HMRoom, NSString, NSUUID;

@interface HMAccessory (HFHomeContainedObjectConformance) <HFHomeContainedObject, HFRoomContextProviding>
- (_Bool)hf_isValidObject;
@property(readonly, nonatomic) __weak HMRoom *hf_parentRoom;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak HMHome *home;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@end
