//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RemoteManagement/RMUniquedManagedObject.h>

@class NSString, RMDevice, RMManagementSettings, RMUsageSettings, RMUser;

@interface RMUserDevicePairRecord : RMUniquedManagedObject
{
}

+ (id)fetchRequestForUsersBelongingToOrganizationWithIdentifier:(id)arg1 userDSID:(id)arg2 deviceIdentifier:(id)arg3;
+ (id)fetchRequestForUserDevicePairRecordsWithURI:(id)arg1;
+ (id)fetchRequestForUserDevicePairRecordsFromOrganizationWithIdentifier:(id)arg1;
+ (id)fetchRequestMatchingUserDevicePairsForLocalUserAndDeviceFromOrganizationWithIdentifier:(id)arg1;
- (id)computeUniqueIdentifier;
@property(copy, nonatomic) NSString *uri; // @dynamic uri;

// Remaining properties
@property(copy, nonatomic) NSString *altURI; // @dynamic altURI;
@property(retain, nonatomic) RMManagementSettings *managementSettings; // @dynamic managementSettings;
@property(retain, nonatomic) RMDevice *sourceDevice; // @dynamic sourceDevice;
@property(retain, nonatomic) RMUser *sourceUser; // @dynamic sourceUser;
@property(retain, nonatomic) RMUsageSettings *usageSettings; // @dynamic usageSettings;

@end

