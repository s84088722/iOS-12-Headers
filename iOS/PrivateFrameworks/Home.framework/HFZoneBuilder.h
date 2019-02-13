//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemBuilder.h>

@class HFMutableSetDiff, HMZone, NSSet, NSString;

@interface HFZoneBuilder : HFItemBuilder
{
    NSString *_name;
    HFMutableSetDiff *_roomUUIDs;
}

+ (id)na_identity;
+ (Class)homeKitRepresentationClass;
@property(retain, nonatomic) HFMutableSetDiff *roomUUIDs; // @synthesize roomUUIDs=_roomUUIDs;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_updateRooms;
- (id)_updateName;
- (id)_createZone;
- (id)commitItem;
- (id)_performValidation;
@property(readonly, nonatomic) NSSet *rooms;
- (void)removeRoom:(id)arg1;
- (void)addRoom:(id)arg1;
- (void)setZone:(id)arg1;
@property(readonly, nonatomic) HMZone *zone;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;

@end

