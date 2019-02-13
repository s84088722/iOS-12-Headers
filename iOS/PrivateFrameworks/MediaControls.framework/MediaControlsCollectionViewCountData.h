//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaControls/NSCopying-Protocol.h>

@class NSIndexSet, NSMutableIndexSet;

@interface MediaControlsCollectionViewCountData : NSObject <NSCopying>
{
    NSMutableIndexSet *_insertedIndexes;
    NSMutableIndexSet *_deletedIndexes;
    NSMutableIndexSet *_updatedIndexes;
    _Bool _hasPendingChanges;
    long long _numberOfItems;
}

@property(nonatomic) _Bool hasPendingChanges; // @synthesize hasPendingChanges=_hasPendingChanges;
@property(nonatomic) long long numberOfItems; // @synthesize numberOfItems=_numberOfItems;
- (void).cxx_destruct;
- (_Bool)validateCountForNumberOfItems:(long long)arg1;
- (void)applyChanges;
- (void)reloadItemsAtIndexes:(id)arg1;
- (void)reloadItemAtIndex:(long long)arg1;
- (void)moveItemAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)deleteItemsAtIndexes:(id)arg1;
- (void)deleteItemAtIndex:(long long)arg1;
- (void)insertItemsAtIndexes:(id)arg1;
- (void)insertItemAtIndex:(long long)arg1;
@property(readonly, copy, nonatomic) NSIndexSet *updatedIndexes;
@property(readonly, copy, nonatomic) NSIndexSet *deletedIndexes;
@property(readonly, copy, nonatomic) NSIndexSet *insertedIndexes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNumberOfItems:(long long)arg1;
- (id)init;

@end

