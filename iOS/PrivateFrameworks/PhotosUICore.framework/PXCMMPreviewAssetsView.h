//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/UICollectionViewDataSource-Protocol.h>
#import <PhotosUICore/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, PXUIMediaProvider, UICollectionView;

@interface PXCMMPreviewAssetsView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    UICollectionView *_previewAssetsCollectionView;
    NSMutableDictionary *_previewAssetsToImages;
    NSArray *_previewAssets;
    PXUIMediaProvider *_mediaProvider;
}

@property(retain, nonatomic) PXUIMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(copy, nonatomic) NSArray *previewAssets; // @synthesize previewAssets=_previewAssets;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)_loadImagesForPreviewAssetsIfNeeded;
- (struct CGSize)_performLayoutInRect:(struct CGRect)arg1 updateSubviewFrames:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

