//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSMutableSet, NSNumber, PLManagedAsset, PLManagedFolder;

@interface _PLGenericAlbum : PLManagedObject
{
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSMutableSet *albumLists; // @dynamic albumLists;
@property(nonatomic) int cachedCount; // @dynamic cachedCount;
@property(nonatomic) int cachedPhotosCount; // @dynamic cachedPhotosCount;
@property(nonatomic) int cachedVideosCount; // @dynamic cachedVideosCount;
@property(retain, nonatomic) PLManagedAsset *customKeyAsset; // @dynamic customKeyAsset;
@property(nonatomic) _Bool customSortAscending; // @dynamic customSortAscending;
@property(nonatomic) int customSortKey; // @dynamic customSortKey;
@property(retain, nonatomic) NSNumber *kind; // @dynamic kind;
@property(retain, nonatomic) PLManagedFolder *parentFolder; // @dynamic parentFolder;
@property(nonatomic) int pendingItemsCount; // @dynamic pendingItemsCount;
@property(nonatomic) int pendingItemsType; // @dynamic pendingItemsType;
@property(nonatomic) long long syncEventOrderKey; // @dynamic syncEventOrderKey;

@end

