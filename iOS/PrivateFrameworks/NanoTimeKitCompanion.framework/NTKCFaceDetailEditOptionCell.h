//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCDetailTableViewCell.h>

#import <NanoTimeKitCompanion/UICollectionViewDataSource-Protocol.h>
#import <NanoTimeKitCompanion/UICollectionViewDelegate-Protocol.h>

@class NSDictionary, NSString, NTKEditOptionCollection, NTKFaceView, UICollectionView, UICollectionViewFlowLayout, UILabel;
@protocol NTKCFaceDetailEditOptionCellDelegate;

@interface NTKCFaceDetailEditOptionCell : NTKCDetailTableViewCell <UICollectionViewDelegate, UICollectionViewDataSource>
{
    struct CGRect _swatchFrame;
    double _outlineOutset;
    double _outlinePadding;
    long long _selectedIndex;
    NTKEditOptionCollection *_collection;
    NTKFaceView *_faceView;
    NSDictionary *_selectedOptions;
    id <NTKCFaceDetailEditOptionCellDelegate> _delegate;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_layout;
    UILabel *_optionsDescription;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) UILabel *optionsDescription; // @synthesize optionsDescription=_optionsDescription;
@property(retain, nonatomic) UICollectionViewFlowLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <NTKCFaceDetailEditOptionCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *selectedOptions; // @synthesize selectedOptions=_selectedOptions;
@property(nonatomic) __weak NTKFaceView *faceView; // @synthesize faceView=_faceView;
@property(retain, nonatomic) NTKEditOptionCollection *collection; // @synthesize collection=_collection;
- (void).cxx_destruct;
- (void)ensureSelectedOptionVisible:(_Bool)arg1;
- (void)ensureIndexVisible:(long long)arg1 animated:(_Bool)arg2;
- (void)_ensureIndexPathVisible:(id)arg1 animated:(_Bool)arg2;
- (void)scrollToSelectedOption:(_Bool)arg1;
- (void)scrollToIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)_fontSizeDidChange;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)_imageForIndexPath:(id)arg1;
- (id)_dequeueCellForIndexPath:(id)arg1;
- (double)_spacing;
- (void)layoutSubviews;
- (_Bool)collectionChanged:(id)arg1 withSelectedOptions:(id)arg2;
- (void)reloadVisibleCells;
- (double)rowHeight;
- (void)_setupFromCollection;
- (id)initWithCollection:(id)arg1 forFaceView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

