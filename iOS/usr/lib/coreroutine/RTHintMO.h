//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate;

@interface RTHintMO : NSManagedObject
{
}

+ (id)managedObjectWithLatitude:(double)arg1 longitude:(double)arg2 source:(long long)arg3 date:(id)arg4 inManagedObjectContext:(id)arg5;
+ (id)fetchRequest;

// Remaining properties
@property(copy, nonatomic) NSDate *date; // @dynamic date;
@property(nonatomic) double latitude; // @dynamic latitude;
@property(nonatomic) double longitude; // @dynamic longitude;
@property(nonatomic) long long source; // @dynamic source;

@end

