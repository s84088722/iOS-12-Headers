//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSString;

@interface _CDContextualKeyPathMO : NSManagedObject
{
}

+ (id)materializedContextValueFrom:(id)arg1;
+ (id)materializedKeyPathFrom:(id)arg1;
+ (void)hydrateMO:(id)arg1 fromKeyPath:(id)arg2 andValue:(id)arg3;

// Remaining properties
@property(retain, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(nonatomic) unsigned long long deviceID; // @dynamic deviceID;
@property(nonatomic) _Bool isEphemeral; // @dynamic isEphemeral;
@property(nonatomic) _Bool isUserCentric; // @dynamic isUserCentric;
@property(retain, nonatomic) NSString *key; // @dynamic key;
@property(retain, nonatomic) NSDate *lastModifiedDate; // @dynamic lastModifiedDate;
@property(retain, nonatomic) NSData *value; // @dynamic value;

@end

