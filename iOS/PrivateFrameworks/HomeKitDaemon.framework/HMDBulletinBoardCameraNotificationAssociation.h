//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDCameraProfile, NSMutableSet;

@interface HMDBulletinBoardCameraNotificationAssociation : HMFObject
{
    HMDCameraProfile *_cameraProfile;
    NSMutableSet *_notificationGeneratingServicesWithCamera;
    NSMutableSet *_notificationGeneratingServicesInRoom;
}

@property(readonly, nonatomic) NSMutableSet *notificationGeneratingServicesInRoom; // @synthesize notificationGeneratingServicesInRoom=_notificationGeneratingServicesInRoom;
@property(readonly, nonatomic) NSMutableSet *notificationGeneratingServicesWithCamera; // @synthesize notificationGeneratingServicesWithCamera=_notificationGeneratingServicesWithCamera;
@property(readonly, nonatomic) HMDCameraProfile *cameraProfile; // @synthesize cameraProfile=_cameraProfile;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCameraProfile:(id)arg1;

@end

