//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/SKUICollectionViewPullToRefreshDelegate-Protocol.h>
#import <StoreKitUI/SKUIDocumentViewController-Protocol.h>
#import <StoreKitUI/SKUIIndexBarControlControllerDataSource-Protocol.h>
#import <StoreKitUI/SKUIIndexBarControlControllerDelegate-Protocol.h>
#import <StoreKitUI/SKUIIndexBarEntryListControllerDelegate-Protocol.h>
#import <StoreKitUI/SKUIModalSourceViewProvider-Protocol.h>
#import <StoreKitUI/SKUIResourceLoaderDelegate-Protocol.h>
#import <StoreKitUI/SKUIStorePageSectionsDelegate-Protocol.h>
#import <StoreKitUI/SKUIViewControllerTesting-Protocol.h>

@class IKAppDocument, NSArray, NSMapTable, NSString, SKUIIndexBarControlController, SKUIResourceLoader, SKUIStackTemplateElement, SKUIStorePageSectionsViewController;

@interface SKUIStackDocumentViewController : SKUIViewController <SKUIIndexBarControlControllerDataSource, SKUIIndexBarControlControllerDelegate, SKUIIndexBarEntryListControllerDelegate, SKUIModalSourceViewProvider, SKUIViewControllerTesting, SKUICollectionViewPullToRefreshDelegate, SKUIStorePageSectionsDelegate, SKUIResourceLoaderDelegate, SKUIDocumentViewController>
{
    IKAppDocument *_document;
    NSArray *_entryListControllers;
    _Bool _hasResetState;
    SKUIIndexBarControlController *_indexBarControlController;
    long long _lastNeedsMoreCount;
    long long _layoutStyle;
    SKUIResourceLoader *_resourceLoader;
    SKUIStackTemplateElement *_templateElement;
    NSMapTable *_viewElementToEntryListController;
    SKUIStorePageSectionsViewController *_sectionsViewController;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
@property(readonly, nonatomic) SKUIStorePageSectionsViewController *sectionsViewController; // @synthesize sectionsViewController=_sectionsViewController;
- (void).cxx_destruct;
- (void)_updateIndexBarVisibility;
- (void)_updateEntryListControllersWithReload:(_Bool)arg1;
- (_Bool)_tryToScrollToSectionAtIndexPath:(id)arg1;
- (_Bool)_shouldShowIndexBar;
- (id)_resourceLoader;
- (void)_resetStateForDocumentNotification:(id)arg1;
- (void)_resetState;
- (id)_pullToRefreshElement;
- (long long)_pinningTransitionStyle;
- (id)_pageSplitsDescription;
- (id)_pageComponentsWithViewElements:(id)arg1;
- (long long)_maxGlobalIndex;
- (id)_indexPathFromGlobalIndex:(long long)arg1;
- (id)_indexBarViewElement;
- (id)_indexBarControlController;
- (long long)_globalIndexFromIndexPath:(id)arg1;
- (void)_configureIndexBarControl:(id)arg1;
- (id)_colorScheme;
- (void)resourceLoader:(id)arg1 didLoadAllForReason:(long long)arg2;
- (void)resourceLoaderDidBeginLoading:(id)arg1;
- (void)sectionsViewController:(id)arg1 willScrollToOffset:(struct CGPoint)arg2 visibleRange:(struct SKUIIndexPathRange)arg3;
- (_Bool)performTestWithName:(id)arg1 options:(id)arg2;
- (void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)refresh:(id)arg1 refreshControl:(id)arg2;
- (void)indexBarEntryListControllerDidInvalidate:(id)arg1;
- (void)indexBarControlControllerDidSelectBeyondTop:(id)arg1;
- (void)indexBarControlControllerDidSelectBeyondBottom:(id)arg1;
- (void)indexBarControlController:(id)arg1 didSelectEntryDescriptorAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInIndexBarControlController:(id)arg1;
- (long long)indexBarControlController:(id)arg1 numberOfEntryDescriptorsInSection:(long long)arg2;
- (id)indexBarControlController:(id)arg1 entryDescriptorAtIndexPath:(id)arg2;
- (id)impressionableViewElements;
- (void)documentMediaQueriesDidUpdate:(id)arg1;
- (void)documentDidUpdate:(id)arg1;
- (void)setPreferredContentSize:(struct CGSize)arg1;
- (void)loadView;
- (void)skui_viewWillAppear:(_Bool)arg1;
- (void)documentDidUpdate:(id)arg1 withTemplate:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithTemplateElement:(id)arg1 layoutStyle:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

