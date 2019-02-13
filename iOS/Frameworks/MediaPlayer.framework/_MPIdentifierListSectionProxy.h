//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPMutableIdentifierListSection-Protocol.h>

@class MPSectionedIdentifierList, NSArray, NSMutableArray, NSString;

@interface _MPIdentifierListSectionProxy : NSObject <MPMutableIdentifierListSection>
{
    NSString *_sectionIdentifier;
    MPSectionedIdentifierList *_sectionedIdentifierList;
    NSMutableArray *_mutableItemIdentifiers;
}

@property(retain, nonatomic) NSMutableArray *mutableItemIdentifiers; // @synthesize mutableItemIdentifiers=_mutableItemIdentifiers;
@property(readonly, nonatomic) __weak MPSectionedIdentifierList *sectionedIdentifierList; // @synthesize sectionedIdentifierList=_sectionedIdentifierList;
@property(readonly, copy, nonatomic) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
- (void).cxx_destruct;
- (void)applyChanges:(id)arg1 itemLookupBlock:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSArray *itemIdentifiers;
- (void)updateItem:(id)arg1;
- (void)removeItem:(id)arg1;
- (void)moveItemToTail:(id)arg1;
- (void)moveItem:(id)arg1 afterItem:(id)arg2;
- (void)moveItemToHead:(id)arg1;
- (void)insertItemsAtTail:(id)arg1;
- (void)insertItems:(id)arg1 afterItem:(id)arg2;
- (void)insertItemsAtHead:(id)arg1;
- (id)initWithSection:(id)arg1 sectionedIdentifierList:(id)arg2 existingItemIdentifiers:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

