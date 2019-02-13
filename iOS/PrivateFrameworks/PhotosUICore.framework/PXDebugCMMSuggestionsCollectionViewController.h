//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import <PhotosUICore/PXCMMWorkflowCoordinatorDelegate-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSString, PHCachingImageManager, PHImageRequestOptions, PXCMMSuggestionsDataSource, PXCMMSuggestionsDataSourceManager, PXCMMWorkflowCoordinator, PXDebugCMMSuggestionCollectionViewCell, UIView, _PXCMMSizingSuggestion;
@protocol PXDebugCMMSuggestionsDelegate;

@interface PXDebugCMMSuggestionsCollectionViewController : UICollectionViewController <PXChangeObserver, PXSectionedDataSourceManagerObserver, PXCMMWorkflowCoordinatorDelegate, UICollectionViewDelegateFlowLayout>
{
    struct CGSize _lastUpdateReferenceSize;
    PXCMMWorkflowCoordinator *_workflowCoordinator;
    UIView *_emptyPlaceholderView;
    PXDebugCMMSuggestionCollectionViewCell *_sizingCell;
    _PXCMMSizingSuggestion *_sizingSuggestion;
    PXCMMSuggestionsDataSourceManager *_dataSourceManager;
    id <PXDebugCMMSuggestionsDelegate> _suggestionsDelegate;
    PXCMMSuggestionsDataSource *_dataSource;
    PHCachingImageManager *_cachingImageManager;
    PHImageRequestOptions *_imageRequestOptions;
}

@property(readonly, nonatomic) PHImageRequestOptions *imageRequestOptions; // @synthesize imageRequestOptions=_imageRequestOptions;
@property(readonly, nonatomic) PHCachingImageManager *cachingImageManager; // @synthesize cachingImageManager=_cachingImageManager;
@property(retain, nonatomic) PXCMMSuggestionsDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <PXDebugCMMSuggestionsDelegate> suggestionsDelegate; // @synthesize suggestionsDelegate=_suggestionsDelegate;
@property(readonly, nonatomic) PXCMMSuggestionsDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
- (void).cxx_destruct;
- (void)workflowCoordinator:(id)arg1 workflowViewController:(id)arg2 didFinishSession:(id)arg3 withActivityState:(unsigned long long)arg4;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)_suggestionCellWidth;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)_configureGadgetView:(id)arg1 forSuggestion:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (_Bool)_dataSourceIsEmpty;
- (void)_updateEmptyPlaceholderView;
- (void)_updateCollectionViewLayout;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithDataSourceManager:(id)arg1 scrollDirection:(long long)arg2;
- (id)initWithDataSourceManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

