//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSData, PLDetectedFace;

@interface PLDetectedFaceprint : PLManagedObject
{
}

+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSData *data; // @dynamic data;
@property(retain, nonatomic) PLDetectedFace *face; // @dynamic face;
@property(nonatomic) int faceprintVersion; // @dynamic faceprintVersion;

@end

