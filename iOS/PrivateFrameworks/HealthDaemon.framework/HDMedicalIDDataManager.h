//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FKFriendsManager, HDProfile;
@protocol OS_dispatch_queue;

@interface HDMedicalIDDataManager : NSObject
{
    HDProfile *_profile;
    FKFriendsManager *_sosFriendsManager;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) FKFriendsManager *sosFriendsManager; // @synthesize sosFriendsManager=_sosFriendsManager;
@property(nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (void)badgeHealthAppForEmergencyContactConsolidationWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_migrateMedicalIDLocationIfNecessary:(id *)arg1;
- (id)_medicalIDURLWithDirectoryPath:(id)arg1;
- (id)_medicalIDURL;
- (void)_updateShowMedicalIdOnWatch:(_Bool)arg1;
- (id)_unarchiveMedicalIDDataWithRawData:(id)arg1;
- (_Bool)obliterateMedicalIDDataWithReason:(id)arg1 error:(id *)arg2;
- (_Bool)deleteMedicalIDDataWithError:(id *)arg1;
- (_Bool)updateMedicalIDData:(id)arg1 error:(id *)arg2;
- (id)medicalIDEmergencyContacts;
- (id)medicalIDDataCreateIfNecessary:(_Bool)arg1;
- (id)initWithProfile:(id)arg1;

@end

