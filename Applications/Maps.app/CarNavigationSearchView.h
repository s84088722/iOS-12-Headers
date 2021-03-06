//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSString, UICollectionView;

__attribute__((visibility("hidden")))
@interface CarNavigationSearchView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    UICollectionView *_collectionView;
    NSArray *_categories;
    CDUnknownBlockType _siriSearchHandler;
    CDUnknownBlockType _categorySearchHandler;
}

@property(copy, nonatomic) CDUnknownBlockType categorySearchHandler; // @synthesize categorySearchHandler=_categorySearchHandler;
@property(copy, nonatomic) CDUnknownBlockType siriSearchHandler; // @synthesize siriSearchHandler=_siriSearchHandler;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (unsigned long long)_numberOfItems;
- (double)preferredHeightForAvailableSize:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

