//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import <RemoteManagement/RMSyncableSubObject-Protocol.h>

@class NSString, RMTestSyncableObject;

@interface RMTestSyncableSubObject : NSManagedObject <RMSyncableSubObject>
{
}

- (id)syncableRootObject;

// Remaining properties
@property(nonatomic) _Bool active; // @dynamic active;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) RMTestSyncableObject *root; // @dynamic root;
@property(readonly) Class superclass;

@end

