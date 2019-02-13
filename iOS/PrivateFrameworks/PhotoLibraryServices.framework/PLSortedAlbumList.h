//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLAlbumContainer-Protocol.h>
#import <PhotoLibraryServices/PLIndexMappingCache-Protocol.h>

@class NSMutableOrderedSet, NSString;
@protocol NSObject><NSCopying, PLAlbumContainer;

@interface PLSortedAlbumList : NSObject <PLAlbumContainer, PLIndexMappingCache>
{
    struct NSObject *_backingAlbumList;
    struct __CFArray *_toBackingMap;
    struct __CFArray *_fromBackingMap;
    CDUnknownBlockType _sortComparator;
    NSMutableOrderedSet *_weak_albums;
}

@property(copy, nonatomic) CDUnknownBlockType sortComparator; // @synthesize sortComparator=_sortComparator;
@property(retain, nonatomic) NSObject<PLAlbumContainer> *backingAlbumList; // @synthesize backingAlbumList=_backingAlbumList;
- (void).cxx_destruct;
- (Class)derivedChangeNotificationClass;
- (_Bool)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2;
@property(readonly, copy, nonatomic) id <NSObject><NSCopying> cachedIndexMapState;
- (void)replaceObjectInSortedAlbumsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectFromSortedAlbumsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inSortedAlbumsAtIndex:(unsigned long long)arg2;
- (id)objectInSortedAlbumsAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexInSortedAlbumsOfObject:(id)arg1;
- (unsigned long long)countOfSortedAlbums;
@property(retain, nonatomic) NSMutableOrderedSet *_albums;
- (void)createSortedIndexesMap;
- (id)containersRelationshipName;
- (_Bool)canEditContainers;
- (_Bool)isEmpty;
@property(readonly, nonatomic) unsigned long long containersCount;
- (id)containers;
@property(readonly, retain, nonatomic) NSString *_prettyDescription;
@property(readonly, retain, nonatomic) NSString *_typeDescription;
- (id)photoLibrary;
- (void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3;
- (void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2;
- (void)updateAlbumsOrderIfNeeded;
- (_Bool)needsReordering;
- (void)setNeedsReordering;
@property(readonly, copy, nonatomic) CDUnknownBlockType albumsSortingComparator;
- (_Bool)albumHasFixedOrder:(struct NSObject *)arg1;
@property(readonly, nonatomic) _Bool isFolder;
- (_Bool)canEditAlbums;
- (short)albumListType;
- (id)managedObjectContext;
@property(readonly, nonatomic) unsigned long long unreadAlbumsCount;
- (_Bool)hasAtLeastOneAlbum;
@property(readonly, nonatomic) int filter;
@property(readonly, nonatomic) unsigned long long albumsCount;
- (id)albums;
- (id)identifier;
- (void)dealloc;
- (id)initWithAlbumList:(struct NSObject *)arg1 sortComparator:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

