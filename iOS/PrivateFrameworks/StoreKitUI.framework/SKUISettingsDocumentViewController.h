//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/SKUIArtworkRequestDelegate-Protocol.h>
#import <StoreKitUI/SKUIDocumentViewController-Protocol.h>
#import <StoreKitUI/SKUISettingsDocumentViewDelegate-Protocol.h>
#import <StoreKitUI/SKUISettingsEditTransactionDelegate-Protocol.h>
#import <StoreKitUI/SKUISettingsGroupsDescriptionDelegate-Protocol.h>
#import <StoreKitUI/UITableViewDataSource-Protocol.h>
#import <StoreKitUI/UITableViewDelegate-Protocol.h>

@class NSString, SKUIResourceLoader, SKUISettingsContext, SKUISettingsEditTransaction, SKUISettingsGroupsDescription, SKUISettingsTemplateViewElement, SKUIViewElementLayoutContext, SKUIViewElementTextLayoutCache, UIBarButtonItem, UITableView;

@interface SKUISettingsDocumentViewController : SKUIViewController <SKUIArtworkRequestDelegate, SKUISettingsDocumentViewDelegate, SKUISettingsEditTransactionDelegate, SKUISettingsGroupsDescriptionDelegate, UITableViewDataSource, UITableViewDelegate, SKUIDocumentViewController>
{
    UIBarButtonItem *_barButtonItemCancel;
    UIBarButtonItem *_barButtonItemDone;
    UIBarButtonItem *_barButtonItemEdit;
    SKUISettingsEditTransaction *_editTransaction;
    SKUIViewElementLayoutContext *_layoutContext;
    SKUIResourceLoader *_resourceLoader;
    SKUISettingsContext *_settingsContext;
    SKUISettingsGroupsDescription *_settingsGroupsDescription;
    UITableView *_tableView;
    SKUISettingsTemplateViewElement *_templateElement;
    SKUIViewElementTextLayoutCache *_textLayoutCache;
}

+ (id)_settingsGroupsFromTemplateElement:(id)arg1 withDelegate:(id)arg2 settingsContext:(id)arg3;
+ (double)_heightThatFitsWidth:(double)arg1 withSettingsHeaderFooterDescription:(id)arg2 context:(id)arg3;
- (void).cxx_destruct;
- (id)_viewForSettingsHeaderFooterDescription:(id)arg1;
- (id)_tableView;
- (id)_textLayoutCache;
- (void)_showEditingBarButtonItemsEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_showEditBarButtonItemAnimated:(_Bool)arg1;
- (void)_showBarItemLeft:(id)arg1 right:(id)arg2 animated:(_Bool)arg3;
- (id)_resourceLoader;
- (void)_reloadData;
- (id)_layoutContext;
- (void)_invalidateLayout;
- (void)_deselectItemsAnimated:(_Bool)arg1;
- (id)_dequeueHeaderFooterViewWithReuseIdentifier:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)_barButtonItemEdit;
- (id)_barButtonItemDone;
- (id)_barButtonItemCancel;
- (void)_editButtonAction:(id)arg1;
- (void)_doneButtonAction:(id)arg1;
- (void)_cancelButtonAction:(id)arg1;
- (void)settingsGroupsDescriptionDidUpdateValidity:(id)arg1;
- (id)settingsGroupsDescription:(id)arg1 viewForSettingAtIndexPath:(id)arg2;
- (void)settingsGroupsDescription:(id)arg1 presentViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)settingsGroupsDescription:(id)arg1 dismissViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)settingsGroupsDescription:(id)arg1 didUpdateSettingsDescription:(id)arg2;
- (void)settingsGroupsDescription:(id)arg1 deletedSettingsGroupAtIndex:(unsigned long long)arg2;
- (void)settingsGroupsDescription:(id)arg1 deletedSettingAtIndexPath:(id)arg2;
- (id)owningViewControllerForSettingsGroupsDescription:(id)arg1;
- (void)settingsEditTransaction:(id)arg1 isValid:(_Bool)arg2;
- (void)settingsEditTransactionWillCommitTransaction:(id)arg1;
- (void)settingsEditTransactionWillBeginTransaction:(id)arg1;
- (void)settingsEditTransactionDidFailTransaction:(id)arg1;
- (void)settingsEditTransactionDidCompleteTransaction:(id)arg1;
- (void)settingsDocumentViewDidChangeTintColor:(id)arg1;
- (void)documentDidUpdate:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (id)initWithTemplateElement:(id)arg1 clientContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

