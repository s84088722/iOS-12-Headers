//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RemoteManagement/RMUniquedManagedObject.h>

#import <RemoteManagement/RMReconcilableObject-Protocol.h>

@class NSData, NSString, NSUUID, RMCloudDevice;

@interface RMCloudUsageDeviceIdentifier : RMUniquedManagedObject <RMReconcilableObject>
{
}

+ (_Bool)reconcileWithManagedObjectContext:(id)arg1 andUpdateLosers:(id)arg2 error:(id *)arg3;
+ (id)fetchRequest;
- (id)computeUniqueIdentifier;
- (void)didChangeValueForKey:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *ckRecordID; // @dynamic ckRecordID;
@property(retain, nonatomic) NSData *ckRecordSystemFields; // @dynamic ckRecordSystemFields;
@property(retain, nonatomic) RMCloudDevice *device; // @dynamic device;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSUUID *sortKey; // @dynamic sortKey;

@end

