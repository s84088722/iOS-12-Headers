//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemManager.h>

@class NSArray;

@interface HUServiceGridItemManager : HFItemManager
{
    _Bool _shouldGroupByRoom;
    _Bool _shouldShowSectionHeaders;
    CDUnknownBlockType _itemProvidersCreator;
    NSArray *_cachedSortedRoomIdentifiers;
    NSArray *_cachedSortedRooms;
}

@property(retain, nonatomic) NSArray *cachedSortedRooms; // @synthesize cachedSortedRooms=_cachedSortedRooms;
@property(retain, nonatomic) NSArray *cachedSortedRoomIdentifiers; // @synthesize cachedSortedRoomIdentifiers=_cachedSortedRoomIdentifiers;
@property(copy, nonatomic) CDUnknownBlockType itemProvidersCreator; // @synthesize itemProvidersCreator=_itemProvidersCreator;
@property(nonatomic) _Bool shouldShowSectionHeaders; // @synthesize shouldShowSectionHeaders=_shouldShowSectionHeaders;
@property(nonatomic) _Bool shouldGroupByRoom; // @synthesize shouldGroupByRoom=_shouldGroupByRoom;
- (void).cxx_destruct;
- (id)_roomIdentifierForItem:(id)arg1;
- (id)_sortedRoomIdentifiers;
- (id)_sortedRooms;
- (CDUnknownBlockType)_roomComparator;
- (id)currentSectionIdentifiers;
- (void)_willUpdateSections;
- (id)_itemsToHideInSet:(id)arg1;
- (id)_sectionIdentifierForItem:(id)arg1;
- (id)_titleForSectionWithIdentifier:(id)arg1;
- (id)_identifierForSection:(unsigned long long)arg1;
- (unsigned long long)_numberOfSections;
- (id)_buildItemProvidersForHome:(id)arg1;
@property(readonly, nonatomic) long long actionSetSectionIndex;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 shouldGroupByRoom:(_Bool)arg3 shouldShowSectionHeaders:(_Bool)arg4 itemProvidersCreator:(CDUnknownBlockType)arg5;
- (id)initWithDelegate:(id)arg1 shouldGroupByRoom:(_Bool)arg2 shouldShowSectionHeaders:(_Bool)arg3 itemProvidersCreator:(CDUnknownBlockType)arg4;
- (id)initWithDelegate:(id)arg1 shouldGroupByRoom:(_Bool)arg2 itemProvidersCreator:(CDUnknownBlockType)arg3;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;

@end

