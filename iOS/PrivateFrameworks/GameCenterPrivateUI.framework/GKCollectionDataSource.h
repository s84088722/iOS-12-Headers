//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameCenterPrivateUI/UICollectionViewDataSource-Protocol.h>
#import <GameCenterPrivateUI/UICollectionViewDelegateFlowLayout-Protocol.h>
#import <GameCenterPrivateUI/UICollectionViewDelegate_Private-Protocol.h>

@class NSArray, NSString, UIViewController;

@interface GKCollectionDataSource : NSObject <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate_Private>
{
    _Bool _onDarkBackground;
    _Bool _useStandardHeaders;
    UIViewController *_presentationViewController;
    NSString *_analyticsKey;
    NSString *_searchText;
    NSArray *_searchTerms;
}

@property(retain, nonatomic) NSArray *searchTerms; // @synthesize searchTerms=_searchTerms;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(nonatomic) NSString *analyticsKey; // @synthesize analyticsKey=_analyticsKey;
@property(nonatomic) _Bool useStandardHeaders; // @synthesize useStandardHeaders=_useStandardHeaders;
@property(nonatomic) _Bool onDarkBackground; // @synthesize onDarkBackground=_onDarkBackground;
@property(nonatomic) UIViewController *presentationViewController; // @synthesize presentationViewController=_presentationViewController;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didFocusItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnfocusItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)searchTextHasChanged;
- (id)searchKeyForSection:(long long)arg1;
- (_Bool)searchMatchesItem:(id)arg1 inSection:(long long)arg2;
@property(readonly, nonatomic) _Bool isSearching; // @dynamic isSearching;
- (void)dismissViewController:(id)arg1;
- (void)showViewController:(id)arg1 popoverSourceView:(id)arg2;
- (id)itemForIndexPath:(id)arg1;
- (id)headerTextForSection:(long long)arg1;
@property(readonly, nonatomic) NSString *sectionHeaderText; // @dynamic sectionHeaderText;
@property(readonly, nonatomic) double preferredCollectionHeight; // @dynamic preferredCollectionHeight;
@property(readonly, nonatomic) long long itemCount; // @dynamic itemCount;
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setupCollectionView:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

