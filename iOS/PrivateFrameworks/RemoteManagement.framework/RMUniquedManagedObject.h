//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSString, NSUUID;

@interface RMUniquedManagedObject : NSManagedObject
{
}

- (id)dictionaryRepresentation;
- (id)externalClassName;
- (void)updateUniqueIdentifier;
- (id)computeUniqueIdentifier;
- (void)awakeFromInsert;

// Remaining properties
@property(readonly, nonatomic) NSUUID *sortKey; // @dynamic sortKey;
@property(readonly, nonatomic) NSString *uniqueIdentifier; // @dynamic uniqueIdentifier;

@end

