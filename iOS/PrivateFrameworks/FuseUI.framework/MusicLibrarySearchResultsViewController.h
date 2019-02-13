//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/MusicLibraryBrowseHeterogenousCollectionViewController.h>

@class MusicEntityCollectionViewDescriptor, MusicEntityValueContext, MusicLibrarySearchResultsEntityProviderConfiguration, MusicSectionEntityValueContext, NSMutableDictionary, NSString;
@protocol MusicLibrarySearchResultsViewControllerDelegate;

@interface MusicLibrarySearchResultsViewController : MusicLibraryBrowseHeterogenousCollectionViewController
{
    MusicEntityCollectionViewDescriptor *_collectionViewDescriptor;
    _Bool _hasPreviousReceivedSearchTerm;
    MusicEntityValueContext *_itemEntityValueContext;
    MusicLibrarySearchResultsEntityProviderConfiguration *_searchResultsEntityProviderConfiguration;
    NSMutableDictionary *_layoutMetricsForSection;
    struct CGSize _sizeForLayoutMetrics;
    NSString *_searchTerm;
    MusicSectionEntityValueContext *_sectionEntityValueContext;
    _Bool _showsAllSectionResults;
    id <MusicLibrarySearchResultsViewControllerDelegate> _searchResultsDelegate;
}

@property(copy, nonatomic) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
@property(nonatomic) _Bool showsAllSectionResults; // @synthesize showsAllSectionResults=_showsAllSectionResults;
@property(nonatomic) __weak id <MusicLibrarySearchResultsViewControllerDelegate> searchResultsDelegate; // @synthesize searchResultsDelegate=_searchResultsDelegate;
- (void).cxx_destruct;
- (void)_updateLayoutForSize:(struct CGSize)arg1;
- (void)_updateForResultsCount;
- (void)_recordRecentForIndexPath:(id)arg1;
- (unsigned long long)_overrideMaximumNumberOfEntitesForSection:(unsigned long long)arg1;
- (id)_layoutMetricsForCollectionViewDescriptor:(id)arg1;
- (id)_collectionViewDescriptorForSection:(unsigned long long)arg1 traitCollection:(id)arg2;
@property(readonly, nonatomic) MusicLibrarySearchResultsEntityProviderConfiguration *libraryViewConfiguration;
@property(readonly, nonatomic, getter=isResultsViewVisible) _Bool resultsViewVisible;
@property(readonly, nonatomic) _Bool hasResults;
- (id)loadEntityViewDescriptor;
- (id)entityViewDescriptor;
- (void)handleEntityProviderDidInvalidate;
- (void)didSelectActionButtonInBrowseSectionHeaderView:(id)arg1 forSection:(long long)arg2;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint)arg2 inSourceView:(id)arg3;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (id)layoutMetricsForSection:(unsigned long long)arg1;
- (id)initWithLibraryViewConfiguration:(id)arg1;

@end

