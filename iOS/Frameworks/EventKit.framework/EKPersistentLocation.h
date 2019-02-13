//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKPersistentObject.h>

@interface EKPersistentLocation : EKPersistentObject
{
}

+ (id)relations;
+ (id)defaultPropertiesToLoad;
- (id)description;
- (id)semanticIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)alarmOwner;
- (void)setAlarmOwner:(id)arg1;
- (id)calendarItemOwner;
- (void)setCalendarItemOwner:(id)arg1;
- (void)setDerivedFrom:(id)arg1;
- (id)derivedFrom;
- (void)setRouting:(id)arg1;
- (id)routing;
- (void)setMapKitHandle:(id)arg1;
- (id)mapKitHandle;
- (void)setAddressBookEntityID:(id)arg1;
- (id)addressBookEntityID;
- (void)setRadius:(id)arg1;
- (id)radius;
- (void)setReferenceFrame:(id)arg1;
- (id)referenceFrame;
- (void)setLongitude:(id)arg1;
- (id)longitude;
- (void)setLatitude:(id)arg1;
- (id)latitude;
- (void)setAddress:(id)arg1;
- (id)address;
- (void)setTitle:(id)arg1;
- (id)title;
- (int)entityType;

@end

