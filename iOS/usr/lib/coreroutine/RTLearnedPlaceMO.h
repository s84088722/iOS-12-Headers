//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <coreroutine/RTCloudManagedObject.h>

@class NSData, NSNumber, NSSet, NSString, RTMapItemMO;
@protocol GEOMapItem;

@interface RTLearnedPlaceMO : RTCloudManagedObject
{
}

+ (id)managedObjectWithPlace:(id)arg1 managedObject:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)managedObjectWithPlace:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)fetchRequest;
- (void)didSave;

// Remaining properties
@property(copy, nonatomic) NSString *customLabel; // @dynamic customLabel;
@property(retain, nonatomic) RTMapItemMO *mapItem; // @dynamic mapItem;
@property(retain, nonatomic) id <GEOMapItem> mapItemGeoMapItem; // @dynamic mapItemGeoMapItem;
@property(retain, nonatomic) NSData *mapItemGeoMapItemHandle; // @dynamic mapItemGeoMapItemHandle;
@property(copy, nonatomic) NSNumber *mapItemSource; // @dynamic mapItemSource;
@property(copy, nonatomic) NSNumber *type; // @dynamic type;
@property(copy, nonatomic) NSNumber *typeSource; // @dynamic typeSource;
@property(retain, nonatomic) NSSet *visits; // @dynamic visits;

@end

