//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/UICollectionViewDataSource-Protocol.h>

@class NSArray, NSMutableArray, NSString, PXCMMPreviewItemMediaProvider, UICollectionView, UIColor;

@interface PXCMMPreviewItemsView : UIView <UICollectionViewDataSource>
{
    NSMutableArray *_previewImages;
    UICollectionView *_collectionView;
    NSArray *_previewItems;
    PXCMMPreviewItemMediaProvider *_mediaProvider;
    _Bool _needToLoadImages;
    unsigned long long _imageRequestGeneration;
    UIColor *_cellBorderColor;
    double _cellBorderWidth;
}

+ (id)new;
@property(nonatomic) double cellBorderWidth; // @synthesize cellBorderWidth=_cellBorderWidth;
@property(copy, nonatomic) UIColor *cellBorderColor; // @synthesize cellBorderColor=_cellBorderColor;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)_loadImages;
- (void)_loadImagesIfNeeded;
- (_Bool)_canLoadImages;
- (void)_setImage:(id)arg1 forItemAtIndex:(unsigned long long)arg2 imageRequestGeneration:(unsigned long long)arg3;
- (void)setPreviewItems:(id)arg1 mediaProvider:(id)arg2;
- (struct CGSize)_performLayoutInRect:(struct CGRect)arg1 updateSubviewFrames:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

