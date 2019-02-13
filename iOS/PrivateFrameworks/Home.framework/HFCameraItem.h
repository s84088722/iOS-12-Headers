//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/HFHomeKitItemProtocol-Protocol.h>
#import <Home/HFItemBuilderItem-Protocol.h>
#import <Home/HFServiceLikeBuilderCreating-Protocol.h>
#import <Home/HFServiceLikeItem-Protocol.h>

@class HMAccessory, HMCameraProfile, NSString;
@protocol HFCharacteristicValueSource, HFHomeKitObject;

@interface HFCameraItem : HFItem <HFHomeKitItemProtocol, HFServiceLikeItem, HFServiceLikeBuilderCreating, HFItemBuilderItem>
{
    id <HFCharacteristicValueSource> _valueSource;
    HMCameraProfile *_cameraProfile;
}

+ (void)getErrorDescription:(out id *)arg1 detailedErrorDescription:(out id *)arg2 forCameraStreamError:(id)arg3;
+ (id)cameraDemoURLWithName:(id)arg1 extension:(id)arg2;
@property(readonly, nonatomic) HMCameraProfile *cameraProfile; // @synthesize cameraProfile=_cameraProfile;
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
- (void).cxx_destruct;
- (id)serviceLikeBuilderInHome:(id)arg1;
- (id)accessories;
- (id)services;
- (id)copyWithValueSource:(id)arg1;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)demoMovieURL;
- (id)demoSnapshotURL;
@property(readonly, nonatomic) HMAccessory *accessory;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithValueSource:(id)arg1 cameraProfile:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

