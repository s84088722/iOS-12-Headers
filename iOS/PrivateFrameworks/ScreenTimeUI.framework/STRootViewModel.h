//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSSet, STUser;

@interface STRootViewModel : NSObject
{
    _Bool _isCloudSyncEnabled;
    NSSet *_installedBundleIDs;
    NSDictionary *_installedBundleIDsByCategoryIdentifier;
    STUser *_me;
    NSArray *_children;
    NSArray *_devices;
}

+ (id)keyPathsForValuesAffectingCanToggleWebsiteData;
+ (id)keyPathsForValuesAffectingForceParentalControls;
+ (id)keyPathsForValuesAffectingCanViewAskForTimeRequests;
+ (id)keyPathsForValuesAffectingCanSetUpFamily;
+ (id)keyPathsForValuesAffectingCanToggleCloudSyncData;
+ (id)keyPathsForValuesAffectingCanSignIn;
+ (id)keyPathsForValuesAffectingIsRemotelyManagedUserWithPasscode;
+ (id)keyPathsForValuesAffectingWebUsageEnabled;
+ (id)keyPathsForValuesAffectingIsSharingUsageData;
+ (id)keyPathsForValuesAffectingCanStopSharingScreenTime;
+ (id)keyPathsForValuesAffectingCanStopScreenTime;
+ (id)keyPathsForValuesAffectingCanStartScreenTime;
+ (id)keyPathsForValuesAffectingScreenTimeEnabled;
@property(copy, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property(copy, nonatomic) NSArray *children; // @synthesize children=_children;
@property(copy, nonatomic) STUser *me; // @synthesize me=_me;
@property(copy, nonatomic) NSDictionary *installedBundleIDsByCategoryIdentifier; // @synthesize installedBundleIDsByCategoryIdentifier=_installedBundleIDsByCategoryIdentifier;
@property(copy, nonatomic) NSSet *installedBundleIDs; // @synthesize installedBundleIDs=_installedBundleIDs;
@property(nonatomic) _Bool isCloudSyncEnabled; // @synthesize isCloudSyncEnabled=_isCloudSyncEnabled;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool canToggleWebsiteData;
@property(readonly, nonatomic) _Bool forceParentalControls;
@property(readonly, nonatomic) _Bool canViewAskForTimeRequests;
@property(readonly, nonatomic) _Bool canSetUpFamily;
@property(readonly, nonatomic) _Bool canToggleCloudSyncData;
@property(readonly, nonatomic) _Bool canSignIn;
@property(readonly, nonatomic) _Bool isRemotelyManagedUserWithPasscode;
@property(readonly, nonatomic, getter=isWebUsageEnabled) _Bool webUsageEnabled;
@property(readonly, nonatomic) _Bool isSharingUsageData;
@property(readonly, nonatomic) _Bool canStopSharingScreenTime;
@property(readonly, nonatomic) _Bool canStopScreenTime;
@property(readonly, nonatomic) _Bool canStartScreenTime;
@property(readonly, nonatomic, getter=isScreenTimeEnabled) _Bool screenTimeEnabled;
- (id)init;

@end

