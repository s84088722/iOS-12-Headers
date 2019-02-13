//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RemoteManagement/RMUniquedManagedObject.h>

#import <RemoteManagement/RMUniquelySerializableManagedObject-Protocol.h>

@class NSString, RMUserDeviceState;

@interface RMInstalledApp : RMUniquedManagedObject <RMUniquelySerializableManagedObject>
{
}

+ (id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
+ (id)bundleIdentifiersInstalledForDSID:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
+ (id)createOrReturnInstalledAppWithBundleIdentifier:(id)arg1 userDeviceState:(id)arg2 inContext:(id)arg3 error:(id *)arg4;
- (void)delete;
- (_Bool)updateWithDictionaryRepresentation:(id)arg1;
- (id)dictionaryRepresentation;
- (id)computeUniqueIdentifier;
- (void)didChangeValueForKey:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *bundleIdentifier; // @dynamic bundleIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) RMUserDeviceState *userDeviceState; // @dynamic userDeviceState;

@end

